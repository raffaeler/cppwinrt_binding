#pragma once

#include "Binding1.g.h"

namespace winrt::BindingViewModels::implementation
{
    struct Binding1 : Binding1T<Binding1>
    {
        Binding1() = default;

        BindingViewModels::MainViewModel ViewModel();
        event_token PropertyChanged(Windows::UI::Xaml::Data::PropertyChangedEventHandler const& value);
        void PropertyChanged(event_token const& token);
    };
}

namespace winrt::BindingViewModels::factory_implementation
{
    struct Binding1 : Binding1T<Binding1, implementation::Binding1>
    {
    };
}
