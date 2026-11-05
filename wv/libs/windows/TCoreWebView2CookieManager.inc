// constructor
function TCoreWebView2CookieManager_Create(const aBaseIntf: ICoreWebView2CookieManager): TCoreWebView2CookieManager; extdecl;
begin
  {$define handleExceptionID := 6500}
  handleExceptionBegin
  Result := TCoreWebView2CookieManager.Create(aBaseIntf);
  handleExceptionEnd
end;

// function
procedure TCoreWebView2CookieManager_CreateCookie(AObj: TCoreWebView2CookieManager; const aName: PChar; const aValue: PChar; const aDomain: PChar; const aPath: PChar; var Result: ICoreWebView2Cookie); extdecl;
begin
  {$define handleExceptionID := 6501}
  handleExceptionBegin
  Result := AObj.CreateCookie(PCharToUStr(aName), PCharToUStr(aValue), PCharToUStr(aDomain), PCharToUStr(aPath));
  handleExceptionEnd
end;

// function
procedure TCoreWebView2CookieManager_CopyCookie(AObj: TCoreWebView2CookieManager; const aCookie: ICoreWebView2Cookie; var Result: ICoreWebView2Cookie); extdecl;
begin
  {$define handleExceptionID := 6502}
  handleExceptionBegin
  Result := AObj.CopyCookie(aCookie);
  handleExceptionEnd
end;

// function
function TCoreWebView2CookieManager_GetCookies(AObj: TCoreWebView2CookieManager; const aURI: PChar; const aHandler: ICoreWebView2GetCookiesCompletedHandler): LongBool; extdecl;
begin
  {$define handleExceptionID := 6503}
  handleExceptionBegin
  Result := AObj.GetCookies(PCharToUStr(aURI), aHandler);
  handleExceptionEnd
end;

// function
function TCoreWebView2CookieManager_AddOrUpdateCookie(AObj: TCoreWebView2CookieManager; const aCookie: ICoreWebView2Cookie): LongBool; extdecl;
begin
  {$define handleExceptionID := 6504}
  handleExceptionBegin
  Result := AObj.AddOrUpdateCookie(aCookie);
  handleExceptionEnd
end;

// function
function TCoreWebView2CookieManager_DeleteCookie(AObj: TCoreWebView2CookieManager; const aCookie: ICoreWebView2Cookie): LongBool; extdecl;
begin
  {$define handleExceptionID := 6505}
  handleExceptionBegin
  Result := AObj.DeleteCookie(aCookie);
  handleExceptionEnd
end;

// function
function TCoreWebView2CookieManager_DeleteCookies(AObj: TCoreWebView2CookieManager; const aName: PChar; const aURI: PChar): LongBool; extdecl;
begin
  {$define handleExceptionID := 6506}
  handleExceptionBegin
  Result := AObj.DeleteCookies(PCharToUStr(aName), PCharToUStr(aURI));
  handleExceptionEnd
end;

// function
function TCoreWebView2CookieManager_DeleteCookiesWithDomainAndPath(AObj: TCoreWebView2CookieManager; const aName: PChar; const aDomain: PChar; const aPath: PChar): LongBool; extdecl;
begin
  {$define handleExceptionID := 6507}
  handleExceptionBegin
  Result := AObj.DeleteCookiesWithDomainAndPath(PCharToUStr(aName), PCharToUStr(aDomain), PCharToUStr(aPath));
  handleExceptionEnd
end;

// function
function TCoreWebView2CookieManager_DeleteAllCookies(AObj: TCoreWebView2CookieManager): LongBool; extdecl;
begin
  {$define handleExceptionID := 6508}
  handleExceptionBegin
  Result := AObj.DeleteAllCookies();
  handleExceptionEnd
end;

// property
function TCoreWebView2CookieManager_Initialized(AObj: TCoreWebView2CookieManager): LongBool; extdecl;
begin
  {$define handleExceptionID := 6509}
  handleExceptionBegin
  Result := AObj.Initialized;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2CookieManager_BaseIntf(AObj: TCoreWebView2CookieManager; var Result: ICoreWebView2CookieManager); extdecl;
begin
  {$define handleExceptionID := 6510}
  handleExceptionBegin
  Result := AObj.BaseIntf;
  handleExceptionEnd
end;

exports
  TCoreWebView2CookieManager_Create,
  TCoreWebView2CookieManager_CreateCookie,
  TCoreWebView2CookieManager_CopyCookie,
  TCoreWebView2CookieManager_GetCookies,
  TCoreWebView2CookieManager_AddOrUpdateCookie,
  TCoreWebView2CookieManager_DeleteCookie,
  TCoreWebView2CookieManager_DeleteCookies,
  TCoreWebView2CookieManager_DeleteCookiesWithDomainAndPath,
  TCoreWebView2CookieManager_DeleteAllCookies,
  TCoreWebView2CookieManager_Initialized,
  TCoreWebView2CookieManager_BaseIntf;