// constructor
function TEngDisplayHandler_Create(out IntfDisplayHandler: ICefDisplayHandler): TEngDisplayHandler; extdecl;
begin
  {$define handleExceptionID := 11800}
  handleExceptionBegin
  Result := TEngDisplayHandler.Create();
  IntfDisplayHandler := Result as ICefDisplayHandler;
  handleExceptionEnd
end;

// event
procedure TEngDisplayHandler_OnDisplayTooltip(AObj: TEngDisplayHandler; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngDisplayHandler_TOnDisplayTooltipEvent}
  {$DEFINE EventName := OnDisplayTooltip}
  CEFEventMethodCode
end;

// event
procedure TEngDisplayHandler_OnDisplayConsoleMessage(AObj: TEngDisplayHandler; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngDisplayHandler_TOnDisplayConsoleMessageEvent}
  {$DEFINE EventName := OnDisplayConsoleMessage}
  CEFEventMethodCode
end;

// event
procedure TEngDisplayHandler_OnDisplayAutoResize(AObj: TEngDisplayHandler; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngDisplayHandler_TOnDisplayAutoResizeEvent}
  {$DEFINE EventName := OnDisplayAutoResize}
  CEFEventMethodCode
end;

// event
procedure TEngDisplayHandler_OnDisplayAddressChange(AObj: TEngDisplayHandler; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngDisplayHandler_TOnDisplayAddressChangeEvent}
  {$DEFINE EventName := OnDisplayAddressChange}
  CEFEventMethodCode
end;

// event
procedure TEngDisplayHandler_OnDisplayTitleChange(AObj: TEngDisplayHandler; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngDisplayHandler_TOnDisplayTitleChangeEvent}
  {$DEFINE EventName := OnDisplayTitleChange}
  CEFEventMethodCode
end;

// event
procedure TEngDisplayHandler_OnDisplayFaviconUrlChange(AObj: TEngDisplayHandler; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngDisplayHandler_TOnDisplayFaviconUrlChangeEvent}
  {$DEFINE EventName := OnDisplayFaviconUrlChange}
  CEFEventMethodCode
end;

// event
procedure TEngDisplayHandler_OnDisplayFullScreenModeChange(AObj: TEngDisplayHandler; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngDisplayHandler_TOnDisplayFullScreenModeChangeEvent}
  {$DEFINE EventName := OnDisplayFullScreenModeChange}
  CEFEventMethodCode
end;

// event
procedure TEngDisplayHandler_OnDisplayStatusMessage(AObj: TEngDisplayHandler; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngDisplayHandler_TOnDisplayStatusMessageEvent}
  {$DEFINE EventName := OnDisplayStatusMessage}
  CEFEventMethodCode
end;

// event
procedure TEngDisplayHandler_OnDisplayLoadingProgressChange(AObj: TEngDisplayHandler; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngDisplayHandler_TOnDisplayLoadingProgressChangeEvent}
  {$DEFINE EventName := OnDisplayLoadingProgressChange}
  CEFEventMethodCode
end;

// event
procedure TEngDisplayHandler_OnDisplayCursorChange(AObj: TEngDisplayHandler; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngDisplayHandler_TOnDisplayCursorChangeEvent}
  {$DEFINE EventName := OnDisplayCursorChange}
  CEFEventMethodCode
end;

// event
procedure TEngDisplayHandler_OnDisplayMediaAccessChange(AObj: TEngDisplayHandler; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngDisplayHandler_TOnDisplayMediaAccessChangeEvent}
  {$DEFINE EventName := OnDisplayMediaAccessChange}
  CEFEventMethodCode
end;

exports
  TEngDisplayHandler_Create,
  TEngDisplayHandler_OnDisplayTooltip,
  TEngDisplayHandler_OnDisplayConsoleMessage,
  TEngDisplayHandler_OnDisplayAutoResize,
  TEngDisplayHandler_OnDisplayAddressChange,
  TEngDisplayHandler_OnDisplayTitleChange,
  TEngDisplayHandler_OnDisplayFaviconUrlChange,
  TEngDisplayHandler_OnDisplayFullScreenModeChange,
  TEngDisplayHandler_OnDisplayStatusMessage,
  TEngDisplayHandler_OnDisplayLoadingProgressChange,
  TEngDisplayHandler_OnDisplayCursorChange,
  TEngDisplayHandler_OnDisplayMediaAccessChange;