// constructor
function TBoundLabel_Create(TheOwner: TComponent): TBoundLabel; extdecl;
begin
  {$define handleExceptionID := 19700}
  handleExceptionBegin
  Result := TBoundLabel.Create(TheOwner);
  handleExceptionEnd
end;

// property
function TBoundLabel_FocusControl(ASet: LongBool; AObj: TBoundLabel; AValue: TWinControl): TWinControl; extdecl;
begin
  {$define handleExceptionID := 19701}
  handleExceptionBegin
  if ASet then
  begin
    AObj.FocusControl := AValue
  end else
    Result := AObj.FocusControl;
  handleExceptionEnd
end;

// property
function TBoundLabel_Alignment(ASet: LongBool; AObj: TBoundLabel; AValue: TAlignment): TAlignment; extdecl;
begin
  {$define handleExceptionID := 19702}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Alignment := AValue
  end else
    Result := AObj.Alignment;
  handleExceptionEnd
end;

// property
function TBoundLabel_DragCursor(ASet: LongBool; AObj: TBoundLabel; AValue: TCursor): TCursor; extdecl;
begin
  {$define handleExceptionID := 19703}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragCursor := AValue
  end else
    Result := AObj.DragCursor;
  handleExceptionEnd
end;

// property
function TBoundLabel_DragMode(ASet: LongBool; AObj: TBoundLabel; AValue: TDragMode): TDragMode; extdecl;
begin
  {$define handleExceptionID := 19704}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragMode := AValue
  end else
    Result := AObj.DragMode;
  handleExceptionEnd
end;

// property
function TBoundLabel_ParentColor(ASet: LongBool; AObj: TBoundLabel; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 19705}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentColor := AValue
  end else
    Result := AObj.ParentColor;
  handleExceptionEnd
end;

// property
function TBoundLabel_ParentFont(ASet: LongBool; AObj: TBoundLabel; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 19706}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentFont := AValue
  end else
    Result := AObj.ParentFont;
  handleExceptionEnd
end;

// property
function TBoundLabel_ParentShowHint(ASet: LongBool; AObj: TBoundLabel; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 19707}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentShowHint := AValue
  end else
    Result := AObj.ParentShowHint;
  handleExceptionEnd
end;

// property
function TBoundLabel_ShowAccelChar(ASet: LongBool; AObj: TBoundLabel; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 19708}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ShowAccelChar := AValue
  end else
    Result := AObj.ShowAccelChar;
  handleExceptionEnd
end;

// property
function TBoundLabel_Layout(ASet: LongBool; AObj: TBoundLabel; AValue: TTextLayout): TTextLayout; extdecl;
begin
  {$define handleExceptionID := 19709}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Layout := AValue
  end else
    Result := AObj.Layout;
  handleExceptionEnd
end;

// property
function TBoundLabel_WordWrap(ASet: LongBool; AObj: TBoundLabel; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 19710}
  handleExceptionBegin
  if ASet then
  begin
    AObj.WordWrap := AValue
  end else
    Result := AObj.WordWrap;
  handleExceptionEnd
end;

// event
procedure TBoundLabel_OnDblClick(AObj: TBoundLabel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnDblClick}
  LCLEventMethodCode
end;

// event
procedure TBoundLabel_OnDragDrop(AObj: TBoundLabel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragDropEvent}
  {$DEFINE EventName := OnDragDrop}
  LCLEventMethodCode
end;

// event
procedure TBoundLabel_OnDragOver(AObj: TBoundLabel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragOverEvent}
  {$DEFINE EventName := OnDragOver}
  LCLEventMethodCode
end;

// event
procedure TBoundLabel_OnEndDrag(AObj: TBoundLabel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTEndDragEvent}
  {$DEFINE EventName := OnEndDrag}
  LCLEventMethodCode
end;

// event
procedure TBoundLabel_OnMouseDown(AObj: TBoundLabel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseDown}
  LCLEventMethodCode
end;

// event
procedure TBoundLabel_OnMouseEnter(AObj: TBoundLabel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseEnter}
  LCLEventMethodCode
end;

// event
procedure TBoundLabel_OnMouseLeave(AObj: TBoundLabel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseLeave}
  LCLEventMethodCode
end;

// event
procedure TBoundLabel_OnMouseMove(AObj: TBoundLabel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseMoveEvent}
  {$DEFINE EventName := OnMouseMove}
  LCLEventMethodCode
end;

// event
procedure TBoundLabel_OnMouseUp(AObj: TBoundLabel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseUp}
  LCLEventMethodCode
end;

// event
procedure TBoundLabel_OnMouseWheel(AObj: TBoundLabel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelEvent}
  {$DEFINE EventName := OnMouseWheel}
  LCLEventMethodCode
end;

// event
procedure TBoundLabel_OnMouseWheelDown(AObj: TBoundLabel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelDown}
  LCLEventMethodCode
end;

// event
procedure TBoundLabel_OnMouseWheelUp(AObj: TBoundLabel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelUp}
  LCLEventMethodCode
end;

// event
procedure TBoundLabel_OnStartDrag(AObj: TBoundLabel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTStartDragEvent}
  {$DEFINE EventName := OnStartDrag}
  LCLEventMethodCode
end;

function TBoundLabel_TClass(): TClass; extdecl;
begin
  Result := TBoundLabel;
end;

exports
  TBoundLabel_Create,
  TBoundLabel_FocusControl,
  TBoundLabel_Alignment,
  TBoundLabel_DragCursor,
  TBoundLabel_DragMode,
  TBoundLabel_ParentColor,
  TBoundLabel_ParentFont,
  TBoundLabel_ParentShowHint,
  TBoundLabel_ShowAccelChar,
  TBoundLabel_Layout,
  TBoundLabel_WordWrap,
  TBoundLabel_OnDblClick,
  TBoundLabel_OnDragDrop,
  TBoundLabel_OnDragOver,
  TBoundLabel_OnEndDrag,
  TBoundLabel_OnMouseDown,
  TBoundLabel_OnMouseEnter,
  TBoundLabel_OnMouseLeave,
  TBoundLabel_OnMouseMove,
  TBoundLabel_OnMouseUp,
  TBoundLabel_OnMouseWheel,
  TBoundLabel_OnMouseWheelDown,
  TBoundLabel_OnMouseWheelUp,
  TBoundLabel_OnStartDrag,
  TBoundLabel_TClass;