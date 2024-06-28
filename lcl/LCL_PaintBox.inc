
//constructor
function PaintBox_Create(AOwner: TComponent): TPaintBox; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TPaintBox.Create(AOwner);
  handleExceptionEnd
end;

//property
function PaintBox_DragCursor(AIsSet: LongBool; AObj: TPaintBox; AValue: TCursor): TCursor; extdecl;
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
function PaintBox_DragMode(AIsSet: LongBool; AObj: TPaintBox; AValue: TDragMode): TDragMode; extdecl;
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
function PaintBox_ParentColor(AIsSet: LongBool; AObj: TPaintBox; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='ParentColor'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ParentColor := AValue;
  end else
    Result := AObj.ParentColor;
  handleExceptionEnd
end;

//property
function PaintBox_ParentFont(AIsSet: LongBool; AObj: TPaintBox; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='ParentFont'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ParentFont := AValue;
  end else
    Result := AObj.ParentFont;
  handleExceptionEnd
end;

//property
function PaintBox_ParentShowHint(AIsSet: LongBool; AObj: TPaintBox; AValue: LongBool): LongBool; extdecl;
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

//function
function PaintBox_Class(): TClass; extdecl;
begin
  Result := TPaintBox;
end;

//property event
procedure PaintBox_SetOnContextPopup(AObj: TPaintBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTContextPopupEvent}
  {$DEFINE EventName := OnContextPopup}
  EventMethodCode
end;

//property event
procedure PaintBox_SetOnDblClick(AObj: TPaintBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnDblClick}
  EventMethodCode
end;

//property event
procedure PaintBox_SetOnDragDrop(AObj: TPaintBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragDropEvent}
  {$DEFINE EventName := OnDragDrop}
  EventMethodCode
end;

//property event
procedure PaintBox_SetOnDragOver(AObj: TPaintBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragOverEvent}
  {$DEFINE EventName := OnDragOver}
  EventMethodCode
end;

//property event
procedure PaintBox_SetOnEndDrag(AObj: TPaintBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTEndDragEvent}
  {$DEFINE EventName := OnEndDrag}
  EventMethodCode
end;

//property event
procedure PaintBox_SetOnMouseDown(AObj: TPaintBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseDown}
  EventMethodCode
end;

//property event
procedure PaintBox_SetOnMouseEnter(AObj: TPaintBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseEnter}
  EventMethodCode
end;

//property event
procedure PaintBox_SetOnMouseLeave(AObj: TPaintBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseLeave}
  EventMethodCode
end;

//property event
procedure PaintBox_SetOnMouseMove(AObj: TPaintBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseMoveEvent}
  {$DEFINE EventName := OnMouseMove}
  EventMethodCode
end;

//property event
procedure PaintBox_SetOnMouseUp(AObj: TPaintBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseUp}
  EventMethodCode
end;

//property event
procedure PaintBox_SetOnMouseWheel(AObj: TPaintBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelEvent}
  {$DEFINE EventName := OnMouseWheel}
  EventMethodCode
end;

//property event
procedure PaintBox_SetOnMouseWheelDown(AObj: TPaintBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelDown}
  EventMethodCode
end;

//property event
procedure PaintBox_SetOnMouseWheelUp(AObj: TPaintBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelUp}
  EventMethodCode
end;

//property event
procedure PaintBox_SetOnMouseWheelHorz(AObj: TPaintBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelEvent}
  {$DEFINE EventName := OnMouseWheelHorz}
  EventMethodCode
end;

//property event
procedure PaintBox_SetOnMouseWheelLeft(AObj: TPaintBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelLeft}
  EventMethodCode
end;

//property event
procedure PaintBox_SetOnMouseWheelRight(AObj: TPaintBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelRight}
  EventMethodCode
end;

//property event
procedure PaintBox_SetOnPaint(AObj: TPaintBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnPaint}
  EventMethodCode
end;

//property event
procedure PaintBox_SetOnStartDrag(AObj: TPaintBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTStartDragEvent}
  {$DEFINE EventName := OnStartDrag}
  EventMethodCode
end;


exports
  PaintBox_Create,
  PaintBox_DragCursor,
  PaintBox_DragMode,
  PaintBox_ParentColor,
  PaintBox_ParentFont,
  PaintBox_ParentShowHint,
  PaintBox_Class,
  PaintBox_SetOnContextPopup,
  PaintBox_SetOnDblClick,
  PaintBox_SetOnDragDrop,
  PaintBox_SetOnDragOver,
  PaintBox_SetOnEndDrag,
  PaintBox_SetOnMouseDown,
  PaintBox_SetOnMouseEnter,
  PaintBox_SetOnMouseLeave,
  PaintBox_SetOnMouseMove,
  PaintBox_SetOnMouseUp,
  PaintBox_SetOnMouseWheel,
  PaintBox_SetOnMouseWheelDown,
  PaintBox_SetOnMouseWheelUp,
  PaintBox_SetOnMouseWheelHorz,
  PaintBox_SetOnMouseWheelLeft,
  PaintBox_SetOnMouseWheelRight,
  PaintBox_SetOnPaint,
  PaintBox_SetOnStartDrag;