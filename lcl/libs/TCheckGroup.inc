// constructor
function TCheckGroup_Create(TheOwner: TComponent): TCheckGroup; extdecl;
begin
  {$define handleExceptionID := 22600}
  handleExceptionBegin
  Result := TCheckGroup.Create(TheOwner);
  handleExceptionEnd
end;

// property
function TCheckGroup_DragCursor(ASet: LongBool; AObj: TCheckGroup; AValue: TCursor): TCursor; extdecl;
begin
  {$define handleExceptionID := 22601}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragCursor := AValue
  end else
    Result := AObj.DragCursor;
  handleExceptionEnd
end;

// property
function TCheckGroup_DragMode(ASet: LongBool; AObj: TCheckGroup; AValue: TDragMode): TDragMode; extdecl;
begin
  {$define handleExceptionID := 22602}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragMode := AValue
  end else
    Result := AObj.DragMode;
  handleExceptionEnd
end;

// property
function TCheckGroup_ParentFont(ASet: LongBool; AObj: TCheckGroup; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 22603}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentFont := AValue
  end else
    Result := AObj.ParentFont;
  handleExceptionEnd
end;

// property
function TCheckGroup_ParentColor(ASet: LongBool; AObj: TCheckGroup; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 22604}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentColor := AValue
  end else
    Result := AObj.ParentColor;
  handleExceptionEnd
end;

// property
function TCheckGroup_ParentShowHint(ASet: LongBool; AObj: TCheckGroup; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 22605}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentShowHint := AValue
  end else
    Result := AObj.ParentShowHint;
  handleExceptionEnd
end;

// event
procedure TCheckGroup_OnDblClick(AObj: TCheckGroup; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnDblClick}
  LCLEventMethodCode
end;

// event
procedure TCheckGroup_OnDragDrop(AObj: TCheckGroup; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragDropEvent}
  {$DEFINE EventName := OnDragDrop}
  LCLEventMethodCode
end;

// event
procedure TCheckGroup_OnDragOver(AObj: TCheckGroup; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragOverEvent}
  {$DEFINE EventName := OnDragOver}
  LCLEventMethodCode
end;

// event
procedure TCheckGroup_OnEndDrag(AObj: TCheckGroup; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTEndDragEvent}
  {$DEFINE EventName := OnEndDrag}
  LCLEventMethodCode
end;

// event
procedure TCheckGroup_OnMouseDown(AObj: TCheckGroup; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseDown}
  LCLEventMethodCode
end;

// event
procedure TCheckGroup_OnMouseEnter(AObj: TCheckGroup; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseEnter}
  LCLEventMethodCode
end;

// event
procedure TCheckGroup_OnMouseLeave(AObj: TCheckGroup; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseLeave}
  LCLEventMethodCode
end;

// event
procedure TCheckGroup_OnMouseMove(AObj: TCheckGroup; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseMoveEvent}
  {$DEFINE EventName := OnMouseMove}
  LCLEventMethodCode
end;

// event
procedure TCheckGroup_OnMouseUp(AObj: TCheckGroup; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseUp}
  LCLEventMethodCode
end;

// event
procedure TCheckGroup_OnMouseWheel(AObj: TCheckGroup; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelEvent}
  {$DEFINE EventName := OnMouseWheel}
  LCLEventMethodCode
end;

// event
procedure TCheckGroup_OnMouseWheelDown(AObj: TCheckGroup; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelDown}
  LCLEventMethodCode
end;

// event
procedure TCheckGroup_OnMouseWheelUp(AObj: TCheckGroup; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelUp}
  LCLEventMethodCode
end;

// event
procedure TCheckGroup_OnStartDrag(AObj: TCheckGroup; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTStartDragEvent}
  {$DEFINE EventName := OnStartDrag}
  LCLEventMethodCode
end;

function TCheckGroup_TClass(): TClass; extdecl;
begin
  Result := TCheckGroup;
end;

exports
  TCheckGroup_Create,
  TCheckGroup_DragCursor,
  TCheckGroup_DragMode,
  TCheckGroup_ParentFont,
  TCheckGroup_ParentColor,
  TCheckGroup_ParentShowHint,
  TCheckGroup_OnDblClick,
  TCheckGroup_OnDragDrop,
  TCheckGroup_OnDragOver,
  TCheckGroup_OnEndDrag,
  TCheckGroup_OnMouseDown,
  TCheckGroup_OnMouseEnter,
  TCheckGroup_OnMouseLeave,
  TCheckGroup_OnMouseMove,
  TCheckGroup_OnMouseUp,
  TCheckGroup_OnMouseWheel,
  TCheckGroup_OnMouseWheelDown,
  TCheckGroup_OnMouseWheelUp,
  TCheckGroup_OnStartDrag,
  TCheckGroup_TClass;