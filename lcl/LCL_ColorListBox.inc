
//constructor
function ColorListBox_Create(AOwner: TComponent): TColorListBox; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TColorListBox.Create(AOwner);
  handleExceptionEnd
end;

//property
function ColorListBox_DragCursor(AIsSet: LongBool; AObj: TColorListBox; AValue: TCursor): TCursor; extdecl;
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
function ColorListBox_DragKind(AIsSet: LongBool; AObj: TColorListBox; AValue: TDragKind): TDragKind; extdecl;
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
function ColorListBox_DragMode(AIsSet: LongBool; AObj: TColorListBox; AValue: TDragMode): TDragMode; extdecl;
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
function ColorListBox_Class(): TClass; extdecl;
begin
  Result := TColorListBox;
end;

//property event
procedure ColorListBox_SetOnContextPopup(AObj: TColorListBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTContextPopupEvent}
  {$DEFINE EventName := OnContextPopup}
  EventMethodCode
end;

//property event
procedure ColorListBox_SetOnDragDrop(AObj: TColorListBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragDropEvent}
  {$DEFINE EventName := OnDragDrop}
  EventMethodCode
end;

//property event
procedure ColorListBox_SetOnDragOver(AObj: TColorListBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragOverEvent}
  {$DEFINE EventName := OnDragOver}
  EventMethodCode
end;

//property event
procedure ColorListBox_SetOnEndDrag(AObj: TColorListBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTEndDragEvent}
  {$DEFINE EventName := OnEndDrag}
  EventMethodCode
end;

//property event
procedure ColorListBox_SetOnMouseWheelHorz(AObj: TColorListBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelEvent}
  {$DEFINE EventName := OnMouseWheelHorz}
  EventMethodCode
end;

//property event
procedure ColorListBox_SetOnMouseWheelLeft(AObj: TColorListBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelLeft}
  EventMethodCode
end;

//property event
procedure ColorListBox_SetOnMouseWheelRight(AObj: TColorListBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelRight}
  EventMethodCode
end;

//property event
procedure ColorListBox_SetOnStartDrag(AObj: TColorListBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTStartDragEvent}
  {$DEFINE EventName := OnStartDrag}
  EventMethodCode
end;


exports
  ColorListBox_Create,
  ColorListBox_DragCursor,
  ColorListBox_DragKind,
  ColorListBox_DragMode,
  ColorListBox_Class,
  ColorListBox_SetOnContextPopup,
  ColorListBox_SetOnDragDrop,
  ColorListBox_SetOnDragOver,
  ColorListBox_SetOnEndDrag,
  ColorListBox_SetOnMouseWheelHorz,
  ColorListBox_SetOnMouseWheelLeft,
  ColorListBox_SetOnMouseWheelRight,
  ColorListBox_SetOnStartDrag;