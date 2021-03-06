﻿// WARNING: Please don't edit this file. It was generated by C++/WinRT v1.0.180227.3

#pragma once

WINRT_EXPORT namespace winrt::Windows::UI::Xaml::Controls {

struct Page;

}

WINRT_EXPORT namespace winrt::Windows::UI::Xaml::Data {

struct PropertyChangedEventHandler;

}

WINRT_EXPORT namespace winrt::BindingViewModels {

struct IBinding1;
struct IBinding2;
struct IMainPage;
struct IMainViewModel;
struct IPerson;
struct IPersonFactory;
struct Binding1;
struct Binding2;
struct MainPage;
struct MainViewModel;
struct Person;

}

namespace winrt::impl {

template <> struct category<BindingViewModels::IBinding1>{ using type = interface_category; };
template <> struct category<BindingViewModels::IBinding2>{ using type = interface_category; };
template <> struct category<BindingViewModels::IMainPage>{ using type = interface_category; };
template <> struct category<BindingViewModels::IMainViewModel>{ using type = interface_category; };
template <> struct category<BindingViewModels::IPerson>{ using type = interface_category; };
template <> struct category<BindingViewModels::IPersonFactory>{ using type = interface_category; };
template <> struct category<BindingViewModels::Binding1>{ using type = class_category; };
template <> struct category<BindingViewModels::Binding2>{ using type = class_category; };
template <> struct category<BindingViewModels::MainPage>{ using type = class_category; };
template <> struct category<BindingViewModels::MainViewModel>{ using type = class_category; };
template <> struct category<BindingViewModels::Person>{ using type = class_category; };
template <> struct name<BindingViewModels::IBinding1>{ static constexpr auto & value{ L"BindingViewModels.IBinding1" }; };
template <> struct name<BindingViewModels::IBinding2>{ static constexpr auto & value{ L"BindingViewModels.IBinding2" }; };
template <> struct name<BindingViewModels::IMainPage>{ static constexpr auto & value{ L"BindingViewModels.IMainPage" }; };
template <> struct name<BindingViewModels::IMainViewModel>{ static constexpr auto & value{ L"BindingViewModels.IMainViewModel" }; };
template <> struct name<BindingViewModels::IPerson>{ static constexpr auto & value{ L"BindingViewModels.IPerson" }; };
template <> struct name<BindingViewModels::IPersonFactory>{ static constexpr auto & value{ L"BindingViewModels.IPersonFactory" }; };
template <> struct name<BindingViewModels::Binding1>{ static constexpr auto & value{ L"BindingViewModels.Binding1" }; };
template <> struct name<BindingViewModels::Binding2>{ static constexpr auto & value{ L"BindingViewModels.Binding2" }; };
template <> struct name<BindingViewModels::MainPage>{ static constexpr auto & value{ L"BindingViewModels.MainPage" }; };
template <> struct name<BindingViewModels::MainViewModel>{ static constexpr auto & value{ L"BindingViewModels.MainViewModel" }; };
template <> struct name<BindingViewModels::Person>{ static constexpr auto & value{ L"BindingViewModels.Person" }; };
template <> struct guid<BindingViewModels::IBinding1>{ static constexpr GUID value{ 0x6A29C280,0x052A,0x54B5,{ 0xBD,0x1F,0x4C,0x54,0xDB,0xFF,0x6E,0x9B } }; };
template <> struct guid<BindingViewModels::IBinding2>{ static constexpr GUID value{ 0xEE307ADC,0x1AD5,0x5F25,{ 0xB3,0x0A,0x19,0x7A,0xE1,0xD3,0xD3,0xB6 } }; };
template <> struct guid<BindingViewModels::IMainPage>{ static constexpr GUID value{ 0xC8B8CACA,0xF3D7,0x54EA,{ 0x84,0x5D,0x9D,0xE9,0x72,0x78,0x35,0x40 } }; };
template <> struct guid<BindingViewModels::IMainViewModel>{ static constexpr GUID value{ 0x8A4EA760,0x21C1,0x59DC,{ 0xBD,0xEF,0x0F,0x9A,0xF7,0x6E,0x6B,0x6B } }; };
template <> struct guid<BindingViewModels::IPerson>{ static constexpr GUID value{ 0xBC331EB1,0x1D3B,0x5B74,{ 0x9A,0x47,0x83,0xD9,0x82,0x7E,0x8D,0x31 } }; };
template <> struct guid<BindingViewModels::IPersonFactory>{ static constexpr GUID value{ 0x1E940EED,0x921A,0x5903,{ 0xAE,0xFD,0xBF,0x28,0x16,0x4E,0x63,0x44 } }; };
template <> struct default_interface<BindingViewModels::Binding1>{ using type = BindingViewModels::IBinding1; };
template <> struct default_interface<BindingViewModels::Binding2>{ using type = BindingViewModels::IBinding2; };
template <> struct default_interface<BindingViewModels::MainPage>{ using type = BindingViewModels::IMainPage; };
template <> struct default_interface<BindingViewModels::MainViewModel>{ using type = BindingViewModels::IMainViewModel; };
template <> struct default_interface<BindingViewModels::Person>{ using type = BindingViewModels::IPerson; };

template <typename D>
struct consume_BindingViewModels_IBinding1
{
    BindingViewModels::MainViewModel ViewModel() const;
};
template <> struct consume<BindingViewModels::IBinding1> { template <typename D> using type = consume_BindingViewModels_IBinding1<D>; };

template <typename D>
struct consume_BindingViewModels_IBinding2
{
    BindingViewModels::MainViewModel ViewModel() const;
};
template <> struct consume<BindingViewModels::IBinding2> { template <typename D> using type = consume_BindingViewModels_IBinding2<D>; };

template <typename D>
struct consume_BindingViewModels_IMainPage
{
};
template <> struct consume<BindingViewModels::IMainPage> { template <typename D> using type = consume_BindingViewModels_IMainPage<D>; };

template <typename D>
struct consume_BindingViewModels_IMainViewModel
{
    void Enter(Windows::UI::Xaml::Controls::Page const& page) const;
    void GoHome() const;
    void StartTimer() const;
    void ResetTimer() const;
    int32_t Count() const;
    Windows::Foundation::Collections::IVector<Windows::Foundation::IInspectable> Persons() const;
    BindingViewModels::Person CurrentPerson() const;
    void CurrentPerson(BindingViewModels::Person const& value) const;
    Windows::Foundation::IInspectable SelectedPerson() const;
    void SelectedPerson(Windows::Foundation::IInspectable const& value) const;
    void NewPerson() const;
    void RemovePerson() const;
};
template <> struct consume<BindingViewModels::IMainViewModel> { template <typename D> using type = consume_BindingViewModels_IMainViewModel<D>; };

template <typename D>
struct consume_BindingViewModels_IPerson
{
    hstring FirstName() const;
    void FirstName(param::hstring const& value) const;
    hstring LastName() const;
    void LastName(param::hstring const& value) const;
    int32_t Age() const;
    void Age(int32_t value) const;
    void SetAge(param::hstring const& age) const;
    hstring GetAge() const;
    hstring ToString() const;
};
template <> struct consume<BindingViewModels::IPerson> { template <typename D> using type = consume_BindingViewModels_IPerson<D>; };

template <typename D>
struct consume_BindingViewModels_IPersonFactory
{
    BindingViewModels::Person CreateInstance(param::hstring const& firstName, param::hstring const& lastName, int32_t age) const;
};
template <> struct consume<BindingViewModels::IPersonFactory> { template <typename D> using type = consume_BindingViewModels_IPersonFactory<D>; };

template <> struct abi<BindingViewModels::IBinding1>{ struct type : IInspectable
{
    virtual HRESULT __stdcall get_ViewModel(void** result) noexcept = 0;
};};

template <> struct abi<BindingViewModels::IBinding2>{ struct type : IInspectable
{
    virtual HRESULT __stdcall get_ViewModel(void** result) noexcept = 0;
};};

template <> struct abi<BindingViewModels::IMainPage>{ struct type : IInspectable
{
};};

template <> struct abi<BindingViewModels::IMainViewModel>{ struct type : IInspectable
{
    virtual HRESULT __stdcall Enter(void* page) noexcept = 0;
    virtual HRESULT __stdcall GoHome() noexcept = 0;
    virtual HRESULT __stdcall StartTimer() noexcept = 0;
    virtual HRESULT __stdcall ResetTimer() noexcept = 0;
    virtual HRESULT __stdcall get_Count(int32_t* result) noexcept = 0;
    virtual HRESULT __stdcall get_Persons(void** result) noexcept = 0;
    virtual HRESULT __stdcall get_CurrentPerson(void** result) noexcept = 0;
    virtual HRESULT __stdcall put_CurrentPerson(void* value) noexcept = 0;
    virtual HRESULT __stdcall get_SelectedPerson(void** result) noexcept = 0;
    virtual HRESULT __stdcall put_SelectedPerson(void* value) noexcept = 0;
    virtual HRESULT __stdcall NewPerson() noexcept = 0;
    virtual HRESULT __stdcall RemovePerson() noexcept = 0;
};};

template <> struct abi<BindingViewModels::IPerson>{ struct type : IInspectable
{
    virtual HRESULT __stdcall get_FirstName(HSTRING* result) noexcept = 0;
    virtual HRESULT __stdcall put_FirstName(HSTRING value) noexcept = 0;
    virtual HRESULT __stdcall get_LastName(HSTRING* result) noexcept = 0;
    virtual HRESULT __stdcall put_LastName(HSTRING value) noexcept = 0;
    virtual HRESULT __stdcall get_Age(int32_t* result) noexcept = 0;
    virtual HRESULT __stdcall put_Age(int32_t value) noexcept = 0;
    virtual HRESULT __stdcall SetAge(HSTRING age) noexcept = 0;
    virtual HRESULT __stdcall GetAge(HSTRING* result) noexcept = 0;
    virtual HRESULT __stdcall ToString(HSTRING* result) noexcept = 0;
};};

template <> struct abi<BindingViewModels::IPersonFactory>{ struct type : IInspectable
{
    virtual HRESULT __stdcall CreateInstance(HSTRING firstName, HSTRING lastName, int32_t age, void** value) noexcept = 0;
};};

}
