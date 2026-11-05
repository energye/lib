JSStringCreateWithCharacters        : function(value: Pgchar; numChars: size_t): JSStringRef; cdecl;
JSStringCreateWithUTF8CString       : function(value: Pgchar): JSStringRef; cdecl;
JSStringRelease                     : procedure(value: JSStringRef); cdecl;
JSStringGetLength                   : function(value: JSStringRef): size_t; cdecl;
JSStringGetMaximumUTF8CStringSize   : function(value: JSStringRef): size_t; cdecl;
JSStringGetUTF8CString              : function(value: JSStringRef; buffer: Pgchar; bufferSize: size_t): size_t; cdecl;