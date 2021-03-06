﻿// WARNING: Please don't edit this file. It was generated by C++/WinRT v1.0.180227.3

#pragma once
#include "winrt/base.h"

WINRT_WARNING_PUSH

static_assert(winrt::check_version(CPPWINRT_VERSION, "1.0.180227.3"), "Mismatched component and base headers.");
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/Windows.UI.Xaml.Controls.2.h"
#include "winrt/impl/Windows.UI.Xaml.Data.2.h"
#include "winrt/impl/Windows.UI.Xaml.2.h"
#include "winrt/impl/BindingViewModels.2.h"

namespace winrt::impl {

template <typename D> BindingViewModels::MainViewModel consume_BindingViewModels_IBinding1<D>::ViewModel() const
{
    BindingViewModels::MainViewModel result{ nullptr };
    check_hresult(WINRT_SHIM(BindingViewModels::IBinding1)->get_ViewModel(put_abi(result)));
    return result;
}

template <typename D> BindingViewModels::MainViewModel consume_BindingViewModels_IBinding2<D>::ViewModel() const
{
    BindingViewModels::MainViewModel result{ nullptr };
    check_hresult(WINRT_SHIM(BindingViewModels::IBinding2)->get_ViewModel(put_abi(result)));
    return result;
}

template <typename D> void consume_BindingViewModels_IMainViewModel<D>::Enter(Windows::UI::Xaml::Controls::Page const& page) const
{
    check_hresult(WINRT_SHIM(BindingViewModels::IMainViewModel)->Enter(get_abi(page)));
}

template <typename D> void consume_BindingViewModels_IMainViewModel<D>::GoHome() const
{
    check_hresult(WINRT_SHIM(BindingViewModels::IMainViewModel)->GoHome());
}

template <typename D> void consume_BindingViewModels_IMainViewModel<D>::StartTimer() const
{
    check_hresult(WINRT_SHIM(BindingViewModels::IMainViewModel)->StartTimer());
}

template <typename D> void consume_BindingViewModels_IMainViewModel<D>::ResetTimer() const
{
    check_hresult(WINRT_SHIM(BindingViewModels::IMainViewModel)->ResetTimer());
}

template <typename D> int32_t consume_BindingViewModels_IMainViewModel<D>::Count() const
{
    int32_t result{};
    check_hresult(WINRT_SHIM(BindingViewModels::IMainViewModel)->get_Count(&result));
    return result;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::Foundation::IInspectable> consume_BindingViewModels_IMainViewModel<D>::Persons() const
{
    Windows::Foundation::Collections::IVector<Windows::Foundation::IInspectable> result{ nullptr };
    check_hresult(WINRT_SHIM(BindingViewModels::IMainViewModel)->get_Persons(put_abi(result)));
    return result;
}

template <typename D> BindingViewModels::Person consume_BindingViewModels_IMainViewModel<D>::CurrentPerson() const
{
    BindingViewModels::Person result{ nullptr };
    check_hresult(WINRT_SHIM(BindingViewModels::IMainViewModel)->get_CurrentPerson(put_abi(result)));
    return result;
}

template <typename D> void consume_BindingViewModels_IMainViewModel<D>::CurrentPerson(BindingViewModels::Person const& value) const
{
    check_hresult(WINRT_SHIM(BindingViewModels::IMainViewModel)->put_CurrentPerson(get_abi(value)));
}

template <typename D> Windows::Foundation::IInspectable consume_BindingViewModels_IMainViewModel<D>::SelectedPerson() const
{
    Windows::Foundation::IInspectable result{ nullptr };
    check_hresult(WINRT_SHIM(BindingViewModels::IMainViewModel)->get_SelectedPerson(put_abi(result)));
    return result;
}

template <typename D> void consume_BindingViewModels_IMainViewModel<D>::SelectedPerson(Windows::Foundation::IInspectable const& value) const
{
    check_hresult(WINRT_SHIM(BindingViewModels::IMainViewModel)->put_SelectedPerson(get_abi(value)));
}

template <typename D> void consume_BindingViewModels_IMainViewModel<D>::NewPerson() const
{
    check_hresult(WINRT_SHIM(BindingViewModels::IMainViewModel)->NewPerson());
}

template <typename D> void consume_BindingViewModels_IMainViewModel<D>::RemovePerson() const
{
    check_hresult(WINRT_SHIM(BindingViewModels::IMainViewModel)->RemovePerson());
}

template <typename D> hstring consume_BindingViewModels_IPerson<D>::FirstName() const
{
    hstring result{};
    check_hresult(WINRT_SHIM(BindingViewModels::IPerson)->get_FirstName(put_abi(result)));
    return result;
}

template <typename D> void consume_BindingViewModels_IPerson<D>::FirstName(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(BindingViewModels::IPerson)->put_FirstName(get_abi(value)));
}

template <typename D> hstring consume_BindingViewModels_IPerson<D>::LastName() const
{
    hstring result{};
    check_hresult(WINRT_SHIM(BindingViewModels::IPerson)->get_LastName(put_abi(result)));
    return result;
}

template <typename D> void consume_BindingViewModels_IPerson<D>::LastName(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(BindingViewModels::IPerson)->put_LastName(get_abi(value)));
}

