jsc_context_new              : function(value: JSCValue): JSCContext; cdecl;
jsc_context_get_exception    : function(context: JSCContext): JSCException; cdecl;
jsc_context_get_current      : function(): JSCContext; cdecl;
jsc_context_clear_exception  : procedure(context: JSCContext); cdecl;
jsc_context_evaluate         : function(context: JSCContext; code: Pgchar; size: gssize): JSCValue; cdecl;
jsc_context_set_value        : procedure(context: JSCContext; name: Pgchar; value: JSCValue); cdecl;
jsc_context_get_value        : function(context: JSCContext; name: Pgchar): JSCValue; cdecl;