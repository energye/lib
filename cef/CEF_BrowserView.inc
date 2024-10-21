
//function
procedure CefBrowserView_UnWrap(data: Pointer; var Result: ICefBrowserView); extdecl;
begin
  Result := TCefBrowserViewRef.UnWrap(data);
end;

//function
procedure CefBrowserView_CreateBrowserView(const client: ICefClient; const url: PChar; const settings: TEngBrowserSettingsPtr; const extrainfo: ICefDictionaryValue; const requestcontext: ICefRequestContext; const delegate: ICefBrowserViewDelegate; var Result: ICefBrowserView); extdecl;
var
  Insettings: TCefBrowserSettings;
begin
  Insettings := EngBrowserSettingsToPas(settings);
  Result := TCefBrowserViewRef.CreateBrowserView(client, url, Insettings, extrainfo, requestcontext, delegate);
end;

//function
procedure CefBrowserView_GetForBrowser(const browser: ICefBrowser; var Result: ICefBrowserView); extdecl;
begin
  Result := TCefBrowserViewRef.GetForBrowser(browser);
end;

//function
procedure CefBrowserView_GetBrowser(AObj: ICefBrowserView; var Result: ICefBrowser); extdecl;
begin
  {$define handleExceptionFuncName :='GetBrowser'}
  handleExceptionBegin
  Result := AObj.GetBrowser();
  handleExceptionEnd
end;

//function
procedure CefBrowserView_GetChromeToolbar(AObj: ICefBrowserView; var Result: ICefView); extdecl;
begin
  {$define handleExceptionFuncName :='GetChromeToolbar'}
  handleExceptionBegin
  Result := AObj.GetChromeToolbar();
  handleExceptionEnd
end;

//procedure
procedure CefBrowserView_SetPreferAccelerators(AObj: ICefBrowserView; preferaccelerators: LongBool); extdecl;
begin
  {$define handleExceptionFuncName :='SetPreferAccelerators'}
  handleExceptionBegin
  AObj.SetPreferAccelerators(preferaccelerators);
  handleExceptionEnd
end;


exports
  CefBrowserView_UnWrap,
  CefBrowserView_CreateBrowserView,
  CefBrowserView_GetForBrowser,
  CefBrowserView_GetBrowser,
  CefBrowserView_GetChromeToolbar,
  CefBrowserView_SetPreferAccelerators;