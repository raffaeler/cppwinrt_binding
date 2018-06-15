﻿//------------------------------------------------------------------------------
//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
//------------------------------------------------------------------------------
#pragma once

#include "XamlBindingInfo.xaml.g.h"

namespace winrt::BindingViewModels::implementation
{
    using IInspectable = ::winrt::Windows::Foundation::IInspectable;

    template <typename D, typename ... I>
    class Binding2T : public ::winrt::BindingViewModels::implementation::Binding2_base<D,
        ::winrt::Windows::UI::Xaml::Markup::IComponentConnector,
        ::winrt::Windows::UI::Xaml::Markup::IComponentConnector2,
        I...>
    {
    public:
        void InitializeComponent();
        void Connect(int32_t connectionId, IInspectable const& target);
        ::winrt::Windows::UI::Xaml::Markup::IComponentConnector GetBindingConnector(int32_t connectionId, IInspectable const& target);
        void UnloadObject(::winrt::Windows::UI::Xaml::DependencyObject const& dependencyObject);
        void DisconnectUnloadedObject(int32_t connectionId);
        
         ::winrt::com_ptr<::XamlBindingInfo::XamlBindings> Bindings;

    private:
        bool _contentLoaded{false};
        class Binding2_obj2_Bindings;
        class Binding2_obj1_Bindings;

    };
}

