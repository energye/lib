// constructor
function TListBox_Create(TheOwner: TComponent): TListBox; extdecl;
begin
  {$define handleExceptionID := 4100}
  handleExceptionBegin
  Result := TListBox.Create(TheOwner);
  handleExceptionEnd
end;

// property
function TListBox_DragCursor(ASet: LongBool; AObj: TListBox; AValue: TCursor): TCursor; extdecl;
begin
  {$define handleExceptionID := 4101}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragCursor := AValue
  end else
    Result := AObj.DragCursor;
  handleExceptionEnd
end;

// property
function TListBox_DragKind(ASet: LongBool; AObj: TListBox; AValue: TDragKind): TDragKind; extdecl;
begin
  {$define handleExceptionID := 4102}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragKind := AValue
  end else
    Result := AObj.DragKind;
  handleExceptionEnd
end;

// property
function TListBox_DragMode(ASet: LongBool; AObj: TListBox; AValue: TDragMode): TDragMode; extdecl;
begin
  {$define handleExceptionID := 4103}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragMode := AValue
  end else
    Result := AObj.DragMode;
  handleExceptionEnd
end;

// event
procedure TListBox_OnContextPopup(AObj: TListBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTContextPopupEvent}
  {$DEFINE EventName := OnContextPopup}
  LCLEventMethodCode
end;

// event
procedure TListBox_OnDragDrop(AObj: TListBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragDropEvent}
  {$DEFINE EventName := OnDragDrop}
  LCLEventMethodCode
end;

// event
procedure TListBox_OnDragOver(AObj: TListBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragOverEvent}
  {$DEFINE EventName := OnDragOver}
  LCLEventMethodCode
end;

// event
procedure TListBox_OnEndDrag(AObj: TListBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTEndDragEvent}
  {$DEFINE EventName := OnEndDrag}
  LCLEventMethodCode
end;

// event
procedure TListBox_OnMouseWheelHorz(AObj: TListBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelEvent}
  {$DEFINE EventName := OnMouseWheelHorz}
  LCLEventMethodCode
end;

// event
procedure TListBox_OnMouseWheelLeft(AObj: TListBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelLeft}
  LCLEventMethodCode
end;

// event
procedure TListBox_OnMouseWheelRight(AObj: TListBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelRight}
  LCLEventMethodCode
end;

// event
procedure TListBox_OnStartDrag(AObj: TListBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTStartDragEvent}
  {$DEFINE EventName := OnStartDrag}
  LCLEventMethodCode
end;

function TListBox_TClass(): TClass; extdecl;
begin
  Result := TListBox;
end;

exports
  TListBox_Create,
  TListBox_DragCursor,
  TListBox_DragKind,
  TListBox_DragMode,
  TListBox_OnContextPopup,
  TListBox_OnDragDrop,
  TListBox_OnDragOver,
  TListBox_OnEndDrag,
  TListBox_OnMouseWheelHorz,
  TListBox_OnMouseWheelLeft,
  TListBox_OnMouseWheelRight,
  TListBox_OnStartDrag,
  TListBox_TClass;