#include "pch.h"
#include "Binding2.h"

namespace winrt::BindingViewModels::implementation
{
    BindingViewModels::MainViewModel Binding2::ViewModel()
    {
        throw hresult_not_implemented();
    }

    event_token Binding2::PropertyChanged(Windows::UI::Xaml::Data::PropertyChangedEventHandler const& value)
    {
        throw hresult_not_implemented();
    }

    void Binding2::PropertyChanged(event_token const& token)
    {
        throw hresult_not_implemented();
    }
}
