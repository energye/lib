// constructor
function TTimeEdit_Create(AOwner: TComponent): TTimeEdit; extdecl;
begin
  {$define handleExceptionID := 9100}
  handleExceptionBegin
  Result := TTimeEdit.Create(AOwner);
  handleExceptionEnd
end;

// function
function TTimeEdit_ValidTimeFormat(AObj: TTimeEdit; AFormat: PChar): LongBool; extdecl;
begin
  {$define handleExceptionID := 9101}
  handleExceptionBegin
  Result := AObj.ValidTimeFormat(AFormat);
  handleExceptionEnd
end;

// property
procedure TTimeEdit_Time(ASet: LongBool; AObj: TTimeEdit; var AValue: Double; var Result: Double); extdecl;
begin
  {$define handleExceptionID := 9102}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Time := AValue
  end else
    Result := AObj.Time;
  handleExceptionEnd
end;

// property
function TTimeEdit_Button(AObj: TTimeEdit): TSpeedButton; extdecl;
begin
  {$define handleExceptionID := 9103}
  handleExceptionBegin
  Result := AObj.Button;
  handleExceptionEnd
end;

// property
function TTimeEdit_DroppedDown(AObj: TTimeEdit): LongBool; extdecl;
begin
  {$define handleExceptionID := 9104}
  handleExceptionBegin
  Result := AObj.DroppedDown;
  handleExceptionEnd
end;

// property
function TTimeEdit_DefaultNow(ASet: LongBool; AObj: TTimeEdit; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 9105}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DefaultNow := AValue
  end else
    Result := AObj.DefaultNow;
  handleExceptionEnd
end;

