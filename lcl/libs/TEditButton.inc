// constructor
function TEditButton_Create(AOwner: TComponent): TEditButton; extdecl;
begin
  {$define handleExceptionID := 2300}
  handleExceptionBegin
  Result := TEditButton.Create(AOwner);
  handleExceptionEnd
end;

// property
function TEditButton_AutoSelected(ASet: LongBool; AObj: TEditButton; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 2301}
  handleExceptionBegin
  if ASet then
  begin
    AObj.AutoSelected := AValue
  end else
    Result := AObj.AutoSelected;
  handleExceptionEnd
end;

// property
function TEditButton_Button(AObj: TEditButton): TSpeedButton; extdecl;
begin
  {$define handleExceptionID := 2302}
  handleExceptionBegin
  Result := AObj.Button;
  handleExceptionEnd
end;

// property
function TEditButton_Edit(AObj: TEditButton): TEbEdit; extdecl;
begin
  {$define handleExceptionID := 2303}
  handleExceptionBegin
  Result := AObj.Edit;
  handleExceptionEnd
end;

// property
function TEditButton_AutoSelect(ASet: LongBool; AObj: TEditButton; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 2304}
  handleExceptionBegin
  if ASet then
  begin
    AObj.AutoSelect := AValue
  end else
    Result := AObj.AutoSelect;
  handleExceptionEnd
end;

// property
procedure TEditButton_ButtonCaption(ASet: LongBool; AObj: TEditButton; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 2305}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ButtonCaption := AValue
  end else
    StringBufferCreate(AObj.ButtonCaption, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TEditButton_ButtonCursor(ASet: LongBool; AObj: TEditButton; AValue: TCursor): TCursor; extdecl;
begin
  {$define handleExceptionID := 2306}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ButtonCursor := AValue
  end else
    Result := AObj.ButtonCursor;
  handleExceptionEnd
end;

// property
procedure TEditButton_ButtonHint(ASet: LongBool; AObj: TEditButton; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 2307}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ButtonHint := AValue
  end else
    StringBufferCreate(AObj.ButtonHint, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TEditButton_ButtonOnlyWhenFocused(ASet: LongBool; AObj: TEditButton; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 2308}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ButtonOnlyWhenFocused := AValue
  end else
    Result := AObj.ButtonOnlyWhenFocused;
  handleExceptionEnd
end;

// property
function TEditButton_ButtonWidth(ASet: LongBool; AObj: TEditButton; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 2309}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ButtonWidth := AValue
  end else
    Result := AObj.ButtonWidth;
  handleExceptionEnd
end;

// property
function TEditButton_DirectInput(ASet: LongBool; AObj: TEditButton; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 2310}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DirectInput := AValue
  end else
    Result := AObj.DirectInput;
  handleExceptionEnd
end;

// property
function TEditButton_Flat(ASet: LongBool; AObj: TEditButton; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 2311}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Flat := AValue
  end else
    Result := AObj.Flat;
  handleExceptionEnd
end;

// property
function TEditButton_FocusOnButtonClick(ASet: LongBool; AObj: TEditButton; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 2312}
  handleExceptionBegin
  if ASet then
  begin
    AObj.FocusOnButtonClick := AValue
  end else
    Result := AObj.FocusOnButtonClick;
  handleExceptionEnd
end;

// property
function TEditButton_Glyph(ASet: LongBool; AObj: TEditButton; AValue: TBitmap): TBitmap; extdecl;
begin
  {$define handleExceptionID := 2313}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Glyph := AValue
  end else
    Result := AObj.Glyph;
  handleExceptionEnd
end;

// property
function TEditButton_Images(ASet: LongBool; AObj: TEditButton; AValue: TCustomImageList): TCustomImageList; extdecl;
begin
  {$define handleExceptionID := 2314}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Images := AValue
  end else
    Result := AObj.Images;
  handleExceptionEnd
end;

// property
function TEditButton_ImageIndex(ASet: LongBool; AObj: TEditButton; AValue: TImageIndex): TImageIndex; extdecl;
begin
  {$define handleExceptionID := 2315}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ImageIndex := AValue
  end else
    Result := AObj.ImageIndex;
  handleExceptionEnd
end;

// property
function TEditButton_ImageWidth(ASet: LongBool; AObj: TEditButton; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 2316}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ImageWidth := AValue
  end else
    Result := AObj.ImageWidth;
  handleExceptionEnd
end;

// property
function TEditButton_Layout(ASet: LongBool; AObj: TEditButton; AValue: TLeftRight): TLeftRight; extdecl;
begin
  {$define handleExceptionID := 2317}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Layout := AValue
  end else
    Result := AObj.Layout;
  handleExceptionEnd
end;

// property
function TEditButton_NumGlyphs(ASet: LongBool; AObj: TEditButton; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 2318}
  handleExceptionBegin
  if ASet then
  begin
    AObj.NumGlyphs := AValue
  end else
    Result := AObj.NumGlyphs;
  handleExceptionEnd
end;

// property
function TEditButton_ParentFont(ASet: LongBool; AObj: TEditButton; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 2319}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentFont := AValue
  end else
    Result := AObj.ParentFont;
  handleExceptionEnd
end;

// property
function TEditButton_ParentShowHint(ASet: LongBool; AObj: TEditButton; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 2320}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentShowHint := AValue
  end else
    Result := AObj.ParentShowHint;
  handleExceptionEnd
end;

// property
function TEditButton_Spacing(ASet: LongBool; AObj: TEditButton; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 2321}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Spacing := AValue
  end else
    Result := AObj.Spacing;
  handleExceptionEnd
end;

// event
procedure TEditButton_OnButtonClick(AObj: TEditButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnButtonClick}
  LCLEventMethodCode
end;

function TEditButton_TClass(): TClass; extdecl;
begin
  Result := TEditButton;
end;

exports
  TEditButton_Create,
  TEditButton_AutoSelected,
  TEditButton_Button,
  TEditButton_Edit,
  TEditButton_AutoSelect,
  TEditButton_ButtonCaption,
  TEditButton_ButtonCursor,
  TEditButton_ButtonHint,
  TEditButton_ButtonOnlyWhenFocused,
  TEditButton_ButtonWidth,
  TEditButton_DirectInput,
  TEditButton_Flat,
  TEditButton_FocusOnButtonClick,
  TEditButton_Glyph,
  TEditButton_Images,
  TEditButton_ImageIndex,
  TEditButton_ImageWidth,
  TEditButton_Layout,
  TEditButton_NumGlyphs,
  TEditButton_ParentFont,
  TEditButton_ParentShowHint,
  TEditButton_Spacing,
  TEditButton_OnButtonClick,
  TEditButton_TClass;