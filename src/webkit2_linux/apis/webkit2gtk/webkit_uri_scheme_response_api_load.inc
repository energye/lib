Pointer(webkit_uri_scheme_response_new) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_uri_scheme_response_new');
Pointer(webkit_uri_scheme_response_set_status) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_uri_scheme_response_set_status');
Pointer(webkit_uri_scheme_response_set_content_type) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_uri_scheme_response_set_content_type');
Pointer(webkit_uri_scheme_response_set_http_headers) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_uri_scheme_response_set_http_headers');