
//constructor
function ChromiumCore_Create(aOwner: TComponent): TChromiumCore; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TChromiumCore.Create(aOwner);
  handleExceptionEnd
end;

//procedure
procedure ChromiumCore_AsInterface(AObj: TChromiumCore; var Result: IChromiumEvents); extdecl;
begin
  Result := AObj as IChromiumEvents;
end;

//property
function ChromiumCore_DefaultUrl(AIsSet: LongBool; AObj: TChromiumCore; AValue: PChar): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='DefaultUrl'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DefaultUrl := AValue;
  end else
    Result := ToPChar(AObj.DefaultUrl);
  handleExceptionEnd
end;

//property
procedure ChromiumCore_Options(AIsSet: LongBool; AObj: TChromiumCore; AValue: TChromiumOptions; var Result: TChromiumOptions); extdecl;
begin
  {$define handleExceptionFuncName :='Options'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Options := AValue;
  end else
    Result := AObj.Options;
  handleExceptionEnd
end;

//property
function ChromiumCore_FontOptions(AIsSet: LongBool; AObj: TChromiumCore; AValue: TChromiumFontOptions): TChromiumFontOptions; extdecl;
begin
  {$define handleExceptionFuncName :='FontOptions'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.FontOptions := AValue;
  end else
    Result := AObj.FontOptions;
  handleExceptionEnd
end;

//property
function ChromiumCore_PDFPrintOptions(AIsSet: LongBool; AObj: TChromiumCore; AValue: TPDFPrintOptions): TPDFPrintOptions; extdecl;
begin
  {$define handleExceptionFuncName :='PDFPrintOptions'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.PDFPrintOptions := AValue;
  end else
    Result := AObj.PDFPrintOptions;
  handleExceptionEnd
end;

//property
function ChromiumCore_BrowserId(AObj: TChromiumCore): integer; extdecl;
begin
  {$define handleExceptionFuncName :='BrowserId'}
  handleExceptionBegin
  Result := AObj.BrowserId;
  handleExceptionEnd
end;

//property
procedure ChromiumCore_Browser(AObj: TChromiumCore; var Result: ICefBrowser); extdecl;
begin
  {$define handleExceptionFuncName :='Browser'}
  handleExceptionBegin
  Result := AObj.Browser;
  handleExceptionEnd
end;

//property
procedure ChromiumCore_BrowserById(AObj: TChromiumCore; id: integer; var Result: ICefBrowser); extdecl;
begin
  {$define handleExceptionFuncName :='BrowserById'}
  handleExceptionBegin
  Result := AObj.BrowserById[id];
  handleExceptionEnd
end;

//property
function ChromiumCore_BrowserCount(AObj: TChromiumCore): integer; extdecl;
begin
  {$define handleExceptionFuncName :='BrowserCount'}
  handleExceptionBegin
  Result := AObj.BrowserCount;
  handleExceptionEnd
end;

//property
function ChromiumCore_BrowserIdByIndex(AObj: TChromiumCore; i: integer): integer; extdecl;
begin
  {$define handleExceptionFuncName :='BrowserIdByIndex'}
  handleExceptionBegin
  Result := AObj.BrowserIdByIndex[i];
  handleExceptionEnd
end;

//property
procedure ChromiumCore_CefClient(AObj: TChromiumCore; var Result: ICefClient); extdecl;
begin
  {$define handleExceptionFuncName :='CefClient'}
  handleExceptionBegin
  Result := AObj.CefClient;
  handleExceptionEnd
end;

//property
procedure ChromiumCore_ReqContextHandler(AObj: TChromiumCore; var Result: ICefRequestContextHandler); extdecl;
begin
  {$define handleExceptionFuncName :='ReqContextHandler'}
  handleExceptionBegin
  Result := AObj.ReqContextHandler;
  handleExceptionEnd
end;

//property
procedure ChromiumCore_ResourceRequestHandler(AObj: TChromiumCore; var Result: ICefResourceRequestHandler); extdecl;
begin
  {$define handleExceptionFuncName :='ResourceRequestHandler'}
  handleExceptionBegin
  Result := AObj.ResourceRequestHandler;
  handleExceptionEnd
end;

//property
function ChromiumCore_CefWindowInfo(AObj: TChromiumCore): TCefWindowInfo; extdecl;
begin
  {$define handleExceptionFuncName :='CefWindowInfo'}
  handleExceptionBegin
  Result := AObj.CefWindowInfo;
  handleExceptionEnd
end;

//property
procedure ChromiumCore_VisibleNavigationEntry(AObj: TChromiumCore; var Result: ICefNavigationEntry); extdecl;
begin
  {$define handleExceptionFuncName :='VisibleNavigationEntry'}
  handleExceptionBegin
  Result := AObj.VisibleNavigationEntry;
  handleExceptionEnd
end;

//property
procedure ChromiumCore_RequestContext(AObj: TChromiumCore; var Result: ICefRequestContext); extdecl;
begin
  {$define handleExceptionFuncName :='RequestContext'}
  handleExceptionBegin
  Result := AObj.RequestContext;
  handleExceptionEnd
end;

//property
procedure ChromiumCore_MediaRouter(AObj: TChromiumCore; var Result: ICefMediaRouter); extdecl;
begin
  {$define handleExceptionFuncName :='MediaRouter'}
  handleExceptionBegin
  Result := AObj.MediaRouter;
  handleExceptionEnd
end;

//property
procedure ChromiumCore_MediaObserver(AObj: TChromiumCore; var Result: ICefMediaObserver); extdecl;
begin
  {$define handleExceptionFuncName :='MediaObserver'}
  handleExceptionBegin
  Result := AObj.MediaObserver;
  handleExceptionEnd
end;

//property
procedure ChromiumCore_MediaObserverReg(AObj: TChromiumCore; var Result: ICefRegistration); extdecl;
begin
  {$define handleExceptionFuncName :='MediaObserverReg'}
  handleExceptionBegin
  Result := AObj.MediaObserverReg;
  handleExceptionEnd
end;

//property
procedure ChromiumCore_DevToolsMsgObserver(AObj: TChromiumCore; var Result: ICefDevToolsMessageObserver); extdecl;
begin
  {$define handleExceptionFuncName :='DevToolsMsgObserver'}
  handleExceptionBegin
  Result := AObj.DevToolsMsgObserver;
  handleExceptionEnd
end;

//property
procedure ChromiumCore_DevToolsMsgObserverReg(AObj: TChromiumCore; var Result: ICefRegistration); extdecl;
begin
  {$define handleExceptionFuncName :='DevToolsMsgObserverReg'}
  handleExceptionBegin
  Result := AObj.DevToolsMsgObserverReg;
  handleExceptionEnd
end;

//property
procedure ChromiumCore_ExtensionHandler(AObj: TChromiumCore; var Result: ICefExtensionHandler); extdecl;
begin
  {$define handleExceptionFuncName :='ExtensionHandler'}
  handleExceptionBegin
  Result := AObj.ExtensionHandler;
  handleExceptionEnd
end;

//property
function ChromiumCore_MultithreadApp(AObj: TChromiumCore): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='MultithreadApp'}
  handleExceptionBegin
  Result := AObj.MultithreadApp;
  handleExceptionEnd
end;

//property
function ChromiumCore_IsLoading(AObj: TChromiumCore): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='IsLoading'}
  handleExceptionBegin
  Result := AObj.IsLoading;
  handleExceptionEnd
end;

//property
function ChromiumCore_HasDocument(AObj: TChromiumCore): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='HasDocument'}
  handleExceptionBegin
  Result := AObj.HasDocument;
  handleExceptionEnd
end;

//property
function ChromiumCore_HasView(AObj: TChromiumCore): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='HasView'}
  handleExceptionBegin
  Result := AObj.HasView;
  handleExceptionEnd
end;

//property
function ChromiumCore_HasDevTools(AObj: TChromiumCore): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='HasDevTools'}
  handleExceptionBegin
  Result := AObj.HasDevTools;
  handleExceptionEnd
end;

//property
function ChromiumCore_HasClientHandler(AObj: TChromiumCore): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='HasClientHandler'}
  handleExceptionBegin
  Result := AObj.HasClientHandler;
  handleExceptionEnd
end;

//property
function ChromiumCore_HasBrowser(AObj: TChromiumCore): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='HasBrowser'}
  handleExceptionBegin
  Result := AObj.HasBrowser;
  handleExceptionEnd
end;

//property
function ChromiumCore_CanGoBack(AObj: TChromiumCore): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='CanGoBack'}
  handleExceptionBegin
  Result := AObj.CanGoBack;
  handleExceptionEnd
end;

//property
function ChromiumCore_CanGoForward(AObj: TChromiumCore): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='CanGoForward'}
  handleExceptionBegin
  Result := AObj.CanGoForward;
  handleExceptionEnd
end;

//property
function ChromiumCore_IsPopUp(AObj: TChromiumCore): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='IsPopUp'}
  handleExceptionBegin
  Result := AObj.IsPopUp;
  handleExceptionEnd
end;

//property
function ChromiumCore_WindowHandle(AObj: TChromiumCore): TCefWindowHandle; extdecl;
begin
  {$define handleExceptionFuncName :='WindowHandle'}
  handleExceptionBegin
  Result := AObj.WindowHandle;
  handleExceptionEnd
end;

//property
function ChromiumCore_OpenerWindowHandle(AObj: TChromiumCore): TCefWindowHandle; extdecl;
begin
  {$define handleExceptionFuncName :='OpenerWindowHandle'}
  handleExceptionBegin
  Result := AObj.OpenerWindowHandle;
  handleExceptionEnd
end;

//property
function ChromiumCore_BrowserHandle(AObj: TChromiumCore): THandle; extdecl;
begin
{$IFDEF MSWINDOWS}
  {$define handleExceptionFuncName :='BrowserHandle'}
  handleExceptionBegin
  Result := AObj.BrowserHandle;
  handleExceptionEnd
{$ENDIF}
end;

//property
function ChromiumCore_WidgetHandle(AObj: TChromiumCore): THandle; extdecl;
begin
{$IFDEF MSWINDOWS}
  {$define handleExceptionFuncName :='WidgetHandle'}
  handleExceptionBegin
  Result := AObj.WidgetHandle;
  handleExceptionEnd
{$ENDIF}
end;

//property
function ChromiumCore_RenderHandle(AObj: TChromiumCore): THandle; extdecl;
begin
{$IFDEF MSWINDOWS}
  {$define handleExceptionFuncName :='RenderHandle'}
  handleExceptionBegin
  Result := AObj.RenderHandle;
  handleExceptionEnd
{$ENDIF}
end;

//property
function ChromiumCore_FrameIsFocused(AObj: TChromiumCore): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='FrameIsFocused'}
  handleExceptionBegin
  Result := AObj.FrameIsFocused;
  handleExceptionEnd
end;

//property
function ChromiumCore_Initialized(AObj: TChromiumCore): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='Initialized'}
  handleExceptionBegin
  Result := AObj.Initialized;
  handleExceptionEnd
end;

//property
function ChromiumCore_RequestContextCache(AObj: TChromiumCore): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='RequestContextCache'}
  handleExceptionBegin
  Result := ToPChar(AObj.RequestContextCache);
  handleExceptionEnd
end;

//property
function ChromiumCore_RequestContextIsGlobal(AObj: TChromiumCore): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='RequestContextIsGlobal'}
  handleExceptionBegin
  Result := AObj.RequestContextIsGlobal;
  handleExceptionEnd
end;

//property
function ChromiumCore_DocumentURL(AObj: TChromiumCore): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='DocumentURL'}
  handleExceptionBegin
  Result := ToPChar(AObj.DocumentURL);
  handleExceptionEnd
end;

//property
procedure ChromiumCore_ZoomLevel(AIsSet: LongBool; AObj: TChromiumCore; var AValue: double; var Result: double); extdecl;
begin
  {$define handleExceptionFuncName :='ZoomLevel'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ZoomLevel := AValue;
  end else
    Result := AObj.ZoomLevel;
  handleExceptionEnd
end;

//property
procedure ChromiumCore_DefaultZoomLevel(AObj: TChromiumCore; var Result: double); extdecl;
begin
  {$define handleExceptionFuncName :='DefaultZoomLevel'}
  handleExceptionBegin
  Result := AObj.DefaultZoomLevel;
  handleExceptionEnd
end;

//property
function ChromiumCore_CanIncZoom(AObj: TChromiumCore): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='CanIncZoom'}
  handleExceptionBegin
  Result := AObj.CanIncZoom;
  handleExceptionEnd
end;

//property
function ChromiumCore_CanDecZoom(AObj: TChromiumCore): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='CanDecZoom'}
  handleExceptionBegin
  Result := AObj.CanDecZoom;
  handleExceptionEnd
end;

//property
function ChromiumCore_CanResetZoom(AObj: TChromiumCore): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='CanResetZoom'}
  handleExceptionBegin
  Result := AObj.CanResetZoom;
  handleExceptionEnd
end;

