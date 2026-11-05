// constructor
function TCEFServerComponent_Create(AOwner: TComponent; out IntfServerEvents: IServerEvents): TCEFServerComponent; extdecl;
begin
  {$define handleExceptionID := 5300}
  handleExceptionBegin
  Result := TCEFServerComponent.Create(AOwner);
  IntfServerEvents := Result as IServerEvents;
  handleExceptionEnd
end;

// function
function TCEFServerComponent_IsValidConnection(AObj: TCEFServerComponent; connection_id: Integer): LongBool; extdecl;
begin
  {$define handleExceptionID := 5301}
  handleExceptionBegin
  Result := AObj.IsValidConnection(connection_id);
  handleExceptionEnd
end;

// procedure
procedure TCEFServerComponent_CreateServer(AObj: TCEFServerComponent; const address: PChar; port: uint16; backlog: Integer); extdecl;
begin
  {$define handleExceptionID := 5302}
  handleExceptionBegin
  AObj.CreateServer(PCharToUStr(address), port, backlog);
  handleExceptionEnd
end;

// procedure
procedure TCEFServerComponent_Shutdown(AObj: TCEFServerComponent); extdecl;
begin
  {$define handleExceptionID := 5303}
  handleExceptionBegin
  AObj.Shutdown();
  handleExceptionEnd
end;

// procedure
procedure TCEFServerComponent_SendHttp200response(AObj: TCEFServerComponent; connection_id: Integer; const content_type: PChar; const data: Pointer; data_size: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 5304}
  handleExceptionBegin
  AObj.SendHttp200response(connection_id, PCharToUStr(content_type), data, data_size);
  handleExceptionEnd
end;

// procedure
procedure TCEFServerComponent_SendHttp404response(AObj: TCEFServerComponent; connection_id: Integer); extdecl;
begin
  {$define handleExceptionID := 5305}
  handleExceptionBegin
  AObj.SendHttp404response(connection_id);
  handleExceptionEnd
end;

// procedure
procedure TCEFServerComponent_SendHttp500response(AObj: TCEFServerComponent; connection_id: Integer; const error_message: PChar); extdecl;
begin
  {$define handleExceptionID := 5306}
  handleExceptionBegin
  AObj.SendHttp500response(connection_id, PCharToUStr(error_message));
  handleExceptionEnd
end;

// procedure
procedure TCEFServerComponent_SendHttpResponse(AObj: TCEFServerComponent; connection_id: Integer; response_code: Integer; const content_type: PChar; var content_length: int64; const extra_headers: ICefStringMultimap); extdecl;
begin
  {$define handleExceptionID := 5307}
  handleExceptionBegin
  AObj.SendHttpResponse(connection_id, response_code, PCharToUStr(content_type), content_length, extra_headers);
  handleExceptionEnd
end;

// procedure
procedure TCEFServerComponent_SendRawData(AObj: TCEFServerComponent; connection_id: Integer; const data: Pointer; data_size: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 5308}
  handleExceptionBegin
  AObj.SendRawData(connection_id, data, data_size);
  handleExceptionEnd
end;

// procedure
procedure TCEFServerComponent_CloseConnection(AObj: TCEFServerComponent; connection_id: Integer); extdecl;
begin
  {$define handleExceptionID := 5309}
  handleExceptionBegin
  AObj.CloseConnection(connection_id);
  handleExceptionEnd
end;

// procedure
procedure TCEFServerComponent_SendWebSocketMessage(AObj: TCEFServerComponent; connection_id: Integer; const data: Pointer; data_size: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 5310}
  handleExceptionBegin
  AObj.SendWebSocketMessage(connection_id, data, data_size);
  handleExceptionEnd
end;

// property
function TCEFServerComponent_Initialized(AObj: TCEFServerComponent): LongBool; extdecl;
begin
  {$define handleExceptionID := 5311}
  handleExceptionBegin
  Result := AObj.Initialized;
  handleExceptionEnd
