// constructor
function TWkWebContext_Create(aWebContext: WebKitWebContext): TWkWebContext; extdecl;
begin
  {$define handleExceptionID := 3400}
  handleExceptionBegin
  Result := TWkWebContext.Create(aWebContext);
  handleExceptionEnd
end;

// function
function TWkWebContext_Data(AObj: TWkWebContext): WebKitWebContext; extdecl;
begin
  {$define handleExceptionID := 3401}
  handleExceptionBegin
  Result := AObj.Data();
  handleExceptionEnd
end;

// function
function TWkWebContext_GetCookieManager(AObj: TWkWebContext): WebKitCookieManager; extdecl;
begin
  {$define handleExceptionID := 3402}
  handleExceptionBegin
  Result := AObj.GetCookieManager();
  handleExceptionEnd
end;

// function static
function TWkWebContext_Default(): TWkWebContext; extdecl;
begin
  Result := TWkWebContext.Default();
end;

// function static
function TWkWebContext_New(): TWkWebContext; extdecl;
begin
  Result := TWkWebContext.New();
end;

// procedure
procedure TWkWebContext_RegisterURIScheme(AObj: TWkWebContext; aScheme: PChar; aDelegate: IWkSchemeRequestDelegateEvent); extdecl;
begin
  {$define handleExceptionID := 3403}
  handleExceptionBegin
  AObj.RegisterURIScheme(aScheme, aDelegate);
  handleExceptionEnd
end;

// procedure
procedure TWkWebContext_SetCacheModel(AObj: TWkWebContext; cache_model: WebKitCacheModel); extdecl;
begin
  {$define handleExceptionID := 3404}
  handleExceptionBegin
  AObj.SetCacheModel(cache_model);
  handleExceptionEnd
end;

// procedure
procedure TWkWebContext_DownloadURI(AObj: TWkWebContext; uri: PChar); extdecl;
begin
  {$define handleExceptionID := 3405}
  handleExceptionBegin
  AObj.DownloadURI(uri);
  handleExceptionEnd
end;

// procedure
procedure TWkWebContext_SetWetPreferredLanguages(AObj: TWkWebContext; languages: TStrings); extdecl;
begin
  {$define handleExceptionID := 3406}
  handleExceptionBegin
  AObj.SetWetPreferredLanguages(languages);
  handleExceptionEnd
end;

exports
  TWkWebContext_Create,
  TWkWebContext_Data,
  TWkWebContext_GetCookieManager,
  TWkWebContext_Default,
  TWkWebContext_New,
  TWkWebContext_RegisterURIScheme,
  TWkWebContext_SetCacheModel,
  TWkWebContext_DownloadURI,
  TWkWebContext_SetWetPreferredLanguages;