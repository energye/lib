
//constructor
function WkCookieManager_Create(aCookieManager: WebKitCookieManager): TWkCookieManager; extdecl;
begin
  handleExceptionBegin
  Result := TWkCookieManager.Create(aCookieManager);
  handleExceptionEnd
end;

//function
function WkCookieManager_NewDelegate(aCookieManager: WebKitCookieManager; aDelegateEvent: IWkCookieManagerDelegateEvent): TWkCookieManager; extdecl;
begin
  Result := TWkCookieManager.NewDelegate(aCookieManager, aDelegateEvent);
end;

//function
function WkCookieManager_Data(AObj: TWkCookieManager): WebKitCookieManager; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Data();
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
procedure WkCookieManager_AddCookie(AObj: TWkCookieManager; const cookie: PSoupCookie); extdecl;
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
procedure WkCookieManager_DeleteCookie(AObj: TWkCookieManager; cookie: PSoupCookie); extdecl;
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
  WkCookieManager_NewDelegate,
  WkCookieManager_Data,
  WkCookieManager_SetPersistentStorage,
  WkCookieManager_SetAcceptPolicy,
  WkCookieManager_GetAcceptPolicy,
  WkCookieManager_AddCookie,
  WkCookieManager_GetCookies,
  WkCookieManager_DeleteCookie,
  WkCookieManager_DeleteCookiesForDomain,
  WkCookieManager_DeleteAllCookies;