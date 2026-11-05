webkit_uri_request_new                       : function(uri: Pgchar): WebKitURIRequest; cdecl;
webkit_uri_request_get_uri                   : function(request: WebKitURIRequest): Pgchar; cdecl;
webkit_uri_request_set_uri                   : procedure(request: WebKitURIRequest; uri: Pgchar); cdecl;
webkit_uri_request_get_http_method           : function(request: WebKitURIRequest): Pgchar; cdecl;
webkit_uri_request_get_http_headers          : function(request: WebKitURIRequest): PSoupMessageHeaders; cdecl;