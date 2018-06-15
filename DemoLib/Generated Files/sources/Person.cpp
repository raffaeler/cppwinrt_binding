#include "pch.h"
#include "Person.h"

namespace winrt::DemoLib::implementation
{
    Person::Person(hstring const& name)
    {
        throw hresult_not_implemented();
    }

    hstring Person::Name()
    {
        throw hresult_not_implemented();
    }

    int32_t Person::Age()
    {
        throw hresult_not_implemented();
    }

    void Person::Age(int32_t value)
    {
        throw hresult_not_implemented();
    }

    hstring Person::ToString()
    {
        throw hresult_not_implemented();
    }
}
