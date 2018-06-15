#pragma once

#include "Binding2.g.h"

namespace winrt::BindingViewModels::implementation
{
    struct Binding2 : Binding2T<Binding2>
    {
        Binding2() = default;

        BindingViewModels::MainViewModel ViewModel();
        event_token PropertyChanged(Windows::UI::Xaml::Data::PropertyChangedEventHandler const& value);
        void PropertyChanged(event_token const& token);
    };
}

namespace winrt::BindingViewModels::factory_implementation
{
    struct Binding2 : Binding2T<Binding2, implementation::Binding2>
    {
    };
}
