Pointer(jsc_value_get_context) := dynlibs.GetProcAddress(LibJavascriptCoreGtkHandle, 'jsc_value_get_context');
Pointer(jsc_value_new_undefined) := dynlibs.GetProcAddress(LibJavascriptCoreGtkHandle, 'jsc_value_new_undefined');
Pointer(jsc_value_is_undefined) := dynlibs.GetProcAddress(LibJavascriptCoreGtkHandle, 'jsc_value_is_undefined');
Pointer(jsc_value_new_null) := dynlibs.GetProcAddress(LibJavascriptCoreGtkHandle, 'jsc_value_new_null');
Pointer(jsc_value_is_null) := dynlibs.GetProcAddress(LibJavascriptCoreGtkHandle, 'jsc_value_is_null');
Pointer(jsc_value_new_number) := dynlibs.GetProcAddress(LibJavascriptCoreGtkHandle, 'jsc_value_new_number');
Pointer(jsc_value_is_number) := dynlibs.GetProcAddress(LibJavascriptCoreGtkHandle, 'jsc_value_is_number');
Pointer(jsc_value_to_double) := dynlibs.GetProcAddress(LibJavascriptCoreGtkHandle, 'jsc_value_to_double');
Pointer(jsc_value_to_int32) := dynlibs.GetProcAddress(LibJavascriptCoreGtkHandle, 'jsc_value_to_int32');
Pointer(jsc_value_new_boolean) := dynlibs.GetProcAddress(LibJavascriptCoreGtkHandle, 'jsc_value_new_boolean');
Pointer(jsc_value_is_boolean) := dynlibs.GetProcAddress(LibJavascriptCoreGtkHandle, 'jsc_value_is_boolean');
Pointer(jsc_value_to_boolean) := dynlibs.GetProcAddress(LibJavascriptCoreGtkHandle, 'jsc_value_to_boolean');
Pointer(jsc_value_new_string) := dynlibs.GetProcAddress(LibJavascriptCoreGtkHandle, 'jsc_value_new_string');
Pointer(jsc_value_is_string) := dynlibs.GetProcAddress(LibJavascriptCoreGtkHandle, 'jsc_value_is_string');
Pointer(jsc_value_to_string) := dynlibs.GetProcAddress(LibJavascriptCoreGtkHandle, 'jsc_value_to_string');


Pointer(JSValueGetType) := dynlibs.GetProcAddress(LibJavascriptCoreGtkHandle, 'JSValueGetType');
Pointer(JSValueMakeUndefined) := dynlibs.GetProcAddress(LibJavascriptCoreGtkHandle, 'JSValueMakeUndefined');
Pointer(JSValueMakeNull) := dynlibs.GetProcAddress(LibJavascriptCoreGtkHandle, 'JSValueMakeNull');
Pointer(JSValueMakeBoolean) := dynlibs.GetProcAddress(LibJavascriptCoreGtkHandle, 'JSValueMakeBoolean');
Pointer(JSValueToBoolean) := dynlibs.GetProcAddress(LibJavascriptCoreGtkHandle, 'JSValueToBoolean');
Pointer(JSValueMakeNumber) := dynlibs.GetProcAddress(LibJavascriptCoreGtkHandle, 'JSValueMakeNumber');
Pointer(JSValueToNumber) := dynlibs.GetProcAddress(LibJavascriptCoreGtkHandle, 'JSValueToNumber');
Pointer(JSValueMakeString) := dynlibs.GetProcAddress(LibJavascriptCoreGtkHandle, 'JSValueMakeString');
Pointer(JSValueToStringCopy) := dynlibs.GetProcAddress(LibJavascriptCoreGtkHandle, 'JSValueToStringCopy');