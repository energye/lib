webkit_javascript_result_get_js_value         : function(js_result: WebKitJavascriptResult): JSCValue; cdecl;
webkit_javascript_result_get_global_context   : function(js_result: WebKitJavascriptResult): JSGlobalContextRef; cdecl; // 自 2.22 版起已弃用, 改用 jsc_value_get_context()
webkit_javascript_result_get_value            : function(js_result: WebKitJavascriptResult): JSValueRef; cdecl; // 自 2.22 版起已弃用
webkit_javascript_result_unref                : procedure(js_result: WebKitJavascriptResult); cdecl;