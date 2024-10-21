
//function
procedure CefRequestContext_UnWrap(data: Pointer; var Result: ICefRequestContext); extdecl;
begin
  Result := TCefRequestContextRef.UnWrap(data);
end;

//function
procedure CefRequestContext_Global(var Result: ICefRequestContext); extdecl;
begin
  Result := TCefRequestContextRef.Global();
end;

//function
procedure CefRequestContext_New(const settings: TEngRequestContextSettingsPtr; const handler: ICefRequestContextHandler; var Result: ICefRequestContext); extdecl;
var
  Insettings: TCefRequestContextSettings;
begin
  Insettings := EngRequestContextSettingsToPas(settings);
  Result := TCefRequestContextRef.New(@Insettings, handler);
end;

//function
procedure CefRequestContext_New1(const aCache,  aAcceptLanguageList,  aCookieableSchemesList: PChar; aCookieableSchemesExcludeDefaults,  aPersistSessionCookies,  aPersistUserPreferences: LongBool; const handler: ICefRequestContextHandler; var Result: ICefRequestContext); extdecl;
begin
  Result := TCefRequestContextRef.New(aCache,  aAcceptLanguageList,  aCookieableSchemesList, aCookieableSchemesExcludeDefaults,  aPersistSessionCookies,  aPersistUserPreferences, handler);
end;

//function
procedure CefRequestContext_Shared(const other: ICefRequestContext; const handler: ICefRequestContextHandler; var Result: ICefRequestContext); extdecl;
begin
  Result := TCefRequestContextRef.Shared(other, handler);
end;

//function
function CefRequestContext_IsSame(AObj: ICefRequestContext; const other: ICefRequestContext): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='IsSame'}
  handleExceptionBegin
  Result := AObj.IsSame(other);
  handleExceptionEnd
end;

//function
function CefRequestContext_IsSharingWith(AObj: ICefRequestContext; const other: ICefRequestContext): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='IsSharingWith'}
  handleExceptionBegin
  Result := AObj.IsSharingWith(other);
  handleExceptionEnd
end;

//function
function CefRequestContext_IsGlobal(AObj: ICefRequestContext): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='IsGlobal'}
  handleExceptionBegin
  Result := AObj.IsGlobal();
  handleExceptionEnd
end;

//function
procedure CefRequestContext_GetHandler(AObj: ICefRequestContext; var Result: ICefRequestContextHandler); extdecl;
begin
  {$define handleExceptionFuncName :='GetHandler'}
  handleExceptionBegin
  Result := AObj.GetHandler();
  handleExceptionEnd
end;

//function
function CefRequestContext_GetCachePath(AObj: ICefRequestContext): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='GetCachePath'}
  handleExceptionBegin
  Result := ToPChar(AObj.GetCachePath());
  handleExceptionEnd
end;

//function
procedure CefRequestContext_GetCookieManager(AObj: ICefRequestContext; const callback: ICefCompletionCallback; var Result: ICefCookieManager); extdecl;
begin
  {$define handleExceptionFuncName :='GetCookieManager'}
  handleExceptionBegin
  Result := AObj.GetCookieManager(callback);
  handleExceptionEnd
end;

//function
function CefRequestContext_RegisterSchemeHandlerFactory(AObj: ICefRequestContext; const schemeName,  domainName: PChar; const factory: ICefSchemeHandlerFactory): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='RegisterSchemeHandlerFactory'}
  handleExceptionBegin
  Result := AObj.RegisterSchemeHandlerFactory(schemeName,  domainName, factory);
  handleExceptionEnd
end;

//function
function CefRequestContext_ClearSchemeHandlerFactories(AObj: ICefRequestContext): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='ClearSchemeHandlerFactories'}
  handleExceptionBegin
  Result := AObj.ClearSchemeHandlerFactories();
  handleExceptionEnd
end;

//function
function CefRequestContext_DidLoadExtension(AObj: ICefRequestContext; const extensionid: PChar): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='DidLoadExtension'}
  handleExceptionBegin
  Result := AObj.DidLoadExtension(extensionid);
  handleExceptionEnd
end;

//function
function CefRequestContext_HasExtension(AObj: ICefRequestContext; const extensionid: PChar): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='HasExtension'}
  handleExceptionBegin
  Result := AObj.HasExtension(extensionid);
  handleExceptionEnd
end;

//function
function CefRequestContext_GetExtensions(AObj: ICefRequestContext; const extensionids: TStringList): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='GetExtensions'}
  handleExceptionBegin
  Result := AObj.GetExtensions(extensionids);
  handleExceptionEnd
end;

//function
procedure CefRequestContext_GetExtension(AObj: ICefRequestContext; const extensionid: PChar; var Result: ICefExtension); extdecl;
begin
  {$define handleExceptionFuncName :='GetExtension'}
  handleExceptionBegin
  Result := AObj.GetExtension(extensionid);
  handleExceptionEnd
end;

