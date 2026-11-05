Pointer(webkit_web_context_get_default) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_web_context_get_default');
Pointer(webkit_web_context_new) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_web_context_new');
Pointer(webkit_web_context_register_uri_scheme) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_web_context_register_uri_scheme');
Pointer(webkit_web_context_set_cache_model) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_web_context_set_cache_model');
Pointer(webkit_web_context_download_uri) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_web_context_download_uri');
Pointer(webkit_web_context_get_cookie_manager) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_web_context_get_cookie_manager');
Pointer(webkit_web_context_set_preferred_languages) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_web_context_set_preferred_languages');