#pragma once

#include "MainViewModel.g.h"

namespace winrt::BindingViewModels::implementation
{
    struct MainViewModel : MainViewModelT<MainViewModel>
    {
        MainViewModel() = default;

        void Enter(Windows::UI::Xaml::Controls::Page const& page);
        void GoHome();
        void StartTimer();
        void ResetTimer();
        int32_t Count();
        Windows::Foundation::Collections::IVector<Windows::Foundation::IInspectable> Persons();
        BindingViewModels::Person CurrentPerson();
        void CurrentPerson(BindingViewModels::Person const& value);
        Windows::Foundation::IInspectable SelectedPerson();
        void SelectedPerson(Windows::Foundation::IInspectable const& value);
        void NewPerson();
        void RemovePerson();
        event_token PropertyChanged(Windows::UI::Xaml::Data::PropertyChangedEventHandler const& value);
        void PropertyChanged(event_token const& token);
    };
}

namespace winrt::BindingViewModels::factory_implementation
{
    struct MainViewModel : MainViewModelT<MainViewModel, implementation::MainViewModel>
    {
    };
}
