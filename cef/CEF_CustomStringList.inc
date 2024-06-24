
//constructor
function CefCustomStringList_Create(): TCefCustomStringList; extdecl;
begin
  handleExceptionBegin
  Result := TCefCustomStringList.Create();
  handleExceptionEnd
end;


exports
  CefCustomStringList_Create;