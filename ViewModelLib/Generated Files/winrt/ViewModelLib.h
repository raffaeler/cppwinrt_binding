﻿// WARNING: Please don't edit this file. It was generated by C++/WinRT v1.0.180227.3

#pragma once
#include "winrt/base.h"

WINRT_WARNING_PUSH

static_assert(winrt::check_version(CPPWINRT_VERSION, "1.0.180227.3"), "Mismatched component and base headers.");
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/Windows.UI.Xaml.Data.2.h"
#include "winrt/impl/Windows.UI.Xaml.2.h"
#include "winrt/impl/ViewModelLib.2.h"

namespace winrt::impl {

template <typename D>
struct produce<D, ViewModelLib::INotificationBase> : produce_base<D, ViewModelLib::INotificationBase>
{};

}

WINRT_EXPORT namespace winrt::ViewModelLib {

inline NotificationBase::NotificationBase() :
    NotificationBase(get_activation_factory<NotificationBase>().ActivateInstance<NotificationBase>())
{}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::ViewModelLib::INotificationBase> : winrt::impl::hash_base<winrt::ViewModelLib::INotificationBase> {};
template<> struct hash<winrt::ViewModelLib::NotificationBase> : winrt::impl::hash_base<winrt::ViewModelLib::NotificationBase> {};

}

WINRT_WARNING_POP
