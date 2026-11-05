Pointer(webkit_user_content_manager_new) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_user_content_manager_new');
Pointer(webkit_user_content_manager_register_script_message_handler) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_user_content_manager_register_script_message_handler');
Pointer(webkit_user_content_manager_add_script) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_user_content_manager_add_script');
Pointer(webkit_user_content_manager_remove_script) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_user_content_manager_remove_script');