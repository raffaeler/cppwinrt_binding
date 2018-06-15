#pragma once

#include "MainPage.g.h"

namespace winrt::BindingViewModels::implementation
{
    struct MainPage : MainPageT<MainPage>
    {
        MainPage() = default;

    };
}

namespace winrt::BindingViewModels::factory_implementation
{
    struct MainPage : MainPageT<MainPage, implementation::MainPage>
    {
    };
}
