
//constructor
function Edit_Create(AOwner: TComponent): TEdit; extdecl;
begin
  handleExceptionBegin
  Result := TEdit.Create(AOwner);
  handleExceptionEnd
end;

//property
function Edit_AutoSelected(AIsSet: LongBool; AObj: TEdit; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.AutoSelected := AValue;
  end else
    Result := AObj.AutoSelected;
  handleExceptionEnd
end;

//property
function Edit_AutoSelect(AIsSet: LongBool; AObj: TEdit; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.AutoSelect := AValue;
  end else
    Result := AObj.AutoSelect;
  handleExceptionEnd
end;

//property
function Edit_DragCursor(AIsSet: LongBool; AObj: TEdit; AValue: TCursor): TCursor; extdecl;
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
function Edit_DragKind(AIsSet: LongBool; AObj: TEdit; AValue: TDragKind): TDragKind; extdecl;
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
function Edit_DragMode(AIsSet: LongBool; AObj: TEdit; AValue: TDragMode): TDragMode; extdecl;
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
function Edit_ParentColor(AIsSet: LongBool; AObj: TEdit; AValue: LongBool): LongBool; extdecl;
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
function Edit_ParentFont(AIsSet: LongBool; AObj: TEdit; AValue: LongBool): LongBool; extdecl;
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
function Edit_ParentShowHint(AIsSet: LongBool; AObj: TEdit; AValue: LongBool): LongBool; extdecl;
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
function Edit_Class(): TClass; extdecl;
begin
  Result := TEdit;
end;

//property event
procedure Edit_SetOnContextPopup(AObj: TEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTContextPopupEvent}
  {$DEFINE EventName := OnContextPopup}
  EventMethodCode
end;

//property event
procedure Edit_SetOnDblClick(AObj: TEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnDblClick}
  EventMethodCode
end;

//property event
procedure Edit_SetOnDragDrop(AObj: TEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragDropEvent}
  {$DEFINE EventName := OnDragDrop}
  EventMethodCode
end;

//property event
procedure Edit_SetOnDragOver(AObj: TEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragOverEvent}
  {$DEFINE EventName := OnDragOver}
  EventMethodCode
end;

//property event
procedure Edit_SetOnEditingDone(AObj: TEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnEditingDone}
  EventMethodCode
end;

//property event
procedure Edit_SetOnEndDrag(AObj: TEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTEndDragEvent}
  {$DEFINE EventName := OnEndDrag}
  EventMethodCode
end;

//property event
procedure Edit_SetOnMouseDown(AObj: TEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseDown}
  EventMethodCode
end;

//property event
procedure Edit_SetOnMouseEnter(AObj: TEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseEnter}
  EventMethodCode
end;

//property event
procedure Edit_SetOnMouseLeave(AObj: TEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseLeave}
  EventMethodCode
end;

//property event
procedure Edit_SetOnMouseMove(AObj: TEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseMoveEvent}
  {$DEFINE EventName := OnMouseMove}
  EventMethodCode
end;

//property event
procedure Edit_SetOnMouseUp(AObj: TEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseUp}
  EventMethodCode
end;

//property event
procedure Edit_SetOnMouseWheel(AObj: TEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelEvent}
  {$DEFINE EventName := OnMouseWheel}
  EventMethodCode
end;

//property event
procedure Edit_SetOnMouseWheelDown(AObj: TEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelDown}
  EventMethodCode
end;

//property event
procedure Edit_SetOnMouseWheelUp(AObj: TEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelUp}
  EventMethodCode
end;

//property event
procedure Edit_SetOnStartDrag(AObj: TEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTStartDragEvent}
  {$DEFINE EventName := OnStartDrag}
  EventMethodCode
end;


exports
  Edit_Create,
  Edit_AutoSelected,
  Edit_AutoSelect,
  Edit_DragCursor,
  Edit_DragKind,
  Edit_DragMode,
  Edit_ParentColor,
  Edit_ParentFont,
  Edit_ParentShowHint,
  Edit_Class,
  Edit_SetOnContextPopup,
  Edit_SetOnDblClick,
  Edit_SetOnDragDrop,
  Edit_SetOnDragOver,
  Edit_SetOnEditingDone,
  Edit_SetOnEndDrag,
  Edit_SetOnMouseDown,
  Edit_SetOnMouseEnter,
  Edit_SetOnMouseLeave,
  Edit_SetOnMouseMove,
  Edit_SetOnMouseUp,
  Edit_SetOnMouseWheel,
  Edit_SetOnMouseWheelDown,
  Edit_SetOnMouseWheelUp,
  Edit_SetOnStartDrag;