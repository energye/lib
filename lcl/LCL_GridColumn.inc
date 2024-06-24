
//constructor
function GridColumn_Create(ACollection: TCollection): TGridColumn; extdecl;
begin
  handleExceptionBegin
  Result := TGridColumn.Create(ACollection);
  handleExceptionEnd
end;

//property
function GridColumn_Grid(AObj: TGridColumn): TCustomGrid; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Grid;
  handleExceptionEnd
end;

//property
function GridColumn_DefaultWidth(AObj: TGridColumn): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.DefaultWidth;
  handleExceptionEnd
end;

//property
function GridColumn_StoredWidth(AObj: TGridColumn): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.StoredWidth;
  handleExceptionEnd
end;

//property
function GridColumn_WidthChanged(AObj: TGridColumn): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.WidthChanged;
  handleExceptionEnd
end;

//property
function GridColumn_Alignment(AIsSet: LongBool; AObj: TGridColumn; AValue: TAlignment): TAlignment; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Alignment := AValue;
  end else
    Result := AObj.Alignment;
  handleExceptionEnd
end;

//property
function GridColumn_ButtonStyle(AIsSet: LongBool; AObj: TGridColumn; AValue: TColumnButtonStyle): TColumnButtonStyle; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ButtonStyle := AValue;
  end else
    Result := AObj.ButtonStyle;
  handleExceptionEnd
end;

//property
function GridColumn_Color(AIsSet: LongBool; AObj: TGridColumn; AValue: TColor): TColor; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Color := AValue;
  end else
    Result := AObj.Color;
  handleExceptionEnd
end;

//property
function GridColumn_DropDownRows(AIsSet: LongBool; AObj: TGridColumn; AValue: LongInt): LongInt; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DropDownRows := AValue;
  end else
    Result := AObj.DropDownRows;
  handleExceptionEnd
end;

//property
function GridColumn_Expanded(AIsSet: LongBool; AObj: TGridColumn; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Expanded := AValue;
  end else
    Result := AObj.Expanded;
  handleExceptionEnd
end;

//property
function GridColumn_Font(AIsSet: LongBool; AObj: TGridColumn; AValue: TFont): TFont; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Font := AValue;
  end else
    Result := AObj.Font;
  handleExceptionEnd
end;

//property
function GridColumn_Layout(AIsSet: LongBool; AObj: TGridColumn; AValue: TTextLayout): TTextLayout; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Layout := AValue;
  end else
    Result := AObj.Layout;
  handleExceptionEnd
end;

//property
function GridColumn_MinSize(AIsSet: LongBool; AObj: TGridColumn; AValue: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.MinSize := AValue;
  end else
    Result := AObj.MinSize;
  handleExceptionEnd
end;

//property
function GridColumn_MaxSize(AIsSet: LongBool; AObj: TGridColumn; AValue: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.MaxSize := AValue;
  end else
    Result := AObj.MaxSize;
  handleExceptionEnd
end;

//property
function GridColumn_PickList(AIsSet: LongBool; AObj: TGridColumn; AValue: TStrings): TStrings; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.PickList := AValue;
  end else
    Result := AObj.PickList;
  handleExceptionEnd
end;

//property
function GridColumn_ReadOnly(AIsSet: LongBool; AObj: TGridColumn; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ReadOnly := AValue;
  end else
    Result := AObj.ReadOnly;
  handleExceptionEnd
end;

//property
function GridColumn_SizePriority(AIsSet: LongBool; AObj: TGridColumn; AValue: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.SizePriority := AValue;
  end else
    Result := AObj.SizePriority;
  handleExceptionEnd
end;

//property
function GridColumn_Tag(AIsSet: LongBool; AObj: TGridColumn; AValue: NativeInt): NativeInt; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Tag := AValue;
  end else
    Result := AObj.Tag;
  handleExceptionEnd
end;

//property
function GridColumn_Title(AIsSet: LongBool; AObj: TGridColumn; AValue: TGridColumnTitle): TGridColumnTitle; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Title := AValue;
  end else
    Result := AObj.Title;
  handleExceptionEnd
end;

//property
function GridColumn_Width(AIsSet: LongBool; AObj: TGridColumn; AValue: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Width := AValue;
  end else
    Result := AObj.Width;
  handleExceptionEnd
end;

//property
function GridColumn_Visible(AIsSet: LongBool; AObj: TGridColumn; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Visible := AValue;
  end else
    Result := AObj.Visible;
  handleExceptionEnd
end;

//property
function GridColumn_ValueChecked(AIsSet: LongBool; AObj: TGridColumn; AValue: PChar): PChar; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ValueChecked := AValue;
  end else
    Result := ToPChar(AObj.ValueChecked);
  handleExceptionEnd
end;

//property
function GridColumn_ValueUnchecked(AIsSet: LongBool; AObj: TGridColumn; AValue: PChar): PChar; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ValueUnchecked := AValue;
  end else
    Result := ToPChar(AObj.ValueUnchecked);
  handleExceptionEnd
end;

//function
function GridColumn_IsDefault(AObj: TGridColumn): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IsDefault();
  handleExceptionEnd
end;

//function
function GridColumn_Class(): TClass; extdecl;
begin
  Result := TGridColumn;
end;

//procedure
procedure GridColumn_FillDefaultFont(AObj: TGridColumn); extdecl;
begin
  handleExceptionBegin
  AObj.FillDefaultFont();
  handleExceptionEnd
end;

//procedure
procedure GridColumn_FixDesignFontsPPI(AObj: TGridColumn; const ADesignTimePPI: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.FixDesignFontsPPI(ADesignTimePPI);
  handleExceptionEnd
end;

//procedure
procedure GridColumn_ScaleFontsPPI(AObj: TGridColumn; const AToPPI: Integer; var AProportion: Double); extdecl;
begin
  handleExceptionBegin
  AObj.ScaleFontsPPI(AToPPI, AProportion);
  handleExceptionEnd
end;


exports
  GridColumn_Create,
  GridColumn_Grid,
  GridColumn_DefaultWidth,
  GridColumn_StoredWidth,
  GridColumn_WidthChanged,
  GridColumn_Alignment,
  GridColumn_ButtonStyle,
  GridColumn_Color,
  GridColumn_DropDownRows,
  GridColumn_Expanded,
  GridColumn_Font,
  GridColumn_Layout,
  GridColumn_MinSize,
  GridColumn_MaxSize,
  GridColumn_PickList,
  GridColumn_ReadOnly,
  GridColumn_SizePriority,
  GridColumn_Tag,
  GridColumn_Title,
  GridColumn_Width,
  GridColumn_Visible,
  GridColumn_ValueChecked,
  GridColumn_ValueUnchecked,
  GridColumn_IsDefault,
  GridColumn_Class,
  GridColumn_FillDefaultFont,
  GridColumn_FixDesignFontsPPI,
  GridColumn_ScaleFontsPPI;