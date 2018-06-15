#include "pch.h"
#include "Person.h"

namespace winrt::BindingViewModels::implementation
{
    Person::Person(hstring const& firstName, hstring const& lastName, int32_t age)
    {
        throw hresult_not_implemented();
    }

    hstring Person::FirstName()
    {
        throw hresult_not_implemented();
    }

    void Person::FirstName(hstring const& value)
    {
        throw hresult_not_implemented();
    }

    hstring Person::LastName()
    {
        throw hresult_not_implemented();
    }

    void Person::LastName(hstring const& value)
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

    void Person::SetAge(hstring const& age)
    {
        throw hresult_not_implemented();
    }

    hstring Person::GetAge()
    {
        throw hresult_not_implemented();
    }

    hstring Person::ToString()
    {
        throw hresult_not_implemented();
    }

    event_token Person::PropertyChanged(Windows::UI::Xaml::Data::PropertyChangedEventHandler const& value)
    {
        throw hresult_not_implemented();
    }

    void Person::PropertyChanged(event_token const& token)
    {
        throw hresult_not_implemented();
    }
}
