
//constructor
function WkCookieManager_Create(aCookieManager: WebKitCookieManager): TWkCookieManager; extdecl;
begin
  handleExceptionBegin
  Result := TWkCookieManager.Create(aCookieManager);
  handleExceptionEnd
end;

//constructor
function WkCookieManager_Create1(aCookieManager: WebKitCookieManager; aDelegateEvent: IWkCookieManagerDelegateEvent): TWkCookieManager; extdecl;
begin
  handleExceptionBegin
  Result := TWkCookieManager.Create(aCookieManager, aDelegateEvent);
  handleExceptionEnd
end;

//procedure
procedure WkCookieManager_SetPersistentStorage(AObj: TWkCookieManager; filename: PChar; storage: WebKitCookiePersistentStorage); extdecl;
begin
  handleExceptionBegin
  AObj.SetPersistentStorage(filename, storage);
  handleExceptionEnd
end;

//procedure
procedure WkCookieManager_SetAcceptPolicy(AObj: TWkCookieManager; policy: WebKitCookieAcceptPolicy); extdecl;
begin
  handleExceptionBegin
  AObj.SetAcceptPolicy(policy);
  handleExceptionEnd
end;

//procedure
procedure WkCookieManager_GetAcceptPolicy(AObj: TWkCookieManager); extdecl;
begin
  handleExceptionBegin
  AObj.GetAcceptPolicy();
  handleExceptionEnd
end;

//procedure
procedure WkCookieManager_AddCookie(AObj: TWkCookieManager; const cookie: IWkCookie); extdecl;
begin
  handleExceptionBegin
  AObj.AddCookie(cookie);
  handleExceptionEnd
end;

//procedure
procedure WkCookieManager_GetCookies(AObj: TWkCookieManager; uri: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.GetCookies(uri);
  handleExceptionEnd
end;

//procedure
procedure WkCookieManager_DeleteCookie(AObj: TWkCookieManager; cookie: IWkCookie); extdecl;
begin
  handleExceptionBegin
  AObj.DeleteCookie(cookie);
  handleExceptionEnd
end;

//procedure
procedure WkCookieManager_DeleteCookiesForDomain(AObj: TWkCookieManager; domain: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.DeleteCookiesForDomain(domain);
  handleExceptionEnd
end;

//procedure
procedure WkCookieManager_DeleteAllCookies(AObj: TWkCookieManager); extdecl;
begin
  handleExceptionBegin
  AObj.DeleteAllCookies();
  handleExceptionEnd
end;


exports
  WkCookieManager_Create,
  WkCookieManager_Create1,
  WkCookieManager_SetPersistentStorage,
  WkCookieManager_SetAcceptPolicy,
  WkCookieManager_GetAcceptPolicy,
  WkCookieManager_AddCookie,
  WkCookieManager_GetCookies,
  WkCookieManager_DeleteCookie,
  WkCookieManager_DeleteCookiesForDomain,
  WkCookieManager_DeleteAllCookies;