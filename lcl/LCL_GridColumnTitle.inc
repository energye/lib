
//constructor
function GridColumnTitle_Create(TheColumn: TGridColumn): TGridColumnTitle; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TGridColumnTitle.Create(TheColumn);
  handleExceptionEnd
end;

//property
function GridColumnTitle_Column(AObj: TGridColumnTitle): TGridColumn; extdecl;
begin
  {$define handleExceptionFuncName :='Column'}
  handleExceptionBegin
  Result := AObj.Column;
  handleExceptionEnd
end;

//property
function GridColumnTitle_Alignment(AIsSet: LongBool; AObj: TGridColumnTitle; AValue: TAlignment): TAlignment; extdecl;
begin
  {$define handleExceptionFuncName :='Alignment'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Alignment := AValue;
  end else
    Result := AObj.Alignment;
  handleExceptionEnd
end;

//property
function GridColumnTitle_Caption(AIsSet: LongBool; AObj: TGridColumnTitle; AValue: PChar): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='Caption'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Caption := AValue;
  end else
    Result := ToPChar(AObj.Caption);
  handleExceptionEnd
end;

//property
function GridColumnTitle_Color(AIsSet: LongBool; AObj: TGridColumnTitle; AValue: TColor): TColor; extdecl;
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
function GridColumnTitle_Font(AIsSet: LongBool; AObj: TGridColumnTitle; AValue: TFont): TFont; extdecl;
begin
  {$define handleExceptionFuncName :='Font'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Font := AValue;
  end else
    Result := AObj.Font;
  handleExceptionEnd
end;

//property
function GridColumnTitle_ImageIndex(AIsSet: LongBool; AObj: TGridColumnTitle; AValue: TImageIndex): TImageIndex; extdecl;
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
function GridColumnTitle_ImageLayout(AIsSet: LongBool; AObj: TGridColumnTitle; AValue: TButtonLayout): TButtonLayout; extdecl;
begin
  {$define handleExceptionFuncName :='ImageLayout'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ImageLayout := AValue;
  end else
    Result := AObj.ImageLayout;
  handleExceptionEnd
end;

//property
function GridColumnTitle_Layout(AIsSet: LongBool; AObj: TGridColumnTitle; AValue: TTextLayout): TTextLayout; extdecl;
begin
  {$define handleExceptionFuncName :='Layout'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Layout := AValue;
  end else
    Result := AObj.Layout;
  handleExceptionEnd
end;

//property
function GridColumnTitle_MultiLine(AIsSet: LongBool; AObj: TGridColumnTitle; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='MultiLine'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.MultiLine := AValue;
  end else
    Result := AObj.MultiLine;
  handleExceptionEnd
end;

//property
function GridColumnTitle_PrefixOption(AIsSet: LongBool; AObj: TGridColumnTitle; AValue: TPrefixOption): TPrefixOption; extdecl;
begin
  {$define handleExceptionFuncName :='PrefixOption'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.PrefixOption := AValue;
  end else
    Result := AObj.PrefixOption;
  handleExceptionEnd
end;

//function
function GridColumnTitle_IsDefault(AObj: TGridColumnTitle): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='IsDefault'}
  handleExceptionBegin
  Result := AObj.IsDefault();
  handleExceptionEnd
end;

//function
function GridColumnTitle_Class(): TClass; extdecl;
begin
  Result := TGridColumnTitle;
end;

//procedure
procedure GridColumnTitle_FillTitleDefaultFont(AObj: TGridColumnTitle); extdecl;
begin
  {$define handleExceptionFuncName :='FillTitleDefaultFont'}
  handleExceptionBegin
  AObj.FillTitleDefaultFont();
  handleExceptionEnd
end;

//procedure
procedure GridColumnTitle_FixDesignFontsPPI(AObj: TGridColumnTitle; const ADesignTimePPI: Integer); extdecl;
begin
  {$define handleExceptionFuncName :='FixDesignFontsPPI'}
  handleExceptionBegin
  AObj.FixDesignFontsPPI(ADesignTimePPI);
  handleExceptionEnd
end;

//procedure
procedure GridColumnTitle_ScaleFontsPPI(AObj: TGridColumnTitle; const AToPPI: Integer; var AProportion: Double); extdecl;
begin
  {$define handleExceptionFuncName :='ScaleFontsPPI'}
  handleExceptionBegin
  AObj.ScaleFontsPPI(AToPPI, AProportion);
  handleExceptionEnd
end;


exports
  GridColumnTitle_Create,
  GridColumnTitle_Column,
  GridColumnTitle_Alignment,
  GridColumnTitle_Caption,
  GridColumnTitle_Color,
  GridColumnTitle_Font,
  GridColumnTitle_ImageIndex,
  GridColumnTitle_ImageLayout,
  GridColumnTitle_Layout,
  GridColumnTitle_MultiLine,
  GridColumnTitle_PrefixOption,
  GridColumnTitle_IsDefault,
  GridColumnTitle_Class,
  GridColumnTitle_FillTitleDefaultFont,
  GridColumnTitle_FixDesignFontsPPI,
  GridColumnTitle_ScaleFontsPPI;