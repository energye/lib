
//constructor
function WVWinControl_Create(TheOwner: TComponent): TWVWinControl; extdecl;
begin
  handleExceptionBegin
  Result := TWVWinControl.Create(TheOwner);
  handleExceptionEnd
end;

//property
function WVWinControl_ChildWindowHandle(AObj: TWVWinControl): THandle; extdecl;
begin
  handleExceptionBegin
  Result := AObj.ChildWindowHandle;
  handleExceptionEnd
end;

//property
function WVWinControl_DragKind(AIsSet: LongBool; AObj: TWVWinControl; AValue: TDragKind): TDragKind; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DragKind := AValue;
  end else
    Result := AObj.DragKind;
  handleExceptionEnd
end;

//property
function WVWinControl_DragCursor(AIsSet: LongBool; AObj: TWVWinControl; AValue: TCursor): TCursor; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DragCursor := AValue;
  end else
    Result := AObj.DragCursor;
  handleExceptionEnd
end;

//property
function WVWinControl_DragMode(AIsSet: LongBool; AObj: TWVWinControl; AValue: TDragMode): TDragMode; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DragMode := AValue;
  end else
    Result := AObj.DragMode;
  handleExceptionEnd
end;

//procedure
procedure WVWinControl_CreateHandle(AObj: TWVWinControl); extdecl;
begin
  handleExceptionBegin
  AObj.CreateHandle();
  handleExceptionEnd
end;

//procedure
procedure WVWinControl_InvalidateChildren(AObj: TWVWinControl); extdecl;
begin
  handleExceptionBegin
  AObj.InvalidateChildren();
  handleExceptionEnd
end;

//procedure
procedure WVWinControl_UpdateSize(AObj: TWVWinControl); extdecl;
begin
  handleExceptionBegin
  AObj.UpdateSize();
  handleExceptionEnd
end;

//property event
procedure WVWinControl_SetOnDragDrop(AObj: TWVWinControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragDropEvent}
  {$DEFINE EventName := OnDragDrop}
  WVEventMethodCode
end;

//property event
procedure WVWinControl_SetOnDragOver(AObj: TWVWinControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragOverEvent}
  {$DEFINE EventName := OnDragOver}
  WVEventMethodCode
end;

//property event
procedure WVWinControl_SetOnStartDrag(AObj: TWVWinControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTStartDragEvent}
  {$DEFINE EventName := OnStartDrag}
  WVEventMethodCode
end;

//property event
procedure WVWinControl_SetOnEndDrag(AObj: TWVWinControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTEndDragEvent}
  {$DEFINE EventName := OnEndDrag}
  WVEventMethodCode
end;


exports
  WVWinControl_Create,
  WVWinControl_ChildWindowHandle,
  WVWinControl_DragKind,
  WVWinControl_DragCursor,
  WVWinControl_DragMode,
  WVWinControl_CreateHandle,
  WVWinControl_InvalidateChildren,
  WVWinControl_UpdateSize,
  WVWinControl_SetOnDragDrop,
  WVWinControl_SetOnDragOver,
  WVWinControl_SetOnStartDrag,
  WVWinControl_SetOnEndDrag;