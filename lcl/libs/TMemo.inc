// constructor
function TMemo_Create(AOwner: TComponent): TMemo; extdecl;
begin
  {$define handleExceptionID := 3100}
  handleExceptionBegin
  Result := TMemo.Create(AOwner);
  handleExceptionEnd
end;

// property
function TMemo_DragCursor(ASet: LongBool; AObj: TMemo; AValue: TCursor): TCursor; extdecl;
begin
  {$define handleExceptionID := 3101}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragCursor := AValue
  end else
    Result := AObj.DragCursor;
  handleExceptionEnd
end;

// property
function TMemo_DragKind(ASet: LongBool; AObj: TMemo; AValue: TDragKind): TDragKind; extdecl;
begin
  {$define handleExceptionID := 3102}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragKind := AValue
  end else
    Result := AObj.DragKind;
  handleExceptionEnd
end;

// property
function TMemo_DragMode(ASet: LongBool; AObj: TMemo; AValue: TDragMode): TDragMode; extdecl;
begin
  {$define handleExceptionID := 3103}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragMode := AValue
  end else
    Result := AObj.DragMode;
  handleExceptionEnd
end;

// property
function TMemo_ParentColor(ASet: LongBool; AObj: TMemo; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 3104}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentColor := AValue
  end else
    Result := AObj.ParentColor;
  handleExceptionEnd
end;

// property
function TMemo_ParentFont(ASet: LongBool; AObj: TMemo; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 3105}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentFont := AValue
  end else
    Result := AObj.ParentFont;
  handleExceptionEnd
end;

// property
function TMemo_ParentShowHint(ASet: LongBool; AObj: TMemo; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 3106}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentShowHint := AValue
  end else
    Result := AObj.ParentShowHint;
  handleExceptionEnd
end;

// event
procedure TMemo_OnContextPopup(AObj: TMemo; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTContextPopupEvent}
  {$DEFINE EventName := OnContextPopup}
  LCLEventMethodCode
end;

// event
procedure TMemo_OnDblClick(AObj: TMemo; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnDblClick}
  LCLEventMethodCode
end;

// event
procedure TMemo_OnDragDrop(AObj: TMemo; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragDropEvent}
  {$DEFINE EventName := OnDragDrop}
  LCLEventMethodCode
end;

// event
procedure TMemo_OnDragOver(AObj: TMemo; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragOverEvent}
  {$DEFINE EventName := OnDragOver}
  LCLEventMethodCode
end;

// event
procedure TMemo_OnEditingDone(AObj: TMemo; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnEditingDone}
  LCLEventMethodCode
end;

// event
procedure TMemo_OnEndDrag(AObj: TMemo; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTEndDragEvent}
  {$DEFINE EventName := OnEndDrag}
  LCLEventMethodCode
end;

// event
procedure TMemo_OnMouseDown(AObj: TMemo; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseDown}
  LCLEventMethodCode
end;

// event
procedure TMemo_OnMouseEnter(AObj: TMemo; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseEnter}
  LCLEventMethodCode
end;

// event
procedure TMemo_OnMouseLeave(AObj: TMemo; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseLeave}
  LCLEventMethodCode
end;

// event
procedure TMemo_OnMouseMove(AObj: TMemo; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseMoveEvent}
  {$DEFINE EventName := OnMouseMove}
  LCLEventMethodCode
end;

// event
procedure TMemo_OnMouseUp(AObj: TMemo; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseUp}
  LCLEventMethodCode
end;

// event
procedure TMemo_OnMouseWheel(AObj: TMemo; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelEvent}
  {$DEFINE EventName := OnMouseWheel}
  LCLEventMethodCode
end;

// event
procedure TMemo_OnMouseWheelDown(AObj: TMemo; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelDown}
  LCLEventMethodCode
end;

// event
procedure TMemo_OnMouseWheelUp(AObj: TMemo; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelUp}
  LCLEventMethodCode
end;

// event
procedure TMemo_OnMouseWheelHorz(AObj: TMemo; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelEvent}
  {$DEFINE EventName := OnMouseWheelHorz}
  LCLEventMethodCode
end;

// event
procedure TMemo_OnMouseWheelLeft(AObj: TMemo; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelLeft}
  LCLEventMethodCode
end;

// event
procedure TMemo_OnMouseWheelRight(AObj: TMemo; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelRight}
  LCLEventMethodCode
end;

// event
procedure TMemo_OnStartDrag(AObj: TMemo; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTStartDragEvent}
  {$DEFINE EventName := OnStartDrag}
  LCLEventMethodCode
end;

function TMemo_TClass(): TClass; extdecl;
begin
  Result := TMemo;
end;

exports
  TMemo_Create,
  TMemo_DragCursor,
  TMemo_DragKind,
  TMemo_DragMode,
  TMemo_ParentColor,
  TMemo_ParentFont,
  TMemo_ParentShowHint,
  TMemo_OnContextPopup,
  TMemo_OnDblClick,
  TMemo_OnDragDrop,
  TMemo_OnDragOver,
  TMemo_OnEditingDone,
  TMemo_OnEndDrag,
  TMemo_OnMouseDown,
  TMemo_OnMouseEnter,
  TMemo_OnMouseLeave,
  TMemo_OnMouseMove,
  TMemo_OnMouseUp,
  TMemo_OnMouseWheel,
  TMemo_OnMouseWheelDown,
  TMemo_OnMouseWheelUp,
  TMemo_OnMouseWheelHorz,
  TMemo_OnMouseWheelLeft,
  TMemo_OnMouseWheelRight,
  TMemo_OnStartDrag,
  TMemo_TClass;