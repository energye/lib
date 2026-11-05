// constructor
function TLinkLabel_Create(AOwner: TComponent): TLinkLabel; extdecl;
begin
  {$define handleExceptionID := 5300}
  handleExceptionBegin
  Result := TLinkLabel.Create(AOwner);
  handleExceptionEnd
end;

// property
function TLinkLabel_Alignment(ASet: LongBool; AObj: TLinkLabel; AValue: TAlignment): TAlignment; extdecl;
begin
  {$define handleExceptionID := 5301}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Alignment := AValue
  end else
    Result := AObj.Alignment;
  handleExceptionEnd
end;

// property
function TLinkLabel_DragCursor(ASet: LongBool; AObj: TLinkLabel; AValue: TCursor): TCursor; extdecl;
begin
  {$define handleExceptionID := 5302}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragCursor := AValue
  end else
    Result := AObj.DragCursor;
  handleExceptionEnd
end;

// property
function TLinkLabel_DragKind(ASet: LongBool; AObj: TLinkLabel; AValue: TDragKind): TDragKind; extdecl;
begin
  {$define handleExceptionID := 5303}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragKind := AValue
  end else
    Result := AObj.DragKind;
  handleExceptionEnd
end;

// property
function TLinkLabel_DragMode(ASet: LongBool; AObj: TLinkLabel; AValue: TDragMode): TDragMode; extdecl;
begin
  {$define handleExceptionID := 5304}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragMode := AValue
  end else
    Result := AObj.DragMode;
  handleExceptionEnd
end;

// property
function TLinkLabel_ParentColor(ASet: LongBool; AObj: TLinkLabel; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 5305}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentColor := AValue
  end else
    Result := AObj.ParentColor;
  handleExceptionEnd
end;

// property
function TLinkLabel_ParentFont(ASet: LongBool; AObj: TLinkLabel; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 5306}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentFont := AValue
  end else
    Result := AObj.ParentFont;
  handleExceptionEnd
end;

// property
function TLinkLabel_ParentShowHint(ASet: LongBool; AObj: TLinkLabel; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 5307}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentShowHint := AValue
  end else
    Result := AObj.ParentShowHint;
  handleExceptionEnd
end;

// event
procedure TLinkLabel_OnContextPopup(AObj: TLinkLabel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTContextPopupEvent}
  {$DEFINE EventName := OnContextPopup}
  LCLEventMethodCode
end;

// event
procedure TLinkLabel_OnDblClick(AObj: TLinkLabel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnDblClick}
  LCLEventMethodCode
end;

// event
procedure TLinkLabel_OnDragDrop(AObj: TLinkLabel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragDropEvent}
  {$DEFINE EventName := OnDragDrop}
  LCLEventMethodCode
end;

// event
procedure TLinkLabel_OnDragOver(AObj: TLinkLabel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragOverEvent}
  {$DEFINE EventName := OnDragOver}
  LCLEventMethodCode
end;

// event
procedure TLinkLabel_OnEndDock(AObj: TLinkLabel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTEndDragEvent}
  {$DEFINE EventName := OnEndDock}
  LCLEventMethodCode
end;

// event
procedure TLinkLabel_OnEndDrag(AObj: TLinkLabel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTEndDragEvent}
  {$DEFINE EventName := OnEndDrag}
  LCLEventMethodCode
end;

// event
procedure TLinkLabel_OnMouseDown(AObj: TLinkLabel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseDown}
  LCLEventMethodCode
end;

// event
procedure TLinkLabel_OnMouseEnter(AObj: TLinkLabel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseEnter}
  LCLEventMethodCode
end;

// event
procedure TLinkLabel_OnMouseLeave(AObj: TLinkLabel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseLeave}
  LCLEventMethodCode
end;

// event
procedure TLinkLabel_OnMouseMove(AObj: TLinkLabel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseMoveEvent}
  {$DEFINE EventName := OnMouseMove}
  LCLEventMethodCode
end;

// event
procedure TLinkLabel_OnMouseUp(AObj: TLinkLabel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseUp}
  LCLEventMethodCode
end;

// event
procedure TLinkLabel_OnStartDock(AObj: TLinkLabel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTStartDockEvent}
  {$DEFINE EventName := OnStartDock}
  LCLEventMethodCode
end;

// event
procedure TLinkLabel_OnStartDrag(AObj: TLinkLabel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTStartDragEvent}
  {$DEFINE EventName := OnStartDrag}
  LCLEventMethodCode
end;

// event
procedure TLinkLabel_OnLinkClick(AObj: TLinkLabel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTSysLinkEvent}
  {$DEFINE EventName := OnLinkClick}
  LCLEventMethodCode
end;

function TLinkLabel_TClass(): TClass; extdecl;
begin
  Result := TLinkLabel;
end;

exports
  TLinkLabel_Create,
  TLinkLabel_Alignment,
  TLinkLabel_DragCursor,
  TLinkLabel_DragKind,
  TLinkLabel_DragMode,
  TLinkLabel_ParentColor,
  TLinkLabel_ParentFont,
  TLinkLabel_ParentShowHint,
  TLinkLabel_OnContextPopup,
  TLinkLabel_OnDblClick,
  TLinkLabel_OnDragDrop,
  TLinkLabel_OnDragOver,
  TLinkLabel_OnEndDock,
  TLinkLabel_OnEndDrag,
  TLinkLabel_OnMouseDown,
  TLinkLabel_OnMouseEnter,
  TLinkLabel_OnMouseLeave,
  TLinkLabel_OnMouseMove,
  TLinkLabel_OnMouseUp,
  TLinkLabel_OnStartDock,
  TLinkLabel_OnStartDrag,
  TLinkLabel_OnLinkClick,
  TLinkLabel_TClass;