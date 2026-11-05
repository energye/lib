// constructor
function TTabSheet_Create(TheOwner: TComponent): TTabSheet; extdecl;
begin
  {$define handleExceptionID := 13100}
  handleExceptionBegin
  Result := TTabSheet.Create(TheOwner);
  handleExceptionEnd
end;

// property
function TTabSheet_PageControl(ASet: LongBool; AObj: TTabSheet; AValue: TPageControl): TPageControl; extdecl;
begin
  {$define handleExceptionID := 13101}
  handleExceptionBegin
  if ASet then
  begin
    AObj.PageControl := AValue
  end else
    Result := AObj.PageControl;
  handleExceptionEnd
end;

// property
function TTabSheet_TabIndex(AObj: TTabSheet): Integer; extdecl;
begin
  {$define handleExceptionID := 13102}
  handleExceptionBegin
  Result := AObj.TabIndex;
  handleExceptionEnd
end;

// property
function TTabSheet_ParentFont(ASet: LongBool; AObj: TTabSheet; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 13103}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentFont := AValue
  end else
    Result := AObj.ParentFont;
  handleExceptionEnd
end;

// property
function TTabSheet_ParentShowHint(ASet: LongBool; AObj: TTabSheet; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 13104}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentShowHint := AValue
  end else
    Result := AObj.ParentShowHint;
  handleExceptionEnd
end;

// event
procedure TTabSheet_OnContextPopup(AObj: TTabSheet; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTContextPopupEvent}
  {$DEFINE EventName := OnContextPopup}
  LCLEventMethodCode
end;

// event
procedure TTabSheet_OnDragDrop(AObj: TTabSheet; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragDropEvent}
  {$DEFINE EventName := OnDragDrop}
  LCLEventMethodCode
end;

// event
procedure TTabSheet_OnDragOver(AObj: TTabSheet; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragOverEvent}
  {$DEFINE EventName := OnDragOver}
  LCLEventMethodCode
end;

// event
procedure TTabSheet_OnEndDrag(AObj: TTabSheet; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTEndDragEvent}
  {$DEFINE EventName := OnEndDrag}
  LCLEventMethodCode
end;

// event
procedure TTabSheet_OnMouseDown(AObj: TTabSheet; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseDown}
  LCLEventMethodCode
end;

// event
procedure TTabSheet_OnMouseEnter(AObj: TTabSheet; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseEnter}
  LCLEventMethodCode
end;

// event
procedure TTabSheet_OnMouseLeave(AObj: TTabSheet; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseLeave}
  LCLEventMethodCode
end;

// event
procedure TTabSheet_OnMouseMove(AObj: TTabSheet; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseMoveEvent}
  {$DEFINE EventName := OnMouseMove}
  LCLEventMethodCode
end;

// event
procedure TTabSheet_OnMouseUp(AObj: TTabSheet; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseUp}
  LCLEventMethodCode
end;

// event
procedure TTabSheet_OnMouseWheel(AObj: TTabSheet; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelEvent}
  {$DEFINE EventName := OnMouseWheel}
  LCLEventMethodCode
end;

// event
procedure TTabSheet_OnMouseWheelDown(AObj: TTabSheet; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelDown}
  LCLEventMethodCode
end;

// event
procedure TTabSheet_OnMouseWheelUp(AObj: TTabSheet; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelUp}
  LCLEventMethodCode
end;

// event
procedure TTabSheet_OnStartDrag(AObj: TTabSheet; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTStartDragEvent}
  {$DEFINE EventName := OnStartDrag}
  LCLEventMethodCode
end;

function TTabSheet_TClass(): TClass; extdecl;
begin
  Result := TTabSheet;
end;

exports
  TTabSheet_Create,
  TTabSheet_PageControl,
  TTabSheet_TabIndex,
  TTabSheet_ParentFont,
  TTabSheet_ParentShowHint,
  TTabSheet_OnContextPopup,
  TTabSheet_OnDragDrop,
  TTabSheet_OnDragOver,
  TTabSheet_OnEndDrag,
  TTabSheet_OnMouseDown,
  TTabSheet_OnMouseEnter,
  TTabSheet_OnMouseLeave,
  TTabSheet_OnMouseMove,
  TTabSheet_OnMouseUp,
  TTabSheet_OnMouseWheel,
  TTabSheet_OnMouseWheelDown,
  TTabSheet_OnMouseWheelUp,
  TTabSheet_OnStartDrag,
  TTabSheet_TClass;