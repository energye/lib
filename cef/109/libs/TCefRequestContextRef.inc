// constructor
function TCefRequestContextRef_Create(data: Pointer; out IntfRequestContext: ICefRequestContext; out IntfPreferenceManager: ICefPreferenceManager): TCefRequestContextRef; extdecl;
begin
  {$define handleExceptionID := 19800}
  handleExceptionBegin
  Result := TCefRequestContextRef.Create(data);
  IntfRequestContext := Result as ICefRequestContext;
  IntfPreferenceManager := Result as ICefPreferenceManager;
  handleExceptionEnd
end;

// function
function TCefRequestContextRef_IsSame(AObj: ICefRequestContext; const other: ICefRequestContext): LongBool; extdecl;
begin
  {$define handleExceptionID := 19801}
  handleExceptionBegin
  Result := AObj.IsSame(other);
  handleExceptionEnd
end;

// function
function TCefRequestContextRef_IsSharingWith(AObj: ICefRequestContext; const other: ICefRequestContext): LongBool; extdecl;
begin
  {$define handleExceptionID := 19802}
  handleExceptionBegin
  Result := AObj.IsSharingWith(other);
  handleExceptionEnd
end;

// function
function TCefRequestContextRef_IsGlobal(AObj: ICefRequestContext): LongBool; extdecl;
begin
  {$define handleExceptionID := 19803}
  handleExceptionBegin
  Result := AObj.IsGlobal();
  handleExceptionEnd
end;

// function
procedure TCefRequestContextRef_GetHandler(AObj: ICefRequestContext; var Result: ICefRequestContextHandler); extdecl;
begin
  {$define handleExceptionID := 19804}
  handleExceptionBegin
  Result := AObj.GetHandler();
  handleExceptionEnd
end;

