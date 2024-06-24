
//constructor
function V8ArrayBufferReleaseCallback_Create(): TV8ArrayBufferReleaseCallback; extdecl;
begin
  handleExceptionBegin
  Result := TV8ArrayBufferReleaseCallback.Create();
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
  V8ArrayBufferReleaseCallback_SetOnReleaseBuffer;