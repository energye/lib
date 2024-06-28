
//constructor
function CEFBrowserViewComponent_Create(aOwner: TComponent): TCEFBrowserViewComponent; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TCEFBrowserViewComponent.Create(aOwner);
  handleExceptionEnd
end;

//property
procedure CEFBrowserViewComponent_Browser(AObj: TCEFBrowserViewComponent; var Result: ICefBrowser); extdecl;
begin
  {$define handleExceptionFuncName :='Browser'}
  handleExceptionBegin
  Result := AObj.Browser;
  handleExceptionEnd
end;

//property
procedure CEFBrowserViewComponent_BrowserView(AObj: TCEFBrowserViewComponent; var Result: ICefBrowserView); extdecl;
begin
  {$define handleExceptionFuncName :='BrowserView'}
  handleExceptionBegin
  Result := AObj.BrowserView;
  handleExceptionEnd
end;

//function
function CEFBrowserViewComponent_CreateBrowserView(AObj: TCEFBrowserViewComponent; const client: ICefClient; const url: PChar; const settings: TCefBrowserSettings; const extrainfo: ICefDictionaryValue; const requestcontext: ICefRequestContext): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='CreateBrowserView'}
  handleExceptionBegin
  Result := AObj.CreateBrowserView(client, url, settings, extrainfo, requestcontext);
  handleExceptionEnd
end;

//function
function CEFBrowserViewComponent_GetForBrowser(AObj: TCEFBrowserViewComponent; const browser: ICefBrowser): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='GetForBrowser'}
  handleExceptionBegin
  Result := AObj.GetForBrowser(browser);
  handleExceptionEnd
end;

//procedure
procedure CEFBrowserViewComponent_SetPreferAccelerators(AObj: TCEFBrowserViewComponent; preferaccelerators: LongBool); extdecl;
begin
  {$define handleExceptionFuncName :='SetPreferAccelerators'}
  handleExceptionBegin
  AObj.SetPreferAccelerators(preferaccelerators);
  handleExceptionEnd
end;

//property event
procedure CEFBrowserViewComponent_SetOnBrowserCreated(AObj: TCEFBrowserViewComponent; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := BrowserViewComponent_OnBrowserCreated}
  {$DEFINE EventName := OnBrowserCreated}
  CEFEventMethodCode
end;

//property event
procedure CEFBrowserViewComponent_SetOnBrowserDestroyed(AObj: TCEFBrowserViewComponent; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := BrowserViewComponent_OnBrowserDestroyed}
  {$DEFINE EventName := OnBrowserDestroyed}
  CEFEventMethodCode
end;

//property event
procedure CEFBrowserViewComponent_SetOnGetDelegateForPopupBrowserView(AObj: TCEFBrowserViewComponent; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := BrowserViewComponent_OnGetDelegateForPopupBrowserView}
  {$DEFINE EventName := OnGetDelegateForPopupBrowserView}
  CEFEventMethodCode
end;

//property event
procedure CEFBrowserViewComponent_SetOnPopupBrowserViewCreated(AObj: TCEFBrowserViewComponent; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := BrowserViewComponent_OnPopupBrowserViewCreated}
  {$DEFINE EventName := OnPopupBrowserViewCreated}
  CEFEventMethodCode
end;

//property event
procedure CEFBrowserViewComponent_SetOnGetChromeToolbarType(AObj: TCEFBrowserViewComponent; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := BrowserViewComponent_OnGetChromeToolbarType}
  {$DEFINE EventName := OnGetChromeToolbarType}
  CEFEventMethodCode
end;

//property event
procedure CEFBrowserViewComponent_SetOnUseFramelessWindowForPictureInPicture(AObj: TCEFBrowserViewComponent; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := BrowserViewComponent_OnUseFramelessWindowForPictureInPicture}
  {$DEFINE EventName := OnUseFramelessWindowForPictureInPicture}
  CEFEventMethodCode
end;

//property event
procedure CEFBrowserViewComponent_SetOnGestureCommand(AObj: TCEFBrowserViewComponent; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := BrowserViewComponent_OnGestureCommand}
  {$DEFINE EventName := OnGestureCommand}
  CEFEventMethodCode
end;


exports
  CEFBrowserViewComponent_Create,
  CEFBrowserViewComponent_Browser,
  CEFBrowserViewComponent_BrowserView,
  CEFBrowserViewComponent_CreateBrowserView,
  CEFBrowserViewComponent_GetForBrowser,
  CEFBrowserViewComponent_SetPreferAccelerators,
  CEFBrowserViewComponent_SetOnBrowserCreated,
  CEFBrowserViewComponent_SetOnBrowserDestroyed,
  CEFBrowserViewComponent_SetOnGetDelegateForPopupBrowserView,
  CEFBrowserViewComponent_SetOnPopupBrowserViewCreated,
  CEFBrowserViewComponent_SetOnGetChromeToolbarType,
  CEFBrowserViewComponent_SetOnUseFramelessWindowForPictureInPicture,
  CEFBrowserViewComponent_SetOnGestureCommand;