
//function
procedure CefPermissionPromptCallback_UnWrap(data: Pointer; var Result: ICefPermissionPromptCallback); extdecl;
begin
  Result := TCefPermissionPromptCallbackRef.UnWrap(data);
end;

//procedure
procedure CefPermissionPromptCallback_Cont(AObj: ICefPermissionPromptCallback; result: TCefPermissionRequestResult); extdecl;
begin
  {$define handleExceptionFuncName :='Cont'}
  handleExceptionBegin
  AObj.cont(result);
  handleExceptionEnd
end;


exports
  CefPermissionPromptCallback_UnWrap,
  CefPermissionPromptCallback_Cont;