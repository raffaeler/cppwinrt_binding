//
// Declaration of the Binding1 class.
//

#pragma once

#include "Binding1.g.h"

namespace winrt::BindingViewModels::implementation
{
	using namespace winrt;
	using namespace Windows::UI::Xaml;

    class Binding1 : public Binding1T<Binding1>
    {
		int32_t _test1;
		hstring _test2;
		BindingViewModels::MainViewModel _viewModel{ nullptr };

	public:
		Binding1()
		{
			InitializeComponent();

			Loaded({ this, &Binding1::OnLoaded });
		}

		void OnLoaded(Windows::Foundation::IInspectable const&, Windows::UI::Xaml::RoutedEventArgs const&)
		{
			_viewModel = DataContext().as<BindingViewModels::MainViewModel>();
			RaisePropertyChanged(L"ViewModel");
		}

		BindingViewModels::MainViewModel ViewModel() const
		{
			return _viewModel;
		}

		// we don't need the setter
		//void ViewModel(BindingViewModels::MainViewModel const& value)
		//{
		//	_viewModel = value;
		//}


		//int32_t Test1() { return _test1; }
		//void Test1(int32_t value) { _test1 = value; }

		//hstring Test2() { return _test2; }
		//void Test2(hstring value) { _test2 = value; }





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
	};
}

namespace winrt::BindingViewModels::factory_implementation
{
    struct Binding1 : Binding1T<Binding1, implementation::Binding1>
    {
    };
}
