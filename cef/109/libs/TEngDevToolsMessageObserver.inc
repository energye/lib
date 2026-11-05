// constructor
function TEngDevToolsMessageObserver_Create(out IntfDevToolsMessageObserver: ICefDevToolsMessageObserver): TEngDevToolsMessageObserver; extdecl;
begin
  {$define handleExceptionID := 15700}
  handleExceptionBegin
  Result := TEngDevToolsMessageObserver.Create();
  IntfDevToolsMessageObserver := Result as ICefDevToolsMessageObserver;
  handleExceptionEnd
end;

// event
procedure TEngDevToolsMessageObserver_OnDevToolsMessageObserverDevToolsMessage(AObj: TEngDevToolsMessageObserver; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngDevToolsMessageObserver_TOnDevToolsMessageObserverDevToolsMessageEvent}
  {$DEFINE EventName := OnDevToolsMessageObserverDevToolsMessage}
  CEFEventMethodCode
end;

// event
procedure TEngDevToolsMessageObserver_OnDevToolsMessageObserverDevToolsMethodResult(AObj: TEngDevToolsMessageObserver; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngDevToolsMessageObserver_TOnDevToolsMessageObserverDevToolsMethodResultEvent}
  {$DEFINE EventName := OnDevToolsMessageObserverDevToolsMethodResult}
  CEFEventMethodCode
end;

// event
procedure TEngDevToolsMessageObserver_OnDevToolsMessageObserverDevTools(AObj: TEngDevToolsMessageObserver; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngDevToolsMessageObserver_TOnDevToolsMessageObserverDevToolsEvent}
  {$DEFINE EventName := OnDevToolsMessageObserverDevTools}
  CEFEventMethodCode
end;

// event
procedure TEngDevToolsMessageObserver_OnDevToolsMessageObserverDevToolsAgentAttached(AObj: TEngDevToolsMessageObserver; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngDevToolsMessageObserver_TOnDevToolsMessageObserverDevToolsAgentAttachedEvent}
  {$DEFINE EventName := OnDevToolsMessageObserverDevToolsAgentAttached}
  CEFEventMethodCode
end;

// event
procedure TEngDevToolsMessageObserver_OnDevToolsMessageObserverDevToolsAgentDetached(AObj: TEngDevToolsMessageObserver; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngDevToolsMessageObserver_TOnDevToolsMessageObserverDevToolsAgentDetachedEvent}
  {$DEFINE EventName := OnDevToolsMessageObserverDevToolsAgentDetached}
  CEFEventMethodCode
end;

exports
  TEngDevToolsMessageObserver_Create,
  TEngDevToolsMessageObserver_OnDevToolsMessageObserverDevToolsMessage,
  TEngDevToolsMessageObserver_OnDevToolsMessageObserverDevToolsMethodResult,
  TEngDevToolsMessageObserver_OnDevToolsMessageObserverDevTools,
  TEngDevToolsMessageObserver_OnDevToolsMessageObserverDevToolsAgentAttached,
  TEngDevToolsMessageObserver_OnDevToolsMessageObserverDevToolsAgentDetached;