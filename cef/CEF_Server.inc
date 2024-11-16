
//function
procedure CEFServer_UnWrap(data: Pointer; var Result: ICefServer); extdecl;
begin
  Result := TCEFServerRef.UnWrap(data);
end;

//function
procedure CEFServer_GetTaskRunner(AObj: ICEFServer; var Result: ICefTaskRunner); extdecl;
begin
  {$define handleExceptionFuncName :='GetTaskRunner'}
  handleExceptionBegin
  Result := AObj.GetTaskRunner();
  handleExceptionEnd
end;

//function
function CEFServer_IsRunning(AObj: ICEFServer): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='IsRunning'}
  handleExceptionBegin
  Result := AObj.IsRunning();
  handleExceptionEnd
end;

//function
function CEFServer_GetAddress(AObj: ICEFServer): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='GetAddress'}
  handleExceptionBegin
  Result := ToPChar(AObj.GetAddress());
  handleExceptionEnd
end;

//function
function CEFServer_HasConnection(AObj: ICEFServer): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='HasConnection'}
  handleExceptionBegin
  Result := AObj.HasConnection();
  handleExceptionEnd
end;

//function
function CEFServer_IsValidConnection(AObj: ICEFServer; connectionid: Integer): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='IsValidConnection'}
  handleExceptionBegin
  Result := AObj.IsValidConnection(connectionid);
  handleExceptionEnd
end;

//procedure
procedure CEFServer_Shutdown(AObj: ICEFServer); extdecl;
begin
  {$define handleExceptionFuncName :='Shutdown'}
  handleExceptionBegin
  AObj.Shutdown();
  handleExceptionEnd
end;

//procedure
procedure CEFServer_SendHttp200response(AObj: ICEFServer; connectionid: Integer; const contenttype: PChar; const data: Pointer; datasize: NativeUInt); extdecl;
begin
  {$define handleExceptionFuncName :='SendHttp200response'}
  handleExceptionBegin
  AObj.SendHttp200response(connectionid, contenttype, data, datasize);
  handleExceptionEnd
end;

//procedure
procedure CEFServer_SendHttp404response(AObj: ICEFServer; connectionid: Integer); extdecl;
begin
  {$define handleExceptionFuncName :='SendHttp404response'}
  handleExceptionBegin
  AObj.SendHttp404response(connectionid);
  handleExceptionEnd
end;

//procedure
procedure CEFServer_SendHttp500response(AObj: ICEFServer; connectionid: Integer; const errormessage: PChar); extdecl;
begin
  {$define handleExceptionFuncName :='SendHttp500response'}
  handleExceptionBegin
  AObj.SendHttp500response(connectionid, errormessage);
  handleExceptionEnd
end;

//procedure
procedure CEFServer_SendHttpResponse(AObj: ICEFServer; connectionid,  responsecode: Integer; const contenttype: PChar; var contentlength: int64; const extraheaders: ICefStringMultimap); extdecl;
begin
  {$define handleExceptionFuncName :='SendHttpResponse'}
  handleExceptionBegin
  AObj.SendHttpResponse(connectionid,  responsecode, contenttype, contentlength, extraheaders);
  handleExceptionEnd
end;

//procedure
procedure CEFServer_SendRawData(AObj: ICEFServer; connectionid: Integer; const data: Pointer; datasize: NativeUInt); extdecl;
begin
  {$define handleExceptionFuncName :='SendRawData'}
  handleExceptionBegin
  AObj.SendRawData(connectionid, data, datasize);
  handleExceptionEnd
end;

//procedure
procedure CEFServer_CloseConnection(AObj: ICEFServer; connectionid: Integer); extdecl;
begin
  {$define handleExceptionFuncName :='CloseConnection'}
  handleExceptionBegin
  AObj.CloseConnection(connectionid);
  handleExceptionEnd
end;

//procedure
procedure CEFServer_SendWebSocketMessage(AObj: ICEFServer; connectionid: Integer; const data: Pointer; datasize: NativeUInt); extdecl;
begin
  {$define handleExceptionFuncName :='SendWebSocketMessage'}
  handleExceptionBegin
  AObj.SendWebSocketMessage(connectionid, data, datasize);
  handleExceptionEnd
end;


exports
  CEFServer_UnWrap,
  CEFServer_GetTaskRunner,
  CEFServer_IsRunning,
  CEFServer_GetAddress,
  CEFServer_HasConnection,
  CEFServer_IsValidConnection,
  CEFServer_Shutdown,
  CEFServer_SendHttp200response,
  CEFServer_SendHttp404response,
  CEFServer_SendHttp500response,
  CEFServer_SendHttpResponse,
  CEFServer_SendRawData,
  CEFServer_CloseConnection,
  CEFServer_SendWebSocketMessage;