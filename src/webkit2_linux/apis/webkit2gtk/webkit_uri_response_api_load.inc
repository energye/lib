Pointer(webkit_uri_response_get_uri) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_uri_response_get_uri');
Pointer(webkit_uri_response_get_status_code) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_uri_response_get_status_code');
Pointer(webkit_uri_response_get_content_length) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_uri_response_get_content_length');
Pointer(webkit_uri_response_get_mime_type) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_uri_response_get_mime_type');
Pointer(webkit_uri_response_get_suggested_filename) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_uri_response_get_suggested_filename');
Pointer(webkit_uri_response_get_http_headers) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_uri_response_get_http_headers');