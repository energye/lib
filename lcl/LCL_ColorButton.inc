
//constructor
function ColorButton_Create(AnOwner: TComponent): TColorButton; extdecl;
begin
  handleExceptionBegin
  Result := TColorButton.Create(AnOwner);
  handleExceptionEnd
end;

//property
function ColorButton_BorderWidth(AIsSet: LongBool; AObj: TColorButton; AValue: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.BorderWidth := AValue;
  end else
    Result := AObj.BorderWidth;
  handleExceptionEnd
end;

//property
function ColorButton_ButtonColorAutoSize(AIsSet: LongBool; AObj: TColorButton; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ButtonColorAutoSize := AValue;
  end else
    Result := AObj.ButtonColorAutoSize;
  handleExceptionEnd
end;

//property
function ColorButton_ButtonColorSize(AIsSet: LongBool; AObj: TColorButton; AValue: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ButtonColorSize := AValue;
  end else
    Result := AObj.ButtonColorSize;
  handleExceptionEnd
end;

//property
function ColorButton_ButtonColor(AIsSet: LongBool; AObj: TColorButton; AValue: TColor): TColor; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ButtonColor := AValue;
  end else
    Result := AObj.ButtonColor;
  handleExceptionEnd
end;

//property
function ColorButton_ColorDialog(AIsSet: LongBool; AObj: TColorButton; AValue: TColorDialog): TColorDialog; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ColorDialog := AValue;
  end else
    Result := AObj.ColorDialog;
  handleExceptionEnd
end;

//property
function ColorButton_ParentFont(AIsSet: LongBool; AObj: TColorButton; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ParentFont := AValue;
  end else
    Result := AObj.ParentFont;
  handleExceptionEnd
end;

//property
function ColorButton_ParentShowHint(AIsSet: LongBool; AObj: TColorButton; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ParentShowHint := AValue;
  end else
    Result := AObj.ParentShowHint;
  handleExceptionEnd
end;

//function
function ColorButton_Class(): TClass; extdecl;
begin
  Result := TColorButton;
end;

//property event
procedure ColorButton_SetOnColorChanged(AObj: TColorButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnColorChanged}
  EventMethodCode
end;

//property event
procedure ColorButton_SetOnDblClick(AObj: TColorButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnDblClick}
  EventMethodCode
end;

//property event
procedure ColorButton_SetOnMouseDown(AObj: TColorButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseDown}
  EventMethodCode
end;

//property event
procedure ColorButton_SetOnMouseEnter(AObj: TColorButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseEnter}
  EventMethodCode
end;

//property event
procedure ColorButton_SetOnMouseLeave(AObj: TColorButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseLeave}
  EventMethodCode
end;

//property event
procedure ColorButton_SetOnMouseMove(AObj: TColorButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseMoveEvent}
  {$DEFINE EventName := OnMouseMove}
  EventMethodCode
end;

//property event
procedure ColorButton_SetOnMouseUp(AObj: TColorButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseUp}
  EventMethodCode
end;

//property event
procedure ColorButton_SetOnMouseWheel(AObj: TColorButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelEvent}
  {$DEFINE EventName := OnMouseWheel}
  EventMethodCode
end;

//property event
procedure ColorButton_SetOnMouseWheelDown(AObj: TColorButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelDown}
  EventMethodCode
end;

//property event
procedure ColorButton_SetOnMouseWheelUp(AObj: TColorButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelUp}
  EventMethodCode
end;

//property event
procedure ColorButton_SetOnPaint(AObj: TColorButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnPaint}
  EventMethodCode
end;


exports
  ColorButton_Create,
  ColorButton_BorderWidth,
  ColorButton_ButtonColorAutoSize,
  ColorButton_ButtonColorSize,
  ColorButton_ButtonColor,
  ColorButton_ColorDialog,
  ColorButton_ParentFont,
  ColorButton_ParentShowHint,
  ColorButton_Class,
  ColorButton_SetOnColorChanged,
  ColorButton_SetOnDblClick,
  ColorButton_SetOnMouseDown,
  ColorButton_SetOnMouseEnter,
  ColorButton_SetOnMouseLeave,
  ColorButton_SetOnMouseMove,
  ColorButton_SetOnMouseUp,
  ColorButton_SetOnMouseWheel,
  ColorButton_SetOnMouseWheelDown,
  ColorButton_SetOnMouseWheelUp,
  ColorButton_SetOnPaint;