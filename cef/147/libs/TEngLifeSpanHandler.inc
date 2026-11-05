// constructor
function TEngLifeSpanHandler_Create(out IntfLifeSpanHandler: ICefLifeSpanHandler): TEngLifeSpanHandler; extdecl;
begin
  {$define handleExceptionID := 13000}
  handleExceptionBegin
  Result := TEngLifeSpanHandler.Create();
  IntfLifeSpanHandler := Result as ICefLifeSpanHandler;
  handleExceptionEnd
end;

// event
procedure TEngLifeSpanHandler_OnLifeSpanBeforePopup(AObj: TEngLifeSpanHandler; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngLifeSpanHandler_TOnLifeSpanBeforePopupEvent}
  {$DEFINE EventName := OnLifeSpanBeforePopup}
  CEFEventMethodCode
end;

// event
procedure TEngLifeSpanHandler_OnLifeSpanDoClose(AObj: TEngLifeSpanHandler; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngLifeSpanHandler_TOnLifeSpanDoCloseEvent}
  {$DEFINE EventName := OnLifeSpanDoClose}
  CEFEventMethodCode
end;

// event
procedure TEngLifeSpanHandler_OnLifeSpanBeforePopupAborted(AObj: TEngLifeSpanHandler; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngLifeSpanHandler_TOnLifeSpanBeforePopupAbortedEvent}
  {$DEFINE EventName := OnLifeSpanBeforePopupAborted}
  CEFEventMethodCode
end;

// event
procedure TEngLifeSpanHandler_OnLifeSpanBeforeDevToolsPopup(AObj: TEngLifeSpanHandler; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngLifeSpanHandler_TOnLifeSpanBeforeDevToolsPopupEvent}
  {$DEFINE EventName := OnLifeSpanBeforeDevToolsPopup}
  CEFEventMethodCode
end;

// event
procedure TEngLifeSpanHandler_OnLifeSpanAfterCreated(AObj: TEngLifeSpanHandler; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngLifeSpanHandler_TOnLifeSpanAfterCreatedEvent}
  {$DEFINE EventName := OnLifeSpanAfterCreated}
  CEFEventMethodCode
end;

// event
procedure TEngLifeSpanHandler_OnLifeSpanBeforeClose(AObj: TEngLifeSpanHandler; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngLifeSpanHandler_TOnLifeSpanBeforeCloseEvent}
  {$DEFINE EventName := OnLifeSpanBeforeClose}
  CEFEventMethodCode
end;

exports
  TEngLifeSpanHandler_Create,
  TEngLifeSpanHandler_OnLifeSpanBeforePopup,
  TEngLifeSpanHandler_OnLifeSpanDoClose,
  TEngLifeSpanHandler_OnLifeSpanBeforePopupAborted,
  TEngLifeSpanHandler_OnLifeSpanBeforeDevToolsPopup,
  TEngLifeSpanHandler_OnLifeSpanAfterCreated,
  TEngLifeSpanHandler_OnLifeSpanBeforeClose;