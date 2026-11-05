// constructor
function TScrollBox_Create(AOwner: TComponent): TScrollBox; extdecl;
begin
  {$define handleExceptionID := 17400}
  handleExceptionBegin
  Result := TScrollBox.Create(AOwner);
  handleExceptionEnd
end;

// property
function TScrollBox_AutoScroll(ASet: LongBool; AObj: TScrollBox; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 17401}
  handleExceptionBegin
  if ASet then
  begin
    AObj.AutoScroll := AValue
  end else
    Result := AObj.AutoScroll;
  handleExceptionEnd
end;

// property
function TScrollBox_DragCursor(ASet: LongBool; AObj: TScrollBox; AValue: TCursor): TCursor; extdecl;
begin
  {$define handleExceptionID := 17402}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragCursor := AValue
  end else
    Result := AObj.DragCursor;
  handleExceptionEnd
end;

// property
function TScrollBox_DragKind(ASet: LongBool; AObj: TScrollBox; AValue: TDragKind): TDragKind; extdecl;
begin
  {$define handleExceptionID := 17403}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragKind := AValue
  end else
    Result := AObj.DragKind;
  handleExceptionEnd
end;

// property
function TScrollBox_DragMode(ASet: LongBool; AObj: TScrollBox; AValue: TDragMode): TDragMode; extdecl;
begin
  {$define handleExceptionID := 17404}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragMode := AValue
  end else
    Result := AObj.DragMode;
  handleExceptionEnd
end;

// property
function TScrollBox_ParentBackground(ASet: LongBool; AObj: TScrollBox; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 17405}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentBackground := AValue
  end else
    Result := AObj.ParentBackground;
  handleExceptionEnd
end;

// property
function TScrollBox_ParentColor(ASet: LongBool; AObj: TScrollBox; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 17406}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentColor := AValue
  end else
    Result := AObj.ParentColor;
  handleExceptionEnd
end;

// property
function TScrollBox_ParentFont(ASet: LongBool; AObj: TScrollBox; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 17407}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentFont := AValue
  end else
    Result := AObj.ParentFont;
  handleExceptionEnd
end;

// property
function TScrollBox_ParentShowHint(ASet: LongBool; AObj: TScrollBox; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 17408}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentShowHint := AValue
  end else
    Result := AObj.ParentShowHint;
  handleExceptionEnd
end;

// event
procedure TScrollBox_OnConstrainedResize(AObj: TScrollBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTConstrainedResizeEvent}
  {$DEFINE EventName := OnConstrainedResize}
  LCLEventMethodCode
end;

// event
procedure TScrollBox_OnDblClick(AObj: TScrollBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnDblClick}
  LCLEventMethodCode
end;

// event
procedure TScrollBox_OnDragDrop(AObj: TScrollBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragDropEvent}
  {$DEFINE EventName := OnDragDrop}
  LCLEventMethodCode
end;

// event
procedure TScrollBox_OnDragOver(AObj: TScrollBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragOverEvent}
  {$DEFINE EventName := OnDragOver}
  LCLEventMethodCode
end;

// event
procedure TScrollBox_OnEndDock(AObj: TScrollBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTEndDragEvent}
  {$DEFINE EventName := OnEndDock}
  LCLEventMethodCode
end;

// event
procedure TScrollBox_OnEndDrag(AObj: TScrollBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTEndDragEvent}
  {$DEFINE EventName := OnEndDrag}
  LCLEventMethodCode
end;

// event
procedure TScrollBox_OnGetSiteInfo(AObj: TScrollBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTGetSiteInfoEvent}
  {$DEFINE EventName := OnGetSiteInfo}
  LCLEventMethodCode
end;

// event
procedure TScrollBox_OnMouseDown(AObj: TScrollBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseDown}
  LCLEventMethodCode
end;

// event
procedure TScrollBox_OnMouseEnter(AObj: TScrollBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseEnter}
  LCLEventMethodCode
end;

// event
procedure TScrollBox_OnMouseLeave(AObj: TScrollBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseLeave}
  LCLEventMethodCode
end;

// event
procedure TScrollBox_OnMouseMove(AObj: TScrollBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseMoveEvent}
  {$DEFINE EventName := OnMouseMove}
  LCLEventMethodCode
end;

// event
procedure TScrollBox_OnMouseUp(AObj: TScrollBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseUp}
  LCLEventMethodCode
end;

// event
procedure TScrollBox_OnMouseWheel(AObj: TScrollBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelEvent}
  {$DEFINE EventName := OnMouseWheel}
  LCLEventMethodCode
end;

// event
procedure TScrollBox_OnMouseWheelDown(AObj: TScrollBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelDown}
  LCLEventMethodCode
end;

// event
procedure TScrollBox_OnMouseWheelUp(AObj: TScrollBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelUp}
  LCLEventMethodCode
end;

// event
procedure TScrollBox_OnMouseWheelHorz(AObj: TScrollBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelEvent}
  {$DEFINE EventName := OnMouseWheelHorz}
  LCLEventMethodCode
end;

// event
procedure TScrollBox_OnMouseWheelLeft(AObj: TScrollBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelLeft}
  LCLEventMethodCode
end;

// event
procedure TScrollBox_OnMouseWheelRight(AObj: TScrollBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelRight}
  LCLEventMethodCode
end;

// event
procedure TScrollBox_OnStartDock(AObj: TScrollBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTStartDockEvent}
  {$DEFINE EventName := OnStartDock}
  LCLEventMethodCode
end;

// event
procedure TScrollBox_OnStartDrag(AObj: TScrollBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTStartDragEvent}
  {$DEFINE EventName := OnStartDrag}
  LCLEventMethodCode
end;

function TScrollBox_TClass(): TClass; extdecl;
begin
  Result := TScrollBox;
end;

exports
  TScrollBox_Create,
  TScrollBox_AutoScroll,
  TScrollBox_DragCursor,
  TScrollBox_DragKind,
  TScrollBox_DragMode,
  TScrollBox_ParentBackground,
  TScrollBox_ParentColor,
  TScrollBox_ParentFont,
  TScrollBox_ParentShowHint,
  TScrollBox_OnConstrainedResize,
  TScrollBox_OnDblClick,
  TScrollBox_OnDragDrop,
  TScrollBox_OnDragOver,
  TScrollBox_OnEndDock,
  TScrollBox_OnEndDrag,
  TScrollBox_OnGetSiteInfo,
  TScrollBox_OnMouseDown,
  TScrollBox_OnMouseEnter,
  TScrollBox_OnMouseLeave,
  TScrollBox_OnMouseMove,
  TScrollBox_OnMouseUp,
  TScrollBox_OnMouseWheel,
  TScrollBox_OnMouseWheelDown,
  TScrollBox_OnMouseWheelUp,
  TScrollBox_OnMouseWheelHorz,
  TScrollBox_OnMouseWheelLeft,
  TScrollBox_OnMouseWheelRight,
  TScrollBox_OnStartDock,
  TScrollBox_OnStartDrag,
  TScrollBox_TClass;