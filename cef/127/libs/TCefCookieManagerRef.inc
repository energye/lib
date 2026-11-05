// constructor
function TCefCookieManagerRef_Create(data: Pointer; out IntfCookieManager: ICefCookieManager): TCefCookieManagerRef; extdecl;
begin
  {$define handleExceptionID := 18400}
  handleExceptionBegin
  Result := TCefCookieManagerRef.Create(data);
  IntfCookieManager := Result as ICefCookieManager;
  handleExceptionEnd
end;

// function
function TCefCookieManagerRef_VisitAllCookies(AObj: ICefCookieManager; const visitor: ICefCookieVisitor): LongBool; extdecl;
begin
  {$define handleExceptionID := 18401}
  handleExceptionBegin
  Result := AObj.VisitAllCookies(visitor);
  handleExceptionEnd
end;

// function
function TCefCookieManagerRef_VisitUrlCookies(AObj: ICefCookieManager; const url: PChar; includeHttpOnly: LongBool; const visitor: ICefCookieVisitor): LongBool; extdecl;
begin
  {$define handleExceptionID := 18402}
  handleExceptionBegin
  Result := AObj.VisitUrlCookies(PCharToUStr(url), includeHttpOnly, visitor);
  handleExceptionEnd
end;

// function
function TCefCookieManagerRef_SetCookie(AObj: ICefCookieManager; var Args: TCefCookieManagerRefSetCookieArgsPtr): LongBool; extdecl;
var
  InArgs: TCefCookieManagerRefSetCookieArgs;
begin
  {$define handleExceptionID := 18403}
  handleExceptionBegin
  InArgs := TCefCookieManagerRefSetCookieArgsToPas(Args);
  Result := AObj.SetCookie(InArgs.url, InArgs.name, InArgs.value, InArgs.domain, InArgs.path, InArgs.secure, InArgs.httponly, InArgs.hasExpires, InArgs.creation, InArgs.lastAccess, InArgs.expires, InArgs.same_site, InArgs.priority, InArgs.callback);
  handleExceptionEnd
end;

// function
function TCefCookieManagerRef_DeleteCookies(AObj: ICefCookieManager; const url: PChar; const cookieName: PChar; const callback: ICefDeleteCookiesCallback): LongBool; extdecl;
begin
  {$define handleExceptionID := 18404}
  handleExceptionBegin
  Result := AObj.DeleteCookies(PCharToUStr(url), PCharToUStr(cookieName), callback);
  handleExceptionEnd
end;

// function
function TCefCookieManagerRef_FlushStore(AObj: ICefCookieManager; const callback: ICefCompletionCallback): LongBool; extdecl;
begin
  {$define handleExceptionID := 18405}
  handleExceptionBegin
  Result := AObj.FlushStore(callback);
  handleExceptionEnd
end;

// function static
procedure TCefCookieManagerRef_UnWrap(data: Pointer; var Result: ICefCookieManager); extdecl;
begin
  Result := TCefCookieManagerRef.UnWrap(data);
end;

// function static
procedure TCefCookieManagerRef_Global(const callback: ICefCompletionCallback; var Result: ICefCookieManager); extdecl;
begin
  Result := TCefCookieManagerRef.Global(callback);
end;

exports
  TCefCookieManagerRef_Create,
  TCefCookieManagerRef_VisitAllCookies,
  TCefCookieManagerRef_VisitUrlCookies,
  TCefCookieManagerRef_SetCookie,
  TCefCookieManagerRef_DeleteCookies,
  TCefCookieManagerRef_FlushStore,
  TCefCookieManagerRef_UnWrap,
  TCefCookieManagerRef_Global;