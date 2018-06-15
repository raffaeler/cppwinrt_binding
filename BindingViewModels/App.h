//
// Declaration of the Application class.
//

#pragma once

#include "App.xaml.g.h"
#include "MainViewModel.h"

namespace winrt::BindingViewModels::implementation
{
	struct App : public AppT<App>
	{
		App();

		void OnLaunched(Windows::ApplicationModel::Activation::LaunchActivatedEventArgs const&);
		void OnSuspending(IInspectable const&, Windows::ApplicationModel::SuspendingEventArgs const&);
		void OnNavigationFailed(IInspectable const&, Windows::UI::Xaml::Navigation::NavigationFailedEventArgs const&);
		void OnNavigating(IInspectable const&, Windows::UI::Xaml::Navigation::NavigatingCancelEventArgs const&);
		void OnNavigated(IInspectable const&, Windows::UI::Xaml::Navigation::NavigationEventArgs const&);

	private:
		BindingViewModels::MainViewModel _vm{ nullptr };
	};
}

//
//namespace winrt::BindingViewModels::factory_implementation
//{
//    struct Application : ApplicationT<Application, implementation::Application>
//    {
//    };
//}