template <typename D> int32_t consume_BindingViewModels_IPerson<D>::Age() const
{
    int32_t result{};
    check_hresult(WINRT_SHIM(BindingViewModels::IPerson)->get_Age(&result));
    return result;
}

template <typename D> void consume_BindingViewModels_IPerson<D>::Age(int32_t value) const
{
    check_hresult(WINRT_SHIM(BindingViewModels::IPerson)->put_Age(value));
}

template <typename D> void consume_BindingViewModels_IPerson<D>::SetAge(param::hstring const& age) const
{
    check_hresult(WINRT_SHIM(BindingViewModels::IPerson)->SetAge(get_abi(age)));
}

template <typename D> hstring consume_BindingViewModels_IPerson<D>::GetAge() const
{
    hstring result{};
    check_hresult(WINRT_SHIM(BindingViewModels::IPerson)->GetAge(put_abi(result)));
    return result;
}

template <typename D> hstring consume_BindingViewModels_IPerson<D>::ToString() const
{
    hstring result{};
    check_hresult(WINRT_SHIM(BindingViewModels::IPerson)->ToString(put_abi(result)));
    return result;
}

template <typename D> BindingViewModels::Person consume_BindingViewModels_IPersonFactory<D>::CreateInstance(param::hstring const& firstName, param::hstring const& lastName, int32_t age) const
{
    BindingViewModels::Person value{ nullptr };
    check_hresult(WINRT_SHIM(BindingViewModels::IPersonFactory)->CreateInstance(get_abi(firstName), get_abi(lastName), age, put_abi(value)));
    return value;
}

