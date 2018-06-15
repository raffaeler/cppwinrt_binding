#pragma once

#include "Person.g.h"

namespace winrt::DemoLib::implementation
{
    struct Person : PersonT<Person>
    {
        Person() = default;
        Person(hstring const& name);

        hstring Name();
        int32_t Age();
        void Age(int32_t value);
        hstring ToString();
    };
}

namespace winrt::DemoLib::factory_implementation
{
    struct Person : PersonT<Person, implementation::Person>
    {
    };
}