//function
procedure CefRequestContext_GetMediaRouter(AObj: ICefRequestContext; const callback: ICefCompletionCallback; var Result: ICefMediaRouter); extdecl;
begin
  {$define handleExceptionFuncName :='GetMediaRouter'}
  handleExceptionBegin
  Result := AObj.GetMediaRouter(callback);
  handleExceptionEnd
end;

//function
procedure CefRequestContext_GetWebsiteSetting(AObj: ICefRequestContext; const requestingurl,  toplevelurl: PChar; contenttype: TCefContentSettingTypes; var Result: ICefValue); extdecl;
begin
  {$define handleExceptionFuncName :='GetWebsiteSetting'}
  handleExceptionBegin
  Result := AObj.GetWebsiteSetting(requestingurl,  toplevelurl, contenttype);
  handleExceptionEnd
end;

//function
function CefRequestContext_GetContentSetting(AObj: ICefRequestContext; const requestingurl,  toplevelurl: PChar; contenttype: TCefContentSettingTypes): TCefContentSettingValues; extdecl;
begin
  {$define handleExceptionFuncName :='GetContentSetting'}
  handleExceptionBegin
  Result := AObj.GetContentSetting(requestingurl,  toplevelurl, contenttype);
  handleExceptionEnd
end;

//procedure
procedure CefRequestContext_ClearCertificateExceptions(AObj: ICefRequestContext; const callback: ICefCompletionCallback); extdecl;
begin
  {$define handleExceptionFuncName :='ClearCertificateExceptions'}
  handleExceptionBegin
  AObj.ClearCertificateExceptions(callback);
  handleExceptionEnd
end;

//procedure
procedure CefRequestContext_ClearHttpAuthCredentials(AObj: ICefRequestContext; const callback: ICefCompletionCallback); extdecl;
begin
  {$define handleExceptionFuncName :='ClearHttpAuthCredentials'}
  handleExceptionBegin
  AObj.ClearHttpAuthCredentials(callback);
  handleExceptionEnd
end;

//procedure
procedure CefRequestContext_CloseAllConnections(AObj: ICefRequestContext; const callback: ICefCompletionCallback); extdecl;
begin
  {$define handleExceptionFuncName :='CloseAllConnections'}
  handleExceptionBegin
  AObj.CloseAllConnections(callback);
  handleExceptionEnd
end;

//procedure
procedure CefRequestContext_ResolveHost(AObj: ICefRequestContext; const origin: PChar; const callback: ICefResolveCallback); extdecl;
begin
  {$define handleExceptionFuncName :='ResolveHost'}
  handleExceptionBegin
  AObj.ResolveHost(origin, callback);
  handleExceptionEnd
end;

//procedure
procedure CefRequestContext_LoadExtension(AObj: ICefRequestContext; const rootdirectory: PChar; const manifest: ICefDictionaryValue; const handler: ICefExtensionHandler); extdecl;
begin
  {$define handleExceptionFuncName :='LoadExtension'}
  handleExceptionBegin
  AObj.LoadExtension(rootdirectory, manifest, handler);
  handleExceptionEnd
end;

//procedure
procedure CefRequestContext_SetWebsiteSetting(AObj: ICefRequestContext; const requestingurl,  toplevelurl: PChar; contenttype: TCefContentSettingTypes; const value: ICefValue); extdecl;
begin
  {$define handleExceptionFuncName :='SetWebsiteSetting'}
  handleExceptionBegin
  AObj.SetWebsiteSetting(requestingurl,  toplevelurl, contenttype, value);
  handleExceptionEnd
end;

//procedure
procedure CefRequestContext_SetContentSetting(AObj: ICefRequestContext; const requestingurl,  toplevelurl: PChar; contenttype: TCefContentSettingTypes; value: TCefContentSettingValues); extdecl;
begin
  {$define handleExceptionFuncName :='SetContentSetting'}
  handleExceptionBegin
  AObj.SetContentSetting(requestingurl,  toplevelurl, contenttype, value);
  handleExceptionEnd
end;


exports
  CefRequestContext_UnWrap,
  CefRequestContext_Global,
  CefRequestContext_New,
  CefRequestContext_New1,
  CefRequestContext_Shared,
  CefRequestContext_IsSame,
  CefRequestContext_IsSharingWith,
  CefRequestContext_IsGlobal,
  CefRequestContext_GetHandler,
  CefRequestContext_GetCachePath,
  CefRequestContext_GetCookieManager,
  CefRequestContext_RegisterSchemeHandlerFactory,
  CefRequestContext_ClearSchemeHandlerFactories,
  CefRequestContext_DidLoadExtension,
  CefRequestContext_HasExtension,
  CefRequestContext_GetExtensions,
  CefRequestContext_GetExtension,
  CefRequestContext_GetMediaRouter,
  CefRequestContext_GetWebsiteSetting,
  CefRequestContext_GetContentSetting,
  CefRequestContext_ClearCertificateExceptions,
  CefRequestContext_ClearHttpAuthCredentials,
  CefRequestContext_CloseAllConnections,
  CefRequestContext_ResolveHost,
  CefRequestContext_LoadExtension,
  CefRequestContext_SetWebsiteSetting,
  CefRequestContext_SetContentSetting;