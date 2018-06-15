//
// Declaration of the Person class.
//

#pragma once

#include "Person.g.h"

namespace winrt::BindingViewModels::implementation
{
	struct Person : PersonT<Person>
	{
		Person() = default;

		Person(hstring const& firstName, hstring const& lastName, uint32_t age)
		{
			_firstName = firstName;
			_lastName = lastName;
			_age = age;
		}

		int32_t Age()
		{
			return _age;
		}

		void Age(int32_t value)
		{
			_age = value;
			RaisePropertyChanged(L"Age");
		}

		// helper for binding
		void SetAge(hstring str)
		{
			Age((int32_t)_wtof(str.c_str()));
		}

		// helper for binding
		hstring GetAge()
		{
			if (_age == 0) return hstring(L"");
			return to_hstring(_age);
		}


		hstring FirstName()
		{
			return _firstName;
		}

		void FirstName(hstring const& firstName)
		{
			_firstName = firstName;
			RaisePropertyChanged(L"FirstName");
		}

		hstring LastName()
		{
			return _lastName;
		}

		void LastName(hstring const& lastName)
		{
			_lastName = lastName;
			RaisePropertyChanged(L"LastName");
		}

		hstring ToString()
		{
			auto str = to_hstring(_firstName) + L", " + to_hstring(_lastName) + L", " + to_hstring(_age);
			return str;
		}

	private:
		hstring _firstName;
		hstring _lastName;
		uint32_t _age;


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
	struct Person : PersonT<Person, implementation::Person>
	{
	};
}
