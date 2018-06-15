//
// Declaration of the MainViewModel class.
//

#pragma once

#include "MainViewModel.g.h"
#include "winrt/Windows.UI.Xaml.h"
#include "winrt/Windows.UI.Xaml.Controls.h"
#include "Person.h"
#include "observablevector.h"

namespace winrt::BindingViewModels::implementation
{
	using namespace Windows::UI;
	using namespace Windows::UI::Xaml;
	using namespace Windows::UI::Xaml::Controls;

	struct MainViewModel : MainViewModelT<MainViewModel>
	{
		MainViewModel()
		{
			Init();
			_persons = winrt::make<single_threaded_observable_vector<Windows::Foundation::IInspectable>>();

			auto person = winrt::make<BindingViewModels::implementation::Person>(L"John", L"Doe", 35);
			_persons.Append(person);

			_currentPerson = person;
		};

		void Enter(Page const& page)
		{
			_page = page;
		}

		void GoHome()
		{
			_page.Frame().Navigate(xaml_typename<BindingViewModels::MainPage>());
		}

		void StartTimer()
		{
			_timer.Start();
		}

		void ResetTimer()
		{
			_timer.Stop();
			_count = 0;
			RaisePropertyChanged(L"Count");
		}

		int32_t Count()
		{
			return _count;
		}

		BindingViewModels::Person CurrentPerson()
		{
			return _currentPerson;
		}

		void CurrentPerson(BindingViewModels::Person person)
		{
			if (_currentPerson != person)
			{
				_currentPerson = person;
				RaisePropertyChanged(L"SelectedPerson");
				RaisePropertyChanged(L"CurrentPerson");
			}
		}

		Windows::Foundation::IInspectable SelectedPerson()
		{
			return _currentPerson;
		}

		void SelectedPerson(Windows::Foundation::IInspectable const& obj)
		{
			BindingViewModels::Person person{ nullptr };
			if (obj != nullptr)
			{
				person = obj.as<BindingViewModels::Person>();
			}

			if (_currentPerson != person)
			{
				_currentPerson = person;
				RaisePropertyChanged(L"SelectedPerson");
				RaisePropertyChanged(L"CurrentPerson");
			}
		}

		Windows::Foundation::Collections::IVector<Windows::Foundation::IInspectable> Persons()
		{
			return _persons;
		}

		void NewPerson()
		{
			auto newPerson = winrt::make<BindingViewModels::implementation::Person>();
			_persons.Append(newPerson);
			CurrentPerson(newPerson);
		}

		void RemovePerson()
		{
			auto person = CurrentPerson();

			uint32_t index;
			if (_persons.IndexOf(person, index))
			{
				_persons.RemoveAt(index);
			}
		}


		// === Start INotifyPropertyChanged
	public:
		event_token PropertyChanged(Windows::UI::Xaml::Data::PropertyChangedEventHandler const& handler)
		{
			return _propertyChanged.add(handler);
		}

		void PropertyChanged(event_token const& token)
		{
			_propertyChanged.remove(token);
		}

		template <class T>
		void UpdateValue(hstring const& propertyName, T & var, T value)
		{
			if (var != value) { var = value; RaisePropertyChanged(propertyName); }
		}

		void RaisePropertyChanged(hstring const& propertyName)
		{
			_propertyChanged(*this, Windows::UI::Xaml::Data::PropertyChangedEventArgs(propertyName));
		}

	private:
		event<Windows::UI::Xaml::Data::PropertyChangedEventHandler> _propertyChanged;
	public:
		// === End INotifyPropertyChanged

	private:
		void Init()
		{
			_count = 0;
			winrt::Windows::Foundation::TimeSpan timeSpan{ std::chrono::milliseconds{ 1000 } };

			_timer.Interval(timeSpan);
			//_timer.Tick(auto_revoke, [weak{ get_weak() }](auto&&, auto&&)
			//{
			//	if (auto strong = weak.get())
			//	{
			//		strong->OnTick();
			//		return;
			//	}
			//});
			_timer.Tick({ this, &MainViewModel::Dispatcher_Tick });
		}

		void Dispatcher_Tick(IInspectable const &, Windows::Foundation::IUnknown const&)
		{
			UpdateValue<int32_t>(L"Count", _count, _count + 1);
		}

		Page _page;
		DispatcherTimer _timer;
		int32_t _count;

		BindingViewModels::Person _currentPerson{ nullptr };
		Windows::Foundation::Collections::IVector<Windows::Foundation::IInspectable> _persons;
	};
}

namespace winrt::BindingViewModels::factory_implementation
{
	struct MainViewModel : MainViewModelT<MainViewModel, implementation::MainViewModel>
	{
	};
}
