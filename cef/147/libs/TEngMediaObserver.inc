// constructor
function TEngMediaObserver_Create(out IntfMediaObserver: ICefMediaObserver): TEngMediaObserver; extdecl;
begin
  {$define handleExceptionID := 15600}
  handleExceptionBegin
  Result := TEngMediaObserver.Create();
  IntfMediaObserver := Result as ICefMediaObserver;
  handleExceptionEnd
end;

// event
procedure TEngMediaObserver_OnMediaObserverSinks(AObj: TEngMediaObserver; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngMediaObserver_TOnMediaObserverSinksEvent}
  {$DEFINE EventName := OnMediaObserverSinks}
  CEFEventMethodCode
end;

// event
procedure TEngMediaObserver_OnMediaObserverRoutes(AObj: TEngMediaObserver; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngMediaObserver_TOnMediaObserverRoutesEvent}
  {$DEFINE EventName := OnMediaObserverRoutes}
  CEFEventMethodCode
end;

// event
procedure TEngMediaObserver_OnMediaObserverRouteStateChanged(AObj: TEngMediaObserver; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngMediaObserver_TOnMediaObserverRouteStateChangedEvent}
  {$DEFINE EventName := OnMediaObserverRouteStateChanged}
  CEFEventMethodCode
end;

// event
procedure TEngMediaObserver_OnMediaObserverRouteMessageReceived(AObj: TEngMediaObserver; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngMediaObserver_TOnMediaObserverRouteMessageReceivedEvent}
  {$DEFINE EventName := OnMediaObserverRouteMessageReceived}
  CEFEventMethodCode
end;

exports
  TEngMediaObserver_Create,
  TEngMediaObserver_OnMediaObserverSinks,
  TEngMediaObserver_OnMediaObserverRoutes,
  TEngMediaObserver_OnMediaObserverRouteStateChanged,
  TEngMediaObserver_OnMediaObserverRouteMessageReceived;