// property
procedure TTimeEdit_ButtonCaption(ASet: LongBool; AObj: TTimeEdit; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 9106}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ButtonCaption := AValue
  end else
    StringBufferCreate(AObj.ButtonCaption, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TTimeEdit_ButtonCursor(ASet: LongBool; AObj: TTimeEdit; AValue: TCursor): TCursor; extdecl;
begin
  {$define handleExceptionID := 9107}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ButtonCursor := AValue
  end else
    Result := AObj.ButtonCursor;
  handleExceptionEnd
end;

// property
procedure TTimeEdit_ButtonHint(ASet: LongBool; AObj: TTimeEdit; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 9108}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ButtonHint := AValue
  end else
    StringBufferCreate(AObj.ButtonHint, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TTimeEdit_ButtonOnlyWhenFocused(ASet: LongBool; AObj: TTimeEdit; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 9109}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ButtonOnlyWhenFocused := AValue
  end else
    Result := AObj.ButtonOnlyWhenFocused;
  handleExceptionEnd
end;

// property
function TTimeEdit_ButtonWidth(ASet: LongBool; AObj: TTimeEdit; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 9110}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ButtonWidth := AValue
  end else
    Result := AObj.ButtonWidth;
  handleExceptionEnd
end;

// property
function TTimeEdit_AutoSelect(ASet: LongBool; AObj: TTimeEdit; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 9111}
  handleExceptionBegin
  if ASet then
  begin
    AObj.AutoSelect := AValue
  end else
    Result := AObj.AutoSelect;
  handleExceptionEnd
end;

// property
function TTimeEdit_DirectInput(ASet: LongBool; AObj: TTimeEdit; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 9112}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DirectInput := AValue
  end else
    Result := AObj.DirectInput;
  handleExceptionEnd
end;

// property
function TTimeEdit_Glyph(ASet: LongBool; AObj: TTimeEdit; AValue: TBitmap): TBitmap; extdecl;
begin
  {$define handleExceptionID := 9113}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Glyph := AValue
  end else
    Result := AObj.Glyph;
  handleExceptionEnd
end;

// property
function TTimeEdit_NumGlyphs(ASet: LongBool; AObj: TTimeEdit; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 9114}
  handleExceptionBegin
  if ASet then
  begin
    AObj.NumGlyphs := AValue
  end else
    Result := AObj.NumGlyphs;
  handleExceptionEnd
end;

// property
function TTimeEdit_Images(ASet: LongBool; AObj: TTimeEdit; AValue: TCustomImageList): TCustomImageList; extdecl;
begin
  {$define handleExceptionID := 9115}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Images := AValue
  end else
    Result := AObj.Images;
  handleExceptionEnd
end;

// property
function TTimeEdit_ImageIndex(ASet: LongBool; AObj: TTimeEdit; AValue: TImageIndex): TImageIndex; extdecl;
begin
  {$define handleExceptionID := 9116}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ImageIndex := AValue
  end else
    Result := AObj.ImageIndex;
  handleExceptionEnd
end;

// property
function TTimeEdit_ImageWidth(ASet: LongBool; AObj: TTimeEdit; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 9117}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ImageWidth := AValue
  end else
    Result := AObj.ImageWidth;
  handleExceptionEnd
end;

// property
function TTimeEdit_DragMode(ASet: LongBool; AObj: TTimeEdit; AValue: TDragMode): TDragMode; extdecl;
begin
  {$define handleExceptionID := 9118}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragMode := AValue
  end else
    Result := AObj.DragMode;
  handleExceptionEnd
end;

// property
function TTimeEdit_Flat(ASet: LongBool; AObj: TTimeEdit; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 9119}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Flat := AValue
  end else
    Result := AObj.Flat;
  handleExceptionEnd
end;

// property
function TTimeEdit_FocusOnButtonClick(ASet: LongBool; AObj: TTimeEdit; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 9120}
  handleExceptionBegin
  if ASet then
  begin
    AObj.FocusOnButtonClick := AValue
  end else
    Result := AObj.FocusOnButtonClick;
  handleExceptionEnd
end;

// property
function TTimeEdit_ParentFont(ASet: LongBool; AObj: TTimeEdit; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 9121}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentFont := AValue
  end else
    Result := AObj.ParentFont;
  handleExceptionEnd
end;

// property
function TTimeEdit_ParentShowHint(ASet: LongBool; AObj: TTimeEdit; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 9122}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentShowHint := AValue
  end else
    Result := AObj.ParentShowHint;
  handleExceptionEnd
end;

// property
function TTimeEdit_SimpleLayout(ASet: LongBool; AObj: TTimeEdit; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 9123}
  handleExceptionBegin
  if ASet then
  begin
    AObj.SimpleLayout := AValue
  end else
    Result := AObj.SimpleLayout;
  handleExceptionEnd
end;

// property
function TTimeEdit_Spacing(ASet: LongBool; AObj: TTimeEdit; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 9124}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Spacing := AValue
  end else
    Result := AObj.Spacing;
  handleExceptionEnd
end;

// property
procedure TTimeEdit_TimeAMString(ASet: LongBool; AObj: TTimeEdit; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 9125}
  handleExceptionBegin
  if ASet then
  begin
    AObj.TimeAMString := AValue
  end else
    StringBufferCreate(AObj.TimeAMString, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TTimeEdit_TimeFormat(ASet: LongBool; AObj: TTimeEdit; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 9126}
  handleExceptionBegin
  if ASet then
  begin
    AObj.TimeFormat := AValue
  end else
    StringBufferCreate(AObj.TimeFormat, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TTimeEdit_TimeSeparator(ASet: LongBool; AObj: TTimeEdit; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 9127}
  handleExceptionBegin
  if ASet then
  begin
    AObj.TimeSeparator := AValue
  end else
    StringBufferCreate(AObj.TimeSeparator, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TTimeEdit_TimePMString(ASet: LongBool; AObj: TTimeEdit; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 9128}
  handleExceptionBegin
  if ASet then
  begin
    AObj.TimePMString := AValue
  end else
    StringBufferCreate(AObj.TimePMString, AStrData, AStrSize);
  handleExceptionEnd
end;

// event
procedure TTimeEdit_OnAcceptTime(AObj: TTimeEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTAcceptTimeEvent}
  {$DEFINE EventName := OnAcceptTime}
  LCLEventMethodCode
end;

// event
procedure TTimeEdit_OnCustomTime(AObj: TTimeEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTCustomTimeEvent}
  {$DEFINE EventName := OnCustomTime}
  LCLEventMethodCode
end;

// event
procedure TTimeEdit_OnButtonClick(AObj: TTimeEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnButtonClick}
  LCLEventMethodCode
end;

function TTimeEdit_TClass(): TClass; extdecl;
begin
  Result := TTimeEdit;
end;

exports
  TTimeEdit_Create,
  TTimeEdit_ValidTimeFormat,
  TTimeEdit_Time,
  TTimeEdit_Button,
  TTimeEdit_DroppedDown,
  TTimeEdit_DefaultNow,
  TTimeEdit_ButtonCaption,
  TTimeEdit_ButtonCursor,
  TTimeEdit_ButtonHint,
  TTimeEdit_ButtonOnlyWhenFocused,
  TTimeEdit_ButtonWidth,
  TTimeEdit_AutoSelect,
  TTimeEdit_DirectInput,
  TTimeEdit_Glyph,
  TTimeEdit_NumGlyphs,
  TTimeEdit_Images,
  TTimeEdit_ImageIndex,
  TTimeEdit_ImageWidth,
  TTimeEdit_DragMode,
  TTimeEdit_Flat,
  TTimeEdit_FocusOnButtonClick,
  TTimeEdit_ParentFont,
  TTimeEdit_ParentShowHint,
  TTimeEdit_SimpleLayout,
  TTimeEdit_Spacing,
  TTimeEdit_TimeAMString,
  TTimeEdit_TimeFormat,
  TTimeEdit_TimeSeparator,
  TTimeEdit_TimePMString,
  TTimeEdit_OnAcceptTime,
  TTimeEdit_OnCustomTime,
  TTimeEdit_OnButtonClick,
  TTimeEdit_TClass;