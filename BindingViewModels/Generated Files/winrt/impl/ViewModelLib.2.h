﻿// WARNING: Please don't edit this file. It was generated by C++/WinRT v1.0.180227.3

#pragma once
#include "winrt/impl/Windows.UI.Xaml.Data.1.h"
#include "winrt/impl/Windows.UI.Xaml.1.h"
#include "winrt/impl/ViewModelLib.1.h"

WINRT_EXPORT namespace winrt::ViewModelLib {

}

namespace winrt::impl {

}

WINRT_EXPORT namespace winrt::ViewModelLib {

struct WINRT_EBO NotificationBase :
    ViewModelLib::INotificationBase,
    impl::base<NotificationBase, Windows::UI::Xaml::DependencyObject>,
    impl::require<NotificationBase, Windows::UI::Xaml::Data::INotifyPropertyChanged, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
{
    NotificationBase(std::nullptr_t) noexcept {}
    NotificationBase();
};

}