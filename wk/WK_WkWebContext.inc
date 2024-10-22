
//constructor
function WkWebContext_Create(aWebContext: WebKitWebContext): TWkWebContext; extdecl;
begin
  handleExceptionBegin
  Result := TWkWebContext.Create(aWebContext);
  handleExceptionEnd
end;

//function
procedure WkWebContext_Default(var Result: TWkWebContext); extdecl;
begin
  Result := TWkWebContext.Default();
end;

//function
procedure WkWebContext_New(var Result: TWkWebContext); extdecl;
begin
  Result := TWkWebContext.New();
end;

//function
procedure WkWebContext_GetCookieManager(AObj: TWkWebContext; var Result: TWkCookieManager); extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetCookieManager();
  handleExceptionEnd
end;

//procedure
procedure WkWebContext_RegisterURIScheme(AObj: TWkWebContext; aScheme: PChar; aDelegate: IWkSchemeRequestDelegateEvent); extdecl;
begin
  handleExceptionBegin
  AObj.RegisterURIScheme(aScheme, aDelegate);
  handleExceptionEnd
end;

//procedure
procedure WkWebContext_SetCacheModel(AObj: TWkWebContext; cachemodel: WebKitCacheModel); extdecl;
begin
  handleExceptionBegin
  AObj.SetCacheModel(cachemodel);
  handleExceptionEnd
end;

//procedure
procedure WkWebContext_DownloadURI(AObj: TWkWebContext; uri: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.DownloadURI(uri);
  handleExceptionEnd
end;

//procedure
procedure WkWebContext_SetWetPreferredLanguages(AObj: TWkWebContext; languages: TStrings); extdecl;
begin
  handleExceptionBegin
  AObj.SetWetPreferredLanguages(languages);
  handleExceptionEnd
end;


exports
  WkWebContext_Create,
  WkWebContext_Default,
  WkWebContext_New,
  WkWebContext_GetCookieManager,
  WkWebContext_RegisterURIScheme,
  WkWebContext_SetCacheModel,
  WkWebContext_DownloadURI,
  WkWebContext_SetWetPreferredLanguages;
