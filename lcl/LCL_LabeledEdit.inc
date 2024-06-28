
//constructor
function LabeledEdit_Create(TheOwner: TComponent): TLabeledEdit; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TLabeledEdit.Create(TheOwner);
  handleExceptionEnd
end;

//property
function LabeledEdit_AutoSelect(AIsSet: LongBool; AObj: TLabeledEdit; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='AutoSelect'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.AutoSelect := AValue;
  end else
    Result := AObj.AutoSelect;
  handleExceptionEnd
end;

//property
function LabeledEdit_DragCursor(AIsSet: LongBool; AObj: TLabeledEdit; AValue: TCursor): TCursor; extdecl;
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
function LabeledEdit_DragMode(AIsSet: LongBool; AObj: TLabeledEdit; AValue: TDragMode): TDragMode; extdecl;
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
function LabeledEdit_ParentColor(AIsSet: LongBool; AObj: TLabeledEdit; AValue: LongBool): LongBool; extdecl;
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
function LabeledEdit_ParentFont(AIsSet: LongBool; AObj: TLabeledEdit; AValue: LongBool): LongBool; extdecl;
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
function LabeledEdit_ParentShowHint(AIsSet: LongBool; AObj: TLabeledEdit; AValue: LongBool): LongBool; extdecl;
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
function LabeledEdit_Class(): TClass; extdecl;
begin
  Result := TLabeledEdit;
end;

//property event
procedure LabeledEdit_SetOnDblClick(AObj: TLabeledEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnDblClick}
  EventMethodCode
end;

//property event
procedure LabeledEdit_SetOnDragDrop(AObj: TLabeledEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragDropEvent}
  {$DEFINE EventName := OnDragDrop}
  EventMethodCode
end;

//property event
procedure LabeledEdit_SetOnDragOver(AObj: TLabeledEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragOverEvent}
  {$DEFINE EventName := OnDragOver}
  EventMethodCode
end;

//property event
procedure LabeledEdit_SetOnEditingDone(AObj: TLabeledEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnEditingDone}
  EventMethodCode
end;

//property event
procedure LabeledEdit_SetOnEndDrag(AObj: TLabeledEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTEndDragEvent}
  {$DEFINE EventName := OnEndDrag}
  EventMethodCode
end;

//property event
procedure LabeledEdit_SetOnMouseDown(AObj: TLabeledEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseDown}
  EventMethodCode
end;

//property event
procedure LabeledEdit_SetOnMouseEnter(AObj: TLabeledEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseEnter}
  EventMethodCode
end;

//property event
procedure LabeledEdit_SetOnMouseLeave(AObj: TLabeledEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseLeave}
  EventMethodCode
end;

//property event
procedure LabeledEdit_SetOnMouseMove(AObj: TLabeledEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseMoveEvent}
  {$DEFINE EventName := OnMouseMove}
  EventMethodCode
end;

//property event
procedure LabeledEdit_SetOnMouseUp(AObj: TLabeledEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseUp}
  EventMethodCode
end;

//property event
procedure LabeledEdit_SetOnMouseWheel(AObj: TLabeledEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelEvent}
  {$DEFINE EventName := OnMouseWheel}
  EventMethodCode
end;

//property event
procedure LabeledEdit_SetOnMouseWheelDown(AObj: TLabeledEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelDown}
  EventMethodCode
end;

//property event
procedure LabeledEdit_SetOnMouseWheelUp(AObj: TLabeledEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelUp}
  EventMethodCode
end;

//property event
procedure LabeledEdit_SetOnStartDrag(AObj: TLabeledEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTStartDragEvent}
  {$DEFINE EventName := OnStartDrag}
  EventMethodCode
end;


exports
  LabeledEdit_Create,
  LabeledEdit_AutoSelect,
  LabeledEdit_DragCursor,
  LabeledEdit_DragMode,
  LabeledEdit_ParentColor,
  LabeledEdit_ParentFont,
  LabeledEdit_ParentShowHint,
  LabeledEdit_Class,
  LabeledEdit_SetOnDblClick,
  LabeledEdit_SetOnDragDrop,
  LabeledEdit_SetOnDragOver,
  LabeledEdit_SetOnEditingDone,
  LabeledEdit_SetOnEndDrag,
  LabeledEdit_SetOnMouseDown,
  LabeledEdit_SetOnMouseEnter,
  LabeledEdit_SetOnMouseLeave,
  LabeledEdit_SetOnMouseMove,
  LabeledEdit_SetOnMouseUp,
  LabeledEdit_SetOnMouseWheel,
  LabeledEdit_SetOnMouseWheelDown,
  LabeledEdit_SetOnMouseWheelUp,
  LabeledEdit_SetOnStartDrag;