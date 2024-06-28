
//constructor
function SpeedButton_Create(AOwner: TComponent): TSpeedButton; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TSpeedButton.Create(AOwner);
  handleExceptionEnd
end;

//property
function SpeedButton_DragCursor(AIsSet: LongBool; AObj: TSpeedButton; AValue: TCursor): TCursor; extdecl;
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
function SpeedButton_DragKind(AIsSet: LongBool; AObj: TSpeedButton; AValue: TDragKind): TDragKind; extdecl;
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
function SpeedButton_DragMode(AIsSet: LongBool; AObj: TSpeedButton; AValue: TDragMode): TDragMode; extdecl;
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
function SpeedButton_ParentFont(AIsSet: LongBool; AObj: TSpeedButton; AValue: LongBool): LongBool; extdecl;
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
function SpeedButton_ParentShowHint(AIsSet: LongBool; AObj: TSpeedButton; AValue: LongBool): LongBool; extdecl;
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
function SpeedButton_Class(): TClass; extdecl;
begin
  Result := TSpeedButton;
end;

//property event
procedure SpeedButton_SetOnContextPopup(AObj: TSpeedButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTContextPopupEvent}
  {$DEFINE EventName := OnContextPopup}
  EventMethodCode
end;

//property event
procedure SpeedButton_SetOnDblClick(AObj: TSpeedButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnDblClick}
  EventMethodCode
end;

//property event
procedure SpeedButton_SetOnDragDrop(AObj: TSpeedButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragDropEvent}
  {$DEFINE EventName := OnDragDrop}
  EventMethodCode
end;

//property event
procedure SpeedButton_SetOnDragOver(AObj: TSpeedButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragOverEvent}
  {$DEFINE EventName := OnDragOver}
  EventMethodCode
end;

//property event
procedure SpeedButton_SetOnEndDrag(AObj: TSpeedButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTEndDragEvent}
  {$DEFINE EventName := OnEndDrag}
  EventMethodCode
end;

//property event
procedure SpeedButton_SetOnMouseDown(AObj: TSpeedButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseDown}
  EventMethodCode
end;

//property event
procedure SpeedButton_SetOnMouseEnter(AObj: TSpeedButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseEnter}
  EventMethodCode
end;

//property event
procedure SpeedButton_SetOnMouseLeave(AObj: TSpeedButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseLeave}
  EventMethodCode
end;

//property event
procedure SpeedButton_SetOnMouseMove(AObj: TSpeedButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseMoveEvent}
  {$DEFINE EventName := OnMouseMove}
  EventMethodCode
end;

//property event
procedure SpeedButton_SetOnMouseUp(AObj: TSpeedButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseUp}
  EventMethodCode
end;

//property event
procedure SpeedButton_SetOnMouseWheel(AObj: TSpeedButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelEvent}
  {$DEFINE EventName := OnMouseWheel}
  EventMethodCode
end;

//property event
procedure SpeedButton_SetOnMouseWheelDown(AObj: TSpeedButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelDown}
  EventMethodCode
end;

//property event
procedure SpeedButton_SetOnMouseWheelUp(AObj: TSpeedButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelUp}
  EventMethodCode
end;

//property event
procedure SpeedButton_SetOnPaint(AObj: TSpeedButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnPaint}
  EventMethodCode
end;

//property event
procedure SpeedButton_SetOnStartDrag(AObj: TSpeedButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTStartDragEvent}
  {$DEFINE EventName := OnStartDrag}
  EventMethodCode
end;


exports
  SpeedButton_Create,
  SpeedButton_DragCursor,
  SpeedButton_DragKind,
  SpeedButton_DragMode,
  SpeedButton_ParentFont,
  SpeedButton_ParentShowHint,
  SpeedButton_Class,
  SpeedButton_SetOnContextPopup,
  SpeedButton_SetOnDblClick,
  SpeedButton_SetOnDragDrop,
  SpeedButton_SetOnDragOver,
  SpeedButton_SetOnEndDrag,
  SpeedButton_SetOnMouseDown,
  SpeedButton_SetOnMouseEnter,
  SpeedButton_SetOnMouseLeave,
  SpeedButton_SetOnMouseMove,
  SpeedButton_SetOnMouseUp,
  SpeedButton_SetOnMouseWheel,
  SpeedButton_SetOnMouseWheelDown,
  SpeedButton_SetOnMouseWheelUp,
  SpeedButton_SetOnPaint,
  SpeedButton_SetOnStartDrag;