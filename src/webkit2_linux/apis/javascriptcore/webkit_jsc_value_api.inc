jsc_value_get_context    : function(value: JSCValue): JSCContext; cdecl;
jsc_value_new_undefined  : function(context: JSCContext): JSCValue; cdecl;
jsc_value_is_undefined   : function(value: JSCValue): gboolean; cdecl;
jsc_value_new_null       : function(context: JSCContext): JSCValue; cdecl;
jsc_value_is_null        : function(value: JSCValue): gboolean; cdecl;
jsc_value_new_number     : function(context: JSCContext; newValue: gdouble): JSCValue; cdecl;
jsc_value_is_number      : function(value: JSCValue): gboolean; cdecl;
jsc_value_to_double      : function(value: JSCValue): gdouble; cdecl;
jsc_value_to_int32       : function(value: JSCValue): gint32; cdecl;
jsc_value_new_boolean    : function(context: JSCContext; newValue: gboolean): JSCValue; cdecl;
jsc_value_is_boolean     : function(value: JSCValue): gboolean; cdecl;
jsc_value_to_boolean     : function(value: JSCValue): gboolean; cdecl;
jsc_value_new_string     : function(value: JSCValue; newValue: Pgchar): JSCValue; cdecl;
jsc_value_is_string      : function(value: JSCValue): gboolean; cdecl;
jsc_value_to_string      : function(value: JSCValue): Pgchar; cdecl;

// JSContextRef
JSValueGetType           : function(context: JSContextRef; value: JSValueRef): JSType; cdecl;
JSValueMakeUndefined     : function(context: JSContextRef): JSValueRef; cdecl;
JSValueMakeNull          : function(context: JSContextRef): JSValueRef; cdecl;
JSValueMakeBoolean       : function(context: JSContextRef; value: gboolean): JSValueRef; cdecl;
JSValueToBoolean         : function(context: JSContextRef; value: JSValueRef): gboolean; cdecl;
JSValueMakeNumber        : function(context: JSContextRef; value: gdouble): JSValueRef; cdecl;
JSValueToNumber          : function(context: JSContextRef; value: JSValueRef; exception: JSValueRef): gdouble; cdecl;
JSValueMakeString        : function(context: JSContextRef; value: JSStringRef): JSValueRef; cdecl;
JSValueToStringCopy      : function(context: JSContextRef; value: JSValueRef; exception: JSValueRef): JSStringRef; cdecl;