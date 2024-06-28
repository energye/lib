
//constructor
function MaskEdit_Create(TheOwner: TComponent): TMaskEdit; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TMaskEdit.Create(TheOwner);
  handleExceptionEnd
end;

//property
function MaskEdit_IsMasked(AObj: TMaskEdit): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='IsMasked'}
  handleExceptionBegin
  Result := AObj.IsMasked;
  handleExceptionEnd
end;

//property
function MaskEdit_EditText(AIsSet: LongBool; AObj: TMaskEdit; AValue: PChar): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='EditText'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.EditText := AValue;
  end else
    Result := ToPChar(AObj.EditText);
  handleExceptionEnd
end;

//property
function MaskEdit_AutoSelect(AIsSet: LongBool; AObj: TMaskEdit; AValue: LongBool): LongBool; extdecl;
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
function MaskEdit_DragCursor(AIsSet: LongBool; AObj: TMaskEdit; AValue: TCursor): TCursor; extdecl;
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
function MaskEdit_DragKind(AIsSet: LongBool; AObj: TMaskEdit; AValue: TDragKind): TDragKind; extdecl;
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
function MaskEdit_DragMode(AIsSet: LongBool; AObj: TMaskEdit; AValue: TDragMode): TDragMode; extdecl;
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
function MaskEdit_ParentColor(AIsSet: LongBool; AObj: TMaskEdit; AValue: LongBool): LongBool; extdecl;
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
function MaskEdit_ParentFont(AIsSet: LongBool; AObj: TMaskEdit; AValue: LongBool): LongBool; extdecl;
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
function MaskEdit_ParentShowHint(AIsSet: LongBool; AObj: TMaskEdit; AValue: LongBool): LongBool; extdecl;
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
function MaskEdit_EditMask(AIsSet: LongBool; AObj: TMaskEdit; AValue: PChar): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='EditMask'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.EditMask := AValue;
  end else
    Result := ToPChar(AObj.EditMask);
  handleExceptionEnd
end;

//property
function MaskEdit_SpaceChar(AIsSet: LongBool; AObj: TMaskEdit; AValue: Char): Char; extdecl;
begin
  {$define handleExceptionFuncName :='SpaceChar'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.SpaceChar := AValue;
  end else
    Result := AObj.SpaceChar;
  handleExceptionEnd
end;

//function
function MaskEdit_Class(): TClass; extdecl;
begin
  Result := TMaskEdit;
end;

//property event
procedure MaskEdit_SetOnDblClick(AObj: TMaskEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnDblClick}
  EventMethodCode
end;

//property event
procedure MaskEdit_SetOnDragDrop(AObj: TMaskEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragDropEvent}
  {$DEFINE EventName := OnDragDrop}
  EventMethodCode
end;

//property event
procedure MaskEdit_SetOnDragOver(AObj: TMaskEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragOverEvent}
  {$DEFINE EventName := OnDragOver}
  EventMethodCode
end;

//property event
procedure MaskEdit_SetOnEditingDone(AObj: TMaskEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnEditingDone}
  EventMethodCode
end;

//property event
procedure MaskEdit_SetOnEndDock(AObj: TMaskEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTEndDragEvent}
  {$DEFINE EventName := OnEndDock}
  EventMethodCode
end;

//property event
procedure MaskEdit_SetOnEndDrag(AObj: TMaskEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTEndDragEvent}
  {$DEFINE EventName := OnEndDrag}
  EventMethodCode
end;

//property event
procedure MaskEdit_SetOnMouseDown(AObj: TMaskEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseDown}
  EventMethodCode
end;

//property event
procedure MaskEdit_SetOnMouseEnter(AObj: TMaskEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseEnter}
  EventMethodCode
end;

//property event
procedure MaskEdit_SetOnMouseLeave(AObj: TMaskEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseLeave}
  EventMethodCode
end;

//property event
procedure MaskEdit_SetOnMouseMove(AObj: TMaskEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseMoveEvent}
  {$DEFINE EventName := OnMouseMove}
  EventMethodCode
end;

//property event
procedure MaskEdit_SetOnMouseUp(AObj: TMaskEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseUp}
  EventMethodCode
end;

//property event
procedure MaskEdit_SetOnMouseWheel(AObj: TMaskEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelEvent}
  {$DEFINE EventName := OnMouseWheel}
  EventMethodCode
end;

//property event
procedure MaskEdit_SetOnMouseWheelDown(AObj: TMaskEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelDown}
  EventMethodCode
end;

//property event
procedure MaskEdit_SetOnMouseWheelUp(AObj: TMaskEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelUp}
  EventMethodCode
end;

//property event
procedure MaskEdit_SetOnStartDock(AObj: TMaskEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTStartDockEvent}
  {$DEFINE EventName := OnStartDock}
  EventMethodCode
end;

//property event
procedure MaskEdit_SetOnStartDrag(AObj: TMaskEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTStartDragEvent}
  {$DEFINE EventName := OnStartDrag}
  EventMethodCode
end;


exports
  MaskEdit_Create,
  MaskEdit_IsMasked,
  MaskEdit_EditText,
  MaskEdit_AutoSelect,
  MaskEdit_DragCursor,
  MaskEdit_DragKind,
  MaskEdit_DragMode,
  MaskEdit_ParentColor,
  MaskEdit_ParentFont,
  MaskEdit_ParentShowHint,
  MaskEdit_EditMask,
  MaskEdit_SpaceChar,
  MaskEdit_Class,
  MaskEdit_SetOnDblClick,
  MaskEdit_SetOnDragDrop,
  MaskEdit_SetOnDragOver,
  MaskEdit_SetOnEditingDone,
  MaskEdit_SetOnEndDock,
  MaskEdit_SetOnEndDrag,
  MaskEdit_SetOnMouseDown,
  MaskEdit_SetOnMouseEnter,
  MaskEdit_SetOnMouseLeave,
  MaskEdit_SetOnMouseMove,
  MaskEdit_SetOnMouseUp,
  MaskEdit_SetOnMouseWheel,
  MaskEdit_SetOnMouseWheelDown,
  MaskEdit_SetOnMouseWheelUp,
  MaskEdit_SetOnStartDock,
  MaskEdit_SetOnStartDrag;