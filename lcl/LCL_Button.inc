
//constructor
function Button_Create(TheOwner: TComponent): TButton; extdecl;
begin
  handleExceptionBegin
  Result := TButton.Create(TheOwner);
  handleExceptionEnd
end;

//property
function Button_DragCursor(AIsSet: LongBool; AObj: TButton; AValue: TCursor): TCursor; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DragCursor := AValue;
  end else
    Result := AObj.DragCursor;
  handleExceptionEnd
end;

//property
function Button_DragKind(AIsSet: LongBool; AObj: TButton; AValue: TDragKind): TDragKind; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DragKind := AValue;
  end else
    Result := AObj.DragKind;
  handleExceptionEnd
end;

//property
function Button_DragMode(AIsSet: LongBool; AObj: TButton; AValue: TDragMode): TDragMode; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DragMode := AValue;
  end else
    Result := AObj.DragMode;
  handleExceptionEnd
end;

//property
function Button_ParentFont(AIsSet: LongBool; AObj: TButton; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ParentFont := AValue;
  end else
    Result := AObj.ParentFont;
  handleExceptionEnd
end;

//property
function Button_ParentShowHint(AIsSet: LongBool; AObj: TButton; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ParentShowHint := AValue;
  end else
    Result := AObj.ParentShowHint;
  handleExceptionEnd
end;

//function
function Button_Class(): TClass; extdecl;
begin
  Result := TButton;
end;

//property event
procedure Button_SetOnContextPopup(AObj: TButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTContextPopupEvent}
  {$DEFINE EventName := OnContextPopup}
  EventMethodCode
end;

//property event
procedure Button_SetOnDragDrop(AObj: TButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragDropEvent}
  {$DEFINE EventName := OnDragDrop}
  EventMethodCode
end;

//property event
procedure Button_SetOnDragOver(AObj: TButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragOverEvent}
  {$DEFINE EventName := OnDragOver}
  EventMethodCode
end;

//property event
procedure Button_SetOnEndDrag(AObj: TButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTEndDragEvent}
  {$DEFINE EventName := OnEndDrag}
  EventMethodCode
end;

//property event
procedure Button_SetOnMouseDown(AObj: TButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseDown}
  EventMethodCode
end;

//property event
procedure Button_SetOnMouseEnter(AObj: TButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseEnter}
  EventMethodCode
end;

//property event
procedure Button_SetOnMouseLeave(AObj: TButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseLeave}
  EventMethodCode
end;

//property event
procedure Button_SetOnMouseMove(AObj: TButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseMoveEvent}
  {$DEFINE EventName := OnMouseMove}
  EventMethodCode
end;

//property event
procedure Button_SetOnMouseUp(AObj: TButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseUp}
  EventMethodCode
end;

//property event
procedure Button_SetOnMouseWheel(AObj: TButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelEvent}
  {$DEFINE EventName := OnMouseWheel}
  EventMethodCode
end;

//property event
procedure Button_SetOnMouseWheelDown(AObj: TButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelDown}
  EventMethodCode
end;

//property event
procedure Button_SetOnMouseWheelUp(AObj: TButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelUp}
  EventMethodCode
end;

//property event
procedure Button_SetOnStartDrag(AObj: TButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTStartDragEvent}
  {$DEFINE EventName := OnStartDrag}
  EventMethodCode
end;


exports
  Button_Create,
  Button_DragCursor,
  Button_DragKind,
  Button_DragMode,
  Button_ParentFont,
  Button_ParentShowHint,
  Button_Class,
  Button_SetOnContextPopup,
  Button_SetOnDragDrop,
  Button_SetOnDragOver,
  Button_SetOnEndDrag,
  Button_SetOnMouseDown,
  Button_SetOnMouseEnter,
  Button_SetOnMouseLeave,
  Button_SetOnMouseMove,
  Button_SetOnMouseUp,
  Button_SetOnMouseWheel,
  Button_SetOnMouseWheelDown,
  Button_SetOnMouseWheelUp,
  Button_SetOnStartDrag;