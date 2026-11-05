// constructor
function TEngFrameHandler_Create(out IntfFrameHandler: ICefFrameHandler): TEngFrameHandler; extdecl;
begin
  {$define handleExceptionID := 16800}
  handleExceptionBegin
  Result := TEngFrameHandler.Create();
  IntfFrameHandler := Result as ICefFrameHandler;
  handleExceptionEnd
end;

// event
procedure TEngFrameHandler_OnFrameFrameCreated(AObj: TEngFrameHandler; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngFrameHandler_TOnFrameFrameCreatedEvent}
  {$DEFINE EventName := OnFrameFrameCreated}
  CEFEventMethodCode
end;

// event
procedure TEngFrameHandler_OnFrameFrameDestroyed(AObj: TEngFrameHandler; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngFrameHandler_TOnFrameFrameDestroyedEvent}
  {$DEFINE EventName := OnFrameFrameDestroyed}
  CEFEventMethodCode
end;

// event
procedure TEngFrameHandler_OnFrameFrameAttached(AObj: TEngFrameHandler; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngFrameHandler_TOnFrameFrameAttachedEvent}
  {$DEFINE EventName := OnFrameFrameAttached}
  CEFEventMethodCode
end;

// event
procedure TEngFrameHandler_OnFrameFrameDetached(AObj: TEngFrameHandler; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngFrameHandler_TOnFrameFrameDetachedEvent}
  {$DEFINE EventName := OnFrameFrameDetached}
  CEFEventMethodCode
end;

// event
procedure TEngFrameHandler_OnFrameMainFrameChanged(AObj: TEngFrameHandler; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngFrameHandler_TOnFrameMainFrameChangedEvent}
  {$DEFINE EventName := OnFrameMainFrameChanged}
  CEFEventMethodCode
end;

exports
  TEngFrameHandler_Create,
  TEngFrameHandler_OnFrameFrameCreated,
  TEngFrameHandler_OnFrameFrameDestroyed,
  TEngFrameHandler_OnFrameFrameAttached,
  TEngFrameHandler_OnFrameFrameDetached,
  TEngFrameHandler_OnFrameMainFrameChanged;