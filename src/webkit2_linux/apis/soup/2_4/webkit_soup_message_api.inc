soup2_4_message_headers_new          : function(type_: TSoupMessageHeadersType): PSoupMessageHeaders; cdecl;
soup2_4_message_headers_iter_init    : procedure(iter: PSoupMessageHeadersIter; hdrs: PSoupMessageHeaders); cdecl;
soup2_4_message_headers_iter_next    : function(iter: PSoupMessageHeadersIter; name: PPgchar; value: PPgchar): gboolean; cdecl;
soup2_4_message_headers_foreach      : procedure(hdrs: PSoupMessageHeaders; func: TSoupMessageHeadersForeachFunc; user_data: gpointer); cdecl;
soup2_4_message_headers_append       : procedure(hdrs: PSoupMessageHeaders; name: Pgchar; value: Pgchar); cdecl;
soup2_4_message_headers_clear        : procedure(hdrs: PSoupMessageHeaders); cdecl;
soup2_4_message_headers_remove       : procedure(hdrs: PSoupMessageHeaders; name: Pgchar); cdecl;
soup2_4_message_headers_replace      : procedure(hdrs: PSoupMessageHeaders; name: Pgchar; value: Pgchar); cdecl;
soup2_4_message_headers_free         : procedure(hdrs: PSoupMessageHeaders); cdecl;
