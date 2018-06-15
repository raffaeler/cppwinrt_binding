//
// Declaration of the Binding2 class.
//

#pragma once

#include "Binding2.g.h"

namespace winrt::BindingViewModels::implementation
{
    struct Binding2 : Binding2T<Binding2>
    {
		Binding2()
		{
			InitializeComponent();

			Loaded({ this, &Binding2::OnLoaded });
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
		BindingViewModels::MainViewModel _viewModel{ nullptr };

	};
}

namespace winrt::BindingViewModels::factory_implementation
{
    struct Binding2 : Binding2T<Binding2, implementation::Binding2>
    {
    };
}
