webkit_uri_response_get_uri                  : function(request: WebKitURIResponse): Pgchar; cdecl;
webkit_uri_response_get_status_code          : function(request: WebKitURIResponse): guint; cdecl;
webkit_uri_response_get_content_length       : function(request: WebKitURIResponse): guint64; cdecl;
webkit_uri_response_get_mime_type            : function(request: WebKitURIResponse): Pgchar; cdecl;
webkit_uri_response_get_suggested_filename   : function(request: WebKitURIResponse): Pgchar; cdecl;
webkit_uri_response_get_http_headers         : function(request: WebKitURIResponse): PSoupMessageHeaders; cdecl;