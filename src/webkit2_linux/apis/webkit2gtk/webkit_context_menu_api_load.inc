Pointer(webkit_context_menu_new) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_context_menu_new');
Pointer(webkit_context_menu_prepend) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_context_menu_prepend');
Pointer(webkit_context_menu_append) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_context_menu_append');
Pointer(webkit_context_menu_insert) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_context_menu_insert');
Pointer(webkit_context_menu_get_n_items) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_context_menu_get_n_items');
Pointer(webkit_context_menu_get_item_at_position) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_context_menu_get_item_at_position');
Pointer(webkit_context_menu_remove) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_context_menu_remove');
Pointer(webkit_context_menu_remove_all) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_context_menu_remove_all');

// webkit_context_menu_item
Pointer(webkit_context_menu_item_new_from_gaction) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_context_menu_item_new_from_gaction');
Pointer(webkit_context_menu_item_new_from_stock_action) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_context_menu_item_new_from_stock_action');
Pointer(webkit_context_menu_item_new_from_stock_action_with_label) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_context_menu_item_new_from_stock_action_with_label');
Pointer(webkit_context_menu_item_new_with_submenu) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_context_menu_item_new_with_submenu');
Pointer(webkit_context_menu_item_get_submenu) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_context_menu_item_get_submenu');
Pointer(webkit_context_menu_item_set_submenu) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_context_menu_item_set_submenu');
Pointer(webkit_context_menu_item_get_gaction) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_context_menu_item_get_gaction');
Pointer(webkit_context_menu_item_get_stock_action) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_context_menu_item_get_stock_action');
Pointer(webkit_context_menu_item_new_separator) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_context_menu_item_new_separator');
Pointer(webkit_context_menu_item_is_separator) := dynlibs.GetProcAddress(LibWebkitGtkHandle, 'webkit_context_menu_item_is_separator');