
//constructor
function CheckListBox_Create(AOwner: TComponent): TCheckListBox; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TCheckListBox.Create(AOwner);
  handleExceptionEnd
end;

//property
function CheckListBox_DragCursor(AIsSet: LongBool; AObj: TCheckListBox; AValue: TCursor): TCursor; extdecl;
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
function CheckListBox_DragMode(AIsSet: LongBool; AObj: TCheckListBox; AValue: TDragMode): TDragMode; extdecl;
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

//function
function CheckListBox_Class(): TClass; extdecl;
begin
  Result := TCheckListBox;
end;

//property event
procedure CheckListBox_SetOnContextPopup(AObj: TCheckListBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTContextPopupEvent}
  {$DEFINE EventName := OnContextPopup}
  EventMethodCode
end;

//property event
procedure CheckListBox_SetOnDragDrop(AObj: TCheckListBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragDropEvent}
  {$DEFINE EventName := OnDragDrop}
  EventMethodCode
end;

//property event
procedure CheckListBox_SetOnDragOver(AObj: TCheckListBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragOverEvent}
  {$DEFINE EventName := OnDragOver}
  EventMethodCode
end;

//property event
procedure CheckListBox_SetOnEndDrag(AObj: TCheckListBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTEndDragEvent}
  {$DEFINE EventName := OnEndDrag}
  EventMethodCode
end;

//property event
procedure CheckListBox_SetOnMouseWheelHorz(AObj: TCheckListBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelEvent}
  {$DEFINE EventName := OnMouseWheelHorz}
  EventMethodCode
end;

//property event
procedure CheckListBox_SetOnMouseWheelLeft(AObj: TCheckListBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelLeft}
  EventMethodCode
end;

//property event
procedure CheckListBox_SetOnMouseWheelRight(AObj: TCheckListBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelRight}
  EventMethodCode
end;

//property event
procedure CheckListBox_SetOnStartDrag(AObj: TCheckListBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTStartDragEvent}
  {$DEFINE EventName := OnStartDrag}
  EventMethodCode
end;


exports
  CheckListBox_Create,
  CheckListBox_DragCursor,
  CheckListBox_DragMode,
  CheckListBox_Class,
  CheckListBox_SetOnContextPopup,
  CheckListBox_SetOnDragDrop,
  CheckListBox_SetOnDragOver,
  CheckListBox_SetOnEndDrag,
  CheckListBox_SetOnMouseWheelHorz,
  CheckListBox_SetOnMouseWheelLeft,
  CheckListBox_SetOnMouseWheelRight,
  CheckListBox_SetOnStartDrag;