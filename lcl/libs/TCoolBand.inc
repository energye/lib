// constructor
function TCoolBand_Create(aCollection: TCollection): TCoolBand; extdecl;
begin
  {$define handleExceptionID := 20300}
  handleExceptionBegin
  Result := TCoolBand.Create(aCollection);
  handleExceptionEnd
end;

// procedure
procedure TCoolBand_AutosizeWidth(AObj: TCoolBand); extdecl;
begin
  {$define handleExceptionID := 20301}
  handleExceptionBegin
  AObj.AutosizeWidth();
  handleExceptionEnd
end;

// procedure
procedure TCoolBand_InvalidateCoolBar(AObj: TCoolBand; Sender: TObject); extdecl;
begin
  {$define handleExceptionID := 20302}
  handleExceptionBegin
  AObj.InvalidateCoolBar(Sender);
  handleExceptionEnd
end;

// property
function TCoolBand_Height(AObj: TCoolBand): Integer; extdecl;
begin
  {$define handleExceptionID := 20303}
  handleExceptionBegin
  Result := AObj.Height;
  handleExceptionEnd
end;

// property
function TCoolBand_Left(AObj: TCoolBand): Integer; extdecl;
begin
  {$define handleExceptionID := 20304}
  handleExceptionBegin
  Result := AObj.Left;
  handleExceptionEnd
end;

// property
function TCoolBand_Right(AObj: TCoolBand): Integer; extdecl;
begin
  {$define handleExceptionID := 20305}
  handleExceptionBegin
  Result := AObj.Right;
  handleExceptionEnd
end;

// property
function TCoolBand_Top(AObj: TCoolBand): Integer; extdecl;
begin
  {$define handleExceptionID := 20306}
  handleExceptionBegin
  Result := AObj.Top;
  handleExceptionEnd
end;

// property
function TCoolBand_Bitmap(ASet: LongBool; AObj: TCoolBand; AValue: TBitmap): TBitmap; extdecl;
begin
  {$define handleExceptionID := 20307}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Bitmap := AValue
  end else
    Result := AObj.Bitmap;
  handleExceptionEnd
end;

// property
function TCoolBand_BorderStyle(ASet: LongBool; AObj: TCoolBand; AValue: TBorderStyle): TBorderStyle; extdecl;
begin
  {$define handleExceptionID := 20308}
  handleExceptionBegin
  if ASet then
  begin
    AObj.BorderStyle := AValue
  end else
    Result := AObj.BorderStyle;
  handleExceptionEnd
end;

// property
function TCoolBand_Break(ASet: LongBool; AObj: TCoolBand; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 20309}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Break := AValue
  end else
    Result := AObj.Break;
  handleExceptionEnd
end;

// property
function TCoolBand_Color(ASet: LongBool; AObj: TCoolBand; AValue: TColor): TColor; extdecl;
begin
  {$define handleExceptionID := 20310}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Color := AValue
  end else
    Result := AObj.Color;
  handleExceptionEnd
end;

// property
function TCoolBand_Control(ASet: LongBool; AObj: TCoolBand; AValue: TControl): TControl; extdecl;
begin
  {$define handleExceptionID := 20311}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Control := AValue
  end else
    Result := AObj.Control;
  handleExceptionEnd
end;

// property
function TCoolBand_FixedBackground(ASet: LongBool; AObj: TCoolBand; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 20312}
  handleExceptionBegin
  if ASet then
  begin
    AObj.FixedBackground := AValue
  end else
    Result := AObj.FixedBackground;
  handleExceptionEnd
end;

// property
function TCoolBand_FixedSize(ASet: LongBool; AObj: TCoolBand; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 20313}
  handleExceptionBegin
  if ASet then
  begin
    AObj.FixedSize := AValue
  end else
    Result := AObj.FixedSize;
  handleExceptionEnd
end;

// property
function TCoolBand_HorizontalOnly(ASet: LongBool; AObj: TCoolBand; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 20314}
  handleExceptionBegin
  if ASet then
  begin
    AObj.HorizontalOnly := AValue
  end else
    Result := AObj.HorizontalOnly;
  handleExceptionEnd
end;

// property
function TCoolBand_ImageIndex(ASet: LongBool; AObj: TCoolBand; AValue: TImageIndex): TImageIndex; extdecl;
begin
  {$define handleExceptionID := 20315}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ImageIndex := AValue
  end else
    Result := AObj.ImageIndex;
  handleExceptionEnd
end;

// property
function TCoolBand_MinHeight(ASet: LongBool; AObj: TCoolBand; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 20316}
  handleExceptionBegin
  if ASet then
  begin
    AObj.MinHeight := AValue
  end else
    Result := AObj.MinHeight;
  handleExceptionEnd
end;

// property
function TCoolBand_MinWidth(ASet: LongBool; AObj: TCoolBand; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 20317}
  handleExceptionBegin
  if ASet then
  begin
    AObj.MinWidth := AValue
  end else
    Result := AObj.MinWidth;
  handleExceptionEnd
end;

// property
function TCoolBand_ParentColor(ASet: LongBool; AObj: TCoolBand; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 20318}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentColor := AValue
  end else
    Result := AObj.ParentColor;
  handleExceptionEnd
end;

// property
function TCoolBand_ParentBitmap(ASet: LongBool; AObj: TCoolBand; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 20319}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentBitmap := AValue
  end else
    Result := AObj.ParentBitmap;
  handleExceptionEnd
end;

// property
procedure TCoolBand_Text(ASet: LongBool; AObj: TCoolBand; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 20320}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Text := AValue
  end else
    StringBufferCreate(AObj.Text, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TCoolBand_Visible(ASet: LongBool; AObj: TCoolBand; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 20321}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Visible := AValue
  end else
    Result := AObj.Visible;
  handleExceptionEnd
end;

// property
function TCoolBand_Width(ASet: LongBool; AObj: TCoolBand; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 20322}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Width := AValue
  end else
    Result := AObj.Width;
  handleExceptionEnd
end;

exports
  TCoolBand_Create,
  TCoolBand_AutosizeWidth,
  TCoolBand_InvalidateCoolBar,
  TCoolBand_Height,
  TCoolBand_Left,
  TCoolBand_Right,
  TCoolBand_Top,
  TCoolBand_Bitmap,
  TCoolBand_BorderStyle,
  TCoolBand_Break,
  TCoolBand_Color,
  TCoolBand_Control,
  TCoolBand_FixedBackground,
  TCoolBand_FixedSize,
  TCoolBand_HorizontalOnly,
  TCoolBand_ImageIndex,
  TCoolBand_MinHeight,
  TCoolBand_MinWidth,
  TCoolBand_ParentColor,
  TCoolBand_ParentBitmap,
  TCoolBand_Text,
  TCoolBand_Visible,
  TCoolBand_Width;