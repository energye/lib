// constructor
function TGridColumnTitle_Create(TheColumn: TGridColumn): TGridColumnTitle; extdecl;
begin
  {$define handleExceptionID := 23000}
  handleExceptionBegin
  Result := TGridColumnTitle.Create(TheColumn);
  handleExceptionEnd
end;

// function
function TGridColumnTitle_IsDefault(AObj: TGridColumnTitle): LongBool; extdecl;
begin
  {$define handleExceptionID := 23001}
  handleExceptionBegin
  Result := AObj.IsDefault();
  handleExceptionEnd
end;

// procedure
procedure TGridColumnTitle_FillTitleDefaultFont(AObj: TGridColumnTitle); extdecl;
begin
  {$define handleExceptionID := 23002}
  handleExceptionBegin
  AObj.FillTitleDefaultFont();
  handleExceptionEnd
end;

// procedure
procedure TGridColumnTitle_FixDesignFontsPPI(AObj: TGridColumnTitle; const ADesignTimePPI: Integer); extdecl;
begin
  {$define handleExceptionID := 23003}
  handleExceptionBegin
  AObj.FixDesignFontsPPI(ADesignTimePPI);
  handleExceptionEnd
end;

// procedure
procedure TGridColumnTitle_ScaleFontsPPI(AObj: TGridColumnTitle; const AToPPI: Integer; var AProportion: Double); extdecl;
begin
  {$define handleExceptionID := 23004}
  handleExceptionBegin
  AObj.ScaleFontsPPI(AToPPI, AProportion);
  handleExceptionEnd
end;

// property
function TGridColumnTitle_Column(AObj: TGridColumnTitle): TGridColumn; extdecl;
begin
  {$define handleExceptionID := 23005}
  handleExceptionBegin
  Result := AObj.Column;
  handleExceptionEnd
end;

// property
function TGridColumnTitle_Alignment(ASet: LongBool; AObj: TGridColumnTitle; AValue: TAlignment): TAlignment; extdecl;
begin
  {$define handleExceptionID := 23006}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Alignment := AValue
  end else
    Result := AObj.Alignment;
  handleExceptionEnd
end;

// property
procedure TGridColumnTitle_Caption(ASet: LongBool; AObj: TGridColumnTitle; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 23007}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Caption := AValue
  end else
    StringBufferCreate(AObj.Caption, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TGridColumnTitle_Color(ASet: LongBool; AObj: TGridColumnTitle; AValue: TColor): TColor; extdecl;
begin
  {$define handleExceptionID := 23008}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Color := AValue
  end else
    Result := AObj.Color;
  handleExceptionEnd
end;

// property
function TGridColumnTitle_Font(ASet: LongBool; AObj: TGridColumnTitle; AValue: TFont): TFont; extdecl;
begin
  {$define handleExceptionID := 23009}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Font := AValue
  end else
    Result := AObj.Font;
  handleExceptionEnd
end;

// property
function TGridColumnTitle_ImageIndex(ASet: LongBool; AObj: TGridColumnTitle; AValue: TImageIndex): TImageIndex; extdecl;
begin
  {$define handleExceptionID := 23010}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ImageIndex := AValue
  end else
    Result := AObj.ImageIndex;
  handleExceptionEnd
end;

// property
function TGridColumnTitle_ImageLayout(ASet: LongBool; AObj: TGridColumnTitle; AValue: TButtonLayout): TButtonLayout; extdecl;
begin
  {$define handleExceptionID := 23011}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ImageLayout := AValue
  end else
    Result := AObj.ImageLayout;
  handleExceptionEnd
end;

// property
function TGridColumnTitle_Layout(ASet: LongBool; AObj: TGridColumnTitle; AValue: TTextLayout): TTextLayout; extdecl;
begin
  {$define handleExceptionID := 23012}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Layout := AValue
  end else
    Result := AObj.Layout;
  handleExceptionEnd
end;

// property
function TGridColumnTitle_MultiLine(ASet: LongBool; AObj: TGridColumnTitle; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 23013}
  handleExceptionBegin
  if ASet then
  begin
    AObj.MultiLine := AValue
  end else
    Result := AObj.MultiLine;
  handleExceptionEnd
end;

// property
function TGridColumnTitle_PrefixOption(ASet: LongBool; AObj: TGridColumnTitle; AValue: TPrefixOption): TPrefixOption; extdecl;
begin
  {$define handleExceptionID := 23014}
  handleExceptionBegin
  if ASet then
  begin
    AObj.PrefixOption := AValue
  end else
    Result := AObj.PrefixOption;
  handleExceptionEnd
end;

exports
  TGridColumnTitle_Create,
  TGridColumnTitle_IsDefault,
  TGridColumnTitle_FillTitleDefaultFont,
  TGridColumnTitle_FixDesignFontsPPI,
  TGridColumnTitle_ScaleFontsPPI,
  TGridColumnTitle_Column,
  TGridColumnTitle_Alignment,
  TGridColumnTitle_Caption,
  TGridColumnTitle_Color,
  TGridColumnTitle_Font,
  TGridColumnTitle_ImageIndex,
  TGridColumnTitle_ImageLayout,
  TGridColumnTitle_Layout,
  TGridColumnTitle_MultiLine,
  TGridColumnTitle_PrefixOption;