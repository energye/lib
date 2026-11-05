// constructor
function TSpinEdit_Create(TheOwner: TComponent): TSpinEdit; extdecl;
begin
  {$define handleExceptionID := 14600}
  handleExceptionBegin
  Result := TSpinEdit.Create(TheOwner);
  handleExceptionEnd
end;

// property
function TSpinEdit_AutoSelected(ASet: LongBool; AObj: TSpinEdit; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 14601}
  handleExceptionBegin
  if ASet then
  begin
    AObj.AutoSelected := AValue
  end else
    Result := AObj.AutoSelected;
  handleExceptionEnd
end;

// property
function TSpinEdit_AutoSelect(ASet: LongBool; AObj: TSpinEdit; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 14602}
  handleExceptionBegin
  if ASet then
  begin
    AObj.AutoSelect := AValue
  end else
    Result := AObj.AutoSelect;
  handleExceptionEnd
end;

// property
function TSpinEdit_ParentColor(ASet: LongBool; AObj: TSpinEdit; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 14603}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentColor := AValue
  end else
    Result := AObj.ParentColor;
  handleExceptionEnd
end;

// property
function TSpinEdit_ParentFont(ASet: LongBool; AObj: TSpinEdit; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 14604}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentFont := AValue
  end else
    Result := AObj.ParentFont;
  handleExceptionEnd
end;

// property
function TSpinEdit_ParentShowHint(ASet: LongBool; AObj: TSpinEdit; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 14605}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentShowHint := AValue
  end else
    Result := AObj.ParentShowHint;
  handleExceptionEnd
end;

// event
procedure TSpinEdit_OnEditingDone(AObj: TSpinEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnEditingDone}
  LCLEventMethodCode
end;

// event
procedure TSpinEdit_OnMouseDown(AObj: TSpinEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseDown}
  LCLEventMethodCode
end;

// event
procedure TSpinEdit_OnMouseEnter(AObj: TSpinEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseEnter}
  LCLEventMethodCode
end;

// event
procedure TSpinEdit_OnMouseLeave(AObj: TSpinEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseLeave}
  LCLEventMethodCode
end;

// event
procedure TSpinEdit_OnMouseMove(AObj: TSpinEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseMoveEvent}
  {$DEFINE EventName := OnMouseMove}
  LCLEventMethodCode
end;

// event
procedure TSpinEdit_OnMouseUp(AObj: TSpinEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseUp}
  LCLEventMethodCode
end;

// event
procedure TSpinEdit_OnMouseWheel(AObj: TSpinEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelEvent}
  {$DEFINE EventName := OnMouseWheel}
  LCLEventMethodCode
end;

// event
procedure TSpinEdit_OnMouseWheelDown(AObj: TSpinEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelDown}
  LCLEventMethodCode
end;

// event
procedure TSpinEdit_OnMouseWheelUp(AObj: TSpinEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelUp}
  LCLEventMethodCode
end;

// event
procedure TSpinEdit_OnMouseWheelHorz(AObj: TSpinEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelEvent}
  {$DEFINE EventName := OnMouseWheelHorz}
  LCLEventMethodCode
end;

// event
procedure TSpinEdit_OnMouseWheelLeft(AObj: TSpinEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelLeft}
  LCLEventMethodCode
end;

// event
procedure TSpinEdit_OnMouseWheelRight(AObj: TSpinEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelRight}
  LCLEventMethodCode
end;

function TSpinEdit_TClass(): TClass; extdecl;
begin
  Result := TSpinEdit;
end;

exports
  TSpinEdit_Create,
  TSpinEdit_AutoSelected,
  TSpinEdit_AutoSelect,
  TSpinEdit_ParentColor,
  TSpinEdit_ParentFont,
  TSpinEdit_ParentShowHint,
  TSpinEdit_OnEditingDone,
  TSpinEdit_OnMouseDown,
  TSpinEdit_OnMouseEnter,
  TSpinEdit_OnMouseLeave,
  TSpinEdit_OnMouseMove,
  TSpinEdit_OnMouseUp,
  TSpinEdit_OnMouseWheel,
  TSpinEdit_OnMouseWheelDown,
  TSpinEdit_OnMouseWheelUp,
  TSpinEdit_OnMouseWheelHorz,
  TSpinEdit_OnMouseWheelLeft,
  TSpinEdit_OnMouseWheelRight,
  TSpinEdit_TClass;