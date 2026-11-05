// constructor
function TScrollBar_Create(AOwner: TComponent): TScrollBar; extdecl;
begin
  {$define handleExceptionID := 16900}
  handleExceptionBegin
  Result := TScrollBar.Create(AOwner);
  handleExceptionEnd
end;

// property
function TScrollBar_DragCursor(ASet: LongBool; AObj: TScrollBar; AValue: TCursor): TCursor; extdecl;
begin
  {$define handleExceptionID := 16901}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragCursor := AValue
  end else
    Result := AObj.DragCursor;
  handleExceptionEnd
end;

// property
function TScrollBar_DragKind(ASet: LongBool; AObj: TScrollBar; AValue: TDragKind): TDragKind; extdecl;
begin
  {$define handleExceptionID := 16902}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragKind := AValue
  end else
    Result := AObj.DragKind;
  handleExceptionEnd
end;

// property
function TScrollBar_DragMode(ASet: LongBool; AObj: TScrollBar; AValue: TDragMode): TDragMode; extdecl;
begin
  {$define handleExceptionID := 16903}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragMode := AValue
  end else
    Result := AObj.DragMode;
  handleExceptionEnd
end;

// property
function TScrollBar_ParentShowHint(ASet: LongBool; AObj: TScrollBar; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 16904}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentShowHint := AValue
  end else
    Result := AObj.ParentShowHint;
  handleExceptionEnd
end;

// event
procedure TScrollBar_OnContextPopup(AObj: TScrollBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTContextPopupEvent}
  {$DEFINE EventName := OnContextPopup}
  LCLEventMethodCode
end;

// event
procedure TScrollBar_OnDragDrop(AObj: TScrollBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragDropEvent}
  {$DEFINE EventName := OnDragDrop}
  LCLEventMethodCode
end;

// event
procedure TScrollBar_OnDragOver(AObj: TScrollBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragOverEvent}
  {$DEFINE EventName := OnDragOver}
  LCLEventMethodCode
end;

// event
procedure TScrollBar_OnEndDrag(AObj: TScrollBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTEndDragEvent}
  {$DEFINE EventName := OnEndDrag}
  LCLEventMethodCode
end;

// event
procedure TScrollBar_OnStartDrag(AObj: TScrollBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTStartDragEvent}
  {$DEFINE EventName := OnStartDrag}
  LCLEventMethodCode
end;

function TScrollBar_TClass(): TClass; extdecl;
begin
  Result := TScrollBar;
end;

exports
  TScrollBar_Create,
  TScrollBar_DragCursor,
  TScrollBar_DragKind,
  TScrollBar_DragMode,
  TScrollBar_ParentShowHint,
  TScrollBar_OnContextPopup,
  TScrollBar_OnDragDrop,
  TScrollBar_OnDragOver,
  TScrollBar_OnEndDrag,
  TScrollBar_OnStartDrag,
  TScrollBar_TClass;