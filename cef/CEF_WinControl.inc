
//constructor
function CEFWinControl_Create(theOwner: TComponent): TCEFWinControl; extdecl;
begin
  handleExceptionBegin
  Result := TCEFWinControl.Create(theOwner);
  handleExceptionEnd
end;

//property
function CEFWinControl_ChildWindowHandle(AObj: TCEFWinControl): THandle; extdecl;
begin
  handleExceptionBegin
  Result := AObj.ChildWindowHandle;
  handleExceptionEnd
end;

//property
function CEFWinControl_DragKind(AIsSet: LongBool; AObj: TCEFWinControl; AValue: TDragKind): TDragKind; extdecl;
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
function CEFWinControl_DragCursor(AIsSet: LongBool; AObj: TCEFWinControl; AValue: TCursor): TCursor; extdecl;
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
function CEFWinControl_DragMode(AIsSet: LongBool; AObj: TCEFWinControl; AValue: TDragMode): TDragMode; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DragMode := AValue;
  end else
    Result := AObj.DragMode;
  handleExceptionEnd
end;

//property
procedure CEFWinControl_Touch(AObj: TCEFWinControl); extdecl;
begin
  handleExceptionBegin
  handleExceptionEnd
end;

//function
function CEFWinControl_TakeSnapshot(AObj: TCEFWinControl; var aBitmap: TBitmap): LongBool; extdecl;
var
  RetaBitmap: TBitmap;
begin
  handleExceptionBegin
  RetaBitmap := aBitmap;
  Result := AObj.TakeSnapshot(RetaBitmap);
  aBitmap := RetaBitmap;
  handleExceptionEnd
end;

//function
function CEFWinControl_DestroyChildWindow(AObj: TCEFWinControl): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.DestroyChildWindow();
  handleExceptionEnd
end;

//procedure
procedure CEFWinControl_CreateHandle(AObj: TCEFWinControl); extdecl;
begin
  handleExceptionBegin
  AObj.CreateHandle();
  handleExceptionEnd
end;

//procedure
procedure CEFWinControl_InvalidateChildren(AObj: TCEFWinControl); extdecl;
begin
  handleExceptionBegin
  AObj.InvalidateChildren();
  handleExceptionEnd
end;

//procedure
procedure CEFWinControl_UpdateSize(AObj: TCEFWinControl); extdecl;
begin
  handleExceptionBegin
  AObj.UpdateSize();
  handleExceptionEnd
end;

//property event
procedure CEFWinControl_SetOnDragDrop(AObj: TCEFWinControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := WinControl_OnDragDrop}
  {$DEFINE EventName := OnDragDrop}
  CEFEventMethodCode
end;

//property event
procedure CEFWinControl_SetOnDragOver(AObj: TCEFWinControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := WinControl_OnDragOver}
  {$DEFINE EventName := OnDragOver}
  CEFEventMethodCode
end;

//property event
procedure CEFWinControl_SetOnStartDrag(AObj: TCEFWinControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := WinControl_OnStartDrag}
  {$DEFINE EventName := OnStartDrag}
  CEFEventMethodCode
end;

//property event
procedure CEFWinControl_SetOnEndDrag(AObj: TCEFWinControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := WinControl_OnEndDrag}
  {$DEFINE EventName := OnEndDrag}
  CEFEventMethodCode
end;


exports
  CEFWinControl_Create,
  CEFWinControl_ChildWindowHandle,
  CEFWinControl_DragKind,
  CEFWinControl_DragCursor,
  CEFWinControl_DragMode,
  CEFWinControl_Touch,
  CEFWinControl_TakeSnapshot,
  CEFWinControl_DestroyChildWindow,
  CEFWinControl_CreateHandle,
  CEFWinControl_InvalidateChildren,
  CEFWinControl_UpdateSize,
  CEFWinControl_SetOnDragDrop,
  CEFWinControl_SetOnDragOver,
  CEFWinControl_SetOnStartDrag,
  CEFWinControl_SetOnEndDrag;