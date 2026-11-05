// constructor
function TCefBrowserViewRef_Create(data: Pointer; out IntfBrowserView: ICefBrowserView; out IntfView: ICefView): TCefBrowserViewRef; extdecl;
begin
  {$define handleExceptionID := 23400}
  handleExceptionBegin
  Result := TCefBrowserViewRef.Create(data);
  IntfBrowserView := Result as ICefBrowserView;
  IntfView := Result as ICefView;
  handleExceptionEnd
end;

// function
procedure TCefBrowserViewRef_GetBrowser(AObj: ICefBrowserView; var Result: ICefBrowser); extdecl;
begin
  {$define handleExceptionID := 23401}
  handleExceptionBegin
  Result := AObj.GetBrowser();
  handleExceptionEnd
end;

// function
procedure TCefBrowserViewRef_GetChromeToolbar(AObj: ICefBrowserView; var Result: ICefView); extdecl;
begin
  {$define handleExceptionID := 23402}
  handleExceptionBegin
  Result := AObj.GetChromeToolbar();
  handleExceptionEnd
end;

// function static
procedure TCefBrowserViewRef_UnWrapWithPointer(data: Pointer; var Result: ICefBrowserView); extdecl;
begin
  Result := TCefBrowserViewRef.UnWrap(data);
end;

// function static
procedure TCefBrowserViewRef_CreateBrowserView(const client: ICefClient; const url: PChar; var settings: TCefBrowserSettingsPtr; const extra_info: ICefDictionaryValue; const request_context: ICefRequestContext; const delegate: ICefBrowserViewDelegate; var Result: ICefBrowserView); extdecl;
var
  Insettings: TCefBrowserSettings;
begin
  Insettings := TCefBrowserSettingsToPas(settings);
  Result := TCefBrowserViewRef.CreateBrowserView(client, url, Insettings, extra_info, request_context, delegate);
end;

// function static
procedure TCefBrowserViewRef_GetForBrowser(const browser: ICefBrowser; var Result: ICefBrowserView); extdecl;
begin
  Result := TCefBrowserViewRef.GetForBrowser(browser);
end;

// procedure
procedure TCefBrowserViewRef_SetPreferAccelerators(AObj: ICefBrowserView; prefer_accelerators: LongBool); extdecl;
begin
  {$define handleExceptionID := 23403}
  handleExceptionBegin
  AObj.SetPreferAccelerators(prefer_accelerators);
  handleExceptionEnd
end;

exports
  TCefBrowserViewRef_Create,
  TCefBrowserViewRef_GetBrowser,
  TCefBrowserViewRef_GetChromeToolbar,
  TCefBrowserViewRef_UnWrapWithPointer,
  TCefBrowserViewRef_CreateBrowserView,
  TCefBrowserViewRef_GetForBrowser,
  TCefBrowserViewRef_SetPreferAccelerators;