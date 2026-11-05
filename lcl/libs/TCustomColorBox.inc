// constructor
function TCustomColorBox_Create(AOwner: TComponent): TCustomColorBox; extdecl;
begin
  {$define handleExceptionID := 6200}
  handleExceptionBegin
  Result := TCustomColorBox.Create(AOwner);
  handleExceptionEnd
end;

// property
function TCustomColorBox_ColorRectWidth(ASet: LongBool; AObj: TCustomColorBox; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 6201}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ColorRectWidth := AValue
  end else
    Result := AObj.ColorRectWidth;
  handleExceptionEnd
end;

// property
function TCustomColorBox_ColorRectOffset(ASet: LongBool; AObj: TCustomColorBox; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 6202}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ColorRectOffset := AValue
  end else
    Result := AObj.ColorRectOffset;
  handleExceptionEnd
end;

// property
function TCustomColorBox_StyleToColorBoxStyle(ASet: LongBool; AObj: TCustomColorBox; AValue: TColorBoxStyle): TColorBoxStyle; extdecl;
begin
  {$define handleExceptionID := 6203}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Style := AValue
  end else
    Result := AObj.Style;
  handleExceptionEnd
end;

// property
function TCustomColorBox_Colors(AObj: TCustomColorBox; Index: Integer): TColor; extdecl;
begin
  {$define handleExceptionID := 6204}
  handleExceptionBegin
  Result := AObj.Colors[Index];
  handleExceptionEnd
end;

// property
procedure TCustomColorBox_ColorNames(AObj: TCustomColorBox; Index: Integer; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 6205}
  handleExceptionBegin
  StringBufferCreate(AObj.ColorNames[Index], AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TCustomColorBox_Selected(ASet: LongBool; AObj: TCustomColorBox; AValue: TColor): TColor; extdecl;
begin
  {$define handleExceptionID := 6206}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Selected := AValue
  end else
    Result := AObj.Selected;
  handleExceptionEnd
end;

// property
function TCustomColorBox_DefaultColorColor(ASet: LongBool; AObj: TCustomColorBox; AValue: TColor): TColor; extdecl;
begin
  {$define handleExceptionID := 6207}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DefaultColorColor := AValue
  end else
    Result := AObj.DefaultColorColor;
  handleExceptionEnd
end;

// property
function TCustomColorBox_NoneColorColor(ASet: LongBool; AObj: TCustomColorBox; AValue: TColor): TColor; extdecl;
begin
  {$define handleExceptionID := 6208}
  handleExceptionBegin
  if ASet then
  begin
    AObj.NoneColorColor := AValue
  end else
    Result := AObj.NoneColorColor;
  handleExceptionEnd
end;

// property
function TCustomColorBox_ColorDialog(ASet: LongBool; AObj: TCustomColorBox; AValue: TColorDialog): TColorDialog; extdecl;
begin
  {$define handleExceptionID := 6209}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ColorDialog := AValue
  end else
    Result := AObj.ColorDialog;
  handleExceptionEnd
end;

// event
procedure TCustomColorBox_OnGetColors(AObj: TCustomColorBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTGetColorsEvent}
  {$DEFINE EventName := OnGetColors}
  LCLEventMethodCode
end;

function TCustomColorBox_TClass(): TClass; extdecl;
begin
  Result := TCustomColorBox;
end;

exports
  TCustomColorBox_Create,
  TCustomColorBox_ColorRectWidth,
  TCustomColorBox_ColorRectOffset,
  TCustomColorBox_StyleToColorBoxStyle,
  TCustomColorBox_Colors,
  TCustomColorBox_ColorNames,
  TCustomColorBox_Selected,
  TCustomColorBox_DefaultColorColor,
  TCustomColorBox_NoneColorColor,
  TCustomColorBox_ColorDialog,
  TCustomColorBox_OnGetColors,
  TCustomColorBox_TClass;