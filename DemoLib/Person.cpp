#include "pch.h"
#include "Person.h"

using namespace winrt;

namespace winrt::DemoLib::implementation
{
	Person::Person(hstring const& name)
	{
		_name = name;
	}
	
	int32_t Person::Age()
    {
        return _age;
    }

    void Person::Age(int32_t value)
    {
		_age = value;
    }

	hstring Person::Name()
	{
		return _name;
	}

	hstring Person::ToString()
	{
		auto str = to_hstring(_age) + L", " + to_hstring(_name);
		return str;
	}
}
