// constructor
function TEngV8ArrayBufferReleaseCallback_Create(out IntfV8ArrayBufferReleaseCallback: ICefv8ArrayBufferReleaseCallback): TEngV8ArrayBufferReleaseCallback; extdecl;
begin
  {$define handleExceptionID := 15000}
  handleExceptionBegin
  Result := TEngV8ArrayBufferReleaseCallback.Create();
  IntfV8ArrayBufferReleaseCallback := Result as ICefv8ArrayBufferReleaseCallback;
  handleExceptionEnd
end;

// event
procedure TEngV8ArrayBufferReleaseCallback_OnV8ArrayBufferReleaseCallbackReleaseBuffer(AObj: TEngV8ArrayBufferReleaseCallback; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngV8ArrayBufferReleaseCallback_TOnV8ArrayBufferReleaseCallbackReleaseBufferEvent}
  {$DEFINE EventName := OnV8ArrayBufferReleaseCallbackReleaseBuffer}
  CEFEventMethodCode
end;

exports
  TEngV8ArrayBufferReleaseCallback_Create,
  TEngV8ArrayBufferReleaseCallback_OnV8ArrayBufferReleaseCallbackReleaseBuffer;