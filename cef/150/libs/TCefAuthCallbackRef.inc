// constructor
function TCefAuthCallbackRef_Create(data: Pointer; out IntfAuthCallback: ICefAuthCallback): TCefAuthCallbackRef; extdecl;
begin
  {$define handleExceptionID := 17800}
  handleExceptionBegin
  Result := TCefAuthCallbackRef.Create(data);
  IntfAuthCallback := Result as ICefAuthCallback;
  handleExceptionEnd
end;

// function static
procedure TCefAuthCallbackRef_UnWrap(data: Pointer; var Result: ICefAuthCallback); extdecl;
begin
  Result := TCefAuthCallbackRef.UnWrap(data);
end;

// procedure
procedure TCefAuthCallbackRef_Cont(AObj: ICefAuthCallback; const username: PChar; const password: PChar); extdecl;
begin
  {$define handleExceptionID := 17801}
  handleExceptionBegin
  AObj.Cont(PCharToUStr(username), PCharToUStr(password));
  handleExceptionEnd
end;

// procedure
procedure TCefAuthCallbackRef_Cancel(AObj: ICefAuthCallback); extdecl;
begin
  {$define handleExceptionID := 17802}
  handleExceptionBegin
  AObj.Cancel();
  handleExceptionEnd
end;

exports
  TCefAuthCallbackRef_Create,
  TCefAuthCallbackRef_UnWrap,
  TCefAuthCallbackRef_Cont,
  TCefAuthCallbackRef_Cancel;