// constructor
function TFloatSpinEdit_Create(TheOwner: TComponent): TFloatSpinEdit; extdecl;
begin
  {$define handleExceptionID := 13900}
  handleExceptionBegin
  Result := TFloatSpinEdit.Create(TheOwner);
  handleExceptionEnd
end;

// property
function TFloatSpinEdit_AutoSelected(ASet: LongBool; AObj: TFloatSpinEdit; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 13901}
  handleExceptionBegin
  if ASet then
  begin
    AObj.AutoSelected := AValue
  end else
    Result := AObj.AutoSelected;
  handleExceptionEnd
end;

// property
function TFloatSpinEdit_AutoSelect(ASet: LongBool; AObj: TFloatSpinEdit; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 13902}
  handleExceptionBegin
  if ASet then
  begin
    AObj.AutoSelect := AValue
  end else
    Result := AObj.AutoSelect;
  handleExceptionEnd
end;

// property
function TFloatSpinEdit_ParentColor(ASet: LongBool; AObj: TFloatSpinEdit; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 13903}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentColor := AValue
  end else
    Result := AObj.ParentColor;
  handleExceptionEnd
end;

// property
function TFloatSpinEdit_ParentFont(ASet: LongBool; AObj: TFloatSpinEdit; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 13904}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentFont := AValue
  end else
    Result := AObj.ParentFont;
  handleExceptionEnd
end;

// property
function TFloatSpinEdit_ParentShowHint(ASet: LongBool; AObj: TFloatSpinEdit; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 13905}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentShowHint := AValue
  end else
    Result := AObj.ParentShowHint;
  handleExceptionEnd
end;

// event
procedure TFloatSpinEdit_OnEditingDone(AObj: TFloatSpinEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnEditingDone}
  LCLEventMethodCode
end;

// event
procedure TFloatSpinEdit_OnMouseDown(AObj: TFloatSpinEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseDown}
  LCLEventMethodCode
end;

// event
procedure TFloatSpinEdit_OnMouseEnter(AObj: TFloatSpinEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseEnter}
  LCLEventMethodCode
end;

// event
procedure TFloatSpinEdit_OnMouseLeave(AObj: TFloatSpinEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseLeave}
  LCLEventMethodCode
end;

// event
procedure TFloatSpinEdit_OnMouseMove(AObj: TFloatSpinEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseMoveEvent}
  {$DEFINE EventName := OnMouseMove}
  LCLEventMethodCode
end;

// event
procedure TFloatSpinEdit_OnMouseUp(AObj: TFloatSpinEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseUp}
  LCLEventMethodCode
end;

// event
procedure TFloatSpinEdit_OnMouseWheel(AObj: TFloatSpinEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelEvent}
  {$DEFINE EventName := OnMouseWheel}
  LCLEventMethodCode
end;

// event
procedure TFloatSpinEdit_OnMouseWheelDown(AObj: TFloatSpinEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelDown}
  LCLEventMethodCode
end;

// event
procedure TFloatSpinEdit_OnMouseWheelUp(AObj: TFloatSpinEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelUp}
  LCLEventMethodCode
end;

// event
procedure TFloatSpinEdit_OnMouseWheelHorz(AObj: TFloatSpinEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelEvent}
  {$DEFINE EventName := OnMouseWheelHorz}
  LCLEventMethodCode
end;

// event
procedure TFloatSpinEdit_OnMouseWheelLeft(AObj: TFloatSpinEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelLeft}
  LCLEventMethodCode
end;

// event
procedure TFloatSpinEdit_OnMouseWheelRight(AObj: TFloatSpinEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelRight}
  LCLEventMethodCode
end;

function TFloatSpinEdit_TClass(): TClass; extdecl;
begin
  Result := TFloatSpinEdit;
end;

exports
  TFloatSpinEdit_Create,
  TFloatSpinEdit_AutoSelected,
  TFloatSpinEdit_AutoSelect,
  TFloatSpinEdit_ParentColor,
  TFloatSpinEdit_ParentFont,
  TFloatSpinEdit_ParentShowHint,
  TFloatSpinEdit_OnEditingDone,
  TFloatSpinEdit_OnMouseDown,
  TFloatSpinEdit_OnMouseEnter,
  TFloatSpinEdit_OnMouseLeave,
  TFloatSpinEdit_OnMouseMove,
  TFloatSpinEdit_OnMouseUp,
  TFloatSpinEdit_OnMouseWheel,
  TFloatSpinEdit_OnMouseWheelDown,
  TFloatSpinEdit_OnMouseWheelUp,
  TFloatSpinEdit_OnMouseWheelHorz,
  TFloatSpinEdit_OnMouseWheelLeft,
  TFloatSpinEdit_OnMouseWheelRight,
  TFloatSpinEdit_TClass;