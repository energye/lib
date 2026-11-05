// constructor
function TWkWebViewConfiguration_Create(AData: WKWebViewConfiguration): TWkWebViewConfiguration; extdecl;
begin
  {$define handleExceptionID := 3300}
  handleExceptionBegin
  Result := TWkWebViewConfiguration.Create(AData);
  handleExceptionEnd
end;

// function
function TWkWebViewConfiguration_Data(AObj: TWkWebViewConfiguration): WKWebViewConfiguration; extdecl;
begin
  {$define handleExceptionID := 3301}
  handleExceptionBegin
  Result := AObj.Data();
  handleExceptionEnd
end;

// function static
function TWkWebViewConfiguration_New(): TWkWebViewConfiguration; extdecl;
begin
  Result := TWkWebViewConfiguration.New();
end;

// function
function TWkWebViewConfiguration_Preferences(AObj: TWkWebViewConfiguration): WKPreferences; extdecl;
begin
  {$define handleExceptionID := 3302}
  handleExceptionBegin
  Result := AObj.Preferences();
  handleExceptionEnd
end;

// function
function TWkWebViewConfiguration_UserContentController(AObj: TWkWebViewConfiguration): WKUserContentController; extdecl;
begin
  {$define handleExceptionID := 3303}
  handleExceptionBegin
  Result := AObj.UserContentController();
  handleExceptionEnd
end;

// function
function TWkWebViewConfiguration_SuppressesIncrementalRendering(AObj: TWkWebViewConfiguration): LongBool; extdecl;
begin
  {$define handleExceptionID := 3304}
  handleExceptionBegin
  Result := AObj.SuppressesIncrementalRendering();
  handleExceptionEnd
end;

// function
procedure TWkWebViewConfiguration_ApplicationNameForUserAgent(AObj: TWkWebViewConfiguration;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 3305}
  handleExceptionBegin
  StringBufferCreate(AObj.ApplicationNameForUserAgent(), AStrData, AStrSize);
  handleExceptionEnd
end;

// procedure
procedure TWkWebViewConfiguration_Release(AObj: TWkWebViewConfiguration); extdecl;
begin
  {$define handleExceptionID := 3306}
  handleExceptionBegin
  AObj.Release();
  handleExceptionEnd
end;

// procedure
procedure TWkWebViewConfiguration_SetPreferences(AObj: TWkWebViewConfiguration; preferences: WKPreferences); extdecl;
begin
  {$define handleExceptionID := 3307}
  handleExceptionBegin
  AObj.SetPreferences(preferences);
  handleExceptionEnd
end;

// procedure
procedure TWkWebViewConfiguration_SetUserContentController(AObj: TWkWebViewConfiguration; userContentController: WKUserContentController); extdecl;
begin
  {$define handleExceptionID := 3308}
  handleExceptionBegin
  AObj.SetUserContentController(userContentController);
  handleExceptionEnd
end;

// procedure
procedure TWkWebViewConfiguration_SetSuppressesIncrementalRendering(AObj: TWkWebViewConfiguration; newValue: LongBool); extdecl;
begin
  {$define handleExceptionID := 3309}
  handleExceptionBegin
  AObj.SetSuppressesIncrementalRendering(newValue);
  handleExceptionEnd
end;

// procedure
procedure TWkWebViewConfiguration_SetApplicationNameForUserAgent(AObj: TWkWebViewConfiguration; newValue: PChar); extdecl;
begin
  {$define handleExceptionID := 3310}
  handleExceptionBegin
  AObj.SetApplicationNameForUserAgent(newValue);
  handleExceptionEnd
end;

// procedure
procedure TWkWebViewConfiguration_SetURLSchemeHandlerForURLScheme(AObj: TWkWebViewConfiguration; urlSchemeHandler: WKURLSchemeHandler; urlScheme: PChar); extdecl;
begin
  {$define handleExceptionID := 3311}
  handleExceptionBegin
  AObj.SetURLSchemeHandlerForURLScheme(urlSchemeHandler, urlScheme);
  handleExceptionEnd
end;

exports
  TWkWebViewConfiguration_Create,
  TWkWebViewConfiguration_Data,
  TWkWebViewConfiguration_New,
  TWkWebViewConfiguration_Preferences,
  TWkWebViewConfiguration_UserContentController,
  TWkWebViewConfiguration_SuppressesIncrementalRendering,
  TWkWebViewConfiguration_ApplicationNameForUserAgent,
  TWkWebViewConfiguration_Release,
  TWkWebViewConfiguration_SetPreferences,
  TWkWebViewConfiguration_SetUserContentController,
  TWkWebViewConfiguration_SetSuppressesIncrementalRendering,
  TWkWebViewConfiguration_SetApplicationNameForUserAgent,
  TWkWebViewConfiguration_SetURLSchemeHandlerForURLScheme;