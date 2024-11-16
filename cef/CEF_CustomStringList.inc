
//constructor
function CefCustomStringList_Create(): TCefCustomStringList; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TCefCustomStringList.Create();
  handleExceptionEnd
end;

//procedure
procedure CefCustomStringList_AsInterface(AObj: TCefCustomStringList; var Result: ICefStringList); extdecl;
begin
  Result := AObj as ICefStringList;
end;


exports
  CefCustomStringList_Create,
  CefCustomStringList_AsInterface;