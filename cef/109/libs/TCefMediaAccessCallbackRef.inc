// constructor
function TCefMediaAccessCallbackRef_Create(data: Pointer; out IntfMediaAccessCallback: ICefMediaAccessCallback): TCefMediaAccessCallbackRef; extdecl;
begin
  {$define handleExceptionID := 24700}
  handleExceptionBegin
  Result := TCefMediaAccessCallbackRef.Create(data);
  IntfMediaAccessCallback := Result as ICefMediaAccessCallback;
  handleExceptionEnd
end;

// function static
procedure TCefMediaAccessCallbackRef_UnWrap(data: Pointer; var Result: ICefMediaAccessCallback); extdecl;
begin
  Result := TCefMediaAccessCallbackRef.UnWrap(data);
end;

// procedure
procedure TCefMediaAccessCallbackRef_cont(AObj: ICefMediaAccessCallback; allowed_permissions: TCefMediaAccessPermissionTypes); extdecl;
begin
  {$define handleExceptionID := 24701}
  handleExceptionBegin
  AObj.cont(allowed_permissions);
  handleExceptionEnd
end;

// procedure
procedure TCefMediaAccessCallbackRef_cancel(AObj: ICefMediaAccessCallback); extdecl;
begin
  {$define handleExceptionID := 24702}
  handleExceptionBegin
  AObj.cancel();
  handleExceptionEnd
end;

exports
  TCefMediaAccessCallbackRef_Create,
  TCefMediaAccessCallbackRef_UnWrap,
  TCefMediaAccessCallbackRef_cont,
  TCefMediaAccessCallbackRef_cancel;