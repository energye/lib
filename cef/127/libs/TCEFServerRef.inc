// constructor
function TCEFServerRef_Create(data: Pointer; out IntfServer: ICefServer): TCEFServerRef; extdecl;
begin
  {$define handleExceptionID := 22900}
  handleExceptionBegin
  Result := TCEFServerRef.Create(data);
  IntfServer := Result as ICefServer;
  handleExceptionEnd
end;

// function
procedure TCEFServerRef_GetTaskRunner(AObj: ICefServer; var Result: ICefTaskRunner); extdecl;
begin
  {$define handleExceptionID := 22901}
  handleExceptionBegin
  Result := AObj.GetTaskRunner();
  handleExceptionEnd
end;

// function
function TCEFServerRef_IsRunning(AObj: ICefServer): LongBool; extdecl;
begin
  {$define handleExceptionID := 22902}
  handleExceptionBegin
  Result := AObj.IsRunning();
  handleExceptionEnd
end;

// function
procedure TCEFServerRef_GetAddress(AObj: ICefServer;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 22903}
  handleExceptionBegin
  StringBufferCreate(string(AObj.GetAddress()), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
function TCEFServerRef_HasConnection(AObj: ICefServer): LongBool; extdecl;
begin
  {$define handleExceptionID := 22904}
  handleExceptionBegin
  Result := AObj.HasConnection();
  handleExceptionEnd
end;

// function
function TCEFServerRef_IsValidConnection(AObj: ICefServer; connection_id: Integer): LongBool; extdecl;
begin
  {$define handleExceptionID := 22905}
  handleExceptionBegin
  Result := AObj.IsValidConnection(connection_id);
  handleExceptionEnd
end;

// function static
procedure TCEFServerRef_UnWrap(data: Pointer; var Result: ICefServer); extdecl;
begin
  Result := TCEFServerRef.UnWrap(data);
end;

// procedure
procedure TCEFServerRef_Shutdown(AObj: ICefServer); extdecl;
begin
  {$define handleExceptionID := 22906}
  handleExceptionBegin
  AObj.Shutdown();
  handleExceptionEnd
end;

// procedure
procedure TCEFServerRef_SendHttp200response(AObj: ICefServer; connection_id: Integer; const content_type: PChar; const data: Pointer; data_size: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 22907}
  handleExceptionBegin
  AObj.SendHttp200response(connection_id, PCharToUStr(content_type), data, data_size);
  handleExceptionEnd
end;

// procedure
procedure TCEFServerRef_SendHttp404response(AObj: ICefServer; connection_id: Integer); extdecl;
begin
  {$define handleExceptionID := 22908}
  handleExceptionBegin
  AObj.SendHttp404response(connection_id);
  handleExceptionEnd
end;

// procedure
procedure TCEFServerRef_SendHttp500response(AObj: ICefServer; connection_id: Integer; const error_message: PChar); extdecl;
begin
  {$define handleExceptionID := 22909}
  handleExceptionBegin
  AObj.SendHttp500response(connection_id, PCharToUStr(error_message));
  handleExceptionEnd
end;

// procedure
procedure TCEFServerRef_SendHttpResponse(AObj: ICefServer; connection_id: Integer; response_code: Integer; const content_type: PChar; var content_length: int64; const extra_headers: ICefStringMultimap); extdecl;
begin
  {$define handleExceptionID := 22910}
  handleExceptionBegin
  AObj.SendHttpResponse(connection_id, response_code, PCharToUStr(content_type), content_length, extra_headers);
  handleExceptionEnd
end;

// procedure
procedure TCEFServerRef_SendRawData(AObj: ICefServer; connection_id: Integer; const data: Pointer; data_size: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 22911}
  handleExceptionBegin
  AObj.SendRawData(connection_id, data, data_size);
  handleExceptionEnd
end;

// procedure
procedure TCEFServerRef_CloseConnection(AObj: ICefServer; connection_id: Integer); extdecl;
begin
  {$define handleExceptionID := 22912}
  handleExceptionBegin
  AObj.CloseConnection(connection_id);
  handleExceptionEnd
end;

// procedure
procedure TCEFServerRef_SendWebSocketMessage(AObj: ICefServer; connection_id: Integer; const data: Pointer; data_size: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 22913}
  handleExceptionBegin
  AObj.SendWebSocketMessage(connection_id, data, data_size);
  handleExceptionEnd
end;

exports
  TCEFServerRef_Create,
  TCEFServerRef_GetTaskRunner,
  TCEFServerRef_IsRunning,
  TCEFServerRef_GetAddress,
  TCEFServerRef_HasConnection,
  TCEFServerRef_IsValidConnection,
  TCEFServerRef_UnWrap,
  TCEFServerRef_Shutdown,
  TCEFServerRef_SendHttp200response,
  TCEFServerRef_SendHttp404response,
  TCEFServerRef_SendHttp500response,
  TCEFServerRef_SendHttpResponse,
  TCEFServerRef_SendRawData,
  TCEFServerRef_CloseConnection,
  TCEFServerRef_SendWebSocketMessage;