
//function
procedure CefCookieManager_UnWrap(data: Pointer; var Result: ICefCookieManager); extdecl;
begin
  Result := TCefCookieManagerRef.UnWrap(data);
end;

//function
procedure CefCookieManager_Global(const callback: ICefCompletionCallback; var Result: ICefCookieManager); extdecl;
begin
  Result := TCefCookieManagerRef.Global(callback);
end;

//function
function CefCookieManager_VisitAllCookies(AObj: ICefCookieManager; const visitor: ICefCookieVisitor): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='VisitAllCookies'}
  handleExceptionBegin
  Result := AObj.VisitAllCookies(visitor);
  handleExceptionEnd
end;

//function
function CefCookieManager_VisitUrlCookies(AObj: ICefCookieManager; const url: PChar; includeHttpOnly: LongBool; const visitor: ICefCookieVisitor): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='VisitUrlCookies'}
  handleExceptionBegin
  Result := AObj.VisitUrlCookies(url, includeHttpOnly, visitor);
  handleExceptionEnd
end;

//function
function CefCookieManager_SetCookie(AObj: ICefCookieManager; const url,  name,  value,  domain,  path: PChar; secure,  httponly,  hasExpires: LongBool; var creation,  lastAccess,  expires: TDateTime; samesite: TCefCookieSameSite; priority: TCefCookiePriority; const callback: ICefSetCookieCallback): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='SetCookie'}
  handleExceptionBegin
  Result := AObj.SetCookie(url,  name,  value,  domain,  path, secure,  httponly,  hasExpires, creation,  lastAccess,  expires, samesite, priority, callback);
  handleExceptionEnd
end;

//function
function CefCookieManager_DeleteCookies(AObj: ICefCookieManager; const url,  cookieName: PChar; const callback: ICefDeleteCookiesCallback): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='DeleteCookies'}
  handleExceptionBegin
  Result := AObj.DeleteCookies(url,  cookieName, callback);
  handleExceptionEnd
end;

//function
function CefCookieManager_FlushStore(AObj: ICefCookieManager; const callback: ICefCompletionCallback): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='FlushStore'}
  handleExceptionBegin
  Result := AObj.FlushStore(callback);
  handleExceptionEnd
end;


exports
  CefCookieManager_UnWrap,
  CefCookieManager_Global,
  CefCookieManager_VisitAllCookies,
  CefCookieManager_VisitUrlCookies,
  CefCookieManager_SetCookie,
  CefCookieManager_DeleteCookies,
  CefCookieManager_FlushStore;