// constructor
function TImage_Create(AOwner: TComponent): TImage; extdecl;
begin
  {$define handleExceptionID := 4700}
  handleExceptionBegin
  Result := TImage.Create(AOwner);
  handleExceptionEnd
end;

// property
function TImage_DragCursor(ASet: LongBool; AObj: TImage; AValue: TCursor): TCursor; extdecl;
begin
  {$define handleExceptionID := 4701}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragCursor := AValue
  end else
    Result := AObj.DragCursor;
  handleExceptionEnd
end;

// property
function TImage_DragMode(ASet: LongBool; AObj: TImage; AValue: TDragMode): TDragMode; extdecl;
begin
  {$define handleExceptionID := 4702}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragMode := AValue
  end else
    Result := AObj.DragMode;
  handleExceptionEnd
end;

// property
function TImage_ParentShowHint(ASet: LongBool; AObj: TImage; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 4703}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentShowHint := AValue
  end else
    Result := AObj.ParentShowHint;
  handleExceptionEnd
end;

// event
procedure TImage_OnContextPopup(AObj: TImage; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTContextPopupEvent}
  {$DEFINE EventName := OnContextPopup}
  LCLEventMethodCode
end;

// event
procedure TImage_OnDblClick(AObj: TImage; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnDblClick}
  LCLEventMethodCode
end;

// event
procedure TImage_OnDragDrop(AObj: TImage; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragDropEvent}
  {$DEFINE EventName := OnDragDrop}
  LCLEventMethodCode
end;

// event
procedure TImage_OnDragOver(AObj: TImage; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragOverEvent}
  {$DEFINE EventName := OnDragOver}
  LCLEventMethodCode
end;

// event
procedure TImage_OnEndDrag(AObj: TImage; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTEndDragEvent}
  {$DEFINE EventName := OnEndDrag}
  LCLEventMethodCode
end;

// event
procedure TImage_OnMouseWheelHorz(AObj: TImage; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelEvent}
  {$DEFINE EventName := OnMouseWheelHorz}
  LCLEventMethodCode
end;

// event
procedure TImage_OnMouseWheelLeft(AObj: TImage; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelLeft}
  LCLEventMethodCode
end;

// event
procedure TImage_OnMouseWheelRight(AObj: TImage; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelRight}
  LCLEventMethodCode
end;

// event
procedure TImage_OnPaint(AObj: TImage; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnPaint}
  LCLEventMethodCode
end;

// event
procedure TImage_OnStartDrag(AObj: TImage; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTStartDragEvent}
  {$DEFINE EventName := OnStartDrag}
  LCLEventMethodCode
end;

function TImage_TClass(): TClass; extdecl;
begin
  Result := TImage;
end;

exports
  TImage_Create,
  TImage_DragCursor,
  TImage_DragMode,
  TImage_ParentShowHint,
  TImage_OnContextPopup,
  TImage_OnDblClick,
  TImage_OnDragDrop,
  TImage_OnDragOver,
  TImage_OnEndDrag,
  TImage_OnMouseWheelHorz,
  TImage_OnMouseWheelLeft,
  TImage_OnMouseWheelRight,
  TImage_OnPaint,
  TImage_OnStartDrag,
  TImage_TClass;