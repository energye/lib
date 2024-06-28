
//constructor
function ListBox_Create(TheOwner: TComponent): TListBox; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TListBox.Create(TheOwner);
  handleExceptionEnd
end;

//property
function ListBox_DragCursor(AIsSet: LongBool; AObj: TListBox; AValue: TCursor): TCursor; extdecl;
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
function ListBox_DragKind(AIsSet: LongBool; AObj: TListBox; AValue: TDragKind): TDragKind; extdecl;
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
function ListBox_DragMode(AIsSet: LongBool; AObj: TListBox; AValue: TDragMode): TDragMode; extdecl;
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
function ListBox_Class(): TClass; extdecl;
begin
  Result := TListBox;
end;

//property event
procedure ListBox_SetOnContextPopup(AObj: TListBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTContextPopupEvent}
  {$DEFINE EventName := OnContextPopup}
  EventMethodCode
end;

//property event
procedure ListBox_SetOnDragDrop(AObj: TListBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragDropEvent}
  {$DEFINE EventName := OnDragDrop}
  EventMethodCode
end;

//property event
procedure ListBox_SetOnDragOver(AObj: TListBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragOverEvent}
  {$DEFINE EventName := OnDragOver}
  EventMethodCode
end;

//property event
procedure ListBox_SetOnEndDrag(AObj: TListBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTEndDragEvent}
  {$DEFINE EventName := OnEndDrag}
  EventMethodCode
end;

//property event
procedure ListBox_SetOnMouseWheelHorz(AObj: TListBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelEvent}
  {$DEFINE EventName := OnMouseWheelHorz}
  EventMethodCode
end;

//property event
procedure ListBox_SetOnMouseWheelLeft(AObj: TListBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelLeft}
  EventMethodCode
end;

//property event
procedure ListBox_SetOnMouseWheelRight(AObj: TListBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelRight}
  EventMethodCode
end;

//property event
procedure ListBox_SetOnStartDrag(AObj: TListBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTStartDragEvent}
  {$DEFINE EventName := OnStartDrag}
  EventMethodCode
end;


exports
  ListBox_Create,
  ListBox_DragCursor,
  ListBox_DragKind,
  ListBox_DragMode,
  ListBox_Class,
  ListBox_SetOnContextPopup,
  ListBox_SetOnDragDrop,
  ListBox_SetOnDragOver,
  ListBox_SetOnEndDrag,
  ListBox_SetOnMouseWheelHorz,
  ListBox_SetOnMouseWheelLeft,
  ListBox_SetOnMouseWheelRight,
  ListBox_SetOnStartDrag;