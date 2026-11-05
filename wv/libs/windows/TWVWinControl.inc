// constructor
function TWVWinControl_Create(TheOwner: TComponent): TWVWinControl; extdecl;
begin
  {$define handleExceptionID := 300}
  handleExceptionBegin
  Result := TWVWinControl.Create(TheOwner);
  handleExceptionEnd
end;

// constructor
function TWVWinControl_CreateParented(AParentWindow: HWND): TWVWinControl; extdecl;
begin
  {$define handleExceptionID := 301}
  handleExceptionBegin
  Result := TWVWinControl.CreateParented(AParentWindow);
  handleExceptionEnd
end;

// procedure
procedure TWVWinControl_CreateHandle(AObj: TWVWinControl); extdecl;
begin
  {$define handleExceptionID := 302}
  handleExceptionBegin
  AObj.CreateHandle();
  handleExceptionEnd
end;

// procedure
procedure TWVWinControl_InvalidateChildren(AObj: TWVWinControl); extdecl;
begin
  {$define handleExceptionID := 303}
  handleExceptionBegin
  AObj.InvalidateChildren();
  handleExceptionEnd
end;

// procedure
procedure TWVWinControl_UpdateSize(AObj: TWVWinControl); extdecl;
begin
  {$define handleExceptionID := 304}
  handleExceptionBegin
  AObj.UpdateSize();
  handleExceptionEnd
end;

// property
function TWVWinControl_ChildWindowHandle(AObj: TWVWinControl): THandle; extdecl;
begin
  {$define handleExceptionID := 305}
  handleExceptionBegin
  Result := AObj.ChildWindowHandle;
  handleExceptionEnd
end;

// property
function TWVWinControl_DragKind(ASet: LongBool; AObj: TWVWinControl; AValue: TDragKind): TDragKind; extdecl;
begin
  {$define handleExceptionID := 306}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragKind := AValue
  end else
    Result := AObj.DragKind;
  handleExceptionEnd
end;

// property
function TWVWinControl_DragCursor(ASet: LongBool; AObj: TWVWinControl; AValue: TCursor): TCursor; extdecl;
begin
  {$define handleExceptionID := 307}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragCursor := AValue
  end else
    Result := AObj.DragCursor;
  handleExceptionEnd
end;

// property
function TWVWinControl_DragMode(ASet: LongBool; AObj: TWVWinControl; AValue: TDragMode): TDragMode; extdecl;
begin
  {$define handleExceptionID := 308}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragMode := AValue
  end else
    Result := AObj.DragMode;
  handleExceptionEnd
end;

// event
procedure TWVWinControl_OnDragDrop(AObj: TWVWinControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TWVWinControl_TDragDropEvent}
  {$DEFINE EventName := OnDragDrop}
  WVEventMethodCode
end;

// event
procedure TWVWinControl_OnDragOver(AObj: TWVWinControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TWVWinControl_TDragOverEvent}
  {$DEFINE EventName := OnDragOver}
  WVEventMethodCode
end;

// event
procedure TWVWinControl_OnStartDrag(AObj: TWVWinControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TWVWinControl_TStartDragEvent}
  {$DEFINE EventName := OnStartDrag}
  WVEventMethodCode
end;

// event
procedure TWVWinControl_OnEndDrag(AObj: TWVWinControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TWVWinControl_TEndDragEvent}
  {$DEFINE EventName := OnEndDrag}
  WVEventMethodCode
end;

exports
  TWVWinControl_Create,
  TWVWinControl_CreateParented,
  TWVWinControl_CreateHandle,
  TWVWinControl_InvalidateChildren,
  TWVWinControl_UpdateSize,
  TWVWinControl_ChildWindowHandle,
  TWVWinControl_DragKind,
  TWVWinControl_DragCursor,
  TWVWinControl_DragMode,
  TWVWinControl_OnDragDrop,
  TWVWinControl_OnDragOver,
  TWVWinControl_OnStartDrag,
  TWVWinControl_OnEndDrag;