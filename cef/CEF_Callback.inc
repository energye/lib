
//function
procedure CefCallback_UnWrap(data: Pointer; var Result: ICefCallback); extdecl;
begin
  Result := TCefCallbackRef.UnWrap(data);
end;

//procedure
procedure CefCallback_Cont(AObj: ICefCallback); extdecl;
begin
  {$define handleExceptionFuncName :='Cont'}
  handleExceptionBegin
  AObj.Cont();
  handleExceptionEnd
end;

//procedure
procedure CefCallback_Cancel(AObj: ICefCallback); extdecl;
begin
  {$define handleExceptionFuncName :='Cancel'}
  handleExceptionBegin
  AObj.Cancel();
  handleExceptionEnd
end;


exports
  CefCallback_UnWrap,
  CefCallback_Cont,
  CefCallback_Cancel;