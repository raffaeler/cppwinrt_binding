﻿//------------------------------------------------------------------------------
//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
//------------------------------------------------------------------------------

#include "pch.h"
#include "App.h"

#if defined _DEBUG && !defined DISABLE_XAML_GENERATED_BREAK_ON_UNHANDLED_EXCEPTION
extern "C" __declspec(dllimport) int __stdcall IsDebuggerPresent();
#endif

#define _VSDESIGNER_DONT_LOAD_AS_DLL

#if (defined(_M_IX86) || defined(_M_AMD64)) && !defined(_VSDESIGNER_DONT_LOAD_AS_DLL)
#if defined(_M_IX86)
#pragma comment(linker, "/EXPORT:DllGetActivationFactory=_DllGetActivationFactory@8,PRIVATE")
#pragma comment(linker, "/EXPORT:DllCanUnloadNow=_DllCanUnloadNow@0,PRIVATE")
#pragma comment(linker, "/EXPORT:VSDesignerDllMain=_VSDesignerDllMain@12,PRIVATE")
#pragma comment(linker, "/INCLUDE:___refMTAThread")
#elif defined(_M_AMD64)
#pragma comment(linker, "/EXPORT:DllGetActivationFactory=DllGetActivationFactory,PRIVATE")
#pragma comment(linker, "/EXPORT:DllCanUnloadNow,PRIVATE")
#pragma comment(linker, "/EXPORT:VSDesignerDllMain,PRIVATE")
#pragma comment(linker, "/INCLUDE:__refMTAThread")
#endif

extern int __abi___threading_model;

extern "C"
{
    int __stdcall _DllMainCRTStartup(void* hinstDLL, unsigned long fdwReason, void** lpvReserved);

    int __stdcall VSDesignerDllMain(void* hinstDLL, unsigned long fdwReason, void** lpvReserved)
    {
        __abi___threading_model = _VCCORLIB_THREADING_MODEL_OVERRIDE;
        return _DllMainCRTStartup(hinstDLL, fdwReason, lpvReserved);
    }
}

#endif // (defined(_M_IX86) || defined(_M_AMD64)) && !defined(_VSDESIGNER_DONT_LOAD_AS_DLL)

#ifndef DISABLE_XAML_GENERATED_MAIN
int __stdcall wWinMain(HINSTANCE, HINSTANCE, PWSTR, int)
{
    winrt::init_apartment();
    ::winrt::Windows::UI::Xaml::Application::Start(
        [](auto&&)
        {
            ::winrt::make<::winrt::BindingViewModels::implementation::App>();
        });
    return 0;
}
#endif
