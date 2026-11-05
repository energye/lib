// constructor
function TEngServerHandler_Create(out IntfServerHandler: ICefServerHandler): TEngServerHandler; extdecl;
begin
  {$define handleExceptionID := 15300}
  handleExceptionBegin
  Result := TEngServerHandler.Create();
  IntfServerHandler := Result as ICefServerHandler;
  handleExceptionEnd
end;

// event
procedure TEngServerHandler_OnServerServerCreated(AObj: TEngServerHandler; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngServerHandler_TOnServerServerCreatedEvent}
  {$DEFINE EventName := OnServerServerCreated}
  CEFEventMethodCode
end;

// event
procedure TEngServerHandler_OnServerServerDestroyed(AObj: TEngServerHandler; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngServerHandler_TOnServerServerDestroyedEvent}
  {$DEFINE EventName := OnServerServerDestroyed}
  CEFEventMethodCode
end;

// event
procedure TEngServerHandler_OnServerClientConnected(AObj: TEngServerHandler; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngServerHandler_TOnServerClientConnectedEvent}
  {$DEFINE EventName := OnServerClientConnected}
  CEFEventMethodCode
end;

// event
procedure TEngServerHandler_OnServerClientDisconnected(AObj: TEngServerHandler; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngServerHandler_TOnServerClientDisconnectedEvent}
  {$DEFINE EventName := OnServerClientDisconnected}
  CEFEventMethodCode
end;

// event
procedure TEngServerHandler_OnServerHttpRequest(AObj: TEngServerHandler; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngServerHandler_TOnServerHttpRequestEvent}
  {$DEFINE EventName := OnServerHttpRequest}
  CEFEventMethodCode
end;

// event
procedure TEngServerHandler_OnServerWebSocketRequest(AObj: TEngServerHandler; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngServerHandler_TOnServerWebSocketRequestEvent}
  {$DEFINE EventName := OnServerWebSocketRequest}
  CEFEventMethodCode
end;

// event
procedure TEngServerHandler_OnServerWebSocketConnected(AObj: TEngServerHandler; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngServerHandler_TOnServerWebSocketConnectedEvent}
  {$DEFINE EventName := OnServerWebSocketConnected}
  CEFEventMethodCode
end;

// event
procedure TEngServerHandler_OnServerWebSocketMessage(AObj: TEngServerHandler; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngServerHandler_TOnServerWebSocketMessageEvent}
  {$DEFINE EventName := OnServerWebSocketMessage}
  CEFEventMethodCode
end;

exports
  TEngServerHandler_Create,
  TEngServerHandler_OnServerServerCreated,
  TEngServerHandler_OnServerServerDestroyed,
  TEngServerHandler_OnServerClientConnected,
  TEngServerHandler_OnServerClientDisconnected,
  TEngServerHandler_OnServerHttpRequest,
  TEngServerHandler_OnServerWebSocketRequest,
  TEngServerHandler_OnServerWebSocketConnected,
  TEngServerHandler_OnServerWebSocketMessage;