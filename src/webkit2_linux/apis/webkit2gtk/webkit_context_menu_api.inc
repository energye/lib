webkit_context_menu_new                     : function(): WebKitContextMenu; cdecl;
webkit_context_menu_prepend                 : procedure(menu: WebKitContextMenu; item: WebKitContextMenuItem); cdecl;
webkit_context_menu_append                  : procedure(menu: WebKitContextMenu; item: WebKitContextMenuItem); cdecl;
webkit_context_menu_insert                  : procedure(menu: WebKitContextMenu; item: WebKitContextMenuItem; position: gint); cdecl;
webkit_context_menu_get_n_items             : function(menu: WebKitContextMenu): gint; cdecl;
webkit_context_menu_get_item_at_position    : function(menu: WebKitContextMenu; position: gint): WebKitContextMenuItem; cdecl;
webkit_context_menu_remove                  : procedure(menu: WebKitContextMenu; item: WebKitContextMenuItem); cdecl;
webkit_context_menu_remove_all              : procedure(menu: WebKitContextMenu); cdecl;

// webkit_context_menu_item
webkit_context_menu_item_new_from_gaction         : function(action: PGSimpleAction; label_: Pgchar; target: PGVariant): WebKitContextMenuItem; cdecl;
webkit_context_menu_item_new_from_stock_action    : function(action: WebKitContextMenuAction): WebKitContextMenuItem; cdecl;
webkit_context_menu_item_new_from_stock_action_with_label    : function(action: WebKitContextMenuAction; label_: Pgchar): WebKitContextMenuItem; cdecl;
webkit_context_menu_item_new_with_submenu         : function(label_: Pgchar; submenu: WebKitContextMenu): WebKitContextMenuItem; cdecl;
webkit_context_menu_item_get_submenu              : function(item: WebKitContextMenuItem): WebKitContextMenu; cdecl;
webkit_context_menu_item_set_submenu              : procedure(menu: WebKitContextMenuItem; submenu: WebKitContextMenu); cdecl;
webkit_context_menu_item_get_gaction              : function(item: WebKitContextMenuItem): PGSimpleAction; cdecl;
webkit_context_menu_item_get_stock_action         : function(item: WebKitContextMenuItem): WebKitContextMenuAction; cdecl;
webkit_context_menu_item_new_separator            : function(): WebKitContextMenuItem; cdecl;
webkit_context_menu_item_is_separator             : function(item: WebKitContextMenuItem): gboolean; cdecl;