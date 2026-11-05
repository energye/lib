Pointer(webkit_user_script_ref) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_user_script_ref');
Pointer(webkit_user_script_unref) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_user_script_unref');
Pointer(webkit_user_script_new) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_user_script_new');