
//constructor
function CoolBar_Create(AOwner: TComponent): TCoolBar; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TCoolBar.Create(AOwner);
  handleExceptionEnd
end;

//property
function CoolBar_DragCursor(AIsSet: LongBool; AObj: TCoolBar; AValue: TCursor): TCursor; extdecl;
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
function CoolBar_DragKind(AIsSet: LongBool; AObj: TCoolBar; AValue: TDragKind): TDragKind; extdecl;
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
function CoolBar_DragMode(AIsSet: LongBool; AObj: TCoolBar; AValue: TDragMode): TDragMode; extdecl;
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
function CoolBar_ParentColor(AIsSet: LongBool; AObj: TCoolBar; AValue: LongBool): LongBool; extdecl;
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
function CoolBar_ParentFont(AIsSet: LongBool; AObj: TCoolBar; AValue: LongBool): LongBool; extdecl;
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
function CoolBar_ParentShowHint(AIsSet: LongBool; AObj: TCoolBar; AValue: LongBool): LongBool; extdecl;
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
function CoolBar_Class(): TClass; extdecl;
begin
  Result := TCoolBar;
end;

//property event
procedure CoolBar_SetOnContextPopup(AObj: TCoolBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTContextPopupEvent}
  {$DEFINE EventName := OnContextPopup}
  EventMethodCode
end;

//property event
procedure CoolBar_SetOnDblClick(AObj: TCoolBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnDblClick}
  EventMethodCode
end;

//property event
procedure CoolBar_SetOnDragDrop(AObj: TCoolBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragDropEvent}
  {$DEFINE EventName := OnDragDrop}
  EventMethodCode
end;

//property event
procedure CoolBar_SetOnDragOver(AObj: TCoolBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragOverEvent}
  {$DEFINE EventName := OnDragOver}
  EventMethodCode
end;

//property event
procedure CoolBar_SetOnEndDock(AObj: TCoolBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTEndDragEvent}
  {$DEFINE EventName := OnEndDock}
  EventMethodCode
end;

//property event
procedure CoolBar_SetOnEndDrag(AObj: TCoolBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTEndDragEvent}
  {$DEFINE EventName := OnEndDrag}
  EventMethodCode
end;

//property event
procedure CoolBar_SetOnGetSiteInfo(AObj: TCoolBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTGetSiteInfoEvent}
  {$DEFINE EventName := OnGetSiteInfo}
  EventMethodCode
end;

//property event
procedure CoolBar_SetOnMouseDown(AObj: TCoolBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseDown}
  EventMethodCode
end;

//property event
procedure CoolBar_SetOnMouseEnter(AObj: TCoolBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseEnter}
  EventMethodCode
end;

//property event
procedure CoolBar_SetOnMouseLeave(AObj: TCoolBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseLeave}
  EventMethodCode
end;

//property event
procedure CoolBar_SetOnMouseMove(AObj: TCoolBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseMoveEvent}
  {$DEFINE EventName := OnMouseMove}
  EventMethodCode
end;

//property event
procedure CoolBar_SetOnMouseUp(AObj: TCoolBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseUp}
  EventMethodCode
end;

//property event
procedure CoolBar_SetOnMouseWheel(AObj: TCoolBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelEvent}
  {$DEFINE EventName := OnMouseWheel}
  EventMethodCode
end;

//property event
procedure CoolBar_SetOnMouseWheelDown(AObj: TCoolBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelDown}
  EventMethodCode
end;

//property event
procedure CoolBar_SetOnMouseWheelUp(AObj: TCoolBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelUp}
  EventMethodCode
end;

//property event
procedure CoolBar_SetOnStartDock(AObj: TCoolBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTStartDockEvent}
  {$DEFINE EventName := OnStartDock}
  EventMethodCode
end;

//property event
procedure CoolBar_SetOnStartDrag(AObj: TCoolBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTStartDragEvent}
  {$DEFINE EventName := OnStartDrag}
  EventMethodCode
end;


exports
  CoolBar_Create,
  CoolBar_DragCursor,
  CoolBar_DragKind,
  CoolBar_DragMode,
  CoolBar_ParentColor,
  CoolBar_ParentFont,
  CoolBar_ParentShowHint,
  CoolBar_Class,
  CoolBar_SetOnContextPopup,
  CoolBar_SetOnDblClick,
  CoolBar_SetOnDragDrop,
  CoolBar_SetOnDragOver,
  CoolBar_SetOnEndDock,
  CoolBar_SetOnEndDrag,
  CoolBar_SetOnGetSiteInfo,
  CoolBar_SetOnMouseDown,
  CoolBar_SetOnMouseEnter,
  CoolBar_SetOnMouseLeave,
  CoolBar_SetOnMouseMove,
  CoolBar_SetOnMouseUp,
  CoolBar_SetOnMouseWheel,
  CoolBar_SetOnMouseWheelDown,
  CoolBar_SetOnMouseWheelUp,
  CoolBar_SetOnStartDock,
  CoolBar_SetOnStartDrag;