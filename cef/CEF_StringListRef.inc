
//constructor
function CefStringListRef_Create(aHandle: TCefStringList): TCefStringListRef; extdecl;
begin
  handleExceptionBegin
  Result := TCefStringListRef.Create(aHandle);
  handleExceptionEnd
end;


exports
  CefStringListRef_Create;