// constructor
function TGridColumn_Create(ACollection: TCollection): TGridColumn; extdecl;
begin
  {$define handleExceptionID := 23100}
  handleExceptionBegin
  Result := TGridColumn.Create(ACollection);
  handleExceptionEnd
end;

// function
function TGridColumn_IsDefault(AObj: TGridColumn): LongBool; extdecl;
begin
  {$define handleExceptionID := 23101}
  handleExceptionBegin
  Result := AObj.IsDefault();
  handleExceptionEnd
end;

// procedure
procedure TGridColumn_FillDefaultFont(AObj: TGridColumn); extdecl;
begin
  {$define handleExceptionID := 23102}
  handleExceptionBegin
  AObj.FillDefaultFont();
  handleExceptionEnd
end;

// procedure
procedure TGridColumn_FixDesignFontsPPI(AObj: TGridColumn; const ADesignTimePPI: Integer); extdecl;
begin
  {$define handleExceptionID := 23103}
  handleExceptionBegin
  AObj.FixDesignFontsPPI(ADesignTimePPI);
  handleExceptionEnd
end;

// procedure
procedure TGridColumn_ScaleFontsPPI(AObj: TGridColumn; const AToPPI: Integer; var AProportion: Double); extdecl;
begin
  {$define handleExceptionID := 23104}
  handleExceptionBegin
  AObj.ScaleFontsPPI(AToPPI, AProportion);
  handleExceptionEnd
end;

// property
function TGridColumn_Grid(AObj: TGridColumn): TCustomGrid; extdecl;
begin
  {$define handleExceptionID := 23105}
  handleExceptionBegin
  Result := AObj.Grid;
  handleExceptionEnd
end;

// property
function TGridColumn_DefaultWidth(AObj: TGridColumn): Integer; extdecl;
begin
  {$define handleExceptionID := 23106}
  handleExceptionBegin
  Result := AObj.DefaultWidth;
  handleExceptionEnd
end;

// property
function TGridColumn_StoredWidth(AObj: TGridColumn): Integer; extdecl;
begin
  {$define handleExceptionID := 23107}
  handleExceptionBegin
  Result := AObj.StoredWidth;
  handleExceptionEnd
end;

// property
function TGridColumn_WidthChanged(AObj: TGridColumn): LongBool; extdecl;
begin
  {$define handleExceptionID := 23108}
  handleExceptionBegin
  Result := AObj.WidthChanged;
  handleExceptionEnd
end;

// property
function TGridColumn_Alignment(ASet: LongBool; AObj: TGridColumn; AValue: TAlignment): TAlignment; extdecl;
begin
  {$define handleExceptionID := 23109}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Alignment := AValue
  end else
    Result := AObj.Alignment;
  handleExceptionEnd
end;

// property
function TGridColumn_ButtonStyle(ASet: LongBool; AObj: TGridColumn; AValue: TColumnButtonStyle): TColumnButtonStyle; extdecl;
begin
  {$define handleExceptionID := 23110}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ButtonStyle := AValue
  end else
    Result := AObj.ButtonStyle;
  handleExceptionEnd
end;

// property
function TGridColumn_Color(ASet: LongBool; AObj: TGridColumn; AValue: TColor): TColor; extdecl;
begin
  {$define handleExceptionID := 23111}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Color := AValue
  end else
    Result := AObj.Color;
  handleExceptionEnd
end;

// property
function TGridColumn_DropDownRows(ASet: LongBool; AObj: TGridColumn; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 23112}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DropDownRows := AValue
  end else
    Result := AObj.DropDownRows;
  handleExceptionEnd
end;

// property
function TGridColumn_Expanded(ASet: LongBool; AObj: TGridColumn; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 23113}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Expanded := AValue
  end else
    Result := AObj.Expanded;
  handleExceptionEnd
end;

// property
function TGridColumn_Font(ASet: LongBool; AObj: TGridColumn; AValue: TFont): TFont; extdecl;
begin
  {$define handleExceptionID := 23114}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Font := AValue
  end else
    Result := AObj.Font;
  handleExceptionEnd
end;

