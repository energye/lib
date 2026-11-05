Pointer(JSStringCreateWithCharacters) := dynlibs.GetProcAddress(LibJavascriptCoreGtkHandle, 'JSStringCreateWithCharacters');
Pointer(JSStringCreateWithUTF8CString) := dynlibs.GetProcAddress(LibJavascriptCoreGtkHandle, 'JSStringCreateWithUTF8CString');
Pointer(JSStringRelease) := dynlibs.GetProcAddress(LibJavascriptCoreGtkHandle, 'JSStringRelease');
Pointer(JSStringGetLength) := dynlibs.GetProcAddress(LibJavascriptCoreGtkHandle, 'JSStringGetLength');
Pointer(JSStringGetMaximumUTF8CStringSize) := dynlibs.GetProcAddress(LibJavascriptCoreGtkHandle, 'JSStringGetMaximumUTF8CStringSize');
Pointer(JSStringGetUTF8CString) := dynlibs.GetProcAddress(LibJavascriptCoreGtkHandle, 'JSStringGetUTF8CString');