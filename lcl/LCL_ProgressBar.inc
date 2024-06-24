
//constructor
function ProgressBar_Create(AOwner: TComponent): TProgressBar; extdecl;
begin
  handleExceptionBegin
  Result := TProgressBar.Create(AOwner);
  handleExceptionEnd
end;

//property
function ProgressBar_DragCursor(AIsSet: LongBool; AObj: TProgressBar; AValue: TCursor): TCursor; extdecl;
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
function ProgressBar_DragKind(AIsSet: LongBool; AObj: TProgressBar; AValue: TDragKind): TDragKind; extdecl;
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
function ProgressBar_DragMode(AIsSet: LongBool; AObj: TProgressBar; AValue: TDragMode): TDragMode; extdecl;
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
function ProgressBar_ParentColor(AIsSet: LongBool; AObj: TProgressBar; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ParentColor := AValue;
  end else
    Result := AObj.ParentColor;
  handleExceptionEnd
end;

//property
function ProgressBar_ParentFont(AIsSet: LongBool; AObj: TProgressBar; AValue: LongBool): LongBool; extdecl;
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
function ProgressBar_ParentShowHint(AIsSet: LongBool; AObj: TProgressBar; AValue: LongBool): LongBool; extdecl;
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
function ProgressBar_Class(): TClass; extdecl;
begin
  Result := TProgressBar;
end;

//property event
procedure ProgressBar_SetOnContextPopup(AObj: TProgressBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTContextPopupEvent}
  {$DEFINE EventName := OnContextPopup}
  EventMethodCode
end;

//property event
procedure ProgressBar_SetOnDragDrop(AObj: TProgressBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragDropEvent}
  {$DEFINE EventName := OnDragDrop}
  EventMethodCode
end;

//property event
procedure ProgressBar_SetOnDragOver(AObj: TProgressBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragOverEvent}
  {$DEFINE EventName := OnDragOver}
  EventMethodCode
end;

//property event
procedure ProgressBar_SetOnEndDrag(AObj: TProgressBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTEndDragEvent}
  {$DEFINE EventName := OnEndDrag}
  EventMethodCode
end;

//property event
procedure ProgressBar_SetOnMouseDown(AObj: TProgressBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseDown}
  EventMethodCode
end;

//property event
procedure ProgressBar_SetOnMouseEnter(AObj: TProgressBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseEnter}
  EventMethodCode
end;

//property event
procedure ProgressBar_SetOnMouseLeave(AObj: TProgressBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseLeave}
  EventMethodCode
end;

//property event
procedure ProgressBar_SetOnMouseMove(AObj: TProgressBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseMoveEvent}
  {$DEFINE EventName := OnMouseMove}
  EventMethodCode
end;

//property event
procedure ProgressBar_SetOnMouseUp(AObj: TProgressBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseUp}
  EventMethodCode
end;

//property event
procedure ProgressBar_SetOnMouseWheel(AObj: TProgressBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelEvent}
  {$DEFINE EventName := OnMouseWheel}
  EventMethodCode
end;

//property event
procedure ProgressBar_SetOnMouseWheelDown(AObj: TProgressBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelDown}
  EventMethodCode
end;

//property event
procedure ProgressBar_SetOnMouseWheelUp(AObj: TProgressBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelUp}
  EventMethodCode
end;

//property event
procedure ProgressBar_SetOnStartDock(AObj: TProgressBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTStartDockEvent}
  {$DEFINE EventName := OnStartDock}
  EventMethodCode
end;

//property event
procedure ProgressBar_SetOnStartDrag(AObj: TProgressBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTStartDragEvent}
  {$DEFINE EventName := OnStartDrag}
  EventMethodCode
end;


exports
  ProgressBar_Create,
  ProgressBar_DragCursor,
  ProgressBar_DragKind,
  ProgressBar_DragMode,
  ProgressBar_ParentColor,
  ProgressBar_ParentFont,
  ProgressBar_ParentShowHint,
  ProgressBar_Class,
  ProgressBar_SetOnContextPopup,
  ProgressBar_SetOnDragDrop,
  ProgressBar_SetOnDragOver,
  ProgressBar_SetOnEndDrag,
  ProgressBar_SetOnMouseDown,
  ProgressBar_SetOnMouseEnter,
  ProgressBar_SetOnMouseLeave,
  ProgressBar_SetOnMouseMove,
  ProgressBar_SetOnMouseUp,
  ProgressBar_SetOnMouseWheel,
  ProgressBar_SetOnMouseWheelDown,
  ProgressBar_SetOnMouseWheelUp,
  ProgressBar_SetOnStartDock,
  ProgressBar_SetOnStartDrag;