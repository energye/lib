
//constructor
function StaticText_Create(AOwner: TComponent): TStaticText; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TStaticText.Create(AOwner);
  handleExceptionEnd
end;

//property
function StaticText_DragCursor(AIsSet: LongBool; AObj: TStaticText; AValue: TCursor): TCursor; extdecl;
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
function StaticText_DragKind(AIsSet: LongBool; AObj: TStaticText; AValue: TDragKind): TDragKind; extdecl;
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
function StaticText_DragMode(AIsSet: LongBool; AObj: TStaticText; AValue: TDragMode): TDragMode; extdecl;
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
function StaticText_ParentFont(AIsSet: LongBool; AObj: TStaticText; AValue: LongBool): LongBool; extdecl;
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
function StaticText_ParentColor(AIsSet: LongBool; AObj: TStaticText; AValue: LongBool): LongBool; extdecl;
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
function StaticText_ParentShowHint(AIsSet: LongBool; AObj: TStaticText; AValue: LongBool): LongBool; extdecl;
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
function StaticText_Class(): TClass; extdecl;
begin
  Result := TStaticText;
end;

//property event
procedure StaticText_SetOnContextPopup(AObj: TStaticText; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTContextPopupEvent}
  {$DEFINE EventName := OnContextPopup}
  EventMethodCode
end;

//property event
procedure StaticText_SetOnDblClick(AObj: TStaticText; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnDblClick}
  EventMethodCode
end;

//property event
procedure StaticText_SetOnDragDrop(AObj: TStaticText; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragDropEvent}
  {$DEFINE EventName := OnDragDrop}
  EventMethodCode
end;

//property event
procedure StaticText_SetOnDragOver(AObj: TStaticText; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragOverEvent}
  {$DEFINE EventName := OnDragOver}
  EventMethodCode
end;

//property event
procedure StaticText_SetOnEndDrag(AObj: TStaticText; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTEndDragEvent}
  {$DEFINE EventName := OnEndDrag}
  EventMethodCode
end;

//property event
procedure StaticText_SetOnMouseDown(AObj: TStaticText; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseDown}
  EventMethodCode
end;

//property event
procedure StaticText_SetOnMouseEnter(AObj: TStaticText; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseEnter}
  EventMethodCode
end;

//property event
procedure StaticText_SetOnMouseLeave(AObj: TStaticText; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseLeave}
  EventMethodCode
end;

//property event
procedure StaticText_SetOnMouseMove(AObj: TStaticText; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseMoveEvent}
  {$DEFINE EventName := OnMouseMove}
  EventMethodCode
end;

//property event
procedure StaticText_SetOnMouseUp(AObj: TStaticText; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseUp}
  EventMethodCode
end;

//property event
procedure StaticText_SetOnMouseWheel(AObj: TStaticText; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelEvent}
  {$DEFINE EventName := OnMouseWheel}
  EventMethodCode
end;

//property event
procedure StaticText_SetOnMouseWheelDown(AObj: TStaticText; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelDown}
  EventMethodCode
end;

//property event
procedure StaticText_SetOnMouseWheelUp(AObj: TStaticText; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelUp}
  EventMethodCode
end;

//property event
procedure StaticText_SetOnMouseWheelHorz(AObj: TStaticText; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelEvent}
  {$DEFINE EventName := OnMouseWheelHorz}
  EventMethodCode
end;

//property event
procedure StaticText_SetOnMouseWheelLeft(AObj: TStaticText; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelLeft}
  EventMethodCode
end;

//property event
procedure StaticText_SetOnMouseWheelRight(AObj: TStaticText; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelRight}
  EventMethodCode
end;

//property event
procedure StaticText_SetOnStartDrag(AObj: TStaticText; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTStartDragEvent}
  {$DEFINE EventName := OnStartDrag}
  EventMethodCode
end;


exports
  StaticText_Create,
  StaticText_DragCursor,
  StaticText_DragKind,
  StaticText_DragMode,
  StaticText_ParentFont,
  StaticText_ParentColor,
  StaticText_ParentShowHint,
  StaticText_Class,
  StaticText_SetOnContextPopup,
  StaticText_SetOnDblClick,
  StaticText_SetOnDragDrop,
  StaticText_SetOnDragOver,
  StaticText_SetOnEndDrag,
  StaticText_SetOnMouseDown,
  StaticText_SetOnMouseEnter,
  StaticText_SetOnMouseLeave,
  StaticText_SetOnMouseMove,
  StaticText_SetOnMouseUp,
  StaticText_SetOnMouseWheel,
  StaticText_SetOnMouseWheelDown,
  StaticText_SetOnMouseWheelUp,
  StaticText_SetOnMouseWheelHorz,
  StaticText_SetOnMouseWheelLeft,
  StaticText_SetOnMouseWheelRight,
  StaticText_SetOnStartDrag;