template <typename D>
struct produce<D, BindingViewModels::IBinding1> : produce_base<D, BindingViewModels::IBinding1>
{
    HRESULT __stdcall get_ViewModel(void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<BindingViewModels::MainViewModel>(this->shim().ViewModel());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, BindingViewModels::IBinding2> : produce_base<D, BindingViewModels::IBinding2>
{
    HRESULT __stdcall get_ViewModel(void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<BindingViewModels::MainViewModel>(this->shim().ViewModel());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, BindingViewModels::IMainPage> : produce_base<D, BindingViewModels::IMainPage>
{};

template <typename D>
struct produce<D, BindingViewModels::IMainViewModel> : produce_base<D, BindingViewModels::IMainViewModel>
{
    HRESULT __stdcall Enter(void* page) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Enter(*reinterpret_cast<Windows::UI::Xaml::Controls::Page const*>(&page));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GoHome() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().GoHome();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall StartTimer() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StartTimer();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall ResetTimer() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ResetTimer();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Count(int32_t* result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<int32_t>(this->shim().Count());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Persons(void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::Collections::IVector<Windows::Foundation::IInspectable>>(this->shim().Persons());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_CurrentPerson(void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<BindingViewModels::Person>(this->shim().CurrentPerson());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_CurrentPerson(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CurrentPerson(*reinterpret_cast<BindingViewModels::Person const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_SelectedPerson(void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IInspectable>(this->shim().SelectedPerson());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_SelectedPerson(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SelectedPerson(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall NewPerson() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().NewPerson();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall RemovePerson() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RemovePerson();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, BindingViewModels::IPerson> : produce_base<D, BindingViewModels::IPerson>
{
    HRESULT __stdcall get_FirstName(HSTRING* result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<hstring>(this->shim().FirstName());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_FirstName(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FirstName(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_LastName(HSTRING* result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<hstring>(this->shim().LastName());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_LastName(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LastName(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Age(int32_t* result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<int32_t>(this->shim().Age());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Age(int32_t value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Age(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall SetAge(HSTRING age) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetAge(*reinterpret_cast<hstring const*>(&age));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetAge(HSTRING* result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<hstring>(this->shim().GetAge());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall ToString(HSTRING* result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<hstring>(this->shim().ToString());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, BindingViewModels::IPersonFactory> : produce_base<D, BindingViewModels::IPersonFactory>
{
    HRESULT __stdcall CreateInstance(HSTRING firstName, HSTRING lastName, int32_t age, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<BindingViewModels::Person>(this->shim().CreateInstance(*reinterpret_cast<hstring const*>(&firstName), *reinterpret_cast<hstring const*>(&lastName), age));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::BindingViewModels {

inline Binding1::Binding1() :
    Binding1(get_activation_factory<Binding1>().ActivateInstance<Binding1>())
{}

inline Binding2::Binding2() :
    Binding2(get_activation_factory<Binding2>().ActivateInstance<Binding2>())
{}

inline MainPage::MainPage() :
    MainPage(get_activation_factory<MainPage>().ActivateInstance<MainPage>())
{}

inline MainViewModel::MainViewModel() :
    MainViewModel(get_activation_factory<MainViewModel>().ActivateInstance<MainViewModel>())
{}

inline Person::Person() :
    Person(get_activation_factory<Person>().ActivateInstance<Person>())
{}

inline Person::Person(param::hstring const& firstName, param::hstring const& lastName, int32_t age) :
    Person(get_activation_factory<Person, BindingViewModels::IPersonFactory>().CreateInstance(firstName, lastName, age))
{}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::BindingViewModels::IBinding1> : winrt::impl::hash_base<winrt::BindingViewModels::IBinding1> {};
template<> struct hash<winrt::BindingViewModels::IBinding2> : winrt::impl::hash_base<winrt::BindingViewModels::IBinding2> {};
template<> struct hash<winrt::BindingViewModels::IMainPage> : winrt::impl::hash_base<winrt::BindingViewModels::IMainPage> {};
template<> struct hash<winrt::BindingViewModels::IMainViewModel> : winrt::impl::hash_base<winrt::BindingViewModels::IMainViewModel> {};
template<> struct hash<winrt::BindingViewModels::IPerson> : winrt::impl::hash_base<winrt::BindingViewModels::IPerson> {};
template<> struct hash<winrt::BindingViewModels::IPersonFactory> : winrt::impl::hash_base<winrt::BindingViewModels::IPersonFactory> {};
template<> struct hash<winrt::BindingViewModels::Binding1> : winrt::impl::hash_base<winrt::BindingViewModels::Binding1> {};
template<> struct hash<winrt::BindingViewModels::Binding2> : winrt::impl::hash_base<winrt::BindingViewModels::Binding2> {};
template<> struct hash<winrt::BindingViewModels::MainPage> : winrt::impl::hash_base<winrt::BindingViewModels::MainPage> {};
template<> struct hash<winrt::BindingViewModels::MainViewModel> : winrt::impl::hash_base<winrt::BindingViewModels::MainViewModel> {};
template<> struct hash<winrt::BindingViewModels::Person> : winrt::impl::hash_base<winrt::BindingViewModels::Person> {};

}

WINRT_WARNING_POP
