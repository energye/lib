Pointer(jsc_context_new) := dynlibs.GetProcAddress(LibJavascriptCoreGtkHandle, 'jsc_context_new');
Pointer(jsc_context_get_exception) := dynlibs.GetProcAddress(LibJavascriptCoreGtkHandle, 'jsc_context_get_exception');
Pointer(jsc_context_get_current) := dynlibs.GetProcAddress(LibJavascriptCoreGtkHandle, 'jsc_context_get_current');
Pointer(jsc_context_clear_exception) := dynlibs.GetProcAddress(LibJavascriptCoreGtkHandle, 'jsc_context_clear_exception');
Pointer(jsc_context_evaluate) := dynlibs.GetProcAddress(LibJavascriptCoreGtkHandle, 'jsc_context_evaluate');
Pointer(jsc_context_set_value) := dynlibs.GetProcAddress(LibJavascriptCoreGtkHandle, 'jsc_context_set_value');
Pointer(jsc_context_get_value) := dynlibs.GetProcAddress(LibJavascriptCoreGtkHandle, 'jsc_context_get_value');