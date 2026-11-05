// constructor
function TColorButton_Create(AnOwner: TComponent): TColorButton; extdecl;
begin
  {$define handleExceptionID := 14400}
  handleExceptionBegin
  Result := TColorButton.Create(AnOwner);
  handleExceptionEnd
end;

// property
function TColorButton_BorderWidth(ASet: LongBool; AObj: TColorButton; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 14401}
  handleExceptionBegin
  if ASet then
  begin
    AObj.BorderWidth := AValue
  end else
    Result := AObj.BorderWidth;
  handleExceptionEnd
end;

// property
function TColorButton_ButtonColorAutoSize(ASet: LongBool; AObj: TColorButton; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 14402}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ButtonColorAutoSize := AValue
  end else
    Result := AObj.ButtonColorAutoSize;
  handleExceptionEnd
end;

// property
function TColorButton_ButtonColorSize(ASet: LongBool; AObj: TColorButton; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 14403}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ButtonColorSize := AValue
  end else
    Result := AObj.ButtonColorSize;
  handleExceptionEnd
end;

// property
function TColorButton_ButtonColor(ASet: LongBool; AObj: TColorButton; AValue: TColor): TColor; extdecl;
begin
  {$define handleExceptionID := 14404}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ButtonColor := AValue
  end else
    Result := AObj.ButtonColor;
  handleExceptionEnd
end;

// property
function TColorButton_ColorDialog(ASet: LongBool; AObj: TColorButton; AValue: TColorDialog): TColorDialog; extdecl;
begin
  {$define handleExceptionID := 14405}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ColorDialog := AValue
  end else
    Result := AObj.ColorDialog;
  handleExceptionEnd
end;

// property
function TColorButton_ParentFont(ASet: LongBool; AObj: TColorButton; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 14406}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentFont := AValue
  end else
    Result := AObj.ParentFont;
  handleExceptionEnd
end;

// property
function TColorButton_ParentShowHint(ASet: LongBool; AObj: TColorButton; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 14407}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentShowHint := AValue
  end else
    Result := AObj.ParentShowHint;
  handleExceptionEnd
end;

// event
procedure TColorButton_OnColorChanged(AObj: TColorButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnColorChanged}
  LCLEventMethodCode
end;

// event
procedure TColorButton_OnDblClick(AObj: TColorButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnDblClick}
  LCLEventMethodCode
end;

// event
procedure TColorButton_OnMouseDown(AObj: TColorButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseDown}
  LCLEventMethodCode
end;

// event
procedure TColorButton_OnMouseEnter(AObj: TColorButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseEnter}
  LCLEventMethodCode
end;

// event
procedure TColorButton_OnMouseLeave(AObj: TColorButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseLeave}
  LCLEventMethodCode
end;

// event
procedure TColorButton_OnMouseMove(AObj: TColorButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseMoveEvent}
  {$DEFINE EventName := OnMouseMove}
  LCLEventMethodCode
end;

// event
procedure TColorButton_OnMouseUp(AObj: TColorButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseUp}
  LCLEventMethodCode
end;

// event
procedure TColorButton_OnMouseWheel(AObj: TColorButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelEvent}
  {$DEFINE EventName := OnMouseWheel}
  LCLEventMethodCode
end;

// event
procedure TColorButton_OnMouseWheelDown(AObj: TColorButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelDown}
  LCLEventMethodCode
end;

// event
procedure TColorButton_OnMouseWheelUp(AObj: TColorButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelUp}
  LCLEventMethodCode
end;

// event
procedure TColorButton_OnPaint(AObj: TColorButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnPaint}
  LCLEventMethodCode
end;

function TColorButton_TClass(): TClass; extdecl;
begin
  Result := TColorButton;
end;

exports
  TColorButton_Create,
  TColorButton_BorderWidth,
  TColorButton_ButtonColorAutoSize,
  TColorButton_ButtonColorSize,
  TColorButton_ButtonColor,
  TColorButton_ColorDialog,
  TColorButton_ParentFont,
  TColorButton_ParentShowHint,
  TColorButton_OnColorChanged,
  TColorButton_OnDblClick,
  TColorButton_OnMouseDown,
  TColorButton_OnMouseEnter,
  TColorButton_OnMouseLeave,
  TColorButton_OnMouseMove,
  TColorButton_OnMouseUp,
  TColorButton_OnMouseWheel,
  TColorButton_OnMouseWheelDown,
  TColorButton_OnMouseWheelUp,
  TColorButton_OnPaint,
  TColorButton_TClass;