// property
function TGridColumn_Layout(ASet: LongBool; AObj: TGridColumn; AValue: TTextLayout): TTextLayout; extdecl;
begin
  {$define handleExceptionID := 23115}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Layout := AValue
  end else
    Result := AObj.Layout;
  handleExceptionEnd
end;

// property
function TGridColumn_MinSize(ASet: LongBool; AObj: TGridColumn; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 23116}
  handleExceptionBegin
  if ASet then
  begin
    AObj.MinSize := AValue
  end else
    Result := AObj.MinSize;
  handleExceptionEnd
end;

// property
function TGridColumn_MaxSize(ASet: LongBool; AObj: TGridColumn; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 23117}
  handleExceptionBegin
  if ASet then
  begin
    AObj.MaxSize := AValue
  end else
    Result := AObj.MaxSize;
  handleExceptionEnd
end;

// property
function TGridColumn_PickList(ASet: LongBool; AObj: TGridColumn; AValue: TStrings): TStrings; extdecl;
begin
  {$define handleExceptionID := 23118}
  handleExceptionBegin
  if ASet then
  begin
    AObj.PickList := AValue
  end else
    Result := AObj.PickList;
  handleExceptionEnd
end;

// property
function TGridColumn_ReadOnly(ASet: LongBool; AObj: TGridColumn; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 23119}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ReadOnly := AValue
  end else
    Result := AObj.ReadOnly;
  handleExceptionEnd
end;

// property
function TGridColumn_SizePriority(ASet: LongBool; AObj: TGridColumn; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 23120}
  handleExceptionBegin
  if ASet then
  begin
    AObj.SizePriority := AValue
  end else
    Result := AObj.SizePriority;
  handleExceptionEnd
end;

// property
function TGridColumn_Tag(ASet: LongBool; AObj: TGridColumn; AValue: PtrInt): PtrInt; extdecl;
begin
  {$define handleExceptionID := 23121}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Tag := AValue
  end else
    Result := AObj.Tag;
  handleExceptionEnd
end;

// property
function TGridColumn_Title(ASet: LongBool; AObj: TGridColumn; AValue: TGridColumnTitle): TGridColumnTitle; extdecl;
begin
  {$define handleExceptionID := 23122}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Title := AValue
  end else
    Result := AObj.Title;
  handleExceptionEnd
end;

// property
function TGridColumn_Width(ASet: LongBool; AObj: TGridColumn; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 23123}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Width := AValue
  end else
    Result := AObj.Width;
  handleExceptionEnd
end;

// property
function TGridColumn_Visible(ASet: LongBool; AObj: TGridColumn; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 23124}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Visible := AValue
  end else
    Result := AObj.Visible;
  handleExceptionEnd
end;

// property
procedure TGridColumn_ValueChecked(ASet: LongBool; AObj: TGridColumn; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 23125}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ValueChecked := AValue
  end else
    StringBufferCreate(AObj.ValueChecked, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TGridColumn_ValueUnchecked(ASet: LongBool; AObj: TGridColumn; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 23126}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ValueUnchecked := AValue
  end else
    StringBufferCreate(AObj.ValueUnchecked, AStrData, AStrSize);
  handleExceptionEnd
end;

exports
  TGridColumn_Create,
  TGridColumn_IsDefault,
  TGridColumn_FillDefaultFont,
  TGridColumn_FixDesignFontsPPI,
  TGridColumn_ScaleFontsPPI,
  TGridColumn_Grid,
  TGridColumn_DefaultWidth,
  TGridColumn_StoredWidth,
  TGridColumn_WidthChanged,
  TGridColumn_Alignment,
  TGridColumn_ButtonStyle,
  TGridColumn_Color,
  TGridColumn_DropDownRows,
  TGridColumn_Expanded,
  TGridColumn_Font,
  TGridColumn_Layout,
  TGridColumn_MinSize,
  TGridColumn_MaxSize,
  TGridColumn_PickList,
  TGridColumn_ReadOnly,
  TGridColumn_SizePriority,
  TGridColumn_Tag,
  TGridColumn_Title,
  TGridColumn_Width,
  TGridColumn_Visible,
  TGridColumn_ValueChecked,
  TGridColumn_ValueUnchecked;