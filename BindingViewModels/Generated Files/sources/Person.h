#pragma once

#include "Person.g.h"

namespace winrt::BindingViewModels::implementation
{
    struct Person : PersonT<Person>
    {
        Person() = default;
        Person(hstring const& firstName, hstring const& lastName, int32_t age);

        hstring FirstName();
        void FirstName(hstring const& value);
        hstring LastName();
        void LastName(hstring const& value);
        int32_t Age();
        void Age(int32_t value);
        void SetAge(hstring const& age);
        hstring GetAge();
        hstring ToString();
        event_token PropertyChanged(Windows::UI::Xaml::Data::PropertyChangedEventHandler const& value);
        void PropertyChanged(event_token const& token);
    };
}

namespace winrt::BindingViewModels::factory_implementation
{
    struct Person : PersonT<Person, implementation::Person>
    {
    };
}
