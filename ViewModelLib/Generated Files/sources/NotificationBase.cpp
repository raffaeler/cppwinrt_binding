#include "pch.h"
#include "NotificationBase.h"

namespace winrt::ViewModelLib::implementation
{
    event_token NotificationBase::PropertyChanged(Windows::UI::Xaml::Data::PropertyChangedEventHandler const& value)
    {
        throw hresult_not_implemented();
    }

    void NotificationBase::PropertyChanged(event_token const& token)
    {
        throw hresult_not_implemented();
    }
}
