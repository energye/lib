// constructor
function TEngAudioHandler_Create(out IntfAudioHandler: ICefAudioHandler): TEngAudioHandler; extdecl;
begin
  {$define handleExceptionID := 15600}
  handleExceptionBegin
  Result := TEngAudioHandler.Create();
  IntfAudioHandler := Result as ICefAudioHandler;
  handleExceptionEnd
end;

// event
procedure TEngAudioHandler_OnAudioGetAudioParameters(AObj: TEngAudioHandler; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngAudioHandler_TOnAudioGetAudioParametersEvent}
  {$DEFINE EventName := OnAudioGetAudioParameters}
  CEFEventMethodCode
end;

// event
procedure TEngAudioHandler_OnAudioAudioStreamStarted(AObj: TEngAudioHandler; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngAudioHandler_TOnAudioAudioStreamStartedEvent}
  {$DEFINE EventName := OnAudioAudioStreamStarted}
  CEFEventMethodCode
end;

// event
procedure TEngAudioHandler_OnAudioAudioStreamPacket(AObj: TEngAudioHandler; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngAudioHandler_TOnAudioAudioStreamPacketEvent}
  {$DEFINE EventName := OnAudioAudioStreamPacket}
  CEFEventMethodCode
end;

// event
procedure TEngAudioHandler_OnAudioAudioStreamStopped(AObj: TEngAudioHandler; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngAudioHandler_TOnAudioAudioStreamStoppedEvent}
  {$DEFINE EventName := OnAudioAudioStreamStopped}
  CEFEventMethodCode
end;

// event
procedure TEngAudioHandler_OnAudioAudioStreamError(AObj: TEngAudioHandler; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngAudioHandler_TOnAudioAudioStreamErrorEvent}
  {$DEFINE EventName := OnAudioAudioStreamError}
  CEFEventMethodCode
end;

exports
  TEngAudioHandler_Create,
  TEngAudioHandler_OnAudioGetAudioParameters,
  TEngAudioHandler_OnAudioAudioStreamStarted,
  TEngAudioHandler_OnAudioAudioStreamPacket,
  TEngAudioHandler_OnAudioAudioStreamStopped,
  TEngAudioHandler_OnAudioAudioStreamError;