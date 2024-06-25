
//constructor
function V8ArrayBufferReleaseCallback_Create(): TV8ArrayBufferReleaseCallback; extdecl;
begin
  handleExceptionBegin
  Result := TV8ArrayBufferReleaseCallback.Create();
  handleExceptionEnd
end;

//function
procedure V8ArrayBufferReleaseCallback_AsInterface(AObj: TV8ArrayBufferReleaseCallback; var Result: ICefv8ArrayBufferReleaseCallback); extdecl;
begin
  handleExceptionBegin
  Result := AObj.AsInterface();
  handleExceptionEnd
end;

//property event
procedure V8ArrayBufferReleaseCallback_SetOnReleaseBuffer(AObj: TV8ArrayBufferReleaseCallback; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := V8ArrayBufferReleaseCallback_OnReleaseBuffer}
  {$DEFINE EventName := OnReleaseBuffer}
  CEFEventMethodCode
end;


exports
  V8ArrayBufferReleaseCallback_Create,
  V8ArrayBufferReleaseCallback_AsInterface,
  V8ArrayBufferReleaseCallback_SetOnReleaseBuffer;