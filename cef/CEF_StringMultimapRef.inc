
//constructor
function CefStringMultimapRef_Create(aHandle: TCefStringMultimap): TCefStringMultimapRef; extdecl;
begin
  handleExceptionBegin
  Result := TCefStringMultimapRef.Create(aHandle);
  handleExceptionEnd
end;


exports
  CefStringMultimapRef_Create;