// constructor
function TMaskEdit_Create(TheOwner: TComponent): TMaskEdit; extdecl;
begin
  {$define handleExceptionID := 17000}
  handleExceptionBegin
  Result := TMaskEdit.Create(TheOwner);
  handleExceptionEnd
end;

// property
function TMaskEdit_IsMasked(AObj: TMaskEdit): LongBool; extdecl;
begin
  {$define handleExceptionID := 17001}
  handleExceptionBegin
  Result := AObj.IsMasked;
  handleExceptionEnd
end;

// property
procedure TMaskEdit_EditText(ASet: LongBool; AObj: TMaskEdit; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 17002}
  handleExceptionBegin
  if ASet then
  begin
    AObj.EditText := AValue
  end else
    StringBufferCreate(AObj.EditText, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TMaskEdit_AutoSelect(ASet: LongBool; AObj: TMaskEdit; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 17003}
  handleExceptionBegin
  if ASet then
  begin
    AObj.AutoSelect := AValue
  end else
    Result := AObj.AutoSelect;
  handleExceptionEnd
end;

// property
function TMaskEdit_DragCursor(ASet: LongBool; AObj: TMaskEdit; AValue: TCursor): TCursor; extdecl;
begin
  {$define handleExceptionID := 17004}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragCursor := AValue
  end else
    Result := AObj.DragCursor;
  handleExceptionEnd
end;

// property
function TMaskEdit_DragKind(ASet: LongBool; AObj: TMaskEdit; AValue: TDragKind): TDragKind; extdecl;
begin
  {$define handleExceptionID := 17005}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragKind := AValue
  end else
    Result := AObj.DragKind;
  handleExceptionEnd
end;

// property
function TMaskEdit_DragMode(ASet: LongBool; AObj: TMaskEdit; AValue: TDragMode): TDragMode; extdecl;
begin
  {$define handleExceptionID := 17006}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragMode := AValue
  end else
    Result := AObj.DragMode;
  handleExceptionEnd
end;

// property
function TMaskEdit_ParentColor(ASet: LongBool; AObj: TMaskEdit; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 17007}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentColor := AValue
  end else
    Result := AObj.ParentColor;
  handleExceptionEnd
end;

// property
function TMaskEdit_ParentFont(ASet: LongBool; AObj: TMaskEdit; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 17008}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentFont := AValue
  end else
    Result := AObj.ParentFont;
  handleExceptionEnd
end;

// property
function TMaskEdit_ParentShowHint(ASet: LongBool; AObj: TMaskEdit; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 17009}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentShowHint := AValue
  end else
    Result := AObj.ParentShowHint;
  handleExceptionEnd
end;

// property
procedure TMaskEdit_EditMask(ASet: LongBool; AObj: TMaskEdit; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 17010}
  handleExceptionBegin
  if ASet then
  begin
    AObj.EditMask := AValue
  end else
    StringBufferCreate(AObj.EditMask, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TMaskEdit_SpaceChar(ASet: LongBool; AObj: TMaskEdit; AValue: Char): Char; extdecl;
begin
  {$define handleExceptionID := 17011}
  handleExceptionBegin
  if ASet then
  begin
    AObj.SpaceChar := AValue
  end else
    Result := AObj.SpaceChar;
  handleExceptionEnd
end;

// event
procedure TMaskEdit_OnDblClick(AObj: TMaskEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnDblClick}
  LCLEventMethodCode
end;

// event
procedure TMaskEdit_OnDragDrop(AObj: TMaskEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragDropEvent}
  {$DEFINE EventName := OnDragDrop}
  LCLEventMethodCode
end;

// event
procedure TMaskEdit_OnDragOver(AObj: TMaskEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragOverEvent}
  {$DEFINE EventName := OnDragOver}
  LCLEventMethodCode
end;

// event
procedure TMaskEdit_OnEditingDone(AObj: TMaskEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnEditingDone}
  LCLEventMethodCode
end;

// event
procedure TMaskEdit_OnEndDock(AObj: TMaskEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTEndDragEvent}
  {$DEFINE EventName := OnEndDock}
  LCLEventMethodCode
end;

// event
procedure TMaskEdit_OnEndDrag(AObj: TMaskEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTEndDragEvent}
  {$DEFINE EventName := OnEndDrag}
  LCLEventMethodCode
end;

// event
procedure TMaskEdit_OnMouseDown(AObj: TMaskEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseDown}
  LCLEventMethodCode
end;

// event
procedure TMaskEdit_OnMouseEnter(AObj: TMaskEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseEnter}
  LCLEventMethodCode
end;

// event
procedure TMaskEdit_OnMouseLeave(AObj: TMaskEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseLeave}
  LCLEventMethodCode
end;

// event
procedure TMaskEdit_OnMouseMove(AObj: TMaskEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseMoveEvent}
  {$DEFINE EventName := OnMouseMove}
  LCLEventMethodCode
end;

// event
procedure TMaskEdit_OnMouseUp(AObj: TMaskEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseUp}
  LCLEventMethodCode
end;

// event
procedure TMaskEdit_OnMouseWheel(AObj: TMaskEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelEvent}
  {$DEFINE EventName := OnMouseWheel}
  LCLEventMethodCode
end;

// event
procedure TMaskEdit_OnMouseWheelDown(AObj: TMaskEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelDown}
  LCLEventMethodCode
end;

// event
procedure TMaskEdit_OnMouseWheelUp(AObj: TMaskEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelUp}
  LCLEventMethodCode
end;

// event
procedure TMaskEdit_OnStartDock(AObj: TMaskEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTStartDockEvent}
  {$DEFINE EventName := OnStartDock}
  LCLEventMethodCode
end;

// event
procedure TMaskEdit_OnStartDrag(AObj: TMaskEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTStartDragEvent}
  {$DEFINE EventName := OnStartDrag}
  LCLEventMethodCode
end;

function TMaskEdit_TClass(): TClass; extdecl;
begin
  Result := TMaskEdit;
end;

exports
  TMaskEdit_Create,
  TMaskEdit_IsMasked,
  TMaskEdit_EditText,
  TMaskEdit_AutoSelect,
  TMaskEdit_DragCursor,
  TMaskEdit_DragKind,
  TMaskEdit_DragMode,
  TMaskEdit_ParentColor,
  TMaskEdit_ParentFont,
  TMaskEdit_ParentShowHint,
  TMaskEdit_EditMask,
  TMaskEdit_SpaceChar,
  TMaskEdit_OnDblClick,
  TMaskEdit_OnDragDrop,
  TMaskEdit_OnDragOver,
  TMaskEdit_OnEditingDone,
  TMaskEdit_OnEndDock,
  TMaskEdit_OnEndDrag,
  TMaskEdit_OnMouseDown,
  TMaskEdit_OnMouseEnter,
  TMaskEdit_OnMouseLeave,
  TMaskEdit_OnMouseMove,
  TMaskEdit_OnMouseUp,
  TMaskEdit_OnMouseWheel,
  TMaskEdit_OnMouseWheelDown,
  TMaskEdit_OnMouseWheelUp,
  TMaskEdit_OnStartDock,
  TMaskEdit_OnStartDrag,
  TMaskEdit_TClass;