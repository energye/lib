
//constructor
function WKWebViewConfiguration_Create(aData: WKWebViewConfiguration): TWKWebViewConfiguration; extdecl;
begin
  handleExceptionBegin
  Result := TWKWebViewConfiguration.Create(aData);
  handleExceptionEnd
end;

//function
function WKWebViewConfiguration_New(): TWKWebViewConfiguration; extdecl;
begin
  Result := TWKWebViewConfiguration.New();
end;

//function
function WKWebViewConfiguration_Data(AObj: TWKWebViewConfiguration): WKWebViewConfiguration; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Data();
  handleExceptionEnd
end;

//function
function WKWebViewConfiguration_Preferences(AObj: TWKWebViewConfiguration): WKPreferences; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Preferences();
  handleExceptionEnd
end;

//function
function WKWebViewConfiguration_UserContentController(AObj: TWKWebViewConfiguration): WKUserContentController; extdecl;
begin
  handleExceptionBegin
  Result := AObj.UserContentController();
  handleExceptionEnd
end;

//function
function WKWebViewConfiguration_SuppressesIncrementalRendering(AObj: TWKWebViewConfiguration): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.SuppressesIncrementalRendering();
  handleExceptionEnd
end;

//function
function WKWebViewConfiguration_ApplicationNameForUserAgent(AObj: TWKWebViewConfiguration): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.ApplicationNameForUserAgent());
  handleExceptionEnd
end;

//procedure
procedure WKWebViewConfiguration_SetPreferences(AObj: TWKWebViewConfiguration; preferences: WKPreferences); extdecl;
begin
  handleExceptionBegin
  AObj.SetPreferences(preferences);
  handleExceptionEnd
end;

//procedure
procedure WKWebViewConfiguration_SetUserContentController(AObj: TWKWebViewConfiguration; userContentController: WKUserContentController); extdecl;
begin
  handleExceptionBegin
  AObj.SetUserContentController(userContentController);
  handleExceptionEnd
end;

//procedure
procedure WKWebViewConfiguration_SetSuppressesIncrementalRendering(AObj: TWKWebViewConfiguration; newValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.SetSuppressesIncrementalRendering(newValue);
  handleExceptionEnd
end;

//procedure
procedure WKWebViewConfiguration_SetApplicationNameForUserAgent(AObj: TWKWebViewConfiguration; newValue: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.SetApplicationNameForUserAgent(newValue);
  handleExceptionEnd
end;

//procedure
procedure WKWebViewConfiguration_SetURLSchemeHandlerForURLScheme(AObj: TWKWebViewConfiguration; urlSchemeHandler: WKURLSchemeHandler; urlScheme: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.SetURLSchemeHandlerForURLScheme(urlSchemeHandler, urlScheme);
  handleExceptionEnd
end;


exports
  WKWebViewConfiguration_Create,
  WKWebViewConfiguration_New,
  WKWebViewConfiguration_Data,
  WKWebViewConfiguration_Preferences,
  WKWebViewConfiguration_UserContentController,
  WKWebViewConfiguration_SuppressesIncrementalRendering,
  WKWebViewConfiguration_ApplicationNameForUserAgent,
  WKWebViewConfiguration_SetPreferences,
  WKWebViewConfiguration_SetUserContentController,
  WKWebViewConfiguration_SetSuppressesIncrementalRendering,
  WKWebViewConfiguration_SetApplicationNameForUserAgent,
  WKWebViewConfiguration_SetURLSchemeHandlerForURLScheme;