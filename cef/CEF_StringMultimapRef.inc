
//constructor
function CefStringMultimapRef_Create(aHandle: TCefStringMultimap): TCefStringMultimapRef; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TCefStringMultimapRef.Create(aHandle);
  handleExceptionEnd
end;

//procedure
procedure CefStringMultimapRef_AsInterface(AObj: TCefStringMultimapRef; var Result: ICefStringMultimap); extdecl;
begin
  Result := AObj as ICefStringMultimap;
end;


exports
  CefStringMultimapRef_Create,
  CefStringMultimapRef_AsInterface;