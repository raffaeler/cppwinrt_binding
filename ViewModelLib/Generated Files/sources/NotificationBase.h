#pragma once

#include "NotificationBase.g.h"

namespace winrt::ViewModelLib::implementation
{
    struct NotificationBase : NotificationBaseT<NotificationBase>
    {
        NotificationBase() = default;

        event_token PropertyChanged(Windows::UI::Xaml::Data::PropertyChangedEventHandler const& value);
        void PropertyChanged(event_token const& token);
    };
}

namespace winrt::ViewModelLib::factory_implementation
{
    struct NotificationBase : NotificationBaseT<NotificationBase, implementation::NotificationBase>
    {
    };
}
