
//constructor
function Shape_Create(TheOwner: TComponent): TShape; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TShape.Create(TheOwner);
  handleExceptionEnd
end;

//property
function Shape_Brush(AIsSet: LongBool; AObj: TShape; AValue: TBrush): TBrush; extdecl;
begin
  {$define handleExceptionFuncName :='Brush'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Brush := AValue;
  end else
    Result := AObj.Brush;
  handleExceptionEnd
end;

//property
function Shape_DragCursor(AIsSet: LongBool; AObj: TShape; AValue: TCursor): TCursor; extdecl;
begin
  {$define handleExceptionFuncName :='DragCursor'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DragCursor := AValue;
  end else
    Result := AObj.DragCursor;
  handleExceptionEnd
end;

//property
function Shape_DragKind(AIsSet: LongBool; AObj: TShape; AValue: TDragKind): TDragKind; extdecl;
begin
  {$define handleExceptionFuncName :='DragKind'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DragKind := AValue;
  end else
    Result := AObj.DragKind;
  handleExceptionEnd
end;

//property
function Shape_DragMode(AIsSet: LongBool; AObj: TShape; AValue: TDragMode): TDragMode; extdecl;
begin
  {$define handleExceptionFuncName :='DragMode'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DragMode := AValue;
  end else
    Result := AObj.DragMode;
  handleExceptionEnd
end;

//property
function Shape_ParentShowHint(AIsSet: LongBool; AObj: TShape; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='ParentShowHint'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ParentShowHint := AValue;
  end else
    Result := AObj.ParentShowHint;
  handleExceptionEnd
end;

//property
function Shape_Pen(AIsSet: LongBool; AObj: TShape; AValue: TPen): TPen; extdecl;
begin
  {$define handleExceptionFuncName :='Pen'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Pen := AValue;
  end else
    Result := AObj.Pen;
  handleExceptionEnd
end;

//property
function Shape_Shape(AIsSet: LongBool; AObj: TShape; AValue: TShapeType): TShapeType; extdecl;
begin
  {$define handleExceptionFuncName :='Shape'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Shape := AValue;
  end else
    Result := AObj.Shape;
  handleExceptionEnd
end;

//function
function Shape_Class(): TClass; extdecl;
begin
  Result := TShape;
end;

//procedure
procedure Shape_Paint(AObj: TShape); extdecl;
begin
  {$define handleExceptionFuncName :='Paint'}
  handleExceptionBegin
  AObj.Paint();
  handleExceptionEnd
end;

//procedure
procedure Shape_StyleChanged(AObj: TShape; Sender: TObject); extdecl;
begin
  {$define handleExceptionFuncName :='StyleChanged'}
  handleExceptionBegin
  AObj.StyleChanged(Sender);
  handleExceptionEnd
end;

//property event
procedure Shape_SetOnDragDrop(AObj: TShape; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragDropEvent}
  {$DEFINE EventName := OnDragDrop}
  EventMethodCode
end;

//property event
procedure Shape_SetOnDragOver(AObj: TShape; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragOverEvent}
  {$DEFINE EventName := OnDragOver}
  EventMethodCode
end;

//property event
procedure Shape_SetOnEndDock(AObj: TShape; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTEndDragEvent}
  {$DEFINE EventName := OnEndDock}
  EventMethodCode
end;

//property event
procedure Shape_SetOnEndDrag(AObj: TShape; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTEndDragEvent}
  {$DEFINE EventName := OnEndDrag}
  EventMethodCode
end;

//property event
procedure Shape_SetOnMouseDown(AObj: TShape; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseDown}
  EventMethodCode
end;

//property event
procedure Shape_SetOnMouseEnter(AObj: TShape; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseEnter}
  EventMethodCode
end;

//property event
procedure Shape_SetOnMouseLeave(AObj: TShape; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseLeave}
  EventMethodCode
end;

//property event
procedure Shape_SetOnMouseMove(AObj: TShape; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseMoveEvent}
  {$DEFINE EventName := OnMouseMove}
  EventMethodCode
end;

//property event
procedure Shape_SetOnMouseUp(AObj: TShape; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseUp}
  EventMethodCode
end;

//property event
procedure Shape_SetOnMouseWheel(AObj: TShape; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelEvent}
  {$DEFINE EventName := OnMouseWheel}
  EventMethodCode
end;

//property event
procedure Shape_SetOnMouseWheelDown(AObj: TShape; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelDown}
  EventMethodCode
end;

//property event
procedure Shape_SetOnMouseWheelUp(AObj: TShape; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelUp}
  EventMethodCode
end;

//property event
procedure Shape_SetOnMouseWheelHorz(AObj: TShape; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelEvent}
  {$DEFINE EventName := OnMouseWheelHorz}
  EventMethodCode
end;

//property event
procedure Shape_SetOnMouseWheelLeft(AObj: TShape; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelLeft}
  EventMethodCode
end;

//property event
procedure Shape_SetOnMouseWheelRight(AObj: TShape; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelRight}
  EventMethodCode
end;

//property event
procedure Shape_SetOnPaint(AObj: TShape; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnPaint}
  EventMethodCode
end;

//property event
procedure Shape_SetOnStartDock(AObj: TShape; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTStartDockEvent}
  {$DEFINE EventName := OnStartDock}
  EventMethodCode
end;

//property event
procedure Shape_SetOnStartDrag(AObj: TShape; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTStartDragEvent}
  {$DEFINE EventName := OnStartDrag}
  EventMethodCode
end;


exports
  Shape_Create,
  Shape_Brush,
  Shape_DragCursor,
  Shape_DragKind,
  Shape_DragMode,
  Shape_ParentShowHint,
  Shape_Pen,
  Shape_Shape,
  Shape_Class,
  Shape_Paint,
  Shape_StyleChanged,
  Shape_SetOnDragDrop,
  Shape_SetOnDragOver,
  Shape_SetOnEndDock,
  Shape_SetOnEndDrag,
  Shape_SetOnMouseDown,
  Shape_SetOnMouseEnter,
  Shape_SetOnMouseLeave,
  Shape_SetOnMouseMove,
  Shape_SetOnMouseUp,
  Shape_SetOnMouseWheel,
  Shape_SetOnMouseWheelDown,
  Shape_SetOnMouseWheelUp,
  Shape_SetOnMouseWheelHorz,
  Shape_SetOnMouseWheelLeft,
  Shape_SetOnMouseWheelRight,
  Shape_SetOnPaint,
  Shape_SetOnStartDock,
  Shape_SetOnStartDrag;