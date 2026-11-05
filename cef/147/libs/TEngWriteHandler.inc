// constructor
function TEngWriteHandler_Create(out IntfWriteHandler: ICefWriteHandler): TEngWriteHandler; extdecl;
begin
  {$define handleExceptionID := 17600}
  handleExceptionBegin
  Result := TEngWriteHandler.Create();
  IntfWriteHandler := Result as ICefWriteHandler;
  handleExceptionEnd
end;

// event
procedure TEngWriteHandler_OnWriteWrite(AObj: TEngWriteHandler; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngWriteHandler_TOnWriteWriteEvent}
  {$DEFINE EventName := OnWriteWrite}
  CEFEventMethodCode
end;

// event
procedure TEngWriteHandler_OnWriteSeek(AObj: TEngWriteHandler; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngWriteHandler_TOnWriteSeekEvent}
  {$DEFINE EventName := OnWriteSeek}
  CEFEventMethodCode
end;

// event
procedure TEngWriteHandler_OnWriteEll(AObj: TEngWriteHandler; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngWriteHandler_TOnWriteEllEvent}
  {$DEFINE EventName := OnWriteEll}
  CEFEventMethodCode
end;

// event
procedure TEngWriteHandler_OnWriteFlush(AObj: TEngWriteHandler; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngWriteHandler_TOnWriteFlushEvent}
  {$DEFINE EventName := OnWriteFlush}
  CEFEventMethodCode
end;

// event
procedure TEngWriteHandler_OnWriteMayBlock(AObj: TEngWriteHandler; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngWriteHandler_TOnWriteMayBlockEvent}
  {$DEFINE EventName := OnWriteMayBlock}
  CEFEventMethodCode
end;

exports
  TEngWriteHandler_Create,
  TEngWriteHandler_OnWriteWrite,
  TEngWriteHandler_OnWriteSeek,
  TEngWriteHandler_OnWriteEll,
  TEngWriteHandler_OnWriteFlush,
  TEngWriteHandler_OnWriteMayBlock;