
//constructor
function CoreWebView2CookieManager_Create(const aBaseIntf: ICoreWebView2CookieManager): TCoreWebView2CookieManager; extdecl;
begin
  handleExceptionBegin
  Result := TCoreWebView2CookieManager.Create(aBaseIntf);
  handleExceptionEnd
end;

//property
function CoreWebView2CookieManager_Initialized(AObj: TCoreWebView2CookieManager): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Initialized;
  handleExceptionEnd
end;

//property
procedure CoreWebView2CookieManager_BaseIntf(AObj: TCoreWebView2CookieManager; var Result: ICoreWebView2CookieManager); extdecl;
begin
  handleExceptionBegin
  Result := AObj.BaseIntf;
  handleExceptionEnd
end;

//function
procedure CoreWebView2CookieManager_CreateCookie(AObj: TCoreWebView2CookieManager; const aName, aValue, aDomain, aPath: PChar; var Result: ICoreWebView2Cookie); extdecl;
begin
  handleExceptionBegin
  Result := AObj.CreateCookie(aName, aValue, aDomain, aPath);
  handleExceptionEnd
end;

//function
procedure CoreWebView2CookieManager_CopyCookie(AObj: TCoreWebView2CookieManager; const aCookie: ICoreWebView2Cookie; var Result: ICoreWebView2Cookie); extdecl;
begin
  handleExceptionBegin
  Result := AObj.CopyCookie(aCookie);
  handleExceptionEnd
end;

//function
function CoreWebView2CookieManager_GetCookies(AObj: TCoreWebView2CookieManager; const aURI: PChar; const aHandler: ICoreWebView2GetCookiesCompletedHandler): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetCookies(aURI, aHandler);
  handleExceptionEnd
end;

//function
function CoreWebView2CookieManager_AddOrUpdateCookie(AObj: TCoreWebView2CookieManager; const aCookie: ICoreWebView2Cookie): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.AddOrUpdateCookie(aCookie);
  handleExceptionEnd
end;

//function
function CoreWebView2CookieManager_DeleteCookie(AObj: TCoreWebView2CookieManager; const aCookie: ICoreWebView2Cookie): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.DeleteCookie(aCookie);
  handleExceptionEnd
end;

//function
function CoreWebView2CookieManager_DeleteCookies(AObj: TCoreWebView2CookieManager; const aName, aURI: PChar): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.DeleteCookies(aName, aURI);
  handleExceptionEnd
end;

//function
function CoreWebView2CookieManager_DeleteCookiesWithDomainAndPath(AObj: TCoreWebView2CookieManager; const aName, aDomain, aPath: PChar): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.DeleteCookiesWithDomainAndPath(aName, aDomain, aPath);
  handleExceptionEnd
end;

//function
function CoreWebView2CookieManager_DeleteAllCookies(AObj: TCoreWebView2CookieManager): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.DeleteAllCookies();
  handleExceptionEnd
end;


exports
  CoreWebView2CookieManager_Create,
  CoreWebView2CookieManager_Initialized,
  CoreWebView2CookieManager_BaseIntf,
  CoreWebView2CookieManager_CreateCookie,
  CoreWebView2CookieManager_CopyCookie,
  CoreWebView2CookieManager_GetCookies,
  CoreWebView2CookieManager_AddOrUpdateCookie,
  CoreWebView2CookieManager_DeleteCookie,
  CoreWebView2CookieManager_DeleteCookies,
  CoreWebView2CookieManager_DeleteCookiesWithDomainAndPath,
  CoreWebView2CookieManager_DeleteAllCookies;