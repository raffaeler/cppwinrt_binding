//
// Declaration of the NotificationBase class.
//

#pragma once

#include "NotificationBase.g.h"

#include "winrt/Windows.UI.h"
#include "winrt/Windows.UI.Xaml.h"
#include "winrt/Windows.UI.Xaml.Data.h"
#include "winrt/ViewModelLib.h"


namespace winrt::ViewModelLib::implementation
{
    struct NotificationBase : NotificationBaseT<NotificationBase>
    {
        NotificationBase() = default;

        event_token PropertyChanged(Windows::UI::Xaml::Data::PropertyChangedEventHandler const& handler)
        {
            return m_propertyChanged.add(handler);
        }

        void PropertyChanged(event_token const& token)
        {
            m_propertyChanged.remove(token);
        }

        template <class T>
        void UpdateValue(hstring const& propertyName, T & var, T value)
        {
			if (var != value) { var = value; RaisePropertyChanged(propertyName); }
		}

        void RaisePropertyChanged(hstring const& propertyName)
        {
            m_propertyChanged(*this, Windows::UI::Xaml::Data::PropertyChangedEventArgs(propertyName));
        }

    private:
        event<Windows::UI::Xaml::Data::PropertyChangedEventHandler> m_propertyChanged;
    };
}

namespace winrt::ViewModelLib::factory_implementation
{
    struct NotificationBase : NotificationBaseT<NotificationBase, implementation::NotificationBase>
    {
    };
}
