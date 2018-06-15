//
// Declaration of the MainPage class.
//

#pragma once

#include "MainPage.g.h"

namespace winrt::BindingViewModels::implementation
{
    struct MainPage : MainPageT<MainPage>
    {
		MainPage()
		{
			InitializeComponent();
		}

		void ClickHandler(Windows::Foundation::IInspectable const&, Windows::UI::Xaml::RoutedEventArgs const&)
		{
			Button().Content(box_value(L"Clicked"));
		}

		void Binding1_Click(Windows::Foundation::IInspectable const&, Windows::UI::Xaml::RoutedEventArgs const&)
		{
			Frame().Navigate(xaml_typename<BindingViewModels::Binding1>());
		}

		void Binding2_Click(Windows::Foundation::IInspectable const&, Windows::UI::Xaml::RoutedEventArgs const&)
		{
			Frame().Navigate(xaml_typename<BindingViewModels::Binding2>());
		}

	};
}

namespace winrt::BindingViewModels::factory_implementation
{
    struct MainPage : MainPageT<MainPage, implementation::MainPage>
    {
    };
}
