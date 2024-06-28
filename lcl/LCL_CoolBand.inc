
//constructor
function CoolBand_Create(aCollection: TCollection): TCoolBand; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TCoolBand.Create(aCollection);
  handleExceptionEnd
end;

//property
function CoolBand_Height(AObj: TCoolBand): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='Height'}
  handleExceptionBegin
  Result := AObj.Height;
  handleExceptionEnd
end;

//property
function CoolBand_Left(AObj: TCoolBand): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='Left'}
  handleExceptionBegin
  Result := AObj.Left;
  handleExceptionEnd
end;

//property
function CoolBand_Right(AObj: TCoolBand): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='Right'}
  handleExceptionBegin
  Result := AObj.Right;
  handleExceptionEnd
end;

//property
function CoolBand_Top(AObj: TCoolBand): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='Top'}
  handleExceptionBegin
  Result := AObj.Top;
  handleExceptionEnd
end;

//property
function CoolBand_Bitmap(AIsSet: LongBool; AObj: TCoolBand; AValue: TBitmap): TBitmap; extdecl;
begin
  {$define handleExceptionFuncName :='Bitmap'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Bitmap := AValue;
  end else
    Result := AObj.Bitmap;
  handleExceptionEnd
end;

//property
function CoolBand_BorderStyle(AIsSet: LongBool; AObj: TCoolBand; AValue: TBorderStyle): TBorderStyle; extdecl;
begin
  {$define handleExceptionFuncName :='BorderStyle'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.BorderStyle := AValue;
  end else
    Result := AObj.BorderStyle;
  handleExceptionEnd
end;

//property
function CoolBand_Break(AIsSet: LongBool; AObj: TCoolBand; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='Break'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Break := AValue;
  end else
    Result := AObj.Break;
  handleExceptionEnd
end;

//property
function CoolBand_Color(AIsSet: LongBool; AObj: TCoolBand; AValue: TColor): TColor; extdecl;
begin
  {$define handleExceptionFuncName :='Color'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Color := AValue;
  end else
    Result := AObj.Color;
  handleExceptionEnd
end;

//property
function CoolBand_Control(AIsSet: LongBool; AObj: TCoolBand; AValue: TControl): TControl; extdecl;
begin
  {$define handleExceptionFuncName :='Control'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Control := AValue;
  end else
    Result := AObj.Control;
  handleExceptionEnd
end;

//property
function CoolBand_FixedBackground(AIsSet: LongBool; AObj: TCoolBand; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='FixedBackground'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.FixedBackground := AValue;
  end else
    Result := AObj.FixedBackground;
  handleExceptionEnd
end;

//property
function CoolBand_FixedSize(AIsSet: LongBool; AObj: TCoolBand; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='FixedSize'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.FixedSize := AValue;
  end else
    Result := AObj.FixedSize;
  handleExceptionEnd
end;

//property
function CoolBand_HorizontalOnly(AIsSet: LongBool; AObj: TCoolBand; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='HorizontalOnly'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.HorizontalOnly := AValue;
  end else
    Result := AObj.HorizontalOnly;
  handleExceptionEnd
end;

//property
function CoolBand_ImageIndex(AIsSet: LongBool; AObj: TCoolBand; AValue: TImageIndex): TImageIndex; extdecl;
begin
  {$define handleExceptionFuncName :='ImageIndex'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ImageIndex := AValue;
  end else
    Result := AObj.ImageIndex;
  handleExceptionEnd
end;

//property
function CoolBand_MinHeight(AIsSet: LongBool; AObj: TCoolBand; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='MinHeight'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.MinHeight := AValue;
  end else
    Result := AObj.MinHeight;
  handleExceptionEnd
end;

//property
function CoolBand_MinWidth(AIsSet: LongBool; AObj: TCoolBand; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='MinWidth'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.MinWidth := AValue;
  end else
    Result := AObj.MinWidth;
  handleExceptionEnd
end;

//property
function CoolBand_ParentColor(AIsSet: LongBool; AObj: TCoolBand; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='ParentColor'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ParentColor := AValue;
  end else
    Result := AObj.ParentColor;
  handleExceptionEnd
end;

//property
function CoolBand_ParentBitmap(AIsSet: LongBool; AObj: TCoolBand; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='ParentBitmap'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ParentBitmap := AValue;
  end else
    Result := AObj.ParentBitmap;
  handleExceptionEnd
end;

//property
function CoolBand_Text(AIsSet: LongBool; AObj: TCoolBand; AValue: PChar): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='Text'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Text := AValue;
  end else
    Result := ToPChar(AObj.Text);
  handleExceptionEnd
end;

//property
function CoolBand_Visible(AIsSet: LongBool; AObj: TCoolBand; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='Visible'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Visible := AValue;
  end else
    Result := AObj.Visible;
  handleExceptionEnd
end;

//property
function CoolBand_Width(AIsSet: LongBool; AObj: TCoolBand; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='Width'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Width := AValue;
  end else
    Result := AObj.Width;
  handleExceptionEnd
end;

//function
function CoolBand_Class(): TClass; extdecl;
begin
  Result := TCoolBand;
end;

//procedure
procedure CoolBand_AutosizeWidth(AObj: TCoolBand); extdecl;
begin
  {$define handleExceptionFuncName :='AutosizeWidth'}
  handleExceptionBegin
  AObj.AutosizeWidth();
  handleExceptionEnd
end;

//procedure
procedure CoolBand_InvalidateCoolBar(AObj: TCoolBand; Sender: TObject); extdecl;
begin
  {$define handleExceptionFuncName :='InvalidateCoolBar'}
  handleExceptionBegin
  AObj.InvalidateCoolBar(Sender);
  handleExceptionEnd
end;


exports
  CoolBand_Create,
  CoolBand_Height,
  CoolBand_Left,
  CoolBand_Right,
  CoolBand_Top,
  CoolBand_Bitmap,
  CoolBand_BorderStyle,
  CoolBand_Break,
  CoolBand_Color,
  CoolBand_Control,
  CoolBand_FixedBackground,
  CoolBand_FixedSize,
  CoolBand_HorizontalOnly,
  CoolBand_ImageIndex,
  CoolBand_MinHeight,
  CoolBand_MinWidth,
  CoolBand_ParentColor,
  CoolBand_ParentBitmap,
  CoolBand_Text,
  CoolBand_Visible,
  CoolBand_Width,
  CoolBand_Class,
  CoolBand_AutosizeWidth,
  CoolBand_InvalidateCoolBar;