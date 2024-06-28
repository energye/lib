
//constructor
function CefStringListRef_Create(aHandle: TCefStringList): TCefStringListRef; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TCefStringListRef.Create(aHandle);
  handleExceptionEnd
end;

//procedure
procedure CefStringListRef_AsInterface(AObj: TCefStringListRef; var Result: ICefStringList); extdecl;
begin
  Result := AObj as ICefStringList;
end;


exports
  CefStringListRef_Create,
  CefStringListRef_AsInterface;