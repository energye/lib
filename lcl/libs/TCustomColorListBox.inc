// constructor
function TCustomColorListBox_Create(AOwner: TComponent): TCustomColorListBox; extdecl;
begin
  {$define handleExceptionID := 6400}
  handleExceptionBegin
  Result := TCustomColorListBox.Create(AOwner);
  handleExceptionEnd
end;

// property
function TCustomColorListBox_ColorRectWidth(ASet: LongBool; AObj: TCustomColorListBox; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 6401}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ColorRectWidth := AValue
  end else
    Result := AObj.ColorRectWidth;
  handleExceptionEnd
end;

// property
function TCustomColorListBox_ColorRectOffset(ASet: LongBool; AObj: TCustomColorListBox; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 6402}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ColorRectOffset := AValue
  end else
    Result := AObj.ColorRectOffset;
  handleExceptionEnd
end;

// property
function TCustomColorListBox_StyleToColorBoxStyle(ASet: LongBool; AObj: TCustomColorListBox; AValue: TColorBoxStyle): TColorBoxStyle; extdecl;
begin
  {$define handleExceptionID := 6403}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Style := AValue
  end else
    Result := AObj.Style;
  handleExceptionEnd
end;

// property
function TCustomColorListBox_Colors(ASet: LongBool; AObj: TCustomColorListBox; Index: Integer; AValue: TColor): TColor; extdecl;
begin
  {$define handleExceptionID := 6404}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Colors[Index] := AValue
  end else
    Result := AObj.Colors[Index];
  handleExceptionEnd
end;

// property
procedure TCustomColorListBox_ColorNames(AObj: TCustomColorListBox; Index: Integer; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 6405}
  handleExceptionBegin
  StringBufferCreate(AObj.ColorNames[Index], AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TCustomColorListBox_SelectedToColor(ASet: LongBool; AObj: TCustomColorListBox; AValue: TColor): TColor; extdecl;
begin
  {$define handleExceptionID := 6406}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Selected := AValue
  end else
    Result := AObj.Selected;
  handleExceptionEnd
end;

// property
function TCustomColorListBox_DefaultColorColor(ASet: LongBool; AObj: TCustomColorListBox; AValue: TColor): TColor; extdecl;
begin
  {$define handleExceptionID := 6407}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DefaultColorColor := AValue
  end else
    Result := AObj.DefaultColorColor;
  handleExceptionEnd
end;

// property
function TCustomColorListBox_NoneColorColor(ASet: LongBool; AObj: TCustomColorListBox; AValue: TColor): TColor; extdecl;
begin
  {$define handleExceptionID := 6408}
  handleExceptionBegin
  if ASet then
  begin
    AObj.NoneColorColor := AValue
  end else
    Result := AObj.NoneColorColor;
  handleExceptionEnd
end;

// property
function TCustomColorListBox_ColorDialog(ASet: LongBool; AObj: TCustomColorListBox; AValue: TColorDialog): TColorDialog; extdecl;
begin
  {$define handleExceptionID := 6409}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ColorDialog := AValue
  end else
    Result := AObj.ColorDialog;
  handleExceptionEnd
end;

// event
procedure TCustomColorListBox_OnGetColors(AObj: TCustomColorListBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTLBGetColorsEvent}
  {$DEFINE EventName := OnGetColors}
  LCLEventMethodCode
end;

function TCustomColorListBox_TClass(): TClass; extdecl;
begin
  Result := TCustomColorListBox;
end;

exports
  TCustomColorListBox_Create,
  TCustomColorListBox_ColorRectWidth,
  TCustomColorListBox_ColorRectOffset,
  TCustomColorListBox_StyleToColorBoxStyle,
  TCustomColorListBox_Colors,
  TCustomColorListBox_ColorNames,
  TCustomColorListBox_SelectedToColor,
  TCustomColorListBox_DefaultColorColor,
  TCustomColorListBox_NoneColorColor,
  TCustomColorListBox_ColorDialog,
  TCustomColorListBox_OnGetColors,
  TCustomColorListBox_TClass;