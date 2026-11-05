// constructor
function TColorListBox_Create(AOwner: TComponent): TColorListBox; extdecl;
begin
  {$define handleExceptionID := 6500}
  handleExceptionBegin
  Result := TColorListBox.Create(AOwner);
  handleExceptionEnd
end;

// property
function TColorListBox_DragCursor(ASet: LongBool; AObj: TColorListBox; AValue: TCursor): TCursor; extdecl;
begin
  {$define handleExceptionID := 6501}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragCursor := AValue
  end else
    Result := AObj.DragCursor;
  handleExceptionEnd
end;

// property
function TColorListBox_DragKind(ASet: LongBool; AObj: TColorListBox; AValue: TDragKind): TDragKind; extdecl;
begin
  {$define handleExceptionID := 6502}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragKind := AValue
  end else
    Result := AObj.DragKind;
  handleExceptionEnd
end;

// property
function TColorListBox_DragMode(ASet: LongBool; AObj: TColorListBox; AValue: TDragMode): TDragMode; extdecl;
begin
  {$define handleExceptionID := 6503}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragMode := AValue
  end else
    Result := AObj.DragMode;
  handleExceptionEnd
end;

// event
procedure TColorListBox_OnContextPopup(AObj: TColorListBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTContextPopupEvent}
  {$DEFINE EventName := OnContextPopup}
  LCLEventMethodCode
end;

// event
procedure TColorListBox_OnDragDrop(AObj: TColorListBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragDropEvent}
  {$DEFINE EventName := OnDragDrop}
  LCLEventMethodCode
end;

// event
procedure TColorListBox_OnDragOver(AObj: TColorListBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragOverEvent}
  {$DEFINE EventName := OnDragOver}
  LCLEventMethodCode
end;

// event
procedure TColorListBox_OnEndDrag(AObj: TColorListBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTEndDragEvent}
  {$DEFINE EventName := OnEndDrag}
  LCLEventMethodCode
end;

// event
procedure TColorListBox_OnMouseWheelHorz(AObj: TColorListBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelEvent}
  {$DEFINE EventName := OnMouseWheelHorz}
  LCLEventMethodCode
end;

// event
procedure TColorListBox_OnMouseWheelLeft(AObj: TColorListBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelLeft}
  LCLEventMethodCode
end;

// event
procedure TColorListBox_OnMouseWheelRight(AObj: TColorListBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelRight}
  LCLEventMethodCode
end;

// event
procedure TColorListBox_OnStartDrag(AObj: TColorListBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTStartDragEvent}
  {$DEFINE EventName := OnStartDrag}
  LCLEventMethodCode
end;

function TColorListBox_TClass(): TClass; extdecl;
begin
  Result := TColorListBox;
end;

exports
  TColorListBox_Create,
  TColorListBox_DragCursor,
  TColorListBox_DragKind,
  TColorListBox_DragMode,
  TColorListBox_OnContextPopup,
  TColorListBox_OnDragDrop,
  TColorListBox_OnDragOver,
  TColorListBox_OnEndDrag,
  TColorListBox_OnMouseWheelHorz,
  TColorListBox_OnMouseWheelLeft,
  TColorListBox_OnMouseWheelRight,
  TColorListBox_OnStartDrag,
  TColorListBox_TClass;