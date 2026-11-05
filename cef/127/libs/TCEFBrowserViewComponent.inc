// constructor
function TCEFBrowserViewComponent_Create(AOwner: TComponent; out IntfBrowserViewDelegateEvents: ICefBrowserViewDelegateEvents; out IntfViewDelegateEvents: ICefViewDelegateEvents): TCEFBrowserViewComponent; extdecl;
begin
  {$define handleExceptionID := 9000}
  handleExceptionBegin
  Result := TCEFBrowserViewComponent.Create(AOwner);
  IntfBrowserViewDelegateEvents := Result as ICefBrowserViewDelegateEvents;
  IntfViewDelegateEvents := Result as ICefViewDelegateEvents;
  handleExceptionEnd
end;

// function
function TCEFBrowserViewComponent_CreateBrowserView(AObj: TCEFBrowserViewComponent; const client: ICefClient; const url: PChar; var settings: TCefBrowserSettingsPtr; const extra_info: ICefDictionaryValue; const request_context: ICefRequestContext): LongBool; extdecl;
var
  Insettings: TCefBrowserSettings;
begin
  {$define handleExceptionID := 9001}
  handleExceptionBegin
  Insettings := TCefBrowserSettingsToPas(settings);
  Result := AObj.CreateBrowserView(client, PCharToUStr(url), Insettings, extra_info, request_context);
  handleExceptionEnd
end;

// function
function TCEFBrowserViewComponent_GetForBrowser(AObj: TCEFBrowserViewComponent; const browser: ICefBrowser): LongBool; extdecl;
begin
  {$define handleExceptionID := 9002}
  handleExceptionBegin
  Result := AObj.GetForBrowser(browser);
  handleExceptionEnd
end;

// procedure
procedure TCEFBrowserViewComponent_SetPreferAccelerators(AObj: TCEFBrowserViewComponent; prefer_accelerators: LongBool); extdecl;
begin
  {$define handleExceptionID := 9003}
  handleExceptionBegin
  AObj.SetPreferAccelerators(prefer_accelerators);
  handleExceptionEnd
end;

// property
procedure TCEFBrowserViewComponent_Browser(AObj: TCEFBrowserViewComponent; var Result: ICefBrowser); extdecl;
begin
  {$define handleExceptionID := 9004}
  handleExceptionBegin
  Result := AObj.Browser;
  handleExceptionEnd
end;

// property
procedure TCEFBrowserViewComponent_BrowserView(AObj: TCEFBrowserViewComponent; var Result: ICefBrowserView); extdecl;
begin
  {$define handleExceptionID := 9005}
  handleExceptionBegin
  Result := AObj.BrowserView;
  handleExceptionEnd
end;

// property
function TCEFBrowserViewComponent_RuntimeStyle(AObj: TCEFBrowserViewComponent): TCefRuntimeStyle; extdecl;
begin
  {$define handleExceptionID := 9006}
  handleExceptionBegin
  Result := AObj.RuntimeStyle;
  handleExceptionEnd
end;

// event
procedure TCEFBrowserViewComponent_OnBrowserCreated(AObj: TCEFBrowserViewComponent; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TCEFBrowserViewComponent_TOnBrowserCreatedEvent}
  {$DEFINE EventName := OnBrowserCreated}
  CEFEventMethodCode
end;

// event
procedure TCEFBrowserViewComponent_OnBrowserDestroyed(AObj: TCEFBrowserViewComponent; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TCEFBrowserViewComponent_TOnBrowserDestroyedEvent}
  {$DEFINE EventName := OnBrowserDestroyed}
  CEFEventMethodCode
end;

// event
procedure TCEFBrowserViewComponent_OnGetDelegateForPopupBrowserView(AObj: TCEFBrowserViewComponent; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TCEFBrowserViewComponent_TOnGetDelegateForPopupBrowserViewEvent}
  {$DEFINE EventName := OnGetDelegateForPopupBrowserView}
  CEFEventMethodCode
end;

// event
procedure TCEFBrowserViewComponent_OnPopupBrowserViewCreated(AObj: TCEFBrowserViewComponent; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TCEFBrowserViewComponent_TOnPopupBrowserViewCreatedEvent}
  {$DEFINE EventName := OnPopupBrowserViewCreated}
  CEFEventMethodCode
end;

// event
procedure TCEFBrowserViewComponent_OnGetChromeToolbarType(AObj: TCEFBrowserViewComponent; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TCEFBrowserViewComponent_TOnGetChromeToolbarTypeEvent}
  {$DEFINE EventName := OnGetChromeToolbarType}
  CEFEventMethodCode
end;

// event
procedure TCEFBrowserViewComponent_OnUseFramelessWindowForPictureInPicture(AObj: TCEFBrowserViewComponent; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TCEFBrowserViewComponent_TOnUseFramelessWindowForPictureInPicture}
  {$DEFINE EventName := OnUseFramelessWindowForPictureInPicture}
  CEFEventMethodCode
end;

// event
procedure TCEFBrowserViewComponent_OnGestureCommand(AObj: TCEFBrowserViewComponent; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TCEFBrowserViewComponent_TOnGestureCommandEvent}
  {$DEFINE EventName := OnGestureCommand}
  CEFEventMethodCode
end;

// event
procedure TCEFBrowserViewComponent_OnGetBrowserRuntimeStyle(AObj: TCEFBrowserViewComponent; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TCEFBrowserViewComponent_TOnGetBrowserRuntimeStyleEvent}
  {$DEFINE EventName := OnGetBrowserRuntimeStyle}
  CEFEventMethodCode
end;

exports
  TCEFBrowserViewComponent_Create,
  TCEFBrowserViewComponent_CreateBrowserView,
  TCEFBrowserViewComponent_GetForBrowser,
  TCEFBrowserViewComponent_SetPreferAccelerators,
  TCEFBrowserViewComponent_Browser,
  TCEFBrowserViewComponent_BrowserView,
  TCEFBrowserViewComponent_RuntimeStyle,
  TCEFBrowserViewComponent_OnBrowserCreated,
  TCEFBrowserViewComponent_OnBrowserDestroyed,
  TCEFBrowserViewComponent_OnGetDelegateForPopupBrowserView,
  TCEFBrowserViewComponent_OnPopupBrowserViewCreated,
  TCEFBrowserViewComponent_OnGetChromeToolbarType,
  TCEFBrowserViewComponent_OnUseFramelessWindowForPictureInPicture,
  TCEFBrowserViewComponent_OnGestureCommand,
  TCEFBrowserViewComponent_OnGetBrowserRuntimeStyle;