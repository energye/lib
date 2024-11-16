
//function
procedure CefGetExtensionResourceCallback_UnWrap(data: Pointer; var Result: ICefGetExtensionResourceCallback); extdecl;
begin
  Result := TCefGetExtensionResourceCallbackRef.UnWrap(data);
end;

//procedure
procedure CefGetExtensionResourceCallback_Cont(AObj: ICefGetExtensionResourceCallback; const stream: ICefStreamReader); extdecl;
begin
  {$define handleExceptionFuncName :='Cont'}
  handleExceptionBegin
  AObj.Cont(stream);
  handleExceptionEnd
end;

//procedure
procedure CefGetExtensionResourceCallback_Cancel(AObj: ICefGetExtensionResourceCallback); extdecl;
begin
  {$define handleExceptionFuncName :='Cancel'}
  handleExceptionBegin
  AObj.Cancel();
  handleExceptionEnd
end;


exports
  CefGetExtensionResourceCallback_UnWrap,
  CefGetExtensionResourceCallback_Cont,
  CefGetExtensionResourceCallback_Cancel;