// function
procedure TCefRequestContextRef_GetCachePath(AObj: ICefRequestContext;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 19805}
  handleExceptionBegin
  StringBufferCreate(string(AObj.GetCachePath()), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
procedure TCefRequestContextRef_GetCookieManager(AObj: ICefRequestContext; const callback: ICefCompletionCallback; var Result: ICefCookieManager); extdecl;
begin
  {$define handleExceptionID := 19806}
  handleExceptionBegin
  Result := AObj.GetCookieManager(callback);
  handleExceptionEnd
end;

// function
function TCefRequestContextRef_RegisterSchemeHandlerFactory(AObj: ICefRequestContext; const schemeName: PChar; const domainName: PChar; const factory: ICefSchemeHandlerFactory): LongBool; extdecl;
begin
  {$define handleExceptionID := 19807}
  handleExceptionBegin
  Result := AObj.RegisterSchemeHandlerFactory(PCharToUStr(schemeName), PCharToUStr(domainName), factory);
  handleExceptionEnd
end;

// function
function TCefRequestContextRef_ClearSchemeHandlerFactories(AObj: ICefRequestContext): LongBool; extdecl;
begin
  {$define handleExceptionID := 19808}
  handleExceptionBegin
  Result := AObj.ClearSchemeHandlerFactories();
  handleExceptionEnd
end;

// function
function TCefRequestContextRef_DidLoadExtension(AObj: ICefRequestContext; const extension_id: PChar): LongBool; extdecl;
begin
  {$define handleExceptionID := 19809}
  handleExceptionBegin
  Result := AObj.DidLoadExtension(PCharToUStr(extension_id));
  handleExceptionEnd
end;

// function
function TCefRequestContextRef_HasExtension(AObj: ICefRequestContext; const extension_id: PChar): LongBool; extdecl;
begin
  {$define handleExceptionID := 19810}
  handleExceptionBegin
  Result := AObj.HasExtension(PCharToUStr(extension_id));
  handleExceptionEnd
end;

// function
function TCefRequestContextRef_GetExtensions(AObj: ICefRequestContext; const extension_ids: TStringList): LongBool; extdecl;
begin
  {$define handleExceptionID := 19811}
  handleExceptionBegin
  Result := AObj.GetExtensions(extension_ids);
  handleExceptionEnd
end;

// function
procedure TCefRequestContextRef_GetExtension(AObj: ICefRequestContext; const extension_id: PChar; var Result: ICefExtension); extdecl;
begin
  {$define handleExceptionID := 19812}
  handleExceptionBegin
  Result := AObj.GetExtension(PCharToUStr(extension_id));
  handleExceptionEnd
end;

// function
procedure TCefRequestContextRef_GetMediaRouter(AObj: ICefRequestContext; const callback: ICefCompletionCallback; var Result: ICefMediaRouter); extdecl;
begin
  {$define handleExceptionID := 19813}
  handleExceptionBegin
  Result := AObj.GetMediaRouter(callback);
  handleExceptionEnd
end;

// function static
procedure TCefRequestContextRef_UnWrapWithPointer(data: Pointer; var Result: ICefRequestContext); extdecl;
begin
  Result := TCefRequestContextRef.UnWrap(data);
end;

// function static
procedure TCefRequestContextRef_GlobalToRequestContext(var Result: ICefRequestContext); extdecl;
begin
  Result := TCefRequestContextRef.Global();
end;

// function static
procedure TCefRequestContextRef_NewWithPCefRequestContextSettingsRequestContextHandler(const settings: TCefRequestContextSettingsPtr; const handler: ICefRequestContextHandler; var Result: ICefRequestContext); extdecl;
var
  Insettings: TCefRequestContextSettings;
begin
  Insettings := TCefRequestContextSettingsToPas(settings);
  Result := TCefRequestContextRef.New(@Insettings, handler);
end;

// function static
procedure TCefRequestContextRef_NewWithStrX3BoolX3RCHandler(const aCache: PChar; const aAcceptLanguageList: PChar; const aCookieableSchemesList: PChar; aCookieableSchemesExcludeDefaults: LongBool; aPersistSessionCookies: LongBool; aPersistUserPreferences: LongBool; const handler: ICefRequestContextHandler; var Result: ICefRequestContext); extdecl;
begin
  Result := TCefRequestContextRef.New(aCache, aAcceptLanguageList, aCookieableSchemesList, aCookieableSchemesExcludeDefaults, aPersistSessionCookies, aPersistUserPreferences, handler);
end;

// function static
procedure TCefRequestContextRef_Shared(const other: ICefRequestContext; const handler: ICefRequestContextHandler; var Result: ICefRequestContext); extdecl;
begin
  Result := TCefRequestContextRef.Shared(other, handler);
end;

// procedure
procedure TCefRequestContextRef_ClearCertificateExceptions(AObj: ICefRequestContext; const callback: ICefCompletionCallback); extdecl;
begin
  {$define handleExceptionID := 19814}
  handleExceptionBegin
  AObj.ClearCertificateExceptions(callback);
  handleExceptionEnd
end;

// procedure
procedure TCefRequestContextRef_ClearHttpAuthCredentials(AObj: ICefRequestContext; const callback: ICefCompletionCallback); extdecl;
begin
  {$define handleExceptionID := 19815}
  handleExceptionBegin
  AObj.ClearHttpAuthCredentials(callback);
  handleExceptionEnd
end;

// procedure
procedure TCefRequestContextRef_CloseAllConnections(AObj: ICefRequestContext; const callback: ICefCompletionCallback); extdecl;
begin
  {$define handleExceptionID := 19816}
  handleExceptionBegin
  AObj.CloseAllConnections(callback);
  handleExceptionEnd
end;

// procedure
procedure TCefRequestContextRef_ResolveHost(AObj: ICefRequestContext; const origin: PChar; const callback: ICefResolveCallback); extdecl;
begin
  {$define handleExceptionID := 19817}
  handleExceptionBegin
  AObj.ResolveHost(PCharToUStr(origin), callback);
  handleExceptionEnd
end;

// procedure
procedure TCefRequestContextRef_LoadExtension(AObj: ICefRequestContext; const root_directory: PChar; const manifest: ICefDictionaryValue; const handler: ICefExtensionHandler); extdecl;
begin
  {$define handleExceptionID := 19818}
  handleExceptionBegin
  AObj.LoadExtension(PCharToUStr(root_directory), manifest, handler);
  handleExceptionEnd
end;

exports
  TCefRequestContextRef_Create,
  TCefRequestContextRef_IsSame,
  TCefRequestContextRef_IsSharingWith,
  TCefRequestContextRef_IsGlobal,
  TCefRequestContextRef_GetHandler,
  TCefRequestContextRef_GetCachePath,
  TCefRequestContextRef_GetCookieManager,
  TCefRequestContextRef_RegisterSchemeHandlerFactory,
  TCefRequestContextRef_ClearSchemeHandlerFactories,
  TCefRequestContextRef_DidLoadExtension,
  TCefRequestContextRef_HasExtension,
  TCefRequestContextRef_GetExtensions,
  TCefRequestContextRef_GetExtension,
  TCefRequestContextRef_GetMediaRouter,
  TCefRequestContextRef_UnWrapWithPointer,
  TCefRequestContextRef_GlobalToRequestContext,
  TCefRequestContextRef_NewWithPCefRequestContextSettingsRequestContextHandler,
  TCefRequestContextRef_NewWithStrX3BoolX3RCHandler,
  TCefRequestContextRef_Shared,
  TCefRequestContextRef_ClearCertificateExceptions,
  TCefRequestContextRef_ClearHttpAuthCredentials,
  TCefRequestContextRef_CloseAllConnections,
  TCefRequestContextRef_ResolveHost,
  TCefRequestContextRef_LoadExtension;