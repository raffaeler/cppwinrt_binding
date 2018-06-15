//
// Declaration of the Person class.
//

#pragma once

#include "Person.g.h"

namespace winrt::DemoLib::implementation
{
    struct Person : PersonT<Person>
    {
        Person() = default;
		Person(hstring const& name);

        int32_t Age();
        void Age(int32_t value);

		hstring Name();

		hstring ToString();

	private:
		hstring _name;
		uint32_t _age;
    };
}

namespace winrt::DemoLib::factory_implementation
{
    struct Person : PersonT<Person, implementation::Person>
    {
    };
}
