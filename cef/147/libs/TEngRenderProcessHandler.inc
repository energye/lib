// constructor
function TEngRenderProcessHandler_Create(out IntfRenderProcessHandler: ICefRenderProcessHandler): TEngRenderProcessHandler; extdecl;
begin
  {$define handleExceptionID := 13600}
  handleExceptionBegin
  Result := TEngRenderProcessHandler.Create();
  IntfRenderProcessHandler := Result as ICefRenderProcessHandler;
  handleExceptionEnd
end;

// event
procedure TEngRenderProcessHandler_OnRenderProcessGetLoadHandler(AObj: TEngRenderProcessHandler; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngRenderProcessHandler_TOnRenderProcessGetLoadHandlerEvent}
  {$DEFINE EventName := OnRenderProcessGetLoadHandler}
  CEFEventMethodCode
end;

// event
procedure TEngRenderProcessHandler_OnRenderProcessProcessMessageReceived(AObj: TEngRenderProcessHandler; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngRenderProcessHandler_TOnRenderProcessProcessMessageReceivedEvent}
  {$DEFINE EventName := OnRenderProcessProcessMessageReceived}
  CEFEventMethodCode
end;

// event
procedure TEngRenderProcessHandler_OnRenderProcessWebKitInitialized(AObj: TEngRenderProcessHandler; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngRenderProcessHandler_TOnRenderProcessWebKitInitializedEvent}
  {$DEFINE EventName := OnRenderProcessWebKitInitialized}
  CEFEventMethodCode
end;

// event
procedure TEngRenderProcessHandler_OnRenderProcessBrowserCreated(AObj: TEngRenderProcessHandler; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngRenderProcessHandler_TOnRenderProcessBrowserCreatedEvent}
  {$DEFINE EventName := OnRenderProcessBrowserCreated}
  CEFEventMethodCode
end;

// event
procedure TEngRenderProcessHandler_OnRenderProcessBrowserDestroyed(AObj: TEngRenderProcessHandler; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngRenderProcessHandler_TOnRenderProcessBrowserDestroyedEvent}
  {$DEFINE EventName := OnRenderProcessBrowserDestroyed}
  CEFEventMethodCode
end;

// event
procedure TEngRenderProcessHandler_OnRenderProcessContextCreated(AObj: TEngRenderProcessHandler; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngRenderProcessHandler_TOnRenderProcessContextCreatedEvent}
  {$DEFINE EventName := OnRenderProcessContextCreated}
  CEFEventMethodCode
end;

// event
procedure TEngRenderProcessHandler_OnRenderProcessContextReleased(AObj: TEngRenderProcessHandler; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngRenderProcessHandler_TOnRenderProcessContextReleasedEvent}
  {$DEFINE EventName := OnRenderProcessContextReleased}
  CEFEventMethodCode
end;

// event
procedure TEngRenderProcessHandler_OnRenderProcessUncaughtException(AObj: TEngRenderProcessHandler; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngRenderProcessHandler_TOnRenderProcessUncaughtExceptionEvent}
  {$DEFINE EventName := OnRenderProcessUncaughtException}
  CEFEventMethodCode
end;

// event
procedure TEngRenderProcessHandler_OnRenderProcessFocusedNodeChanged(AObj: TEngRenderProcessHandler; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngRenderProcessHandler_TOnRenderProcessFocusedNodeChangedEvent}
  {$DEFINE EventName := OnRenderProcessFocusedNodeChanged}
  CEFEventMethodCode
end;

exports
  TEngRenderProcessHandler_Create,
  TEngRenderProcessHandler_OnRenderProcessGetLoadHandler,
  TEngRenderProcessHandler_OnRenderProcessProcessMessageReceived,
  TEngRenderProcessHandler_OnRenderProcessWebKitInitialized,
  TEngRenderProcessHandler_OnRenderProcessBrowserCreated,
  TEngRenderProcessHandler_OnRenderProcessBrowserDestroyed,
  TEngRenderProcessHandler_OnRenderProcessContextCreated,
  TEngRenderProcessHandler_OnRenderProcessContextReleased,
  TEngRenderProcessHandler_OnRenderProcessUncaughtException,
  TEngRenderProcessHandler_OnRenderProcessFocusedNodeChanged;