end;

// property
function TCEFServerComponent_IsRunning(AObj: TCEFServerComponent): LongBool; extdecl;
begin
  {$define handleExceptionID := 5312}
  handleExceptionBegin
  Result := AObj.IsRunning;
  handleExceptionEnd
end;

// property
procedure TCEFServerComponent_Address(AObj: TCEFServerComponent; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 5313}
  handleExceptionBegin
  StringBufferCreate(AObj.Address, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TCEFServerComponent_HasConnection(AObj: TCEFServerComponent): LongBool; extdecl;
begin
  {$define handleExceptionID := 5314}
  handleExceptionBegin
  Result := AObj.HasConnection;
  handleExceptionEnd
end;

// event
procedure TCEFServerComponent_OnServerCreated(AObj: TCEFServerComponent; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TCEFServerComponent_TOnServerCreated}
  {$DEFINE EventName := OnServerCreated}
  CEFEventMethodCode
end;

// event
procedure TCEFServerComponent_OnServerDestroyed(AObj: TCEFServerComponent; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TCEFServerComponent_TOnServerDestroyed}
  {$DEFINE EventName := OnServerDestroyed}
  CEFEventMethodCode
end;

// event
procedure TCEFServerComponent_OnClientConnected(AObj: TCEFServerComponent; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TCEFServerComponent_TOnClientConnected}
  {$DEFINE EventName := OnClientConnected}
  CEFEventMethodCode
end;

// event
procedure TCEFServerComponent_OnClientDisconnected(AObj: TCEFServerComponent; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TCEFServerComponent_TOnClientDisconnected}
  {$DEFINE EventName := OnClientDisconnected}
  CEFEventMethodCode
end;

// event
procedure TCEFServerComponent_OnHttpRequest(AObj: TCEFServerComponent; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TCEFServerComponent_TOnHttpRequest}
  {$DEFINE EventName := OnHttpRequest}
  CEFEventMethodCode
end;

// event
procedure TCEFServerComponent_OnWebSocketRequest(AObj: TCEFServerComponent; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TCEFServerComponent_TOnWebSocketRequest}
  {$DEFINE EventName := OnWebSocketRequest}
  CEFEventMethodCode
end;

// event
procedure TCEFServerComponent_OnWebSocketConnected(AObj: TCEFServerComponent; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TCEFServerComponent_TOnWebSocketConnected}
  {$DEFINE EventName := OnWebSocketConnected}
  CEFEventMethodCode
end;

// event
procedure TCEFServerComponent_OnWebSocketMessage(AObj: TCEFServerComponent; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TCEFServerComponent_TOnWebSocketMessage}
  {$DEFINE EventName := OnWebSocketMessage}
  CEFEventMethodCode
end;

exports
  TCEFServerComponent_Create,
  TCEFServerComponent_IsValidConnection,
  TCEFServerComponent_CreateServer,
  TCEFServerComponent_Shutdown,
  TCEFServerComponent_SendHttp200response,
  TCEFServerComponent_SendHttp404response,
  TCEFServerComponent_SendHttp500response,
  TCEFServerComponent_SendHttpResponse,
  TCEFServerComponent_SendRawData,
  TCEFServerComponent_CloseConnection,
  TCEFServerComponent_SendWebSocketMessage,
  TCEFServerComponent_Initialized,
  TCEFServerComponent_IsRunning,
  TCEFServerComponent_Address,
  TCEFServerComponent_HasConnection,
  TCEFServerComponent_OnServerCreated,
  TCEFServerComponent_OnServerDestroyed,
  TCEFServerComponent_OnClientConnected,
  TCEFServerComponent_OnClientDisconnected,
  TCEFServerComponent_OnHttpRequest,
  TCEFServerComponent_OnWebSocketRequest,
  TCEFServerComponent_OnWebSocketConnected,
  TCEFServerComponent_OnWebSocketMessage;