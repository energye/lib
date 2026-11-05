Pointer(webkit_javascript_result_get_js_value) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_javascript_result_get_js_value');
Pointer(webkit_javascript_result_get_global_context) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_javascript_result_get_global_context');
Pointer(webkit_javascript_result_get_value) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_javascript_result_get_value');
Pointer(webkit_javascript_result_unref) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_javascript_result_unref');