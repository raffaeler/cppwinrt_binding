#pragma once
#include "pch.h"

//#include "winrt/BindingViewModels.h"
#include "winrt/Windows.UI.Xaml.h"
#include "winrt/Windows.UI.Xaml.Controls.h"

namespace Utilities
{
	using namespace winrt;

	class BindableBase// : public Windows::UI::Xaml::Data::INotifyPropertyChanged
	{
	public:
		BindableBase() = default;

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

		event<Windows::UI::Xaml::Data::PropertyChangedEventHandler> _propertyChanged;
	private:

	};
}