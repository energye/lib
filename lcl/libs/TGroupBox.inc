// constructor
function TGroupBox_Create(AOwner: TComponent): TGroupBox; extdecl;
begin
  {$define handleExceptionID := 3600}
  handleExceptionBegin
  Result := TGroupBox.Create(AOwner);
  handleExceptionEnd
end;

// property
function TGroupBox_DragCursor(ASet: LongBool; AObj: TGroupBox; AValue: TCursor): TCursor; extdecl;
begin
  {$define handleExceptionID := 3601}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragCursor := AValue
  end else
    Result := AObj.DragCursor;
  handleExceptionEnd
end;

// property
function TGroupBox_DragKind(ASet: LongBool; AObj: TGroupBox; AValue: TDragKind): TDragKind; extdecl;
begin
  {$define handleExceptionID := 3602}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragKind := AValue
  end else
    Result := AObj.DragKind;
  handleExceptionEnd
end;

// property
function TGroupBox_DragMode(ASet: LongBool; AObj: TGroupBox; AValue: TDragMode): TDragMode; extdecl;
begin
  {$define handleExceptionID := 3603}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragMode := AValue
  end else
    Result := AObj.DragMode;
  handleExceptionEnd
end;

// property
function TGroupBox_ParentColor(ASet: LongBool; AObj: TGroupBox; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 3604}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentColor := AValue
  end else
    Result := AObj.ParentColor;
  handleExceptionEnd
end;

// property
function TGroupBox_ParentFont(ASet: LongBool; AObj: TGroupBox; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 3605}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentFont := AValue
  end else
    Result := AObj.ParentFont;
  handleExceptionEnd
end;

// property
function TGroupBox_ParentShowHint(ASet: LongBool; AObj: TGroupBox; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 3606}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentShowHint := AValue
  end else
    Result := AObj.ParentShowHint;
  handleExceptionEnd
end;

// event
procedure TGroupBox_OnContextPopup(AObj: TGroupBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTContextPopupEvent}
  {$DEFINE EventName := OnContextPopup}
  LCLEventMethodCode
end;

// event
procedure TGroupBox_OnDblClick(AObj: TGroupBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnDblClick}
  LCLEventMethodCode
end;

// event
procedure TGroupBox_OnDragDrop(AObj: TGroupBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragDropEvent}
  {$DEFINE EventName := OnDragDrop}
  LCLEventMethodCode
end;

// event
procedure TGroupBox_OnDragOver(AObj: TGroupBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragOverEvent}
  {$DEFINE EventName := OnDragOver}
  LCLEventMethodCode
end;

// event
procedure TGroupBox_OnEndDock(AObj: TGroupBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTEndDragEvent}
  {$DEFINE EventName := OnEndDock}
  LCLEventMethodCode
end;

// event
procedure TGroupBox_OnEndDrag(AObj: TGroupBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTEndDragEvent}
  {$DEFINE EventName := OnEndDrag}
  LCLEventMethodCode
end;

// event
procedure TGroupBox_OnGetSiteInfo(AObj: TGroupBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTGetSiteInfoEvent}
  {$DEFINE EventName := OnGetSiteInfo}
  LCLEventMethodCode
end;

// event
procedure TGroupBox_OnMouseDown(AObj: TGroupBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseDown}
  LCLEventMethodCode
end;

// event
procedure TGroupBox_OnMouseEnter(AObj: TGroupBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseEnter}
  LCLEventMethodCode
end;

// event
procedure TGroupBox_OnMouseLeave(AObj: TGroupBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseLeave}
  LCLEventMethodCode
end;

// event
procedure TGroupBox_OnMouseMove(AObj: TGroupBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseMoveEvent}
  {$DEFINE EventName := OnMouseMove}
  LCLEventMethodCode
end;

// event
procedure TGroupBox_OnMouseUp(AObj: TGroupBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseUp}
  LCLEventMethodCode
end;

// event
procedure TGroupBox_OnMouseWheel(AObj: TGroupBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelEvent}
  {$DEFINE EventName := OnMouseWheel}
  LCLEventMethodCode
end;

// event
procedure TGroupBox_OnMouseWheelDown(AObj: TGroupBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelDown}
  LCLEventMethodCode
end;

// event
procedure TGroupBox_OnMouseWheelUp(AObj: TGroupBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelUp}
  LCLEventMethodCode
end;

// event
procedure TGroupBox_OnStartDock(AObj: TGroupBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTStartDockEvent}
  {$DEFINE EventName := OnStartDock}
  LCLEventMethodCode
end;

// event
procedure TGroupBox_OnStartDrag(AObj: TGroupBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTStartDragEvent}
  {$DEFINE EventName := OnStartDrag}
  LCLEventMethodCode
end;

function TGroupBox_TClass(): TClass; extdecl;
begin
  Result := TGroupBox;
end;

exports
  TGroupBox_Create,
  TGroupBox_DragCursor,
  TGroupBox_DragKind,
  TGroupBox_DragMode,
  TGroupBox_ParentColor,
  TGroupBox_ParentFont,
  TGroupBox_ParentShowHint,
  TGroupBox_OnContextPopup,
  TGroupBox_OnDblClick,
  TGroupBox_OnDragDrop,
  TGroupBox_OnDragOver,
  TGroupBox_OnEndDock,
  TGroupBox_OnEndDrag,
  TGroupBox_OnGetSiteInfo,
  TGroupBox_OnMouseDown,
  TGroupBox_OnMouseEnter,
  TGroupBox_OnMouseLeave,
  TGroupBox_OnMouseMove,
  TGroupBox_OnMouseUp,
  TGroupBox_OnMouseWheel,
  TGroupBox_OnMouseWheelDown,
  TGroupBox_OnMouseWheelUp,
  TGroupBox_OnStartDock,
  TGroupBox_OnStartDrag,
  TGroupBox_TClass;