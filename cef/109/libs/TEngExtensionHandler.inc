// constructor
function TEngExtensionHandler_Create(out IntfExtensionHandler: ICefExtensionHandler): TEngExtensionHandler; extdecl;
begin
  {$define handleExceptionID := 16600}
  handleExceptionBegin
  Result := TEngExtensionHandler.Create();
  IntfExtensionHandler := Result as ICefExtensionHandler;
  handleExceptionEnd
end;

// event
procedure TEngExtensionHandler_OnExtensionBeforeBackgroundBrowser(AObj: TEngExtensionHandler; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngExtensionHandler_TOnExtensionBeforeBackgroundBrowserEvent}
  {$DEFINE EventName := OnExtensionBeforeBackgroundBrowser}
  CEFEventMethodCode
end;

// event
procedure TEngExtensionHandler_OnExtensionBeforeBrowser(AObj: TEngExtensionHandler; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngExtensionHandler_TOnExtensionBeforeBrowserEvent}
  {$DEFINE EventName := OnExtensionBeforeBrowser}
  CEFEventMethodCode
end;

// event
procedure TEngExtensionHandler_OnExtensionCanAccessBrowser(AObj: TEngExtensionHandler; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngExtensionHandler_TOnExtensionCanAccessBrowserEvent}
  {$DEFINE EventName := OnExtensionCanAccessBrowser}
  CEFEventMethodCode
end;

// event
procedure TEngExtensionHandler_OnExtensionGetExtensionResource(AObj: TEngExtensionHandler; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngExtensionHandler_TOnExtensionGetExtensionResourceEvent}
  {$DEFINE EventName := OnExtensionGetExtensionResource}
  CEFEventMethodCode
end;

// event
procedure TEngExtensionHandler_OnExtensionExtensionLoadFailed(AObj: TEngExtensionHandler; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngExtensionHandler_TOnExtensionExtensionLoadFailedEvent}
  {$DEFINE EventName := OnExtensionExtensionLoadFailed}
  CEFEventMethodCode
end;

// event
procedure TEngExtensionHandler_OnExtensionExtensionLoaded(AObj: TEngExtensionHandler; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngExtensionHandler_TOnExtensionExtensionLoadedEvent}
  {$DEFINE EventName := OnExtensionExtensionLoaded}
  CEFEventMethodCode
end;

// event
procedure TEngExtensionHandler_OnExtensionExtensionUnloaded(AObj: TEngExtensionHandler; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngExtensionHandler_TOnExtensionExtensionUnloadedEvent}
  {$DEFINE EventName := OnExtensionExtensionUnloaded}
  CEFEventMethodCode
end;

// event
procedure TEngExtensionHandler_OnExtensionGetActiveBrowser(AObj: TEngExtensionHandler; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngExtensionHandler_TOnExtensionGetActiveBrowserEvent}
  {$DEFINE EventName := OnExtensionGetActiveBrowser}
  CEFEventMethodCode
end;

exports
  TEngExtensionHandler_Create,
  TEngExtensionHandler_OnExtensionBeforeBackgroundBrowser,
  TEngExtensionHandler_OnExtensionBeforeBrowser,
  TEngExtensionHandler_OnExtensionCanAccessBrowser,
  TEngExtensionHandler_OnExtensionGetExtensionResource,
  TEngExtensionHandler_OnExtensionExtensionLoadFailed,
  TEngExtensionHandler_OnExtensionExtensionLoaded,
  TEngExtensionHandler_OnExtensionExtensionUnloaded,
  TEngExtensionHandler_OnExtensionGetActiveBrowser;