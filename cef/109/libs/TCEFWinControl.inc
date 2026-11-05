// constructor
function TCEFWinControl_Create(TheOwner: TComponent): TCEFWinControl; extdecl;
begin
  {$define handleExceptionID := 800}
  handleExceptionBegin
  Result := TCEFWinControl.Create(TheOwner);
  handleExceptionEnd
end;

// constructor
function TCEFWinControl_CreateParented(AParentWindow: HWND): TCEFWinControl; extdecl;
begin
  {$define handleExceptionID := 801}
  handleExceptionBegin
  Result := TCEFWinControl.CreateParented(AParentWindow);
  handleExceptionEnd
end;

// function
function TCEFWinControl_TakeSnapshot(AObj: TCEFWinControl; var aBitmap: TBitmap): LongBool; extdecl;
var
  OutaBitmap: TBitmap;
begin
  {$define handleExceptionID := 802}
  handleExceptionBegin
  OutaBitmap := aBitmap;
  Result := AObj.TakeSnapshot(OutaBitmap);
  aBitmap := OutaBitmap;
  handleExceptionEnd
end;

// function
function TCEFWinControl_DestroyChildWindow(AObj: TCEFWinControl): LongBool; extdecl;
begin
  {$define handleExceptionID := 803}
  handleExceptionBegin
  Result := AObj.DestroyChildWindow();
  handleExceptionEnd
end;

// procedure
procedure TCEFWinControl_CreateHandle(AObj: TCEFWinControl); extdecl;
begin
  {$define handleExceptionID := 804}
  handleExceptionBegin
  AObj.CreateHandle();
  handleExceptionEnd
end;

// procedure
procedure TCEFWinControl_InvalidateChildren(AObj: TCEFWinControl); extdecl;
begin
  {$define handleExceptionID := 805}
  handleExceptionBegin
  AObj.InvalidateChildren();
  handleExceptionEnd
end;

// procedure
procedure TCEFWinControl_UpdateSize(AObj: TCEFWinControl); extdecl;
begin
  {$define handleExceptionID := 806}
  handleExceptionBegin
  AObj.UpdateSize();
  handleExceptionEnd
end;

// property
function TCEFWinControl_ChildWindowHandle(AObj: TCEFWinControl): THandle; extdecl;
begin
  {$define handleExceptionID := 807}
  handleExceptionBegin
  Result := AObj.ChildWindowHandle;
  handleExceptionEnd
end;

// property
function TCEFWinControl_DragKind(ASet: LongBool; AObj: TCEFWinControl; AValue: TDragKind): TDragKind; extdecl;
begin
  {$define handleExceptionID := 808}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragKind := AValue
  end else
    Result := AObj.DragKind;
  handleExceptionEnd
end;

// property
function TCEFWinControl_DragCursor(ASet: LongBool; AObj: TCEFWinControl; AValue: TCursor): TCursor; extdecl;
begin
  {$define handleExceptionID := 809}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragCursor := AValue
  end else
    Result := AObj.DragCursor;
  handleExceptionEnd
end;

// property
function TCEFWinControl_DragMode(ASet: LongBool; AObj: TCEFWinControl; AValue: TDragMode): TDragMode; extdecl;
begin
  {$define handleExceptionID := 810}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragMode := AValue
  end else
    Result := AObj.DragMode;
  handleExceptionEnd
end;

// event
procedure TCEFWinControl_OnDragDrop(AObj: TCEFWinControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TCEFWinControl_TDragDropEvent}
  {$DEFINE EventName := OnDragDrop}
  CEFEventMethodCode
end;

// event
procedure TCEFWinControl_OnDragOver(AObj: TCEFWinControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TCEFWinControl_TDragOverEvent}
  {$DEFINE EventName := OnDragOver}
  CEFEventMethodCode
end;

// event
procedure TCEFWinControl_OnStartDrag(AObj: TCEFWinControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TCEFWinControl_TStartDragEvent}
  {$DEFINE EventName := OnStartDrag}
  CEFEventMethodCode
end;

// event
procedure TCEFWinControl_OnEndDrag(AObj: TCEFWinControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TCEFWinControl_TEndDragEvent}
  {$DEFINE EventName := OnEndDrag}
  CEFEventMethodCode
end;

exports
  TCEFWinControl_Create,
  TCEFWinControl_CreateParented,
  TCEFWinControl_TakeSnapshot,
  TCEFWinControl_DestroyChildWindow,
  TCEFWinControl_CreateHandle,
  TCEFWinControl_InvalidateChildren,
  TCEFWinControl_UpdateSize,
  TCEFWinControl_ChildWindowHandle,
  TCEFWinControl_DragKind,
  TCEFWinControl_DragCursor,
  TCEFWinControl_DragMode,
  TCEFWinControl_OnDragDrop,
  TCEFWinControl_OnDragOver,
  TCEFWinControl_OnStartDrag,
  TCEFWinControl_OnEndDrag;