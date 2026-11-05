webkit_web_context_get_default               : function(): WebKitWebContext; cdecl;
webkit_web_context_new                       : function(): WebKitWebContext; cdecl;
webkit_web_context_register_uri_scheme       : procedure(context: WebKitWebContext; scheme: Pgchar; callback: TWkURISchemeRequestCallback; user_data: gpointer; user_data_destroy_func: TDestroyNotify); cdecl;
webkit_web_context_set_cache_model           : procedure(webview: WebKitWebView; cache_model : WebKitCacheModel); cdecl;
webkit_web_context_download_uri              : procedure(context: WebKitWebContext; uri : Pgchar); cdecl;
webkit_web_context_get_cookie_manager        : function(context: WebKitWebContext): WebKitCookieManager; cdecl;
webkit_web_context_set_preferred_languages   : procedure(context: WebKitWebContext; languages : PPgchar); cdecl;