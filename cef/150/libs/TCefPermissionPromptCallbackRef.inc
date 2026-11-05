// constructor
function TCefPermissionPromptCallbackRef_Create(data: Pointer; out IntfPermissionPromptCallback: ICefPermissionPromptCallback): TCefPermissionPromptCallbackRef; extdecl;
begin
  {$define handleExceptionID := 25600}
  handleExceptionBegin
  Result := TCefPermissionPromptCallbackRef.Create(data);
  IntfPermissionPromptCallback := Result as ICefPermissionPromptCallback;
  handleExceptionEnd
end;

// function static
procedure TCefPermissionPromptCallbackRef_UnWrap(data: Pointer; var Result: ICefPermissionPromptCallback); extdecl;
begin
  Result := TCefPermissionPromptCallbackRef.UnWrap(data);
end;

// procedure
procedure TCefPermissionPromptCallbackRef_cont(AObj: ICefPermissionPromptCallback; result: TCefPermissionRequestResult); extdecl;
begin
  {$define handleExceptionID := 25601}
  handleExceptionBegin
  AObj.cont(result);
  handleExceptionEnd
end;

exports
  TCefPermissionPromptCallbackRef_Create,
  TCefPermissionPromptCallbackRef_UnWrap,
  TCefPermissionPromptCallbackRef_cont;