//property
procedure ChromiumCore_ZoomPct(AIsSet: LongBool; AObj: TChromiumCore; var AValue: double; var Result: double); extdecl;
begin
  {$define handleExceptionFuncName :='ZoomPct'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ZoomPct := AValue;
  end else
    Result := AObj.ZoomPct;
  handleExceptionEnd
end;

//property
function ChromiumCore_ZoomStep(AIsSet: LongBool; AObj: TChromiumCore; AValue: byte): byte; extdecl;
begin
  {$define handleExceptionFuncName :='ZoomStep'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ZoomStep := AValue;
  end else
    Result := AObj.ZoomStep;
  handleExceptionEnd
end;

//property
function ChromiumCore_WindowlessFrameRate(AIsSet: LongBool; AObj: TChromiumCore; AValue: integer): integer; extdecl;
begin
  {$define handleExceptionFuncName :='WindowlessFrameRate'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.WindowlessFrameRate := AValue;
  end else
    Result := AObj.WindowlessFrameRate;
  handleExceptionEnd
end;

//property
function ChromiumCore_CustomHeaderName(AIsSet: LongBool; AObj: TChromiumCore; AValue: PChar): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='CustomHeaderName'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.CustomHeaderName := AValue;
  end else
    Result := ToPChar(AObj.CustomHeaderName);
  handleExceptionEnd
end;

//property
function ChromiumCore_CustomHeaderValue(AIsSet: LongBool; AObj: TChromiumCore; AValue: PChar): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='CustomHeaderValue'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.CustomHeaderValue := AValue;
  end else
    Result := ToPChar(AObj.CustomHeaderValue);
  handleExceptionEnd
end;

//property
function ChromiumCore_DoNotTrack(AIsSet: LongBool; AObj: TChromiumCore; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='DoNotTrack'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DoNotTrack := AValue;
  end else
    Result := AObj.DoNotTrack;
  handleExceptionEnd
end;

//property
function ChromiumCore_SendReferrer(AIsSet: LongBool; AObj: TChromiumCore; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='SendReferrer'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.SendReferrer := AValue;
  end else
    Result := AObj.SendReferrer;
  handleExceptionEnd
end;

//property
function ChromiumCore_HyperlinkAuditing(AIsSet: LongBool; AObj: TChromiumCore; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='HyperlinkAuditing'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.HyperlinkAuditing := AValue;
  end else
    Result := AObj.HyperlinkAuditing;
  handleExceptionEnd
end;

//property
function ChromiumCore_AllowOutdatedPlugins(AIsSet: LongBool; AObj: TChromiumCore; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='AllowOutdatedPlugins'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.AllowOutdatedPlugins := AValue;
  end else
    Result := AObj.AllowOutdatedPlugins;
  handleExceptionEnd
end;

//property
function ChromiumCore_AlwaysAuthorizePlugins(AIsSet: LongBool; AObj: TChromiumCore; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='AlwaysAuthorizePlugins'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.AlwaysAuthorizePlugins := AValue;
  end else
    Result := AObj.AlwaysAuthorizePlugins;
  handleExceptionEnd
end;

//property
function ChromiumCore_AlwaysOpenPDFExternally(AIsSet: LongBool; AObj: TChromiumCore; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='AlwaysOpenPDFExternally'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.AlwaysOpenPDFExternally := AValue;
  end else
    Result := AObj.AlwaysOpenPDFExternally;
  handleExceptionEnd
end;

//property
function ChromiumCore_SpellChecking(AIsSet: LongBool; AObj: TChromiumCore; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='SpellChecking'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.SpellChecking := AValue;
  end else
    Result := AObj.SpellChecking;
  handleExceptionEnd
end;

//property
function ChromiumCore_SpellCheckerDicts(AIsSet: LongBool; AObj: TChromiumCore; AValue: PChar): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='SpellCheckerDicts'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.SpellCheckerDicts := AValue;
  end else
    Result := ToPChar(AObj.SpellCheckerDicts);
  handleExceptionEnd
end;

//property
function ChromiumCore_HasValidMainFrame(AObj: TChromiumCore): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='HasValidMainFrame'}
  handleExceptionBegin
  Result := AObj.HasValidMainFrame;
  handleExceptionEnd
end;

//property
function ChromiumCore_FrameCount(AObj: TChromiumCore): NativeUInt; extdecl;
begin
  {$define handleExceptionFuncName :='FrameCount'}
  handleExceptionBegin
  Result := AObj.FrameCount;
  handleExceptionEnd
end;

//property
function ChromiumCore_DragOperations(AIsSet: LongBool; AObj: TChromiumCore; AValue: TCefDragOperations): TCefDragOperations; extdecl;
begin
  {$define handleExceptionFuncName :='DragOperations'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DragOperations := AValue;
  end else
    Result := AObj.DragOperations;
  handleExceptionEnd
end;

//property
function ChromiumCore_AudioMuted(AIsSet: LongBool; AObj: TChromiumCore; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='AudioMuted'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.AudioMuted := AValue;
  end else
    Result := AObj.AudioMuted;
  handleExceptionEnd
end;

//property
function ChromiumCore_Fullscreen(AObj: TChromiumCore): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='Fullscreen'}
  handleExceptionBegin
  Result := AObj.Fullscreen;
  handleExceptionEnd
end;

//property
function ChromiumCore_SafeSearch(AIsSet: LongBool; AObj: TChromiumCore; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='SafeSearch'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.SafeSearch := AValue;
  end else
    Result := AObj.SafeSearch;
  handleExceptionEnd
end;

//property
function ChromiumCore_YouTubeRestrict(AIsSet: LongBool; AObj: TChromiumCore; AValue: integer): integer; extdecl;
begin
  {$define handleExceptionFuncName :='YouTubeRestrict'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.YouTubeRestrict := AValue;
  end else
    Result := AObj.YouTubeRestrict;
  handleExceptionEnd
end;

//property
function ChromiumCore_PrintingEnabled(AIsSet: LongBool; AObj: TChromiumCore; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='PrintingEnabled'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.PrintingEnabled := AValue;
  end else
    Result := AObj.PrintingEnabled;
  handleExceptionEnd
end;

//property
function ChromiumCore_AcceptLanguageList(AIsSet: LongBool; AObj: TChromiumCore; AValue: PChar): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='AcceptLanguageList'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.AcceptLanguageList := AValue;
  end else
    Result := ToPChar(AObj.AcceptLanguageList);
  handleExceptionEnd
end;

//property
function ChromiumCore_AcceptCookies(AIsSet: LongBool; AObj: TChromiumCore; AValue: TCefCookiePref): TCefCookiePref; extdecl;
begin
  {$define handleExceptionFuncName :='AcceptCookies'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.AcceptCookies := AValue;
  end else
    Result := AObj.AcceptCookies;
  handleExceptionEnd
end;

//property
function ChromiumCore_Block3rdPartyCookies(AIsSet: LongBool; AObj: TChromiumCore; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='Block3rdPartyCookies'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Block3rdPartyCookies := AValue;
  end else
    Result := AObj.Block3rdPartyCookies;
  handleExceptionEnd
end;

//property
function ChromiumCore_MultiBrowserMode(AIsSet: LongBool; AObj: TChromiumCore; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='MultiBrowserMode'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.MultiBrowserMode := AValue;
  end else
    Result := AObj.MultiBrowserMode;
  handleExceptionEnd
end;

//property
function ChromiumCore_DefaultWindowInfoExStyle(AIsSet: LongBool; AObj: TChromiumCore; AValue: DWORD): DWORD; extdecl;
begin
  {$define handleExceptionFuncName :='DefaultWindowInfoExStyle'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DefaultWindowInfoExStyle := AValue;
  end else
    Result := AObj.DefaultWindowInfoExStyle;
  handleExceptionEnd
end;

//property
function ChromiumCore_Offline(AIsSet: LongBool; AObj: TChromiumCore; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='Offline'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Offline := AValue;
  end else
    Result := AObj.Offline;
  handleExceptionEnd
end;

//property
function ChromiumCore_QuicAllowed(AIsSet: LongBool; AObj: TChromiumCore; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='QuicAllowed'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.QuicAllowed := AValue;
  end else
    Result := AObj.QuicAllowed;
  handleExceptionEnd
end;

//property
function ChromiumCore_JavascriptEnabled(AIsSet: LongBool; AObj: TChromiumCore; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='JavascriptEnabled'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.JavascriptEnabled := AValue;
  end else
    Result := AObj.JavascriptEnabled;
  handleExceptionEnd
end;

//property
function ChromiumCore_LoadImagesAutomatically(AIsSet: LongBool; AObj: TChromiumCore; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='LoadImagesAutomatically'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.LoadImagesAutomatically := AValue;
  end else
    Result := AObj.LoadImagesAutomatically;
  handleExceptionEnd
end;

//property
function ChromiumCore_BatterySaverModeState(AIsSet: LongBool; AObj: TChromiumCore; AValue: TCefBatterySaverModeState): TCefBatterySaverModeState; extdecl;
begin
  {$define handleExceptionFuncName :='BatterySaverModeState'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.BatterySaverModeState := AValue;
  end else
    Result := AObj.BatterySaverModeState;
  handleExceptionEnd
end;

//property
function ChromiumCore_HighEfficiencyModeState(AIsSet: LongBool; AObj: TChromiumCore; AValue: TCefHighEfficiencyModeState): TCefHighEfficiencyModeState; extdecl;
begin
  {$define handleExceptionFuncName :='HighEfficiencyModeState'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.HighEfficiencyModeState := AValue;
  end else
    Result := AObj.HighEfficiencyModeState;
  handleExceptionEnd
end;

//property
function ChromiumCore_CanFocus(AObj: TChromiumCore): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='CanFocus'}
  handleExceptionBegin
  Result := AObj.CanFocus;
  handleExceptionEnd
end;

//property
function ChromiumCore_EnableFocusDelayMs(AIsSet: LongBool; AObj: TChromiumCore; AValue: uint32): uint32; extdecl;
begin
  {$define handleExceptionFuncName :='EnableFocusDelayMs'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.EnableFocusDelayMs := AValue;
  end else
    Result := AObj.EnableFocusDelayMs;
  handleExceptionEnd
end;

//property
function ChromiumCore_WebRTCIPHandlingPolicy(AIsSet: LongBool; AObj: TChromiumCore; AValue: TCefWebRTCHandlingPolicy): TCefWebRTCHandlingPolicy; extdecl;
begin
  {$define handleExceptionFuncName :='WebRTCIPHandlingPolicy'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.WebRTCIPHandlingPolicy := AValue;
  end else
    Result := AObj.WebRTCIPHandlingPolicy;
  handleExceptionEnd
end;

//property
function ChromiumCore_WebRTCMultipleRoutes(AIsSet: LongBool; AObj: TChromiumCore; AValue: TCefState): TCefState; extdecl;
begin
  {$define handleExceptionFuncName :='WebRTCMultipleRoutes'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.WebRTCMultipleRoutes := AValue;
  end else
    Result := AObj.WebRTCMultipleRoutes;
  handleExceptionEnd
end;

//property
function ChromiumCore_WebRTCNonproxiedUDP(AIsSet: LongBool; AObj: TChromiumCore; AValue: TCefState): TCefState; extdecl;
begin
  {$define handleExceptionFuncName :='WebRTCNonproxiedUDP'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.WebRTCNonproxiedUDP := AValue;
  end else
    Result := AObj.WebRTCNonproxiedUDP;
  handleExceptionEnd
end;

//property
function ChromiumCore_ProxyType(AIsSet: LongBool; AObj: TChromiumCore; AValue: integer): integer; extdecl;
begin
  {$define handleExceptionFuncName :='ProxyType'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ProxyType := AValue;
  end else
    Result := AObj.ProxyType;
  handleExceptionEnd
end;

//property
function ChromiumCore_ProxyScheme(AIsSet: LongBool; AObj: TChromiumCore; AValue: TCefProxyScheme): TCefProxyScheme; extdecl;
begin
  {$define handleExceptionFuncName :='ProxyScheme'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ProxyScheme := AValue;
  end else
    Result := AObj.ProxyScheme;
  handleExceptionEnd
end;

//property
function ChromiumCore_ProxyServer(AIsSet: LongBool; AObj: TChromiumCore; AValue: PChar): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='ProxyServer'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ProxyServer := AValue;
  end else
    Result := ToPChar(AObj.ProxyServer);
  handleExceptionEnd
end;

//property
function ChromiumCore_ProxyPort(AIsSet: LongBool; AObj: TChromiumCore; AValue: integer): integer; extdecl;
begin
  {$define handleExceptionFuncName :='ProxyPort'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ProxyPort := AValue;
  end else
    Result := AObj.ProxyPort;
  handleExceptionEnd
end;

//property
function ChromiumCore_ProxyUsername(AIsSet: LongBool; AObj: TChromiumCore; AValue: PChar): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='ProxyUsername'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ProxyUsername := AValue;
  end else
    Result := ToPChar(AObj.ProxyUsername);
  handleExceptionEnd
end;

//property
function ChromiumCore_ProxyPassword(AIsSet: LongBool; AObj: TChromiumCore; AValue: PChar): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='ProxyPassword'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ProxyPassword := AValue;
  end else
    Result := ToPChar(AObj.ProxyPassword);
  handleExceptionEnd
end;

//property
function ChromiumCore_ProxyScriptURL(AIsSet: LongBool; AObj: TChromiumCore; AValue: PChar): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='ProxyScriptURL'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ProxyScriptURL := AValue;
  end else
    Result := ToPChar(AObj.ProxyScriptURL);
  handleExceptionEnd
end;

//property
function ChromiumCore_ProxyByPassList(AIsSet: LongBool; AObj: TChromiumCore; AValue: PChar): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='ProxyByPassList'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ProxyByPassList := AValue;
  end else
    Result := ToPChar(AObj.ProxyByPassList);
  handleExceptionEnd
end;

//property
function ChromiumCore_MaxConnectionsPerProxy(AIsSet: LongBool; AObj: TChromiumCore; AValue: integer): integer; extdecl;
begin
  {$define handleExceptionFuncName :='MaxConnectionsPerProxy'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.MaxConnectionsPerProxy := AValue;
  end else
    Result := AObj.MaxConnectionsPerProxy;
  handleExceptionEnd
end;

//function
function ChromiumCore_CreateClientHandler(AObj: TChromiumCore; aIsOSR: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='CreateClientHandler'}
  handleExceptionBegin
  Result := AObj.CreateClientHandler(aIsOSR);
  handleExceptionEnd
end;

//function
function ChromiumCore_CreateClientHandler1(AObj: TChromiumCore; var aClient: ICefClient; aIsOSR: LongBool): LongBool; extdecl;
var
  RetaClient: ICefClient;
begin
  {$define handleExceptionFuncName :='CreateClientHandler1'}
  handleExceptionBegin
  RetaClient := aClient;
  Result := AObj.CreateClientHandler(RetaClient, aIsOSR);
  aClient := RetaClient;
  handleExceptionEnd
end;

//function
function ChromiumCore_TryCloseBrowser(AObj: TChromiumCore): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='TryCloseBrowser'}
  handleExceptionBegin
  Result := AObj.TryCloseBrowser();
  handleExceptionEnd
end;

//function
function ChromiumCore_SelectBrowser(AObj: TChromiumCore; aID: integer): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='SelectBrowser'}
  handleExceptionBegin
  Result := AObj.SelectBrowser(aID);
  handleExceptionEnd
end;

//function
function ChromiumCore_IndexOfBrowserID(AObj: TChromiumCore; aID: integer): integer; extdecl;
begin
  {$define handleExceptionFuncName :='IndexOfBrowserID'}
  handleExceptionBegin
  Result := AObj.IndexOfBrowserID(aID);
  handleExceptionEnd
end;

//function
function ChromiumCore_ShareRequestContext(AObj: TChromiumCore; var aContext: ICefRequestContext; const aHandler: ICefRequestContextHandler): LongBool; extdecl;
var
  RetaContext: ICefRequestContext;
begin
  {$define handleExceptionFuncName :='ShareRequestContext'}
  handleExceptionBegin
  RetaContext := aContext;
  Result := AObj.ShareRequestContext(RetaContext, aHandler);
  aContext := RetaContext;
  handleExceptionEnd
end;

//function
function ChromiumCore_SetNewBrowserParent(AObj: TChromiumCore; aNewParentHwnd: HWND): LongBool; extdecl;
begin
{$IFDEF MSWINDOWS}
  {$define handleExceptionFuncName :='SetNewBrowserParent'}
  handleExceptionBegin
  Result := AObj.SetNewBrowserParent(aNewParentHwnd);
  handleExceptionEnd
{$ENDIF}
end;

//function
function ChromiumCore_CreateBrowserByWindowHandle(AObj: TChromiumCore; aParentHandle: TCefWindowHandle; var aParentRect: TRect; const aWindowName: PChar; const aContext: ICefRequestContext; const aExtraInfo: ICefDictionaryValue; aForceAsPopup: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='CreateBrowserByWindowHandle'}
  handleExceptionBegin
  Result := AObj.CreateBrowser(aParentHandle, aParentRect, aWindowName, aContext, aExtraInfo, aForceAsPopup);
  handleExceptionEnd
end;

//function
function ChromiumCore_CreateBrowserByBrowserViewComponent(AObj: TChromiumCore; const aURL: PChar; const aBrowserViewComp: TCEFBrowserViewComponent; const aContext: ICefRequestContext; const aExtraInfo: ICefDictionaryValue): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='CreateBrowserByBrowserViewComponent'}
  handleExceptionBegin
  Result := AObj.CreateBrowser(aURL, aBrowserViewComp, aContext, aExtraInfo);
  handleExceptionEnd
end;

//function
function ChromiumCore_ClearCertificateExceptions(AObj: TChromiumCore; aClearImmediately: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='ClearCertificateExceptions'}
  handleExceptionBegin
  Result := AObj.ClearCertificateExceptions(aClearImmediately);
  handleExceptionEnd
end;

//function
function ChromiumCore_ClearHttpAuthCredentials(AObj: TChromiumCore; aClearImmediately: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='ClearHttpAuthCredentials'}
  handleExceptionBegin
  Result := AObj.ClearHttpAuthCredentials(aClearImmediately);
  handleExceptionEnd
end;

//function
function ChromiumCore_CloseAllConnections(AObj: TChromiumCore; aCloseImmediately: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='CloseAllConnections'}
  handleExceptionBegin
  Result := AObj.CloseAllConnections(aCloseImmediately);
  handleExceptionEnd
end;

//function
function ChromiumCore_GetFrameNames(AObj: TChromiumCore; var aFrameNames: TStrings): LongBool; extdecl;
var
  RetaFrameNames: TStrings;
begin
  {$define handleExceptionFuncName :='GetFrameNames'}
  handleExceptionBegin
  RetaFrameNames := TStringList.Create();
  Result := AObj.GetFrameNames(RetaFrameNames);
  aFrameNames := RetaFrameNames;
  handleExceptionEnd
end;

//function
function ChromiumCore_GetFrameIdentifiers(AObj: TChromiumCore; var aFrameCount: NativeUInt; var aFrameIdentifierArray: TCefFrameIdentifierArray): LongBool; extdecl;
var
  RetaFrameCount: NativeUInt;
  RetaFrameIdentifierArray: TCefFrameIdentifierArray;
begin
  {$define handleExceptionFuncName :='GetFrameIdentifiers'}
  handleExceptionBegin
  RetaFrameCount := aFrameCount;
  RetaFrameIdentifierArray := aFrameIdentifierArray;
  Result := AObj.GetFrameIdentifiers(RetaFrameCount, RetaFrameIdentifierArray);
  aFrameCount := RetaFrameCount;
  aFrameIdentifierArray := RetaFrameIdentifierArray;
  handleExceptionEnd
end;

//function
function ChromiumCore_IsSameBrowser(AObj: TChromiumCore; const aBrowser: ICefBrowser): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='IsSameBrowser'}
  handleExceptionBegin
  Result := AObj.IsSameBrowser(aBrowser);
  handleExceptionEnd
end;

//function
function ChromiumCore_ExecuteTaskOnCefThread(AObj: TChromiumCore; aCefThreadId: TCefThreadId; aTaskID: uint32; var aDelayMs: Int64): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='ExecuteTaskOnCefThread'}
  handleExceptionBegin
  Result := AObj.ExecuteTaskOnCefThread(aCefThreadId, aTaskID, aDelayMs);
  handleExceptionEnd
end;

//function
function ChromiumCore_DeleteCookies(AObj: TChromiumCore; const url: PChar; const cookieName: PChar; aDeleteImmediately: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='DeleteCookies'}
  handleExceptionBegin
  Result := AObj.DeleteCookies(url, cookieName, aDeleteImmediately);
  handleExceptionEnd
end;

//function
function ChromiumCore_VisitAllCookies(AObj: TChromiumCore; aID: integer): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='VisitAllCookies'}
  handleExceptionBegin
  Result := AObj.VisitAllCookies(aID);
  handleExceptionEnd
end;

//function
function ChromiumCore_VisitURLCookies(AObj: TChromiumCore; const url: PChar; includeHttpOnly: LongBool; aID: integer): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='VisitURLCookies'}
  handleExceptionBegin
  Result := AObj.VisitURLCookies(url, includeHttpOnly, aID);
  handleExceptionEnd
end;

//function
function ChromiumCore_FlushCookieStore(AObj: TChromiumCore; aFlushImmediately: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='FlushCookieStore'}
  handleExceptionBegin
  Result := AObj.FlushCookieStore(aFlushImmediately);
  handleExceptionEnd
end;

//function
function ChromiumCore_SendDevToolsMessage(AObj: TChromiumCore; const message: PChar): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='SendDevToolsMessage'}
  handleExceptionBegin
  Result := AObj.SendDevToolsMessage(message);
  handleExceptionEnd
end;

//function
function ChromiumCore_ExecuteDevToolsMethod(AObj: TChromiumCore; messageid: integer; const method: PChar; const params: ICefDictionaryValue): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='ExecuteDevToolsMethod'}
  handleExceptionBegin
  Result := AObj.ExecuteDevToolsMethod(messageid, method, params);
  handleExceptionEnd
end;

//function
procedure ChromiumCore_AddDevToolsMessageObserver(AObj: TChromiumCore; const observer: ICefDevToolsMessageObserver; var Result: ICefRegistration); extdecl;
begin
  {$define handleExceptionFuncName :='AddDevToolsMessageObserver'}
  handleExceptionBegin
  Result := AObj.AddDevToolsMessageObserver(observer);
  handleExceptionEnd
end;

//function
procedure ChromiumCore_CreateUrlRequest(AObj: TChromiumCore; const request: ICefRequest; const client: ICefUrlrequestClient; const aFrameName: PChar; var Result: ICefUrlRequest); extdecl;
begin
  {$define handleExceptionFuncName :='CreateUrlRequest'}
  handleExceptionBegin
  Result := AObj.CreateUrlRequest(request, client, aFrameName);
  handleExceptionEnd
end;

//function
procedure ChromiumCore_CreateUrlRequest1(AObj: TChromiumCore; const request: ICefRequest; const client: ICefUrlrequestClient; const aFrame: ICefFrame; var Result: ICefUrlRequest); extdecl;
begin
  {$define handleExceptionFuncName :='CreateUrlRequest1'}
  handleExceptionBegin
  Result := AObj.CreateUrlRequest(request, client, aFrame);
  handleExceptionEnd
end;

//function
procedure ChromiumCore_CreateUrlRequest2(AObj: TChromiumCore; const request: ICefRequest; const client: ICefUrlrequestClient; var aFrameIdentifier: int64; var Result: ICefUrlRequest); extdecl;
begin
  {$define handleExceptionFuncName :='CreateUrlRequest2'}
  handleExceptionBegin
  Result := AObj.CreateUrlRequest(request, client, aFrameIdentifier);
  handleExceptionEnd
end;

//function
procedure ChromiumCore_AddObserver(AObj: TChromiumCore; const observer: ICefMediaObserver; var Result: ICefRegistration); extdecl;
begin
  {$define handleExceptionFuncName :='AddObserver'}
  handleExceptionBegin
  Result := AObj.AddObserver(observer);
  handleExceptionEnd
end;

//function
procedure ChromiumCore_GetSource(AObj: TChromiumCore; const urn: PChar; var Result: ICefMediaSource); extdecl;
begin
  {$define handleExceptionFuncName :='GetSource'}
  handleExceptionBegin
  Result := AObj.GetSource(urn);
  handleExceptionEnd
end;

//function
function ChromiumCore_LoadExtension(AObj: TChromiumCore; const rootdirectory: PChar; const manifest: ICefDictionaryValue; const handler: ICefExtensionHandler; const requestContext: ICefRequestContext): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='LoadExtension'}
  handleExceptionBegin
  Result := AObj.LoadExtension(rootdirectory, manifest, handler, requestContext);
  handleExceptionEnd
end;

//function
function ChromiumCore_DidLoadExtension(AObj: TChromiumCore; const extensionid: PChar): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='DidLoadExtension'}
  handleExceptionBegin
  Result := AObj.DidLoadExtension(extensionid);
  handleExceptionEnd
end;

//function
function ChromiumCore_HasExtension(AObj: TChromiumCore; const extensionid: PChar): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='HasExtension'}
  handleExceptionBegin
  Result := AObj.HasExtension(extensionid);
  handleExceptionEnd
end;

//function
function ChromiumCore_GetExtensions(AObj: TChromiumCore; const extensionids: TStringList): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='GetExtensions'}
  handleExceptionBegin
  Result := AObj.GetExtensions(extensionids);
  handleExceptionEnd
end;

//function
procedure ChromiumCore_GetExtension(AObj: TChromiumCore; const extensionid: PChar; var Result: ICefExtension); extdecl;
begin
  {$define handleExceptionFuncName :='GetExtension'}
  handleExceptionBegin
  Result := AObj.GetExtension(extensionid);
  handleExceptionEnd
end;

//function
procedure ChromiumCore_GetWebsiteSetting(AObj: TChromiumCore; const requestingurl,  toplevelurl: PChar; contenttype: TCefContentSettingTypes; var Result: ICefValue); extdecl;
begin
  {$define handleExceptionFuncName :='GetWebsiteSetting'}
  handleExceptionBegin
  Result := AObj.GetWebsiteSetting(requestingurl,  toplevelurl, contenttype);
  handleExceptionEnd
end;

//function
function ChromiumCore_GetContentSetting(AObj: TChromiumCore; const requestingurl,  toplevelurl: PChar; contenttype: TCefContentSettingTypes): TCefContentSettingValues; extdecl;
begin
  {$define handleExceptionFuncName :='GetContentSetting'}
  handleExceptionBegin
  Result := AObj.GetContentSetting(requestingurl,  toplevelurl, contenttype);
  handleExceptionEnd
end;

//procedure
procedure ChromiumCore_CloseBrowser(AObj: TChromiumCore; aForceClose: LongBool); extdecl;
begin
  {$define handleExceptionFuncName :='CloseBrowser'}
  handleExceptionBegin
  AObj.CloseBrowser(aForceClose);
  handleExceptionEnd
end;

//procedure
procedure ChromiumCore_CloseAllBrowsers(AObj: TChromiumCore); extdecl;
begin
  {$define handleExceptionFuncName :='CloseAllBrowsers'}
  handleExceptionBegin
  AObj.CloseAllBrowsers();
  handleExceptionEnd
end;

//procedure
procedure ChromiumCore_InitializeDragAndDrop(AObj: TChromiumCore; const aDropTargetWnd: HWND); extdecl;
begin
{$IFDEF MSWINDOWS}
  {$define handleExceptionFuncName :='InitializeDragAndDrop'}
  handleExceptionBegin
  AObj.InitializeDragAndDrop(aDropTargetWnd);
  handleExceptionEnd
{$ENDIF}
end;

//procedure
procedure ChromiumCore_ShutdownDragAndDrop(AObj: TChromiumCore); extdecl;
begin
{$IFDEF MSWINDOWS}
  {$define handleExceptionFuncName :='ShutdownDragAndDrop'}
  handleExceptionBegin
  AObj.ShutdownDragAndDrop();
  handleExceptionEnd
{$ENDIF}
end;

//procedure
procedure ChromiumCore_LoadURL(AObj: TChromiumCore; const aURL: PChar; const aFrameName: PChar); extdecl;
begin
  {$define handleExceptionFuncName :='LoadURL'}
  handleExceptionBegin
  AObj.LoadURL(aURL, aFrameName);
  handleExceptionEnd
end;

//procedure
procedure ChromiumCore_LoadURL1(AObj: TChromiumCore; const aURL: PChar; const aFrame: ICefFrame); extdecl;
begin
  {$define handleExceptionFuncName :='LoadURL1'}
  handleExceptionBegin
  AObj.LoadURL(aURL, aFrame);
  handleExceptionEnd
end;

//procedure
procedure ChromiumCore_LoadURL2(AObj: TChromiumCore; const aURL: PChar; var aFrameIdentifier: int64); extdecl;
begin
  {$define handleExceptionFuncName :='LoadURL2'}
  handleExceptionBegin
  AObj.LoadURL(aURL, aFrameIdentifier);
  handleExceptionEnd
end;

//procedure
procedure ChromiumCore_LoadString(AObj: TChromiumCore; const aHTML: PChar; const aFrameName: PChar); extdecl;
begin
  {$define handleExceptionFuncName :='LoadString'}
  handleExceptionBegin
  AObj.LoadString(aHTML, aFrameName);
  handleExceptionEnd
end;

//procedure
procedure ChromiumCore_LoadString1(AObj: TChromiumCore; const aHTML: PChar; const aFrame: ICefFrame); extdecl;
begin
  {$define handleExceptionFuncName :='LoadString1'}
  handleExceptionBegin
  AObj.LoadString(aHTML, aFrame);
  handleExceptionEnd
end;

//procedure
procedure ChromiumCore_LoadString2(AObj: TChromiumCore; const aHTML: PChar; var aFrameIdentifier: int64); extdecl;
begin
  {$define handleExceptionFuncName :='LoadString2'}
  handleExceptionBegin
  AObj.LoadString(aHTML, aFrameIdentifier);
  handleExceptionEnd
end;

//procedure
procedure ChromiumCore_LoadResource(AObj: TChromiumCore; const aStream: TCustomMemoryStream; const aMimeType,  aCharset: PChar; const aFrameName: PChar); extdecl;
begin
  {$define handleExceptionFuncName :='LoadResource'}
  handleExceptionBegin
  AObj.LoadResource(aStream, aMimeType,  aCharset, aFrameName);
  handleExceptionEnd
end;

//procedure
procedure ChromiumCore_LoadResource1(AObj: TChromiumCore; const aStream: TCustomMemoryStream; const aMimeType,  aCharset: PChar; const aFrame: ICefFrame); extdecl;
begin
  {$define handleExceptionFuncName :='LoadResource1'}
  handleExceptionBegin
  AObj.LoadResource(aStream, aMimeType,  aCharset, aFrame);
  handleExceptionEnd
end;

//procedure
procedure ChromiumCore_LoadResource2(AObj: TChromiumCore; const aStream: TCustomMemoryStream; const aMimeType,  aCharset: PChar; var aFrameIdentifier: int64); extdecl;
begin
  {$define handleExceptionFuncName :='LoadResource2'}
  handleExceptionBegin
  AObj.LoadResource(aStream, aMimeType,  aCharset, aFrameIdentifier);
  handleExceptionEnd
end;

//procedure
procedure ChromiumCore_LoadRequest(AObj: TChromiumCore; const aRequest: ICefRequest); extdecl;
begin
  {$define handleExceptionFuncName :='LoadRequest'}
  handleExceptionBegin
  AObj.LoadRequest(aRequest);
  handleExceptionEnd
end;

//procedure
procedure ChromiumCore_GoBack(AObj: TChromiumCore); extdecl;
begin
  {$define handleExceptionFuncName :='GoBack'}
  handleExceptionBegin
  AObj.GoBack();
  handleExceptionEnd
end;

//procedure
procedure ChromiumCore_GoForward(AObj: TChromiumCore); extdecl;
begin
  {$define handleExceptionFuncName :='GoForward'}
  handleExceptionBegin
  AObj.GoForward();
  handleExceptionEnd
end;

//procedure
procedure ChromiumCore_Reload(AObj: TChromiumCore); extdecl;
begin
  {$define handleExceptionFuncName :='Reload'}
  handleExceptionBegin
  AObj.Reload();
  handleExceptionEnd
end;

//procedure
procedure ChromiumCore_ReloadIgnoreCache(AObj: TChromiumCore); extdecl;
begin
  {$define handleExceptionFuncName :='ReloadIgnoreCache'}
  handleExceptionBegin
  AObj.ReloadIgnoreCache();
  handleExceptionEnd
end;

//procedure
procedure ChromiumCore_StopLoad(AObj: TChromiumCore); extdecl;
begin
  {$define handleExceptionFuncName :='StopLoad'}
  handleExceptionBegin
  AObj.StopLoad();
  handleExceptionEnd
end;

//procedure
procedure ChromiumCore_StartDownload(AObj: TChromiumCore; const aURL: PChar); extdecl;
begin
  {$define handleExceptionFuncName :='StartDownload'}
  handleExceptionBegin
  AObj.StartDownload(aURL);
  handleExceptionEnd
end;

//procedure
procedure ChromiumCore_DownloadImage(AObj: TChromiumCore; const imageUrl: PChar; isFavicon: LongBool; maxImageSize: uint32; bypassCache: LongBool); extdecl;
begin
  {$define handleExceptionFuncName :='DownloadImage'}
  handleExceptionBegin
  AObj.DownloadImage(imageUrl, isFavicon, maxImageSize, bypassCache);
  handleExceptionEnd
end;

//procedure
procedure ChromiumCore_SimulateMouseWheel(AObj: TChromiumCore; aDeltaX,  aDeltaY: integer); extdecl;
begin
  {$define handleExceptionFuncName :='SimulateMouseWheel'}
  handleExceptionBegin
  AObj.SimulateMouseWheel(aDeltaX,  aDeltaY);
  handleExceptionEnd
end;

//procedure
procedure ChromiumCore_RetrieveHTML(AObj: TChromiumCore; const aFrameName: PChar); extdecl;
begin
  {$define handleExceptionFuncName :='RetrieveHTML'}
  handleExceptionBegin
  AObj.RetrieveHTML(aFrameName);
  handleExceptionEnd
end;

//procedure
procedure ChromiumCore_RetrieveHTML1(AObj: TChromiumCore; const aFrame: ICefFrame); extdecl;
begin
  {$define handleExceptionFuncName :='RetrieveHTML1'}
  handleExceptionBegin
  AObj.RetrieveHTML(aFrame);
  handleExceptionEnd
end;

//procedure
procedure ChromiumCore_RetrieveHTML2(AObj: TChromiumCore; var aFrameIdentifier: int64); extdecl;
begin
  {$define handleExceptionFuncName :='RetrieveHTML2'}
  handleExceptionBegin
  AObj.RetrieveHTML(aFrameIdentifier);
  handleExceptionEnd
end;

//procedure
procedure ChromiumCore_RetrieveText(AObj: TChromiumCore; const aFrameName: PChar); extdecl;
begin
  {$define handleExceptionFuncName :='RetrieveText'}
  handleExceptionBegin
  AObj.RetrieveText(aFrameName);
  handleExceptionEnd
end;

//procedure
procedure ChromiumCore_RetrieveText1(AObj: TChromiumCore; const aFrame: ICefFrame); extdecl;
begin
  {$define handleExceptionFuncName :='RetrieveText1'}
  handleExceptionBegin
  AObj.RetrieveText(aFrame);
  handleExceptionEnd
end;

//procedure
procedure ChromiumCore_RetrieveText2(AObj: TChromiumCore; var aFrameIdentifier: int64); extdecl;
begin
  {$define handleExceptionFuncName :='RetrieveText2'}
  handleExceptionBegin
  AObj.RetrieveText(aFrameIdentifier);
  handleExceptionEnd
end;

//procedure
procedure ChromiumCore_GetNavigationEntries(AObj: TChromiumCore; currentOnly: LongBool); extdecl;
begin
  {$define handleExceptionFuncName :='GetNavigationEntries'}
  handleExceptionBegin
  AObj.GetNavigationEntries(currentOnly);
  handleExceptionEnd
end;

//procedure
procedure ChromiumCore_ExecuteJavaScript(AObj: TChromiumCore; const aCode,  aScriptURL: PChar; const aFrameName: PChar; aStartLine: integer); extdecl;
begin
  {$define handleExceptionFuncName :='ExecuteJavaScript'}
  handleExceptionBegin
  AObj.ExecuteJavaScript(aCode,  aScriptURL, aFrameName, aStartLine);
  handleExceptionEnd
end;

//procedure
procedure ChromiumCore_ExecuteJavaScript1(AObj: TChromiumCore; const aCode,  aScriptURL: PChar; const aFrame: ICefFrame; aStartLine: integer); extdecl;
begin
  {$define handleExceptionFuncName :='ExecuteJavaScript1'}
  handleExceptionBegin
  AObj.ExecuteJavaScript(aCode,  aScriptURL, aFrame, aStartLine);
  handleExceptionEnd
end;

//procedure
procedure ChromiumCore_ExecuteJavaScript2(AObj: TChromiumCore; const aCode,  aScriptURL: PChar; var aFrameIdentifier: int64; aStartLine: integer); extdecl;
begin
  {$define handleExceptionFuncName :='ExecuteJavaScript2'}
  handleExceptionBegin
  AObj.ExecuteJavaScript(aCode,  aScriptURL, aFrameIdentifier, aStartLine);
  handleExceptionEnd
end;

//procedure
procedure ChromiumCore_UpdatePreferences(AObj: TChromiumCore); extdecl;
begin
  {$define handleExceptionFuncName :='UpdatePreferences'}
  handleExceptionBegin
  AObj.UpdatePreferences();
  handleExceptionEnd
end;

//procedure
procedure ChromiumCore_SavePreferences(AObj: TChromiumCore; const aFileName: PChar); extdecl;
begin
  {$define handleExceptionFuncName :='SavePreferences'}
  handleExceptionBegin
  AObj.SavePreferences(aFileName);
  handleExceptionEnd
end;

//procedure
procedure ChromiumCore_ResolveHost(AObj: TChromiumCore; const aURL: PChar); extdecl;
begin
  {$define handleExceptionFuncName :='ResolveHost'}
  handleExceptionBegin
  AObj.ResolveHost(aURL);
  handleExceptionEnd
end;

//procedure
procedure ChromiumCore_SetUserAgentOverride(AObj: TChromiumCore; const aUserAgent: PChar; const aAcceptLanguage: PChar; const aPlatform: PChar); extdecl;
begin
  {$define handleExceptionFuncName :='SetUserAgentOverride'}
  handleExceptionBegin
  AObj.SetUserAgentOverride(aUserAgent, aAcceptLanguage, aPlatform);
  handleExceptionEnd
end;

//procedure
procedure ChromiumCore_ClearDataForOrigin(AObj: TChromiumCore; const aOrigin: PChar; aStorageTypes: TCefClearDataStorageTypes); extdecl;
begin
  {$define handleExceptionFuncName :='ClearDataForOrigin'}
  handleExceptionBegin
  AObj.ClearDataForOrigin(aOrigin, aStorageTypes);
  handleExceptionEnd
end;

//procedure
procedure ChromiumCore_ClearCache(AObj: TChromiumCore); extdecl;
begin
  {$define handleExceptionFuncName :='ClearCache'}
  handleExceptionBegin
  AObj.ClearCache();
  handleExceptionEnd
end;

//procedure
procedure ChromiumCore_ToggleAudioMuted(AObj: TChromiumCore); extdecl;
begin
  {$define handleExceptionFuncName :='ToggleAudioMuted'}
  handleExceptionBegin
  AObj.ToggleAudioMuted();
  handleExceptionEnd
end;

//procedure
procedure ChromiumCore_ShowDevTools(AObj: TChromiumCore; var inspectElementAt: TPoint; aWindowInfo: PEngWindowInfoPtr); extdecl;
var
  InaWindowInfo: TCefWindowInfo;
begin
  {$define handleExceptionFuncName :='ShowDevTools'}
  handleExceptionBegin
  InaWindowInfo := EngWindowInfoToPas(aWindowInfo^);
  AObj.ShowDevTools(inspectElementAt, @InaWindowInfo);
  handleExceptionEnd
end;

//procedure
procedure ChromiumCore_CloseDevTools(AObj: TChromiumCore); extdecl;
begin
  {$define handleExceptionFuncName :='CloseDevTools'}
  handleExceptionBegin
  AObj.CloseDevTools();
  handleExceptionEnd
end;

//procedure
procedure ChromiumCore_CloseDevTools1(AObj: TChromiumCore; const aDevToolsWnd: TCefWindowHandle); extdecl;
begin
  {$define handleExceptionFuncName :='CloseDevTools1'}
  handleExceptionBegin
  AObj.CloseDevTools(aDevToolsWnd);
  handleExceptionEnd
end;

//procedure
procedure ChromiumCore_Find(AObj: TChromiumCore; const aSearchText: PChar; aForward,  aMatchCase,  aFindNext: LongBool); extdecl;
begin
  {$define handleExceptionFuncName :='Find'}
  handleExceptionBegin
  AObj.Find(aSearchText, aForward,  aMatchCase,  aFindNext);
  handleExceptionEnd
end;

//procedure
procedure ChromiumCore_StopFinding(AObj: TChromiumCore; aClearSelection: LongBool); extdecl;
begin
  {$define handleExceptionFuncName :='StopFinding'}
  handleExceptionBegin
  AObj.StopFinding(aClearSelection);
  handleExceptionEnd
end;

//procedure
procedure ChromiumCore_Print(AObj: TChromiumCore); extdecl;
begin
  {$define handleExceptionFuncName :='Print'}
  handleExceptionBegin
  AObj.Print();
  handleExceptionEnd
end;

//procedure
procedure ChromiumCore_PrintToPDF(AObj: TChromiumCore; const aFilePath: PChar); extdecl;
begin
  {$define handleExceptionFuncName :='PrintToPDF'}
  handleExceptionBegin
  AObj.PrintToPDF(aFilePath);
  handleExceptionEnd
end;

//procedure
procedure ChromiumCore_ClipboardCopy(AObj: TChromiumCore); extdecl;
begin
  {$define handleExceptionFuncName :='ClipboardCopy'}
  handleExceptionBegin
  AObj.ClipboardCopy();
  handleExceptionEnd
end;

//procedure
procedure ChromiumCore_ClipboardPaste(AObj: TChromiumCore); extdecl;
begin
  {$define handleExceptionFuncName :='ClipboardPaste'}
  handleExceptionBegin
  AObj.ClipboardPaste();
  handleExceptionEnd
end;

//procedure
procedure ChromiumCore_ClipboardCut(AObj: TChromiumCore); extdecl;
begin
  {$define handleExceptionFuncName :='ClipboardCut'}
  handleExceptionBegin
  AObj.ClipboardCut();
  handleExceptionEnd
end;

//procedure
procedure ChromiumCore_ClipboardUndo(AObj: TChromiumCore); extdecl;
begin
  {$define handleExceptionFuncName :='ClipboardUndo'}
  handleExceptionBegin
  AObj.ClipboardUndo();
  handleExceptionEnd
end;

//procedure
procedure ChromiumCore_ClipboardRedo(AObj: TChromiumCore); extdecl;
begin
  {$define handleExceptionFuncName :='ClipboardRedo'}
  handleExceptionBegin
  AObj.ClipboardRedo();
  handleExceptionEnd
end;

//procedure
procedure ChromiumCore_ClipboardDel(AObj: TChromiumCore); extdecl;
begin
  {$define handleExceptionFuncName :='ClipboardDel'}
  handleExceptionBegin
  AObj.ClipboardDel();
  handleExceptionEnd
end;

//procedure
procedure ChromiumCore_SelectAll(AObj: TChromiumCore); extdecl;
begin
  {$define handleExceptionFuncName :='SelectAll'}
  handleExceptionBegin
  AObj.SelectAll();
  handleExceptionEnd
end;

//procedure
procedure ChromiumCore_IncZoomStep(AObj: TChromiumCore); extdecl;
begin
  {$define handleExceptionFuncName :='IncZoomStep'}
  handleExceptionBegin
  AObj.IncZoomStep();
  handleExceptionEnd
end;

//procedure
procedure ChromiumCore_DecZoomStep(AObj: TChromiumCore); extdecl;
begin
  {$define handleExceptionFuncName :='DecZoomStep'}
  handleExceptionBegin
  AObj.DecZoomStep();
  handleExceptionEnd
end;

//procedure
procedure ChromiumCore_IncZoomPct(AObj: TChromiumCore); extdecl;
begin
  {$define handleExceptionFuncName :='IncZoomPct'}
  handleExceptionBegin
  AObj.IncZoomPct();
  handleExceptionEnd
end;

//procedure
procedure ChromiumCore_DecZoomPct(AObj: TChromiumCore); extdecl;
begin
  {$define handleExceptionFuncName :='DecZoomPct'}
  handleExceptionBegin
  AObj.DecZoomPct();
  handleExceptionEnd
end;

//procedure
procedure ChromiumCore_ResetZoomStep(AObj: TChromiumCore); extdecl;
begin
  {$define handleExceptionFuncName :='ResetZoomStep'}
  handleExceptionBegin
  AObj.ResetZoomStep();
  handleExceptionEnd
end;

//procedure
procedure ChromiumCore_ResetZoomLevel(AObj: TChromiumCore); extdecl;
begin
  {$define handleExceptionFuncName :='ResetZoomLevel'}
  handleExceptionBegin
  AObj.ResetZoomLevel();
  handleExceptionEnd
end;

//procedure
procedure ChromiumCore_ResetZoomPct(AObj: TChromiumCore); extdecl;
begin
  {$define handleExceptionFuncName :='ResetZoomPct'}
  handleExceptionBegin
  AObj.ResetZoomPct();
  handleExceptionEnd
end;

//procedure
procedure ChromiumCore_ReadZoom(AObj: TChromiumCore); extdecl;
begin
  {$define handleExceptionFuncName :='ReadZoom'}
  handleExceptionBegin
  AObj.ReadZoom();
  handleExceptionEnd
end;

//procedure
procedure ChromiumCore_IncZoomCommand(AObj: TChromiumCore); extdecl;
begin
  {$define handleExceptionFuncName :='IncZoomCommand'}
  handleExceptionBegin
  AObj.IncZoomCommand();
  handleExceptionEnd
end;

//procedure
procedure ChromiumCore_DecZoomCommand(AObj: TChromiumCore); extdecl;
begin
  {$define handleExceptionFuncName :='DecZoomCommand'}
  handleExceptionBegin
  AObj.DecZoomCommand();
  handleExceptionEnd
end;

//procedure
procedure ChromiumCore_ResetZoomCommand(AObj: TChromiumCore); extdecl;
begin
  {$define handleExceptionFuncName :='ResetZoomCommand'}
  handleExceptionBegin
  AObj.ResetZoomCommand();
  handleExceptionEnd
end;

//procedure
procedure ChromiumCore_WasResized(AObj: TChromiumCore); extdecl;
begin
  {$define handleExceptionFuncName :='WasResized'}
  handleExceptionBegin
  AObj.WasResized();
  handleExceptionEnd
end;

//procedure
procedure ChromiumCore_WasHidden(AObj: TChromiumCore; hidden: LongBool); extdecl;
begin
  {$define handleExceptionFuncName :='WasHidden'}
  handleExceptionBegin
  AObj.WasHidden(hidden);
  handleExceptionEnd
end;

//procedure
procedure ChromiumCore_NotifyScreenInfoChanged(AObj: TChromiumCore); extdecl;
begin
  {$define handleExceptionFuncName :='NotifyScreenInfoChanged'}
  handleExceptionBegin
  AObj.NotifyScreenInfoChanged();
  handleExceptionEnd
end;

//procedure
procedure ChromiumCore_NotifyMoveOrResizeStarted(AObj: TChromiumCore); extdecl;
begin
  {$define handleExceptionFuncName :='NotifyMoveOrResizeStarted'}
  handleExceptionBegin
  AObj.NotifyMoveOrResizeStarted();
  handleExceptionEnd
end;

//procedure
procedure ChromiumCore_Invalidate(AObj: TChromiumCore; type_: TCefPaintElementType); extdecl;
begin
  {$define handleExceptionFuncName :='Invalidate'}
  handleExceptionBegin
  AObj.Invalidate(type_);
  handleExceptionEnd
end;

//procedure
procedure ChromiumCore_ExitFullscreen(AObj: TChromiumCore; willcauseresize: LongBool); extdecl;
begin
  {$define handleExceptionFuncName :='ExitFullscreen'}
  handleExceptionBegin
  AObj.ExitFullscreen(willcauseresize);
  handleExceptionEnd
end;

//procedure
procedure ChromiumCore_SendExternalBeginFrame(AObj: TChromiumCore); extdecl;
begin
  {$define handleExceptionFuncName :='SendExternalBeginFrame'}
  handleExceptionBegin
  AObj.SendExternalBeginFrame();
  handleExceptionEnd
end;

//procedure
procedure ChromiumCore_SendKeyEvent(AObj: TChromiumCore; const event: PCefKeyEvent); extdecl;
begin
  {$define handleExceptionFuncName :='SendKeyEvent'}
  handleExceptionBegin
  AObj.SendKeyEvent(event);
  handleExceptionEnd
end;

//procedure
procedure ChromiumCore_SendMouseClickEvent(AObj: TChromiumCore; const event: PCefMouseEvent; type_: TCefMouseButtonType; mouseUp: LongBool; clickCount: Integer); extdecl;
begin
  {$define handleExceptionFuncName :='SendMouseClickEvent'}
  handleExceptionBegin
  AObj.SendMouseClickEvent(event, type_, mouseUp, clickCount);
  handleExceptionEnd
end;

//procedure
procedure ChromiumCore_SendMouseMoveEvent(AObj: TChromiumCore; const event: PCefMouseEvent; mouseLeave: LongBool); extdecl;
begin
  {$define handleExceptionFuncName :='SendMouseMoveEvent'}
  handleExceptionBegin
  AObj.SendMouseMoveEvent(event, mouseLeave);
  handleExceptionEnd
end;

//procedure
procedure ChromiumCore_SendMouseWheelEvent(AObj: TChromiumCore; const event: PCefMouseEvent; deltaX,  deltaY: Integer); extdecl;
begin
  {$define handleExceptionFuncName :='SendMouseWheelEvent'}
  handleExceptionBegin
  AObj.SendMouseWheelEvent(event, deltaX,  deltaY);
  handleExceptionEnd
end;

//procedure
procedure ChromiumCore_SendTouchEvent(AObj: TChromiumCore; const event: PCefTouchEvent); extdecl;
begin
  {$define handleExceptionFuncName :='SendTouchEvent'}
  handleExceptionBegin
  AObj.SendTouchEvent(event);
  handleExceptionEnd
end;

//procedure
procedure ChromiumCore_SendCaptureLostEvent(AObj: TChromiumCore); extdecl;
begin
  {$define handleExceptionFuncName :='SendCaptureLostEvent'}
  handleExceptionBegin
  AObj.SendCaptureLostEvent();
  handleExceptionEnd
end;

//procedure
procedure ChromiumCore_SendProcessMessage(AObj: TChromiumCore; targetProcess: TCefProcessId; const procMessage: ICefProcessMessage; const aFrameName: PChar); extdecl;
begin
  {$define handleExceptionFuncName :='SendProcessMessage'}
  handleExceptionBegin
  AObj.SendProcessMessage(targetProcess, procMessage, aFrameName);
  handleExceptionEnd
end;

//procedure
procedure ChromiumCore_SendProcessMessage1(AObj: TChromiumCore; targetProcess: TCefProcessId; const procMessage: ICefProcessMessage; const aFrame: ICefFrame); extdecl;
begin
  {$define handleExceptionFuncName :='SendProcessMessage1'}
  handleExceptionBegin
  AObj.SendProcessMessage(targetProcess, procMessage, aFrame);
  handleExceptionEnd
end;

//procedure
procedure ChromiumCore_SendProcessMessage2(AObj: TChromiumCore; targetProcess: TCefProcessId; const procMessage: ICefProcessMessage; var aFrameIdentifier: int64); extdecl;
begin
  {$define handleExceptionFuncName :='SendProcessMessage2'}
  handleExceptionBegin
  AObj.SendProcessMessage(targetProcess, procMessage, aFrameIdentifier);
  handleExceptionEnd
end;

//procedure
procedure ChromiumCore_SetFocus(AObj: TChromiumCore; focus: LongBool); extdecl;
begin
  {$define handleExceptionFuncName :='SetFocus'}
  handleExceptionBegin
  AObj.SetFocus(focus);
  handleExceptionEnd
end;

//procedure
procedure ChromiumCore_SetAccessibilityState(AObj: TChromiumCore; accessibilityState: TCefState); extdecl;
begin
  {$define handleExceptionFuncName :='SetAccessibilityState'}
  handleExceptionBegin
  AObj.SetAccessibilityState(accessibilityState);
  handleExceptionEnd
end;

//procedure
procedure ChromiumCore_DragTargetDragEnter(AObj: TChromiumCore; const dragData: ICefDragData; const event: PCefMouseEvent; allowedOps: TCefDragOperations); extdecl;
begin
  {$define handleExceptionFuncName :='DragTargetDragEnter'}
  handleExceptionBegin
  AObj.DragTargetDragEnter(dragData, event, allowedOps);
  handleExceptionEnd
end;

//procedure
procedure ChromiumCore_DragTargetDragOver(AObj: TChromiumCore; const event: PCefMouseEvent; allowedOps: TCefDragOperations); extdecl;
begin
  {$define handleExceptionFuncName :='DragTargetDragOver'}
  handleExceptionBegin
  AObj.DragTargetDragOver(event, allowedOps);
  handleExceptionEnd
end;

//procedure
procedure ChromiumCore_DragTargetDragLeave(AObj: TChromiumCore); extdecl;
begin
  {$define handleExceptionFuncName :='DragTargetDragLeave'}
  handleExceptionBegin
  AObj.DragTargetDragLeave();
  handleExceptionEnd
end;

//procedure
procedure ChromiumCore_DragTargetDrop(AObj: TChromiumCore; const event: PCefMouseEvent); extdecl;
begin
  {$define handleExceptionFuncName :='DragTargetDrop'}
  handleExceptionBegin
  AObj.DragTargetDrop(event);
  handleExceptionEnd
end;

//procedure
procedure ChromiumCore_DragSourceEndedAt(AObj: TChromiumCore; x,  y: Integer; op: TCefDragOperation); extdecl;
begin
  {$define handleExceptionFuncName :='DragSourceEndedAt'}
  handleExceptionBegin
  AObj.DragSourceEndedAt(x,  y, op);
  handleExceptionEnd
end;

//procedure
procedure ChromiumCore_DragSourceSystemDragEnded(AObj: TChromiumCore); extdecl;
begin
  {$define handleExceptionFuncName :='DragSourceSystemDragEnded'}
  handleExceptionBegin
  AObj.DragSourceSystemDragEnded();
  handleExceptionEnd
end;

//procedure
procedure ChromiumCore_IMECommitText(AObj: TChromiumCore; const text: PChar; const replacementrange: PCefRange; relativecursorpos: integer); extdecl;
begin
  {$define handleExceptionFuncName :='IMECommitText'}
  handleExceptionBegin
  AObj.IMECommitText(text, replacementrange, relativecursorpos);
  handleExceptionEnd
end;

//procedure
procedure ChromiumCore_IMEFinishComposingText(AObj: TChromiumCore; keepselection: LongBool); extdecl;
begin
  {$define handleExceptionFuncName :='IMEFinishComposingText'}
  handleExceptionBegin
  AObj.IMEFinishComposingText(keepselection);
  handleExceptionEnd
end;

//procedure
procedure ChromiumCore_IMECancelComposition(AObj: TChromiumCore); extdecl;
begin
  {$define handleExceptionFuncName :='IMECancelComposition'}
  handleExceptionBegin
  AObj.IMECancelComposition();
  handleExceptionEnd
end;

//procedure
procedure ChromiumCore_ReplaceMisspelling(AObj: TChromiumCore; const aWord: PChar); extdecl;
begin
  {$define handleExceptionFuncName :='ReplaceMisspelling'}
  handleExceptionBegin
  AObj.ReplaceMisspelling(aWord);
  handleExceptionEnd
end;

//procedure
procedure ChromiumCore_AddWordToDictionary(AObj: TChromiumCore; const aWord: PChar); extdecl;
begin
  {$define handleExceptionFuncName :='AddWordToDictionary'}
  handleExceptionBegin
  AObj.AddWordToDictionary(aWord);
  handleExceptionEnd
end;

//procedure
procedure ChromiumCore_UpdateBrowserSize(AObj: TChromiumCore; aLeft,  aTop,  aWidth,  aHeight: integer); extdecl;
begin
{$IFDEF LINUX}
  {$define handleExceptionFuncName :='UpdateBrowserSize'}
  handleExceptionBegin
  AObj.UpdateBrowserSize(aLeft,  aTop,  aWidth,  aHeight);
  handleExceptionEnd
{$ENDIF}
end;

//procedure
procedure ChromiumCore_UpdateXWindowVisibility(AObj: TChromiumCore; aVisible: LongBool); extdecl;
begin
{$IFDEF LINUX}
  {$define handleExceptionFuncName :='UpdateXWindowVisibility'}
  handleExceptionBegin
  AObj.UpdateXWindowVisibility(aVisible);
  handleExceptionEnd
{$ENDIF}
end;

//procedure
procedure ChromiumCore_NotifyCurrentSinks(AObj: TChromiumCore); extdecl;
begin
  {$define handleExceptionFuncName :='NotifyCurrentSinks'}
  handleExceptionBegin
  AObj.NotifyCurrentSinks();
  handleExceptionEnd
end;

//procedure
procedure ChromiumCore_NotifyCurrentRoutes(AObj: TChromiumCore); extdecl;
begin
  {$define handleExceptionFuncName :='NotifyCurrentRoutes'}
  handleExceptionBegin
  AObj.NotifyCurrentRoutes();
  handleExceptionEnd
end;

//procedure
procedure ChromiumCore_CreateRoute(AObj: TChromiumCore; const source: ICefMediaSource; const sink: ICefMediaSink); extdecl;
begin
  {$define handleExceptionFuncName :='CreateRoute'}
  handleExceptionBegin
  AObj.CreateRoute(source, sink);
  handleExceptionEnd
end;

//procedure
procedure ChromiumCore_GetDeviceInfo(AObj: TChromiumCore; const aMediaSink: ICefMediaSink); extdecl;
begin
  {$define handleExceptionFuncName :='GetDeviceInfo'}
  handleExceptionBegin
  AObj.GetDeviceInfo(aMediaSink);
  handleExceptionEnd
end;

//procedure
procedure ChromiumCore_SetWebsiteSetting(AObj: TChromiumCore; const requestingurl,  toplevelurl: PChar; contenttype: TCefContentSettingTypes; const value: ICefValue); extdecl;
begin
  {$define handleExceptionFuncName :='SetWebsiteSetting'}
  handleExceptionBegin
  AObj.SetWebsiteSetting(requestingurl,  toplevelurl, contenttype, value);
  handleExceptionEnd
end;

//procedure
procedure ChromiumCore_SetContentSetting(AObj: TChromiumCore; const requestingurl,  toplevelurl: PChar; contenttype: TCefContentSettingTypes; value: TCefContentSettingValues); extdecl;
begin
  {$define handleExceptionFuncName :='SetContentSetting'}
  handleExceptionBegin
  AObj.SetContentSetting(requestingurl,  toplevelurl, contenttype, value);
  handleExceptionEnd
end;

//property event
procedure ChromiumCore_SetOnTextResultAvailable(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := ChromiumCore_OnTextResultAvailable}
  {$DEFINE EventName := OnTextResultAvailable}
  CEFEventMethodCode
end;

//property event
procedure ChromiumCore_SetOnPdfPrintFinished(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := ChromiumCore_OnPdfPrintFinished}
  {$DEFINE EventName := OnPdfPrintFinished}
  CEFEventMethodCode
end;

//property event
procedure ChromiumCore_SetOnPrefsAvailable(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := ChromiumCore_OnPrefsAvailable}
  {$DEFINE EventName := OnPrefsAvailable}
  CEFEventMethodCode
end;

//property event
procedure ChromiumCore_SetOnPrefsUpdated(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := ChromiumCore_OnPrefsUpdated}
  {$DEFINE EventName := OnPrefsUpdated}
  CEFEventMethodCode
end;

//property event
procedure ChromiumCore_SetOnCookiesDeleted(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := ChromiumCore_OnCookiesDeleted}
  {$DEFINE EventName := OnCookiesDeleted}
  CEFEventMethodCode
end;

//property event
procedure ChromiumCore_SetOnResolvedHostAvailable(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := ChromiumCore_OnResolvedHostAvailable}
  {$DEFINE EventName := OnResolvedHostAvailable}
  CEFEventMethodCode
end;

//property event
procedure ChromiumCore_SetOnNavigationVisitorResultAvailable(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := ChromiumCore_OnNavigationVisitorResultAvailable}
  {$DEFINE EventName := OnNavigationVisitorResultAvailable}
  CEFEventMethodCode
end;

//property event
procedure ChromiumCore_SetOnDownloadImageFinished(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := ChromiumCore_OnDownloadImageFinished}
  {$DEFINE EventName := OnDownloadImageFinished}
  CEFEventMethodCode
end;

//property event
procedure ChromiumCore_SetOnCookiesFlushed(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := ChromiumCore_OnCookiesFlushed}
  {$DEFINE EventName := OnCookiesFlushed}
  CEFEventMethodCode
end;

//property event
procedure ChromiumCore_SetOnCertificateExceptionsCleared(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := ChromiumCore_OnCertificateExceptionsCleared}
  {$DEFINE EventName := OnCertificateExceptionsCleared}
  CEFEventMethodCode
end;

//property event
procedure ChromiumCore_SetOnHttpAuthCredentialsCleared(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := ChromiumCore_OnHttpAuthCredentialsCleared}
  {$DEFINE EventName := OnHttpAuthCredentialsCleared}
  CEFEventMethodCode
end;

//property event
procedure ChromiumCore_SetOnAllConnectionsClosed(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := ChromiumCore_OnAllConnectionsClosed}
  {$DEFINE EventName := OnAllConnectionsClosed}
  CEFEventMethodCode
end;

//property event
procedure ChromiumCore_SetOnExecuteTaskOnCefThread(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := ChromiumCore_OnExecuteTaskOnCefThread}
  {$DEFINE EventName := OnExecuteTaskOnCefThread}
  CEFEventMethodCode
end;

//property event
procedure ChromiumCore_SetOnCookiesVisited(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := ChromiumCore_OnCookiesVisited}
  {$DEFINE EventName := OnCookiesVisited}
  CEFEventMethodCode
end;

//property event
procedure ChromiumCore_SetOnCookieVisitorDestroyed(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := ChromiumCore_OnCookieVisitorDestroyed}
  {$DEFINE EventName := OnCookieVisitorDestroyed}
  CEFEventMethodCode
end;

//property event
procedure ChromiumCore_SetOnCookieSet(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := ChromiumCore_OnCookieSet}
  {$DEFINE EventName := OnCookieSet}
  CEFEventMethodCode
end;

//property event
procedure ChromiumCore_SetOnZoomPctAvailable(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := ChromiumCore_OnZoomPctAvailable}
  {$DEFINE EventName := OnZoomPctAvailable}
  CEFEventMethodCode
end;

//property event
procedure ChromiumCore_SetOnMediaRouteCreateFinished(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := ChromiumCore_OnMediaRouteCreateFinished}
  {$DEFINE EventName := OnMediaRouteCreateFinished}
  CEFEventMethodCode
end;

//property event
procedure ChromiumCore_SetOnMediaSinkDeviceInfo(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := ChromiumCore_OnMediaSinkDeviceInfo}
  {$DEFINE EventName := OnMediaSinkDeviceInfo}
  CEFEventMethodCode
end;

//property event
procedure ChromiumCore_SetOnCanFocus(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := ChromiumCore_OnCanFocus}
  {$DEFINE EventName := OnCanFocus}
  CEFEventMethodCode
end;

//property event
procedure ChromiumCore_SetOnBrowserCompMsg(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
{$IFDEF MSWINDOWS}
  {$DEFINE EventMethodName := ChromiumCore_OnBrowserCompMsg}
  {$DEFINE EventName := OnBrowserCompMsg}
  CEFEventMethodCode
{$ENDIF}
end;

//property event
procedure ChromiumCore_SetOnWidgetCompMsg(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
{$IFDEF MSWINDOWS}
  {$DEFINE EventMethodName := ChromiumCore_OnWidgetCompMsg}
  {$DEFINE EventName := OnWidgetCompMsg}
  CEFEventMethodCode
{$ENDIF}
end;

//property event
procedure ChromiumCore_SetOnRenderCompMsg(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
{$IFDEF MSWINDOWS}
  {$DEFINE EventMethodName := ChromiumCore_OnRenderCompMsg}
  {$DEFINE EventName := OnRenderCompMsg}
  CEFEventMethodCode
{$ENDIF}
end;

//property event
procedure ChromiumCore_SetOnProcessMessageReceived(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := ChromiumCore_OnProcessMessageReceived}
  {$DEFINE EventName := OnProcessMessageReceived}
  CEFEventMethodCode
end;

//property event
procedure ChromiumCore_SetOnLoadStart(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := ChromiumCore_OnLoadStart}
  {$DEFINE EventName := OnLoadStart}
  CEFEventMethodCode
end;

//property event
procedure ChromiumCore_SetOnLoadEnd(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := ChromiumCore_OnLoadEnd}
  {$DEFINE EventName := OnLoadEnd}
  CEFEventMethodCode
end;

//property event
procedure ChromiumCore_SetOnLoadError(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := ChromiumCore_OnLoadError}
  {$DEFINE EventName := OnLoadError}
  CEFEventMethodCode
end;

//property event
procedure ChromiumCore_SetOnLoadingStateChange(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := ChromiumCore_OnLoadingStateChange}
  {$DEFINE EventName := OnLoadingStateChange}
  CEFEventMethodCode
end;

//property event
procedure ChromiumCore_SetOnTakeFocus(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := ChromiumCore_OnTakeFocus}
  {$DEFINE EventName := OnTakeFocus}
  CEFEventMethodCode
end;

//property event
procedure ChromiumCore_SetOnSetFocus(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := ChromiumCore_OnSetFocus}
  {$DEFINE EventName := OnSetFocus}
  CEFEventMethodCode
end;

//property event
procedure ChromiumCore_SetOnGotFocus(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := ChromiumCore_OnGotFocus}
  {$DEFINE EventName := OnGotFocus}
  CEFEventMethodCode
end;

//property event
procedure ChromiumCore_SetOnBeforeContextMenu(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := ChromiumCore_OnBeforeContextMenu}
  {$DEFINE EventName := OnBeforeContextMenu}
  CEFEventMethodCode
end;

//property event
procedure ChromiumCore_SetOnRunContextMenu(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := ChromiumCore_OnRunContextMenu}
  {$DEFINE EventName := OnRunContextMenu}
  CEFEventMethodCode
end;

//property event
procedure ChromiumCore_SetOnContextMenuCommand(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := ChromiumCore_OnContextMenuCommand}
  {$DEFINE EventName := OnContextMenuCommand}
  CEFEventMethodCode
end;

//property event
procedure ChromiumCore_SetOnContextMenuDismissed(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := ChromiumCore_OnContextMenuDismissed}
  {$DEFINE EventName := OnContextMenuDismissed}
  CEFEventMethodCode
end;

//property event
procedure ChromiumCore_SetOnRunQuickMenu(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := ChromiumCore_OnRunQuickMenu}
  {$DEFINE EventName := OnRunQuickMenu}
  CEFEventMethodCode
end;

//property event
procedure ChromiumCore_SetOnQuickMenuCommand(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := ChromiumCore_OnQuickMenuCommand}
  {$DEFINE EventName := OnQuickMenuCommand}
  CEFEventMethodCode
end;

//property event
procedure ChromiumCore_SetOnQuickMenuDismissed(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := ChromiumCore_OnQuickMenuDismissed}
  {$DEFINE EventName := OnQuickMenuDismissed}
  CEFEventMethodCode
end;

//property event
procedure ChromiumCore_SetOnPreKeyEvent(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := ChromiumCore_OnPreKeyEvent}
  {$DEFINE EventName := OnPreKeyEvent}
  CEFEventMethodCode
end;

//property event
procedure ChromiumCore_SetOnKeyEvent(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := ChromiumCore_OnKeyEvent}
  {$DEFINE EventName := OnKeyEvent}
  CEFEventMethodCode
end;

//property event
procedure ChromiumCore_SetOnAddressChange(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := ChromiumCore_OnAddressChange}
  {$DEFINE EventName := OnAddressChange}
  CEFEventMethodCode
end;

//property event
procedure ChromiumCore_SetOnTitleChange(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := ChromiumCore_OnTitleChange}
  {$DEFINE EventName := OnTitleChange}
  CEFEventMethodCode
end;

//property event
procedure ChromiumCore_SetOnFavIconUrlChange(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := ChromiumCore_OnFavIconUrlChange}
  {$DEFINE EventName := OnFavIconUrlChange}
  CEFEventMethodCode
end;

//property event
procedure ChromiumCore_SetOnFullScreenModeChange(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := ChromiumCore_OnFullScreenModeChange}
  {$DEFINE EventName := OnFullScreenModeChange}
  CEFEventMethodCode
end;

//property event
procedure ChromiumCore_SetOnTooltip(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := ChromiumCore_OnTooltip}
  {$DEFINE EventName := OnTooltip}
  CEFEventMethodCode
end;

//property event
procedure ChromiumCore_SetOnStatusMessage(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := ChromiumCore_OnStatusMessage}
  {$DEFINE EventName := OnStatusMessage}
  CEFEventMethodCode
end;

//property event
procedure ChromiumCore_SetOnConsoleMessage(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := ChromiumCore_OnConsoleMessage}
  {$DEFINE EventName := OnConsoleMessage}
  CEFEventMethodCode
end;

//property event
procedure ChromiumCore_SetOnAutoResize(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := ChromiumCore_OnAutoResize}
  {$DEFINE EventName := OnAutoResize}
  CEFEventMethodCode
end;

//property event
procedure ChromiumCore_SetOnLoadingProgressChange(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := ChromiumCore_OnLoadingProgressChange}
  {$DEFINE EventName := OnLoadingProgressChange}
  CEFEventMethodCode
end;

//property event
procedure ChromiumCore_SetOnCursorChange(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := ChromiumCore_OnCursorChange}
  {$DEFINE EventName := OnCursorChange}
  CEFEventMethodCode
end;

//property event
procedure ChromiumCore_SetOnMediaAccessChange(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := ChromiumCore_OnMediaAccessChange}
  {$DEFINE EventName := OnMediaAccessChange}
  CEFEventMethodCode
end;

//property event
procedure ChromiumCore_SetOnCanDownload(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := ChromiumCore_OnCanDownload}
  {$DEFINE EventName := OnCanDownload}
  CEFEventMethodCode
end;

//property event
procedure ChromiumCore_SetOnBeforeDownload(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := ChromiumCore_OnBeforeDownload}
  {$DEFINE EventName := OnBeforeDownload}
  CEFEventMethodCode
end;

//property event
procedure ChromiumCore_SetOnDownloadUpdated(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := ChromiumCore_OnDownloadUpdated}
  {$DEFINE EventName := OnDownloadUpdated}
  CEFEventMethodCode
end;

//property event
procedure ChromiumCore_SetOnJsdialog(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := ChromiumCore_OnJsdialog}
  {$DEFINE EventName := OnJsdialog}
  CEFEventMethodCode
end;

//property event
procedure ChromiumCore_SetOnBeforeUnloadDialog(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := ChromiumCore_OnBeforeUnloadDialog}
  {$DEFINE EventName := OnBeforeUnloadDialog}
  CEFEventMethodCode
end;

//property event
procedure ChromiumCore_SetOnResetDialogState(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := ChromiumCore_OnResetDialogState}
  {$DEFINE EventName := OnResetDialogState}
  CEFEventMethodCode
end;

//property event
procedure ChromiumCore_SetOnDialogClosed(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := ChromiumCore_OnDialogClosed}
  {$DEFINE EventName := OnDialogClosed}
  CEFEventMethodCode
end;

//property event
procedure ChromiumCore_SetOnBeforePopup(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := ChromiumCore_OnBeforePopup}
  {$DEFINE EventName := OnBeforePopup}
  CEFEventMethodCode
end;

//property event
procedure ChromiumCore_SetOnAfterCreated(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := ChromiumCore_OnAfterCreated}
  {$DEFINE EventName := OnAfterCreated}
  CEFEventMethodCode
end;

//property event
procedure ChromiumCore_SetOnBeforeClose(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := ChromiumCore_OnBeforeClose}
  {$DEFINE EventName := OnBeforeClose}
  CEFEventMethodCode
end;

//property event
procedure ChromiumCore_SetOnClose(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := ChromiumCore_OnClose}
  {$DEFINE EventName := OnClose}
  CEFEventMethodCode
end;

//property event
procedure ChromiumCore_SetOnBeforeBrowse(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := ChromiumCore_OnBeforeBrowse}
  {$DEFINE EventName := OnBeforeBrowse}
  CEFEventMethodCode
end;

//property event
procedure ChromiumCore_SetOnOpenUrlFromTab(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := ChromiumCore_OnOpenUrlFromTab}
  {$DEFINE EventName := OnOpenUrlFromTab}
  CEFEventMethodCode
end;

//property event
procedure ChromiumCore_SetOnGetAuthCredentials(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := ChromiumCore_OnGetAuthCredentials}
  {$DEFINE EventName := OnGetAuthCredentials}
  CEFEventMethodCode
end;

//property event
procedure ChromiumCore_SetOnCertificateError(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := ChromiumCore_OnCertificateError}
  {$DEFINE EventName := OnCertificateError}
  CEFEventMethodCode
end;

//property event
procedure ChromiumCore_SetOnSelectClientCertificate(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := ChromiumCore_OnSelectClientCertificate}
  {$DEFINE EventName := OnSelectClientCertificate}
  CEFEventMethodCode
end;

//property event
procedure ChromiumCore_SetOnRenderViewReady(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := ChromiumCore_OnRenderViewReady}
  {$DEFINE EventName := OnRenderViewReady}
  CEFEventMethodCode
end;

//property event
procedure ChromiumCore_SetOnRenderProcessTerminated(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := ChromiumCore_OnRenderProcessTerminated}
  {$DEFINE EventName := OnRenderProcessTerminated}
  CEFEventMethodCode
end;

//property event
procedure ChromiumCore_SetOnGetResourceRequestHandler_ReqHdlr(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := ChromiumCore_OnGetResourceRequestHandler_ReqHdlr}
  {$DEFINE EventName := OnGetResourceRequestHandler_ReqHdlr}
  CEFEventMethodCode
end;

//property event
procedure ChromiumCore_SetOnDocumentAvailableInMainFrame(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := ChromiumCore_OnDocumentAvailableInMainFrame}
  {$DEFINE EventName := OnDocumentAvailableInMainFrame}
  CEFEventMethodCode
end;

//property event
procedure ChromiumCore_SetOnBeforeResourceLoad(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := ChromiumCore_OnBeforeResourceLoad}
  {$DEFINE EventName := OnBeforeResourceLoad}
  CEFEventMethodCode
end;

//property event
procedure ChromiumCore_SetOnGetResourceHandler(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := ChromiumCore_OnGetResourceHandler}
  {$DEFINE EventName := OnGetResourceHandler}
  CEFEventMethodCode
end;

//property event
procedure ChromiumCore_SetOnResourceRedirect(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := ChromiumCore_OnResourceRedirect}
  {$DEFINE EventName := OnResourceRedirect}
  CEFEventMethodCode
end;

//property event
procedure ChromiumCore_SetOnResourceResponse(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := ChromiumCore_OnResourceResponse}
  {$DEFINE EventName := OnResourceResponse}
  CEFEventMethodCode
end;

//property event
procedure ChromiumCore_SetOnGetResourceResponseFilter(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := ChromiumCore_OnGetResourceResponseFilter}
  {$DEFINE EventName := OnGetResourceResponseFilter}
  CEFEventMethodCode
end;

//property event
procedure ChromiumCore_SetOnResourceLoadComplete(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := ChromiumCore_OnResourceLoadComplete}
  {$DEFINE EventName := OnResourceLoadComplete}
  CEFEventMethodCode
end;

//property event
procedure ChromiumCore_SetOnProtocolExecution(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := ChromiumCore_OnProtocolExecution}
  {$DEFINE EventName := OnProtocolExecution}
  CEFEventMethodCode
end;

//property event
procedure ChromiumCore_SetOnCanSendCookie(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := ChromiumCore_OnCanSendCookie}
  {$DEFINE EventName := OnCanSendCookie}
  CEFEventMethodCode
end;

//property event
procedure ChromiumCore_SetOnCanSaveCookie(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := ChromiumCore_OnCanSaveCookie}
  {$DEFINE EventName := OnCanSaveCookie}
  CEFEventMethodCode
end;

//property event
procedure ChromiumCore_SetOnFileDialog(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := ChromiumCore_OnFileDialog}
  {$DEFINE EventName := OnFileDialog}
  CEFEventMethodCode
end;

//property event
procedure ChromiumCore_SetOnGetAccessibilityHandler(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := ChromiumCore_OnGetAccessibilityHandler}
  {$DEFINE EventName := OnGetAccessibilityHandler}
  CEFEventMethodCode
end;

//property event
procedure ChromiumCore_SetOnGetRootScreenRect(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := ChromiumCore_OnGetRootScreenRect}
  {$DEFINE EventName := OnGetRootScreenRect}
  CEFEventMethodCode
end;

//property event
procedure ChromiumCore_SetOnGetViewRect(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := ChromiumCore_OnGetViewRect}
  {$DEFINE EventName := OnGetViewRect}
  CEFEventMethodCode
end;

//property event
procedure ChromiumCore_SetOnGetScreenPoint(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := ChromiumCore_OnGetScreenPoint}
  {$DEFINE EventName := OnGetScreenPoint}
  CEFEventMethodCode
end;

//property event
procedure ChromiumCore_SetOnGetScreenInfo(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := ChromiumCore_OnGetScreenInfo}
  {$DEFINE EventName := OnGetScreenInfo}
  CEFEventMethodCode
end;

//property event
procedure ChromiumCore_SetOnPopupShow(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := ChromiumCore_OnPopupShow}
  {$DEFINE EventName := OnPopupShow}
  CEFEventMethodCode
end;

//property event
procedure ChromiumCore_SetOnPopupSize(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := ChromiumCore_OnPopupSize}
  {$DEFINE EventName := OnPopupSize}
  CEFEventMethodCode
end;

//property event
procedure ChromiumCore_SetOnPaint(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := ChromiumCore_OnPaint}
  {$DEFINE EventName := OnPaint}
  CEFEventMethodCode
end;

//property event
procedure ChromiumCore_SetOnAcceleratedPaint(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := ChromiumCore_OnAcceleratedPaint}
  {$DEFINE EventName := OnAcceleratedPaint}
  CEFEventMethodCode
end;

//property event
procedure ChromiumCore_SetOnGetTouchHandleSize(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := ChromiumCore_OnGetTouchHandleSize}
  {$DEFINE EventName := OnGetTouchHandleSize}
  CEFEventMethodCode
end;

//property event
procedure ChromiumCore_SetOnTouchHandleStateChanged(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := ChromiumCore_OnTouchHandleStateChanged}
  {$DEFINE EventName := OnTouchHandleStateChanged}
  CEFEventMethodCode
end;

//property event
procedure ChromiumCore_SetOnStartDragging(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := ChromiumCore_OnStartDragging}
  {$DEFINE EventName := OnStartDragging}
  CEFEventMethodCode
end;

//property event
procedure ChromiumCore_SetOnUpdateDragCursor(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := ChromiumCore_OnUpdateDragCursor}
  {$DEFINE EventName := OnUpdateDragCursor}
  CEFEventMethodCode
end;

//property event
procedure ChromiumCore_SetOnScrollOffsetChanged(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := ChromiumCore_OnScrollOffsetChanged}
  {$DEFINE EventName := OnScrollOffsetChanged}
  CEFEventMethodCode
end;

//property event
procedure ChromiumCore_SetOnIMECompositionRangeChanged(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := ChromiumCore_OnIMECompositionRangeChanged}
  {$DEFINE EventName := OnIMECompositionRangeChanged}
  CEFEventMethodCode
end;

//property event
procedure ChromiumCore_SetOnTextSelectionChanged(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := ChromiumCore_OnTextSelectionChanged}
  {$DEFINE EventName := OnTextSelectionChanged}
  CEFEventMethodCode
end;

//property event
procedure ChromiumCore_SetOnVirtualKeyboardRequested(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := ChromiumCore_OnVirtualKeyboardRequested}
  {$DEFINE EventName := OnVirtualKeyboardRequested}
  CEFEventMethodCode
end;

//property event
procedure ChromiumCore_SetOnDragEnter(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := ChromiumCore_OnDragEnter}
  {$DEFINE EventName := OnDragEnter}
  CEFEventMethodCode
end;

//property event
procedure ChromiumCore_SetOnDraggableRegionsChanged(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := ChromiumCore_OnDraggableRegionsChanged}
  {$DEFINE EventName := OnDraggableRegionsChanged}
  CEFEventMethodCode
end;

//property event
procedure ChromiumCore_SetOnFindResult(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := ChromiumCore_OnFindResult}
  {$DEFINE EventName := OnFindResult}
  CEFEventMethodCode
end;

//property event
procedure ChromiumCore_SetOnRequestContextInitialized(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := ChromiumCore_OnRequestContextInitialized}
  {$DEFINE EventName := OnRequestContextInitialized}
  CEFEventMethodCode
end;

//property event
procedure ChromiumCore_SetOnGetResourceRequestHandler_ReqCtxHdlr(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := ChromiumCore_OnGetResourceRequestHandler_ReqCtxHdlr}
  {$DEFINE EventName := OnGetResourceRequestHandler_ReqCtxHdlr}
  CEFEventMethodCode
end;

//property event
procedure ChromiumCore_SetOnSinks(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := ChromiumCore_OnSinks}
  {$DEFINE EventName := OnSinks}
  CEFEventMethodCode
end;

//property event
procedure ChromiumCore_SetOnRoutes(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := ChromiumCore_OnRoutes}
  {$DEFINE EventName := OnRoutes}
  CEFEventMethodCode
end;

//property event
procedure ChromiumCore_SetOnRouteStateChanged(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := ChromiumCore_OnRouteStateChanged}
  {$DEFINE EventName := OnRouteStateChanged}
  CEFEventMethodCode
end;

//property event
procedure ChromiumCore_SetOnRouteMessageReceived(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := ChromiumCore_OnRouteMessageReceived}
  {$DEFINE EventName := OnRouteMessageReceived}
  CEFEventMethodCode
end;

//property event
procedure ChromiumCore_SetOnGetAudioParameters(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := ChromiumCore_OnGetAudioParameters}
  {$DEFINE EventName := OnGetAudioParameters}
  CEFEventMethodCode
end;

//property event
procedure ChromiumCore_SetOnAudioStreamStarted(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := ChromiumCore_OnAudioStreamStarted}
  {$DEFINE EventName := OnAudioStreamStarted}
  CEFEventMethodCode
end;

//property event
procedure ChromiumCore_SetOnAudioStreamPacket(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := ChromiumCore_OnAudioStreamPacket}
  {$DEFINE EventName := OnAudioStreamPacket}
  CEFEventMethodCode
end;

//property event
procedure ChromiumCore_SetOnAudioStreamStopped(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := ChromiumCore_OnAudioStreamStopped}
  {$DEFINE EventName := OnAudioStreamStopped}
  CEFEventMethodCode
end;

//property event
procedure ChromiumCore_SetOnAudioStreamError(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := ChromiumCore_OnAudioStreamError}
  {$DEFINE EventName := OnAudioStreamError}
  CEFEventMethodCode
end;

//property event
procedure ChromiumCore_SetOnDevToolsMessage(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := ChromiumCore_OnDevToolsMessage}
  {$DEFINE EventName := OnDevToolsMessage}
  CEFEventMethodCode
end;

//property event
procedure ChromiumCore_SetOnDevToolsRawMessage(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := ChromiumCore_OnDevToolsRawMessage}
  {$DEFINE EventName := OnDevToolsRawMessage}
  CEFEventMethodCode
end;

//property event
procedure ChromiumCore_SetOnDevToolsMethodResult(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := ChromiumCore_OnDevToolsMethodResult}
  {$DEFINE EventName := OnDevToolsMethodResult}
  CEFEventMethodCode
end;

//property event
procedure ChromiumCore_SetOnDevToolsMethodRawResult(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := ChromiumCore_OnDevToolsMethodRawResult}
  {$DEFINE EventName := OnDevToolsMethodRawResult}
  CEFEventMethodCode
end;

//property event
procedure ChromiumCore_SetOnDevToolsEvent(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := ChromiumCore_OnDevToolsEvent}
  {$DEFINE EventName := OnDevToolsEvent}
  CEFEventMethodCode
end;

//property event
procedure ChromiumCore_SetOnDevToolsRawEvent(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := ChromiumCore_OnDevToolsRawEvent}
  {$DEFINE EventName := OnDevToolsRawEvent}
  CEFEventMethodCode
end;

//property event
procedure ChromiumCore_SetOnDevToolsAgentAttached(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := ChromiumCore_OnDevToolsAgentAttached}
  {$DEFINE EventName := OnDevToolsAgentAttached}
  CEFEventMethodCode
end;

//property event
procedure ChromiumCore_SetOnDevToolsAgentDetached(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := ChromiumCore_OnDevToolsAgentDetached}
  {$DEFINE EventName := OnDevToolsAgentDetached}
  CEFEventMethodCode
end;

//property event
procedure ChromiumCore_SetOnExtensionLoadFailed(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := ChromiumCore_OnExtensionLoadFailed}
  {$DEFINE EventName := OnExtensionLoadFailed}
  CEFEventMethodCode
end;

//property event
procedure ChromiumCore_SetOnExtensionLoaded(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := ChromiumCore_OnExtensionLoaded}
  {$DEFINE EventName := OnExtensionLoaded}
  CEFEventMethodCode
end;

//property event
procedure ChromiumCore_SetOnExtensionUnloaded(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := ChromiumCore_OnExtensionUnloaded}
  {$DEFINE EventName := OnExtensionUnloaded}
  CEFEventMethodCode
end;

//property event
procedure ChromiumCore_SetOnExtensionBeforeBackgroundBrowser(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := ChromiumCore_OnExtensionBeforeBackgroundBrowser}
  {$DEFINE EventName := OnExtensionBeforeBackgroundBrowser}
  CEFEventMethodCode
end;

//property event
procedure ChromiumCore_SetOnExtensionBeforeBrowser(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := ChromiumCore_OnExtensionBeforeBrowser}
  {$DEFINE EventName := OnExtensionBeforeBrowser}
  CEFEventMethodCode
end;

//property event
procedure ChromiumCore_SetOnExtensionGetActiveBrowser(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := ChromiumCore_OnExtensionGetActiveBrowser}
  {$DEFINE EventName := OnExtensionGetActiveBrowser}
  CEFEventMethodCode
end;

//property event
procedure ChromiumCore_SetOnExtensionCanAccessBrowser(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := ChromiumCore_OnExtensionCanAccessBrowser}
  {$DEFINE EventName := OnExtensionCanAccessBrowser}
  CEFEventMethodCode
end;

//property event
procedure ChromiumCore_SetOnExtensionGetExtensionResource(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := ChromiumCore_OnExtensionGetExtensionResource}
  {$DEFINE EventName := OnExtensionGetExtensionResource}
  CEFEventMethodCode
end;

//property event
procedure ChromiumCore_SetOnPrintStart(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
{$IFDEF LINUX}
  {$DEFINE EventMethodName := ChromiumCore_OnPrintStart}
  {$DEFINE EventName := OnPrintStart}
  CEFEventMethodCode
{$ENDIF}
end;

//property event
procedure ChromiumCore_SetOnPrintSettings(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
{$IFDEF LINUX}
  {$DEFINE EventMethodName := ChromiumCore_OnPrintSettings}
  {$DEFINE EventName := OnPrintSettings}
  CEFEventMethodCode
{$ENDIF}
end;

//property event
procedure ChromiumCore_SetOnPrintDialog(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
{$IFDEF LINUX}
  {$DEFINE EventMethodName := ChromiumCore_OnPrintDialog}
  {$DEFINE EventName := OnPrintDialog}
  CEFEventMethodCode
{$ENDIF}
end;

//property event
procedure ChromiumCore_SetOnPrintJob(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
{$IFDEF LINUX}
  {$DEFINE EventMethodName := ChromiumCore_OnPrintJob}
  {$DEFINE EventName := OnPrintJob}
  CEFEventMethodCode
{$ENDIF}
end;

//property event
procedure ChromiumCore_SetOnPrintReset(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
{$IFDEF LINUX}
  {$DEFINE EventMethodName := ChromiumCore_OnPrintReset}
  {$DEFINE EventName := OnPrintReset}
  CEFEventMethodCode
{$ENDIF}
end;

//property event
procedure ChromiumCore_SetOnGetPDFPaperSize(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
{$IFDEF LINUX}
  {$DEFINE EventMethodName := ChromiumCore_OnGetPDFPaperSize}
  {$DEFINE EventName := OnGetPDFPaperSize}
  CEFEventMethodCode
{$ENDIF}
end;

//property event
procedure ChromiumCore_SetOnFrameCreated(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := ChromiumCore_OnFrameCreated}
  {$DEFINE EventName := OnFrameCreated}
  CEFEventMethodCode
end;

//property event
procedure ChromiumCore_SetOnFrameAttached(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := ChromiumCore_OnFrameAttached}
  {$DEFINE EventName := OnFrameAttached}
  CEFEventMethodCode
end;

//property event
procedure ChromiumCore_SetOnFrameDetached(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := ChromiumCore_OnFrameDetached}
  {$DEFINE EventName := OnFrameDetached}
  CEFEventMethodCode
end;

//property event
procedure ChromiumCore_SetOnMainFrameChanged(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := ChromiumCore_OnMainFrameChanged}
  {$DEFINE EventName := OnMainFrameChanged}
  CEFEventMethodCode
end;

//property event
procedure ChromiumCore_SetOnChromeCommand(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := ChromiumCore_OnChromeCommand}
  {$DEFINE EventName := OnChromeCommand}
  CEFEventMethodCode
end;

//property event
procedure ChromiumCore_SetOnIsChromeAppMenuItemVisible(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := ChromiumCore_OnIsChromeAppMenuItemVisible}
  {$DEFINE EventName := OnIsChromeAppMenuItemVisible}
  CEFEventMethodCode
end;

//property event
procedure ChromiumCore_SetOnIsChromeAppMenuItemEnabled(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := ChromiumCore_OnIsChromeAppMenuItemEnabled}
  {$DEFINE EventName := OnIsChromeAppMenuItemEnabled}
  CEFEventMethodCode
end;

//property event
procedure ChromiumCore_SetOnIsChromePageActionIconVisible(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := ChromiumCore_OnIsChromePageActionIconVisible}
  {$DEFINE EventName := OnIsChromePageActionIconVisible}
  CEFEventMethodCode
end;

//property event
procedure ChromiumCore_SetOnIsChromeToolbarButtonVisible(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := ChromiumCore_OnIsChromeToolbarButtonVisible}
  {$DEFINE EventName := OnIsChromeToolbarButtonVisible}
  CEFEventMethodCode
end;

//property event
procedure ChromiumCore_SetOnRequestMediaAccessPermission(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := ChromiumCore_OnRequestMediaAccessPermission}
  {$DEFINE EventName := OnRequestMediaAccessPermission}
  CEFEventMethodCode
end;

//property event
procedure ChromiumCore_SetOnShowPermissionPrompt(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := ChromiumCore_OnShowPermissionPrompt}
  {$DEFINE EventName := OnShowPermissionPrompt}
  CEFEventMethodCode
end;

//property event
procedure ChromiumCore_SetOnDismissPermissionPrompt(AObj: TChromiumCore; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := ChromiumCore_OnDismissPermissionPrompt}
  {$DEFINE EventName := OnDismissPermissionPrompt}
  CEFEventMethodCode
end;


exports
  ChromiumCore_Create,
  ChromiumCore_AsInterface,
  ChromiumCore_DefaultUrl,
  ChromiumCore_Options,
  ChromiumCore_FontOptions,
  ChromiumCore_PDFPrintOptions,
  ChromiumCore_BrowserId,
  ChromiumCore_Browser,
  ChromiumCore_BrowserById,
  ChromiumCore_BrowserCount,
  ChromiumCore_BrowserIdByIndex,
  ChromiumCore_CefClient,
  ChromiumCore_ReqContextHandler,
  ChromiumCore_ResourceRequestHandler,
  ChromiumCore_CefWindowInfo,
  ChromiumCore_VisibleNavigationEntry,
  ChromiumCore_RequestContext,
  ChromiumCore_MediaRouter,
  ChromiumCore_MediaObserver,
  ChromiumCore_MediaObserverReg,
  ChromiumCore_DevToolsMsgObserver,
  ChromiumCore_DevToolsMsgObserverReg,
  ChromiumCore_ExtensionHandler,
  ChromiumCore_MultithreadApp,
  ChromiumCore_IsLoading,
  ChromiumCore_HasDocument,
  ChromiumCore_HasView,
  ChromiumCore_HasDevTools,
  ChromiumCore_HasClientHandler,
  ChromiumCore_HasBrowser,
  ChromiumCore_CanGoBack,
  ChromiumCore_CanGoForward,
  ChromiumCore_IsPopUp,
  ChromiumCore_WindowHandle,
  ChromiumCore_OpenerWindowHandle,
  ChromiumCore_BrowserHandle,
  ChromiumCore_WidgetHandle,
  ChromiumCore_RenderHandle,
  ChromiumCore_FrameIsFocused,
  ChromiumCore_Initialized,
  ChromiumCore_RequestContextCache,
  ChromiumCore_RequestContextIsGlobal,
  ChromiumCore_DocumentURL,
  ChromiumCore_ZoomLevel,
  ChromiumCore_DefaultZoomLevel,
  ChromiumCore_CanIncZoom,
  ChromiumCore_CanDecZoom,
  ChromiumCore_CanResetZoom,
  ChromiumCore_ZoomPct,
  ChromiumCore_ZoomStep,
  ChromiumCore_WindowlessFrameRate,
  ChromiumCore_CustomHeaderName,
  ChromiumCore_CustomHeaderValue,
  ChromiumCore_DoNotTrack,
  ChromiumCore_SendReferrer,
  ChromiumCore_HyperlinkAuditing,
  ChromiumCore_AllowOutdatedPlugins,
  ChromiumCore_AlwaysAuthorizePlugins,
  ChromiumCore_AlwaysOpenPDFExternally,
  ChromiumCore_SpellChecking,
  ChromiumCore_SpellCheckerDicts,
  ChromiumCore_HasValidMainFrame,
  ChromiumCore_FrameCount,
  ChromiumCore_DragOperations,
  ChromiumCore_AudioMuted,
  ChromiumCore_Fullscreen,
  ChromiumCore_SafeSearch,
  ChromiumCore_YouTubeRestrict,
  ChromiumCore_PrintingEnabled,
  ChromiumCore_AcceptLanguageList,
  ChromiumCore_AcceptCookies,
  ChromiumCore_Block3rdPartyCookies,
  ChromiumCore_MultiBrowserMode,
  ChromiumCore_DefaultWindowInfoExStyle,
  ChromiumCore_Offline,
  ChromiumCore_QuicAllowed,
  ChromiumCore_JavascriptEnabled,
  ChromiumCore_LoadImagesAutomatically,
  ChromiumCore_BatterySaverModeState,
  ChromiumCore_HighEfficiencyModeState,
  ChromiumCore_CanFocus,
  ChromiumCore_EnableFocusDelayMs,
  ChromiumCore_WebRTCIPHandlingPolicy,
  ChromiumCore_WebRTCMultipleRoutes,
  ChromiumCore_WebRTCNonproxiedUDP,
  ChromiumCore_ProxyType,
  ChromiumCore_ProxyScheme,
  ChromiumCore_ProxyServer,
  ChromiumCore_ProxyPort,
  ChromiumCore_ProxyUsername,
  ChromiumCore_ProxyPassword,
  ChromiumCore_ProxyScriptURL,
  ChromiumCore_ProxyByPassList,
  ChromiumCore_MaxConnectionsPerProxy,
  ChromiumCore_CreateClientHandler,
  ChromiumCore_CreateClientHandler1,
  ChromiumCore_TryCloseBrowser,
  ChromiumCore_SelectBrowser,
  ChromiumCore_IndexOfBrowserID,
  ChromiumCore_ShareRequestContext,
  ChromiumCore_SetNewBrowserParent,
  ChromiumCore_CreateBrowserByWindowHandle,
  ChromiumCore_CreateBrowserByBrowserViewComponent,
  ChromiumCore_ClearCertificateExceptions,
  ChromiumCore_ClearHttpAuthCredentials,
  ChromiumCore_CloseAllConnections,
  ChromiumCore_GetFrameNames,
  ChromiumCore_GetFrameIdentifiers,
  ChromiumCore_IsSameBrowser,
  ChromiumCore_ExecuteTaskOnCefThread,
  ChromiumCore_DeleteCookies,
  ChromiumCore_VisitAllCookies,
  ChromiumCore_VisitURLCookies,
  ChromiumCore_FlushCookieStore,
  ChromiumCore_SendDevToolsMessage,
  ChromiumCore_ExecuteDevToolsMethod,
  ChromiumCore_AddDevToolsMessageObserver,
  ChromiumCore_CreateUrlRequest,
  ChromiumCore_CreateUrlRequest1,
  ChromiumCore_CreateUrlRequest2,
  ChromiumCore_AddObserver,
  ChromiumCore_GetSource,
  ChromiumCore_LoadExtension,
  ChromiumCore_DidLoadExtension,
  ChromiumCore_HasExtension,
  ChromiumCore_GetExtensions,
  ChromiumCore_GetExtension,
  ChromiumCore_GetWebsiteSetting,
  ChromiumCore_GetContentSetting,
  ChromiumCore_CloseBrowser,
  ChromiumCore_CloseAllBrowsers,
  ChromiumCore_InitializeDragAndDrop,
  ChromiumCore_ShutdownDragAndDrop,
  ChromiumCore_LoadURL,
  ChromiumCore_LoadURL1,
  ChromiumCore_LoadURL2,
  ChromiumCore_LoadString,
  ChromiumCore_LoadString1,
  ChromiumCore_LoadString2,
  ChromiumCore_LoadResource,
  ChromiumCore_LoadResource1,
  ChromiumCore_LoadResource2,
  ChromiumCore_LoadRequest,
  ChromiumCore_GoBack,
  ChromiumCore_GoForward,
  ChromiumCore_Reload,
  ChromiumCore_ReloadIgnoreCache,
  ChromiumCore_StopLoad,
  ChromiumCore_StartDownload,
  ChromiumCore_DownloadImage,
  ChromiumCore_SimulateMouseWheel,
  ChromiumCore_RetrieveHTML,
  ChromiumCore_RetrieveHTML1,
  ChromiumCore_RetrieveHTML2,
  ChromiumCore_RetrieveText,
  ChromiumCore_RetrieveText1,
  ChromiumCore_RetrieveText2,
  ChromiumCore_GetNavigationEntries,
  ChromiumCore_ExecuteJavaScript,
  ChromiumCore_ExecuteJavaScript1,
  ChromiumCore_ExecuteJavaScript2,
  ChromiumCore_UpdatePreferences,
  ChromiumCore_SavePreferences,
  ChromiumCore_ResolveHost,
  ChromiumCore_SetUserAgentOverride,
  ChromiumCore_ClearDataForOrigin,
  ChromiumCore_ClearCache,
  ChromiumCore_ToggleAudioMuted,
  ChromiumCore_ShowDevTools,
  ChromiumCore_CloseDevTools,
  ChromiumCore_CloseDevTools1,
  ChromiumCore_Find,
  ChromiumCore_StopFinding,
  ChromiumCore_Print,
  ChromiumCore_PrintToPDF,
  ChromiumCore_ClipboardCopy,
  ChromiumCore_ClipboardPaste,
  ChromiumCore_ClipboardCut,
  ChromiumCore_ClipboardUndo,
  ChromiumCore_ClipboardRedo,
  ChromiumCore_ClipboardDel,
  ChromiumCore_SelectAll,
  ChromiumCore_IncZoomStep,
  ChromiumCore_DecZoomStep,
  ChromiumCore_IncZoomPct,
  ChromiumCore_DecZoomPct,
  ChromiumCore_ResetZoomStep,
  ChromiumCore_ResetZoomLevel,
  ChromiumCore_ResetZoomPct,
  ChromiumCore_ReadZoom,
  ChromiumCore_IncZoomCommand,
  ChromiumCore_DecZoomCommand,
  ChromiumCore_ResetZoomCommand,
  ChromiumCore_WasResized,
  ChromiumCore_WasHidden,
  ChromiumCore_NotifyScreenInfoChanged,
  ChromiumCore_NotifyMoveOrResizeStarted,
  ChromiumCore_Invalidate,
  ChromiumCore_ExitFullscreen,
  ChromiumCore_SendExternalBeginFrame,
  ChromiumCore_SendKeyEvent,
  ChromiumCore_SendMouseClickEvent,
  ChromiumCore_SendMouseMoveEvent,
  ChromiumCore_SendMouseWheelEvent,
  ChromiumCore_SendTouchEvent,
  ChromiumCore_SendCaptureLostEvent,
  ChromiumCore_SendProcessMessage,
  ChromiumCore_SendProcessMessage1,
  ChromiumCore_SendProcessMessage2,
  ChromiumCore_SetFocus,
  ChromiumCore_SetAccessibilityState,
  ChromiumCore_DragTargetDragEnter,
  ChromiumCore_DragTargetDragOver,
  ChromiumCore_DragTargetDragLeave,
  ChromiumCore_DragTargetDrop,
  ChromiumCore_DragSourceEndedAt,
  ChromiumCore_DragSourceSystemDragEnded,
  ChromiumCore_IMECommitText,
  ChromiumCore_IMEFinishComposingText,
  ChromiumCore_IMECancelComposition,
  ChromiumCore_ReplaceMisspelling,
  ChromiumCore_AddWordToDictionary,
  ChromiumCore_UpdateBrowserSize,
  ChromiumCore_UpdateXWindowVisibility,
  ChromiumCore_NotifyCurrentSinks,
  ChromiumCore_NotifyCurrentRoutes,
  ChromiumCore_CreateRoute,
  ChromiumCore_GetDeviceInfo,
  ChromiumCore_SetWebsiteSetting,
  ChromiumCore_SetContentSetting,
  ChromiumCore_SetOnTextResultAvailable,
  ChromiumCore_SetOnPdfPrintFinished,
  ChromiumCore_SetOnPrefsAvailable,
  ChromiumCore_SetOnPrefsUpdated,
  ChromiumCore_SetOnCookiesDeleted,
  ChromiumCore_SetOnResolvedHostAvailable,
  ChromiumCore_SetOnNavigationVisitorResultAvailable,
  ChromiumCore_SetOnDownloadImageFinished,
  ChromiumCore_SetOnCookiesFlushed,
  ChromiumCore_SetOnCertificateExceptionsCleared,
  ChromiumCore_SetOnHttpAuthCredentialsCleared,
  ChromiumCore_SetOnAllConnectionsClosed,
  ChromiumCore_SetOnExecuteTaskOnCefThread,
  ChromiumCore_SetOnCookiesVisited,
  ChromiumCore_SetOnCookieVisitorDestroyed,
  ChromiumCore_SetOnCookieSet,
  ChromiumCore_SetOnZoomPctAvailable,
  ChromiumCore_SetOnMediaRouteCreateFinished,
  ChromiumCore_SetOnMediaSinkDeviceInfo,
  ChromiumCore_SetOnCanFocus,
  ChromiumCore_SetOnBrowserCompMsg,
  ChromiumCore_SetOnWidgetCompMsg,
  ChromiumCore_SetOnRenderCompMsg,
  ChromiumCore_SetOnProcessMessageReceived,
  ChromiumCore_SetOnLoadStart,
  ChromiumCore_SetOnLoadEnd,
  ChromiumCore_SetOnLoadError,
  ChromiumCore_SetOnLoadingStateChange,
  ChromiumCore_SetOnTakeFocus,
  ChromiumCore_SetOnSetFocus,
  ChromiumCore_SetOnGotFocus,
  ChromiumCore_SetOnBeforeContextMenu,
  ChromiumCore_SetOnRunContextMenu,
  ChromiumCore_SetOnContextMenuCommand,
  ChromiumCore_SetOnContextMenuDismissed,
  ChromiumCore_SetOnRunQuickMenu,
  ChromiumCore_SetOnQuickMenuCommand,
  ChromiumCore_SetOnQuickMenuDismissed,
  ChromiumCore_SetOnPreKeyEvent,
  ChromiumCore_SetOnKeyEvent,
  ChromiumCore_SetOnAddressChange,
  ChromiumCore_SetOnTitleChange,
  ChromiumCore_SetOnFavIconUrlChange,
  ChromiumCore_SetOnFullScreenModeChange,
  ChromiumCore_SetOnTooltip,
  ChromiumCore_SetOnStatusMessage,
  ChromiumCore_SetOnConsoleMessage,
  ChromiumCore_SetOnAutoResize,
  ChromiumCore_SetOnLoadingProgressChange,
  ChromiumCore_SetOnCursorChange,
  ChromiumCore_SetOnMediaAccessChange,
  ChromiumCore_SetOnCanDownload,
  ChromiumCore_SetOnBeforeDownload,
  ChromiumCore_SetOnDownloadUpdated,
  ChromiumCore_SetOnJsdialog,
  ChromiumCore_SetOnBeforeUnloadDialog,
  ChromiumCore_SetOnResetDialogState,
  ChromiumCore_SetOnDialogClosed,
  ChromiumCore_SetOnBeforePopup,
  ChromiumCore_SetOnAfterCreated,
  ChromiumCore_SetOnBeforeClose,
  ChromiumCore_SetOnClose,
  ChromiumCore_SetOnBeforeBrowse,
  ChromiumCore_SetOnOpenUrlFromTab,
  ChromiumCore_SetOnGetAuthCredentials,
  ChromiumCore_SetOnCertificateError,
  ChromiumCore_SetOnSelectClientCertificate,
  ChromiumCore_SetOnRenderViewReady,
  ChromiumCore_SetOnRenderProcessTerminated,
  ChromiumCore_SetOnGetResourceRequestHandler_ReqHdlr,
  ChromiumCore_SetOnDocumentAvailableInMainFrame,
  ChromiumCore_SetOnBeforeResourceLoad,
  ChromiumCore_SetOnGetResourceHandler,
  ChromiumCore_SetOnResourceRedirect,
  ChromiumCore_SetOnResourceResponse,
  ChromiumCore_SetOnGetResourceResponseFilter,
  ChromiumCore_SetOnResourceLoadComplete,
  ChromiumCore_SetOnProtocolExecution,
  ChromiumCore_SetOnCanSendCookie,
  ChromiumCore_SetOnCanSaveCookie,
  ChromiumCore_SetOnFileDialog,
  ChromiumCore_SetOnGetAccessibilityHandler,
  ChromiumCore_SetOnGetRootScreenRect,
  ChromiumCore_SetOnGetViewRect,
  ChromiumCore_SetOnGetScreenPoint,
  ChromiumCore_SetOnGetScreenInfo,
  ChromiumCore_SetOnPopupShow,
  ChromiumCore_SetOnPopupSize,
  ChromiumCore_SetOnPaint,
  ChromiumCore_SetOnAcceleratedPaint,
  ChromiumCore_SetOnGetTouchHandleSize,
  ChromiumCore_SetOnTouchHandleStateChanged,
  ChromiumCore_SetOnStartDragging,
  ChromiumCore_SetOnUpdateDragCursor,
  ChromiumCore_SetOnScrollOffsetChanged,
  ChromiumCore_SetOnIMECompositionRangeChanged,
  ChromiumCore_SetOnTextSelectionChanged,
  ChromiumCore_SetOnVirtualKeyboardRequested,
  ChromiumCore_SetOnDragEnter,
  ChromiumCore_SetOnDraggableRegionsChanged,
  ChromiumCore_SetOnFindResult,
  ChromiumCore_SetOnRequestContextInitialized,
  ChromiumCore_SetOnGetResourceRequestHandler_ReqCtxHdlr,
  ChromiumCore_SetOnSinks,
  ChromiumCore_SetOnRoutes,
  ChromiumCore_SetOnRouteStateChanged,
  ChromiumCore_SetOnRouteMessageReceived,
  ChromiumCore_SetOnGetAudioParameters,
  ChromiumCore_SetOnAudioStreamStarted,
  ChromiumCore_SetOnAudioStreamPacket,
  ChromiumCore_SetOnAudioStreamStopped,
  ChromiumCore_SetOnAudioStreamError,
  ChromiumCore_SetOnDevToolsMessage,
  ChromiumCore_SetOnDevToolsRawMessage,
  ChromiumCore_SetOnDevToolsMethodResult,
  ChromiumCore_SetOnDevToolsMethodRawResult,
  ChromiumCore_SetOnDevToolsEvent,
  ChromiumCore_SetOnDevToolsRawEvent,
  ChromiumCore_SetOnDevToolsAgentAttached,
  ChromiumCore_SetOnDevToolsAgentDetached,
  ChromiumCore_SetOnExtensionLoadFailed,
  ChromiumCore_SetOnExtensionLoaded,
  ChromiumCore_SetOnExtensionUnloaded,
  ChromiumCore_SetOnExtensionBeforeBackgroundBrowser,
  ChromiumCore_SetOnExtensionBeforeBrowser,
  ChromiumCore_SetOnExtensionGetActiveBrowser,
  ChromiumCore_SetOnExtensionCanAccessBrowser,
  ChromiumCore_SetOnExtensionGetExtensionResource,
  ChromiumCore_SetOnPrintStart,
  ChromiumCore_SetOnPrintSettings,
  ChromiumCore_SetOnPrintDialog,
  ChromiumCore_SetOnPrintJob,
  ChromiumCore_SetOnPrintReset,
  ChromiumCore_SetOnGetPDFPaperSize,
  ChromiumCore_SetOnFrameCreated,
  ChromiumCore_SetOnFrameAttached,
  ChromiumCore_SetOnFrameDetached,
  ChromiumCore_SetOnMainFrameChanged,
  ChromiumCore_SetOnChromeCommand,
  ChromiumCore_SetOnIsChromeAppMenuItemVisible,
  ChromiumCore_SetOnIsChromeAppMenuItemEnabled,
  ChromiumCore_SetOnIsChromePageActionIconVisible,
  ChromiumCore_SetOnIsChromeToolbarButtonVisible,
  ChromiumCore_SetOnRequestMediaAccessPermission,
  ChromiumCore_SetOnShowPermissionPrompt,
  ChromiumCore_SetOnDismissPermissionPrompt;