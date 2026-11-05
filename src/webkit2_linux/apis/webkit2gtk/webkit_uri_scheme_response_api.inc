webkit_uri_scheme_response_new               : function(input_stream: PGInputStream; stream_length: gint64): WebKitURISchemeResponse; cdecl;
webkit_uri_scheme_response_set_status        : procedure(response: WebKitURISchemeResponse; status_code: guint; reason_phrase: Pgchar); cdecl;
webkit_uri_scheme_response_set_content_type  : procedure(response: WebKitURISchemeResponse; content_type: Pgchar); cdecl;
webkit_uri_scheme_response_set_http_headers  : procedure(response: WebKitURISchemeResponse; headers: PSoupMessageHeaders); cdecl;