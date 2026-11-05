Pointer(webkit_uri_request_new) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_uri_request_new');
Pointer(webkit_uri_request_get_uri) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_uri_request_get_uri');
Pointer(webkit_uri_request_set_uri) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_uri_request_set_uri');
Pointer(webkit_uri_request_get_http_method) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_uri_request_get_http_method');
Pointer(webkit_uri_request_get_http_headers) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_uri_request_get_http_headers');