
//constructor
function XButton_Create(AOwner: TComponent): TXButton; extdecl;
begin
  handleExceptionBegin
  Result := TXButton.Create(AOwner);
  handleExceptionEnd
end;

//property
function XButton_Caption(AIsSet: LongBool; AObj: TXButton; AValue: PChar): PChar; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Caption := AValue;
  end else
    Result := ToPChar(AObj.Caption);
  handleExceptionEnd
end;

//property
function XButton_ShowCaption(AIsSet: LongBool; AObj: TXButton; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ShowCaption := AValue;
  end else
    Result := AObj.ShowCaption;
  handleExceptionEnd
end;

//property
function XButton_BackColor(AIsSet: LongBool; AObj: TXButton; AValue: TColor): TColor; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.BackColor := AValue;
  end else
    Result := AObj.BackColor;
  handleExceptionEnd
end;

//property
function XButton_HoverColor(AIsSet: LongBool; AObj: TXButton; AValue: TColor): TColor; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.HoverColor := AValue;
  end else
    Result := AObj.HoverColor;
  handleExceptionEnd
end;

//property
function XButton_DownColor(AIsSet: LongBool; AObj: TXButton; AValue: TColor): TColor; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DownColor := AValue;
  end else
    Result := AObj.DownColor;
  handleExceptionEnd
end;

//property
function XButton_BorderWidth(AIsSet: LongBool; AObj: TXButton; AValue: integer): integer; extdecl;
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
function XButton_BorderColor(AIsSet: LongBool; AObj: TXButton; AValue: TColor): TColor; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.BorderColor := AValue;
  end else
    Result := AObj.BorderColor;
  handleExceptionEnd
end;

//property
function XButton_Picture(AIsSet: LongBool; AObj: TXButton; AValue: TPicture): TPicture; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Picture := AValue;
  end else
    Result := AObj.Picture;
  handleExceptionEnd
end;

//property
function XButton_DrawMode(AIsSet: LongBool; AObj: TXButton; AValue: TDrawImageMode): TDrawImageMode; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DrawMode := AValue;
  end else
    Result := AObj.DrawMode;
  handleExceptionEnd
end;

//property
function XButton_NormalFontColor(AIsSet: LongBool; AObj: TXButton; AValue: TColor): TColor; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.NormalFontColor := AValue;
  end else
    Result := AObj.NormalFontColor;
  handleExceptionEnd
end;

//property
function XButton_DownFontColor(AIsSet: LongBool; AObj: TXButton; AValue: TColor): TColor; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DownFontColor := AValue;
  end else
    Result := AObj.DownFontColor;
  handleExceptionEnd
end;

//property
function XButton_HoverFontColor(AIsSet: LongBool; AObj: TXButton; AValue: TColor): TColor; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.HoverFontColor := AValue;
  end else
    Result := AObj.HoverFontColor;
  handleExceptionEnd
end;

//property
function XButton_ParentFont(AIsSet: LongBool; AObj: TXButton; AValue: LongBool): LongBool; extdecl;
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
function XButton_ParentShowHint(AIsSet: LongBool; AObj: TXButton; AValue: LongBool): LongBool; extdecl;
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
function XButton_Class(): TClass; extdecl;
begin
  Result := TXButton;
end;

//procedure
procedure XButton_Paint(AObj: TXButton); extdecl;
begin
  handleExceptionBegin
  AObj.Paint();
  handleExceptionEnd
end;

//procedure
procedure XButton_Resize(AObj: TXButton); extdecl;
begin
  handleExceptionBegin
  AObj.Resize();
  handleExceptionEnd
end;

//property event
procedure XButton_SetOnDblClick(AObj: TXButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnDblClick}
  EventMethodCode
end;

//property event
procedure XButton_SetOnMouseDown(AObj: TXButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseDown}
  EventMethodCode
end;

//property event
procedure XButton_SetOnMouseEnter(AObj: TXButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseEnter}
  EventMethodCode
end;

//property event
procedure XButton_SetOnMouseLeave(AObj: TXButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseLeave}
  EventMethodCode
end;

//property event
procedure XButton_SetOnMouseMove(AObj: TXButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseMoveEvent}
  {$DEFINE EventName := OnMouseMove}
  EventMethodCode
end;

//property event
procedure XButton_SetOnMouseUp(AObj: TXButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseUp}
  EventMethodCode
end;


exports
  XButton_Create,
  XButton_Caption,
  XButton_ShowCaption,
  XButton_BackColor,
  XButton_HoverColor,
  XButton_DownColor,
  XButton_BorderWidth,
  XButton_BorderColor,
  XButton_Picture,
  XButton_DrawMode,
  XButton_NormalFontColor,
  XButton_DownFontColor,
  XButton_HoverFontColor,
  XButton_ParentFont,
  XButton_ParentShowHint,
  XButton_Class,
  XButton_Paint,
  XButton_Resize,
  XButton_SetOnDblClick,
  XButton_SetOnMouseDown,
  XButton_SetOnMouseEnter,
  XButton_SetOnMouseLeave,
  XButton_SetOnMouseMove,
  XButton_SetOnMouseUp;