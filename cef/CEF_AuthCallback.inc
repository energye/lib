
//function
procedure CefAuthCallback_UnWrap(data: Pointer; var Result: ICefAuthCallback); extdecl;
begin
  Result := TCefAuthCallbackRef.UnWrap(data);
end;

//procedure
procedure CefAuthCallback_Cont(AObj: ICefAuthCallback; const username,  password: PChar); extdecl;
begin
  {$define handleExceptionFuncName :='Cont'}
  handleExceptionBegin
  AObj.Cont(username,  password);
  handleExceptionEnd
end;

//procedure
procedure CefAuthCallback_Cancel(AObj: ICefAuthCallback); extdecl;
begin
  {$define handleExceptionFuncName :='Cancel'}
  handleExceptionBegin
  AObj.Cancel();
  handleExceptionEnd
end;


exports
  CefAuthCallback_UnWrap,
  CefAuthCallback_Cont,
  CefAuthCallback_Cancel;