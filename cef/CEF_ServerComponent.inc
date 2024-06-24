
//constructor
function CEFServerComponent_Create(aOwner: TComponent): TCEFServerComponent; extdecl;
begin
  handleExceptionBegin
  Result := TCEFServerComponent.Create(aOwner);
  handleExceptionEnd
end;

//property
function CEFServerComponent_Initialized(AObj: TCEFServerComponent): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Initialized;
  handleExceptionEnd
end;

//property
function CEFServerComponent_IsRunning(AObj: TCEFServerComponent): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IsRunning;
  handleExceptionEnd
end;

//property
function CEFServerComponent_Address(AObj: TCEFServerComponent): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.Address);
  handleExceptionEnd
end;

//property
function CEFServerComponent_HasConnection(AObj: TCEFServerComponent): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.HasConnection;
  handleExceptionEnd
end;

//function
function CEFServerComponent_IsValidConnection(AObj: TCEFServerComponent; connectionid: Integer): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IsValidConnection(connectionid);
  handleExceptionEnd
end;

//procedure
procedure CEFServerComponent_CreateServer(AObj: TCEFServerComponent; const address: PChar; port: uint16; backlog: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.CreateServer(address, port, backlog);
  handleExceptionEnd
end;

//procedure
procedure CEFServerComponent_Shutdown(AObj: TCEFServerComponent); extdecl;
begin
  handleExceptionBegin
  AObj.Shutdown();
  handleExceptionEnd
end;

//procedure
procedure CEFServerComponent_SendHttp200response(AObj: TCEFServerComponent; connectionid: Integer; const contenttype: PChar; const data: Pointer; datasize: NativeUInt); extdecl;
begin
  handleExceptionBegin
  AObj.SendHttp200response(connectionid, contenttype, data, datasize);
  handleExceptionEnd
end;

//procedure
procedure CEFServerComponent_SendHttp404response(AObj: TCEFServerComponent; connectionid: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.SendHttp404response(connectionid);
  handleExceptionEnd
end;

//procedure
procedure CEFServerComponent_SendHttp500response(AObj: TCEFServerComponent; connectionid: Integer; const errormessage: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.SendHttp500response(connectionid, errormessage);
  handleExceptionEnd
end;

//procedure
procedure CEFServerComponent_SendHttpResponse(AObj: TCEFServerComponent; connectionid,  responsecode: Integer; const contenttype: PChar; var contentlength: int64; const extraheaders: ICefStringMultimap); extdecl;
begin
  handleExceptionBegin
  AObj.SendHttpResponse(connectionid,  responsecode, contenttype, contentlength, extraheaders);
  handleExceptionEnd
end;

//procedure
procedure CEFServerComponent_SendRawData(AObj: TCEFServerComponent; connectionid: Integer; const data: Pointer; datasize: NativeUInt); extdecl;
begin
  handleExceptionBegin
  AObj.SendRawData(connectionid, data, datasize);
  handleExceptionEnd
end;

//procedure
procedure CEFServerComponent_CloseConnection(AObj: TCEFServerComponent; connectionid: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.CloseConnection(connectionid);
  handleExceptionEnd
end;

//procedure
procedure CEFServerComponent_SendWebSocketMessage(AObj: TCEFServerComponent; connectionid: Integer; const data: Pointer; datasize: NativeUInt); extdecl;
begin
  handleExceptionBegin
  AObj.SendWebSocketMessage(connectionid, data, datasize);
  handleExceptionEnd
end;

//property event
procedure CEFServerComponent_SetOnServerCreated(AObj: TCEFServerComponent; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := ServerComponent_OnServerCreated}
  {$DEFINE EventName := OnServerCreated}
  CEFEventMethodCode
end;

//property event
procedure CEFServerComponent_SetOnServerDestroyed(AObj: TCEFServerComponent; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := ServerComponent_OnServerDestroyed}
  {$DEFINE EventName := OnServerDestroyed}
  CEFEventMethodCode
end;

//property event
procedure CEFServerComponent_SetOnClientConnected(AObj: TCEFServerComponent; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := ServerComponent_OnClientConnected}
  {$DEFINE EventName := OnClientConnected}
  CEFEventMethodCode
end;

//property event
procedure CEFServerComponent_SetOnClientDisconnected(AObj: TCEFServerComponent; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := ServerComponent_OnClientDisconnected}
  {$DEFINE EventName := OnClientDisconnected}
  CEFEventMethodCode
end;

//property event
procedure CEFServerComponent_SetOnHttpRequest(AObj: TCEFServerComponent; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := ServerComponent_OnHttpRequest}
  {$DEFINE EventName := OnHttpRequest}
  CEFEventMethodCode
end;

//property event
procedure CEFServerComponent_SetOnWebSocketRequest(AObj: TCEFServerComponent; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := ServerComponent_OnWebSocketRequest}
  {$DEFINE EventName := OnWebSocketRequest}
  CEFEventMethodCode
end;

//property event
procedure CEFServerComponent_SetOnWebSocketConnected(AObj: TCEFServerComponent; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := ServerComponent_OnWebSocketConnected}
  {$DEFINE EventName := OnWebSocketConnected}
  CEFEventMethodCode
end;

//property event
procedure CEFServerComponent_SetOnWebSocketMessage(AObj: TCEFServerComponent; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := ServerComponent_OnWebSocketMessage}
  {$DEFINE EventName := OnWebSocketMessage}
  CEFEventMethodCode
end;


exports
  CEFServerComponent_Create,
  CEFServerComponent_Initialized,
  CEFServerComponent_IsRunning,
  CEFServerComponent_Address,
  CEFServerComponent_HasConnection,
  CEFServerComponent_IsValidConnection,
  CEFServerComponent_CreateServer,
  CEFServerComponent_Shutdown,
  CEFServerComponent_SendHttp200response,
  CEFServerComponent_SendHttp404response,
  CEFServerComponent_SendHttp500response,
  CEFServerComponent_SendHttpResponse,
  CEFServerComponent_SendRawData,
  CEFServerComponent_CloseConnection,
  CEFServerComponent_SendWebSocketMessage,
  CEFServerComponent_SetOnServerCreated,
  CEFServerComponent_SetOnServerDestroyed,
  CEFServerComponent_SetOnClientConnected,
  CEFServerComponent_SetOnClientDisconnected,
  CEFServerComponent_SetOnHttpRequest,
  CEFServerComponent_SetOnWebSocketRequest,
  CEFServerComponent_SetOnWebSocketConnected,
  CEFServerComponent_SetOnWebSocketMessage;