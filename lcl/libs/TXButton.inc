// constructor
function TXButton_Create(AOwner: TComponent): TXButton; extdecl;
begin
  {$define handleExceptionID := 22100}
  handleExceptionBegin
  Result := TXButton.Create(AOwner);
  handleExceptionEnd
end;

// procedure
procedure TXButton_Paint(AObj: TXButton); extdecl;
begin
  {$define handleExceptionID := 22101}
  handleExceptionBegin
  AObj.Paint();
  handleExceptionEnd
end;

// procedure
procedure TXButton_Resize(AObj: TXButton); extdecl;
begin
  {$define handleExceptionID := 22102}
  handleExceptionBegin
  AObj.Resize();
  handleExceptionEnd
end;

// property
procedure TXButton_CaptionToStr(ASet: LongBool; AObj: TXButton; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 22103}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Caption := AValue
  end else
    StringBufferCreate(AObj.Caption, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TXButton_ShowCaption(ASet: LongBool; AObj: TXButton; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 22104}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ShowCaption := AValue
  end else
    Result := AObj.ShowCaption;
  handleExceptionEnd
end;

// property
function TXButton_BackColor(ASet: LongBool; AObj: TXButton; AValue: TColor): TColor; extdecl;
begin
  {$define handleExceptionID := 22105}
  handleExceptionBegin
  if ASet then
  begin
    AObj.BackColor := AValue
  end else
    Result := AObj.BackColor;
  handleExceptionEnd
end;

// property
function TXButton_HoverColor(ASet: LongBool; AObj: TXButton; AValue: TColor): TColor; extdecl;
begin
  {$define handleExceptionID := 22106}
  handleExceptionBegin
  if ASet then
  begin
    AObj.HoverColor := AValue
  end else
    Result := AObj.HoverColor;
  handleExceptionEnd
end;

// property
function TXButton_DownColor(ASet: LongBool; AObj: TXButton; AValue: TColor): TColor; extdecl;
begin
  {$define handleExceptionID := 22107}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DownColor := AValue
  end else
    Result := AObj.DownColor;
  handleExceptionEnd
end;

// property
function TXButton_BorderWidth(ASet: LongBool; AObj: TXButton; AValue: integer): integer; extdecl;
begin
  {$define handleExceptionID := 22108}
  handleExceptionBegin
  if ASet then
  begin
    AObj.BorderWidth := AValue
  end else
    Result := AObj.BorderWidth;
  handleExceptionEnd
end;

// property
function TXButton_BorderColor(ASet: LongBool; AObj: TXButton; AValue: TColor): TColor; extdecl;
begin
  {$define handleExceptionID := 22109}
  handleExceptionBegin
  if ASet then
  begin
    AObj.BorderColor := AValue
  end else
    Result := AObj.BorderColor;
  handleExceptionEnd
end;

// property
function TXButton_Picture(ASet: LongBool; AObj: TXButton; AValue: TPicture): TPicture; extdecl;
begin
  {$define handleExceptionID := 22110}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Picture := AValue
  end else
    Result := AObj.Picture;
  handleExceptionEnd
end;

// property
function TXButton_DrawMode(ASet: LongBool; AObj: TXButton; AValue: TDrawImageMode): TDrawImageMode; extdecl;
begin
  {$define handleExceptionID := 22111}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DrawMode := AValue
  end else
    Result := AObj.DrawMode;
  handleExceptionEnd
end;

// property
function TXButton_NormalFontColor(ASet: LongBool; AObj: TXButton; AValue: TColor): TColor; extdecl;
begin
  {$define handleExceptionID := 22112}
  handleExceptionBegin
  if ASet then
  begin
    AObj.NormalFontColor := AValue
  end else
    Result := AObj.NormalFontColor;
  handleExceptionEnd
end;

// property
function TXButton_DownFontColor(ASet: LongBool; AObj: TXButton; AValue: TColor): TColor; extdecl;
begin
  {$define handleExceptionID := 22113}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DownFontColor := AValue
  end else
    Result := AObj.DownFontColor;
  handleExceptionEnd
end;

// property
function TXButton_HoverFontColor(ASet: LongBool; AObj: TXButton; AValue: TColor): TColor; extdecl;
begin
  {$define handleExceptionID := 22114}
  handleExceptionBegin
  if ASet then
  begin
    AObj.HoverFontColor := AValue
  end else
    Result := AObj.HoverFontColor;
  handleExceptionEnd
end;

// property
function TXButton_ParentFont(ASet: LongBool; AObj: TXButton; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 22115}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentFont := AValue
  end else
    Result := AObj.ParentFont;
  handleExceptionEnd
end;

// property
function TXButton_ParentShowHint(ASet: LongBool; AObj: TXButton; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 22116}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentShowHint := AValue
  end else
    Result := AObj.ParentShowHint;
  handleExceptionEnd
end;

// event
procedure TXButton_OnDblClick(AObj: TXButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnDblClick}
  LCLEventMethodCode
end;

// event
procedure TXButton_OnMouseDown(AObj: TXButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseDown}
  LCLEventMethodCode
end;

// event
procedure TXButton_OnMouseEnter(AObj: TXButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseEnter}
  LCLEventMethodCode
end;

// event
procedure TXButton_OnMouseLeave(AObj: TXButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseLeave}
  LCLEventMethodCode
end;

// event
procedure TXButton_OnMouseMove(AObj: TXButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseMoveEvent}
  {$DEFINE EventName := OnMouseMove}
  LCLEventMethodCode
end;

// event
procedure TXButton_OnMouseUp(AObj: TXButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseUp}
  LCLEventMethodCode
end;

function TXButton_TClass(): TClass; extdecl;
begin
  Result := TXButton;
end;

exports
  TXButton_Create,
  TXButton_Paint,
  TXButton_Resize,
  TXButton_CaptionToStr,
  TXButton_ShowCaption,
  TXButton_BackColor,
  TXButton_HoverColor,
  TXButton_DownColor,
  TXButton_BorderWidth,
  TXButton_BorderColor,
  TXButton_Picture,
  TXButton_DrawMode,
  TXButton_NormalFontColor,
  TXButton_DownFontColor,
  TXButton_HoverFontColor,
  TXButton_ParentFont,
  TXButton_ParentShowHint,
  TXButton_OnDblClick,
  TXButton_OnMouseDown,
  TXButton_OnMouseEnter,
  TXButton_OnMouseLeave,
  TXButton_OnMouseMove,
  TXButton_OnMouseUp,
  TXButton_TClass;