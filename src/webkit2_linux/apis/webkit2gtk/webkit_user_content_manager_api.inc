webkit_user_content_manager_new                                   : function(): WebKitUserContentManager; cdecl;
webkit_user_content_manager_register_script_message_handler       : function(manager: WebKitUserContentManager; name: Pgchar): gboolean; cdecl;
webkit_user_content_manager_add_script                            : procedure(manager: WebKitUserContentManager; script: WebKitUserScript); cdecl; // 2.6
webkit_user_content_manager_remove_script                         : procedure(manager: WebKitUserContentManager; script: WebKitUserScript); cdecl; // 2.32