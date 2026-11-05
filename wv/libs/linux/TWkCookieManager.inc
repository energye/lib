// constructor
function TWkCookieManager_Create(aCookieManager: WebKitCookieManager): TWkCookieManager; extdecl;
begin
  {$define handleExceptionID := 3800}
  handleExceptionBegin
  Result := TWkCookieManager.Create(aCookieManager);
  handleExceptionEnd
end;

// function
function TWkCookieManager_Data(AObj: TWkCookieManager): WebKitCookieManager; extdecl;
begin
  {$define handleExceptionID := 3801}
  handleExceptionBegin
  Result := AObj.Data();
  handleExceptionEnd
end;

// function static
function TWkCookieManager_NewDelegate(aCookieManager: WebKitCookieManager; aDelegateEvent: IWkCookieManagerDelegateEvent): TWkCookieManager; extdecl;
begin
  Result := TWkCookieManager.NewDelegate(aCookieManager, aDelegateEvent);
end;

// procedure
procedure TWkCookieManager_SetPersistentStorage(AObj: TWkCookieManager; filename: PChar; storage: WebKitCookiePersistentStorage); extdecl;
begin
  {$define handleExceptionID := 3802}
  handleExceptionBegin
  AObj.SetPersistentStorage(filename, storage);
  handleExceptionEnd
end;

// procedure
procedure TWkCookieManager_SetAcceptPolicy(AObj: TWkCookieManager; policy: WebKitCookieAcceptPolicy); extdecl;
begin
  {$define handleExceptionID := 3803}
  handleExceptionBegin
  AObj.SetAcceptPolicy(policy);
  handleExceptionEnd
end;

// procedure
procedure TWkCookieManager_GetAcceptPolicy(AObj: TWkCookieManager); extdecl;
begin
  {$define handleExceptionID := 3804}
  handleExceptionBegin
  AObj.GetAcceptPolicy();
  handleExceptionEnd
end;

// procedure
procedure TWkCookieManager_AddCookie(AObj: TWkCookieManager; const cookie: PSoupCookie); extdecl;
begin
  {$define handleExceptionID := 3805}
  handleExceptionBegin
  AObj.AddCookie(cookie);
  handleExceptionEnd
end;

// procedure
procedure TWkCookieManager_GetCookies(AObj: TWkCookieManager; uri: PChar); extdecl;
begin
  {$define handleExceptionID := 3806}
  handleExceptionBegin
  AObj.GetCookies(uri);
  handleExceptionEnd
end;

// procedure
procedure TWkCookieManager_DeleteCookie(AObj: TWkCookieManager; cookie: PSoupCookie); extdecl;
begin
  {$define handleExceptionID := 3807}
  handleExceptionBegin
  AObj.DeleteCookie(cookie);
  handleExceptionEnd
end;

// procedure
procedure TWkCookieManager_DeleteCookiesForDomain(AObj: TWkCookieManager; domain: PChar); extdecl;
begin
  {$define handleExceptionID := 3808}
  handleExceptionBegin
  AObj.DeleteCookiesForDomain(domain);
  handleExceptionEnd
end;

// procedure
procedure TWkCookieManager_DeleteAllCookies(AObj: TWkCookieManager); extdecl;
begin
  {$define handleExceptionID := 3809}
  handleExceptionBegin
  AObj.DeleteAllCookies();
  handleExceptionEnd
end;

exports
  TWkCookieManager_Create,
  TWkCookieManager_Data,
  TWkCookieManager_NewDelegate,
  TWkCookieManager_SetPersistentStorage,
  TWkCookieManager_SetAcceptPolicy,
  TWkCookieManager_GetAcceptPolicy,
  TWkCookieManager_AddCookie,
  TWkCookieManager_GetCookies,
  TWkCookieManager_DeleteCookie,
  TWkCookieManager_DeleteCookiesForDomain,
  TWkCookieManager_DeleteAllCookies;