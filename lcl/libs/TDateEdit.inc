// constructor
function TDateEdit_Create(AOwner: TComponent): TDateEdit; extdecl;
begin
  {$define handleExceptionID := 34100}
  handleExceptionBegin
  Result := TDateEdit.Create(AOwner);
  handleExceptionEnd
end;

// function
procedure TDateEdit_GetDateFormat(AObj: TDateEdit;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 34101}
  handleExceptionBegin
  StringBufferCreate(AObj.GetDateFormat(), AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TDateEdit_AutoSelected(ASet: LongBool; AObj: TDateEdit; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 34102}
  handleExceptionBegin
  if ASet then
  begin
    AObj.AutoSelected := AValue
  end else
    Result := AObj.AutoSelected;
  handleExceptionEnd
end;

// property
procedure TDateEdit_Date(ASet: LongBool; AObj: TDateEdit; var AValue: Double; var Result: Double); extdecl;
begin
  {$define handleExceptionID := 34103}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Date := AValue
  end else
    Result := AObj.Date;
  handleExceptionEnd
end;

// property
function TDateEdit_Button(AObj: TDateEdit): TSpeedButton; extdecl;
begin
  {$define handleExceptionID := 34104}
  handleExceptionBegin
  Result := AObj.Button;
  handleExceptionEnd
end;

// property
function TDateEdit_DroppedDown(AObj: TDateEdit): LongBool; extdecl;
begin
  {$define handleExceptionID := 34105}
  handleExceptionBegin
  Result := AObj.DroppedDown;
  handleExceptionEnd
end;

// property
function TDateEdit_CalendarDisplaySettings(ASet: LongBool; AObj: TDateEdit; AValue: TDisplaySettings): TDisplaySettings; extdecl;
begin
  {$define handleExceptionID := 34106}
  handleExceptionBegin
  if ASet then
  begin
    AObj.CalendarDisplaySettings := AValue
  end else
    Result := AObj.CalendarDisplaySettings;
  handleExceptionEnd
end;

// property
function TDateEdit_DefaultToday(ASet: LongBool; AObj: TDateEdit; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 34107}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DefaultToday := AValue
  end else
    Result := AObj.DefaultToday;
  handleExceptionEnd
end;

// property
function TDateEdit_DateOrder(ASet: LongBool; AObj: TDateEdit; AValue: TDateOrder): TDateOrder; extdecl;
begin
  {$define handleExceptionID := 34108}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DateOrder := AValue
  end else
    Result := AObj.DateOrder;
  handleExceptionEnd
end;

// property
procedure TDateEdit_DateFormat(ASet: LongBool; AObj: TDateEdit; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 34109}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DateFormat := AValue
  end else
    StringBufferCreate(AObj.DateFormat, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TDateEdit_MinDate(ASet: LongBool; AObj: TDateEdit; var AValue: Double; var Result: Double); extdecl;
begin
  {$define handleExceptionID := 34110}
  handleExceptionBegin
  if ASet then
  begin
    AObj.MinDate := AValue
  end else
    Result := AObj.MinDate;
  handleExceptionEnd
end;

// property
procedure TDateEdit_MaxDate(ASet: LongBool; AObj: TDateEdit; var AValue: Double; var Result: Double); extdecl;
begin
  {$define handleExceptionID := 34111}
  handleExceptionBegin
  if ASet then
  begin
    AObj.MaxDate := AValue
  end else
    Result := AObj.MaxDate;
  handleExceptionEnd
end;

// property
function TDateEdit_ButtonOnlyWhenFocused(ASet: LongBool; AObj: TDateEdit; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 34112}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ButtonOnlyWhenFocused := AValue
  end else
    Result := AObj.ButtonOnlyWhenFocused;
  handleExceptionEnd
end;

// property
procedure TDateEdit_ButtonCaption(ASet: LongBool; AObj: TDateEdit; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 34113}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ButtonCaption := AValue
  end else
    StringBufferCreate(AObj.ButtonCaption, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TDateEdit_ButtonCursor(ASet: LongBool; AObj: TDateEdit; AValue: TCursor): TCursor; extdecl;
begin
  {$define handleExceptionID := 34114}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ButtonCursor := AValue
  end else
    Result := AObj.ButtonCursor;
  handleExceptionEnd
end;

// property
procedure TDateEdit_ButtonHint(ASet: LongBool; AObj: TDateEdit; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 34115}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ButtonHint := AValue
  end else
    StringBufferCreate(AObj.ButtonHint, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TDateEdit_ButtonWidth(ASet: LongBool; AObj: TDateEdit; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 34116}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ButtonWidth := AValue
  end else
    Result := AObj.ButtonWidth;
  handleExceptionEnd
end;

// property
function TDateEdit_AutoSelect(ASet: LongBool; AObj: TDateEdit; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 34117}
  handleExceptionBegin
  if ASet then
  begin
    AObj.AutoSelect := AValue
  end else
    Result := AObj.AutoSelect;
  handleExceptionEnd
end;

// property
function TDateEdit_DirectInput(ASet: LongBool; AObj: TDateEdit; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 34118}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DirectInput := AValue
  end else
    Result := AObj.DirectInput;
  handleExceptionEnd
end;

// property
function TDateEdit_Glyph(ASet: LongBool; AObj: TDateEdit; AValue: TBitmap): TBitmap; extdecl;
begin
  {$define handleExceptionID := 34119}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Glyph := AValue
  end else
    Result := AObj.Glyph;
  handleExceptionEnd
end;

// property
function TDateEdit_NumGlyphs(ASet: LongBool; AObj: TDateEdit; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 34120}
  handleExceptionBegin
  if ASet then
  begin
    AObj.NumGlyphs := AValue
  end else
    Result := AObj.NumGlyphs;
  handleExceptionEnd
end;

// property
function TDateEdit_Images(ASet: LongBool; AObj: TDateEdit; AValue: TCustomImageList): TCustomImageList; extdecl;
begin
  {$define handleExceptionID := 34121}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Images := AValue
  end else
    Result := AObj.Images;
  handleExceptionEnd
end;

// property
function TDateEdit_ImageIndex(ASet: LongBool; AObj: TDateEdit; AValue: TImageIndex): TImageIndex; extdecl;
begin
  {$define handleExceptionID := 34122}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ImageIndex := AValue
  end else
    Result := AObj.ImageIndex;
  handleExceptionEnd
end;

// property
function TDateEdit_ImageWidth(ASet: LongBool; AObj: TDateEdit; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 34123}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ImageWidth := AValue
  end else
    Result := AObj.ImageWidth;
  handleExceptionEnd
end;

// property
function TDateEdit_DragMode(ASet: LongBool; AObj: TDateEdit; AValue: TDragMode): TDragMode; extdecl;
begin
  {$define handleExceptionID := 34124}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragMode := AValue
  end else
    Result := AObj.DragMode;
  handleExceptionEnd
end;

// property
function TDateEdit_Flat(ASet: LongBool; AObj: TDateEdit; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 34125}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Flat := AValue
  end else
    Result := AObj.Flat;
  handleExceptionEnd
end;

// property
function TDateEdit_FocusOnButtonClick(ASet: LongBool; AObj: TDateEdit; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 34126}
  handleExceptionBegin
  if ASet then
  begin
    AObj.FocusOnButtonClick := AValue
  end else
    Result := AObj.FocusOnButtonClick;
  handleExceptionEnd
end;

// property
function TDateEdit_Layout(ASet: LongBool; AObj: TDateEdit; AValue: TLeftRight): TLeftRight; extdecl;
begin
  {$define handleExceptionID := 34127}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Layout := AValue
  end else
    Result := AObj.Layout;
  handleExceptionEnd
end;

// property
function TDateEdit_ParentFont(ASet: LongBool; AObj: TDateEdit; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 34128}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentFont := AValue
  end else
    Result := AObj.ParentFont;
  handleExceptionEnd
end;

// property
function TDateEdit_ParentShowHint(ASet: LongBool; AObj: TDateEdit; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 34129}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentShowHint := AValue
  end else
    Result := AObj.ParentShowHint;
  handleExceptionEnd
end;

// property
function TDateEdit_Spacing(ASet: LongBool; AObj: TDateEdit; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 34130}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Spacing := AValue
  end else
    Result := AObj.Spacing;
  handleExceptionEnd
end;

// event
procedure TDateEdit_OnAcceptDate(AObj: TDateEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTAcceptDateEvent}
  {$DEFINE EventName := OnAcceptDate}
  LCLEventMethodCode
end;

// event
procedure TDateEdit_OnCustomDate(AObj: TDateEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTCustomDateEvent}
  {$DEFINE EventName := OnCustomDate}
  LCLEventMethodCode
end;

// event
procedure TDateEdit_OnDateRangeCheck(AObj: TDateEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDateRangeCheckEvent}
  {$DEFINE EventName := OnDateRangeCheck}
  LCLEventMethodCode
end;

// event
procedure TDateEdit_OnButtonClick(AObj: TDateEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnButtonClick}
  LCLEventMethodCode
end;

function TDateEdit_TClass(): TClass; extdecl;
begin
  Result := TDateEdit;
end;

exports
  TDateEdit_Create,
  TDateEdit_GetDateFormat,
  TDateEdit_AutoSelected,
  TDateEdit_Date,
  TDateEdit_Button,
  TDateEdit_DroppedDown,
  TDateEdit_CalendarDisplaySettings,
  TDateEdit_DefaultToday,
  TDateEdit_DateOrder,
  TDateEdit_DateFormat,
  TDateEdit_MinDate,
  TDateEdit_MaxDate,
  TDateEdit_ButtonOnlyWhenFocused,
  TDateEdit_ButtonCaption,
  TDateEdit_ButtonCursor,
  TDateEdit_ButtonHint,
  TDateEdit_ButtonWidth,
  TDateEdit_AutoSelect,
  TDateEdit_DirectInput,
  TDateEdit_Glyph,
  TDateEdit_NumGlyphs,
  TDateEdit_Images,
  TDateEdit_ImageIndex,
  TDateEdit_ImageWidth,
  TDateEdit_DragMode,
  TDateEdit_Flat,
  TDateEdit_FocusOnButtonClick,
  TDateEdit_Layout,
  TDateEdit_ParentFont,
  TDateEdit_ParentShowHint,
  TDateEdit_Spacing,
  TDateEdit_OnAcceptDate,
  TDateEdit_OnCustomDate,
  TDateEdit_OnDateRangeCheck,
  TDateEdit_OnButtonClick,
  TDateEdit_TClass;