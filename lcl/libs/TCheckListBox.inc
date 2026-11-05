// constructor
function TCheckListBox_Create(AOwner: TComponent): TCheckListBox; extdecl;
begin
  {$define handleExceptionID := 17600}
  handleExceptionBegin
  Result := TCheckListBox.Create(AOwner);
  handleExceptionEnd
end;

// property
function TCheckListBox_DragCursor(ASet: LongBool; AObj: TCheckListBox; AValue: TCursor): TCursor; extdecl;
begin
  {$define handleExceptionID := 17601}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragCursor := AValue
  end else
    Result := AObj.DragCursor;
  handleExceptionEnd
end;

// property
function TCheckListBox_DragMode(ASet: LongBool; AObj: TCheckListBox; AValue: TDragMode): TDragMode; extdecl;
begin
  {$define handleExceptionID := 17602}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragMode := AValue
  end else
    Result := AObj.DragMode;
  handleExceptionEnd
end;

// event
procedure TCheckListBox_OnContextPopup(AObj: TCheckListBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTContextPopupEvent}
  {$DEFINE EventName := OnContextPopup}
  LCLEventMethodCode
end;

// event
procedure TCheckListBox_OnDragDrop(AObj: TCheckListBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragDropEvent}
  {$DEFINE EventName := OnDragDrop}
  LCLEventMethodCode
end;

// event
procedure TCheckListBox_OnDragOver(AObj: TCheckListBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragOverEvent}
  {$DEFINE EventName := OnDragOver}
  LCLEventMethodCode
end;

// event
procedure TCheckListBox_OnEndDrag(AObj: TCheckListBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTEndDragEvent}
  {$DEFINE EventName := OnEndDrag}
  LCLEventMethodCode
end;

// event
procedure TCheckListBox_OnMouseWheelHorz(AObj: TCheckListBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelEvent}
  {$DEFINE EventName := OnMouseWheelHorz}
  LCLEventMethodCode
end;

// event
procedure TCheckListBox_OnMouseWheelLeft(AObj: TCheckListBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelLeft}
  LCLEventMethodCode
end;

// event
procedure TCheckListBox_OnMouseWheelRight(AObj: TCheckListBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelRight}
  LCLEventMethodCode
end;

// event
procedure TCheckListBox_OnStartDrag(AObj: TCheckListBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTStartDragEvent}
  {$DEFINE EventName := OnStartDrag}
  LCLEventMethodCode
end;

function TCheckListBox_TClass(): TClass; extdecl;
begin
  Result := TCheckListBox;
end;

exports
  TCheckListBox_Create,
  TCheckListBox_DragCursor,
  TCheckListBox_DragMode,
  TCheckListBox_OnContextPopup,
  TCheckListBox_OnDragDrop,
  TCheckListBox_OnDragOver,
  TCheckListBox_OnEndDrag,
  TCheckListBox_OnMouseWheelHorz,
  TCheckListBox_OnMouseWheelLeft,
  TCheckListBox_OnMouseWheelRight,
  TCheckListBox_OnStartDrag,
  TCheckListBox_TClass;