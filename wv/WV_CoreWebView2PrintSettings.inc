
//constructor
function CoreWebView2PrintSettings_Create(const aBaseIntf: ICoreWebView2PrintSettings): TCoreWebView2PrintSettings; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TCoreWebView2PrintSettings.Create(aBaseIntf);
  handleExceptionEnd
end;

//property
function CoreWebView2PrintSettings_Initialized(AObj: TCoreWebView2PrintSettings): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='Initialized'}
  handleExceptionBegin
  Result := AObj.Initialized;
  handleExceptionEnd
end;

//property
procedure CoreWebView2PrintSettings_BaseIntf(AObj: TCoreWebView2PrintSettings; var Result: ICoreWebView2PrintSettings); extdecl;
begin
  {$define handleExceptionFuncName :='BaseIntf'}
  handleExceptionBegin
  Result := AObj.BaseIntf;
  handleExceptionEnd
end;

//property
function CoreWebView2PrintSettings_Orientation(AIsSet: LongBool; AObj: TCoreWebView2PrintSettings; AValue: TWVPrintOrientation): TWVPrintOrientation; extdecl;
begin
  {$define handleExceptionFuncName :='Orientation'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Orientation := AValue;
  end else
    Result := AObj.Orientation;
  handleExceptionEnd
end;

//property
procedure CoreWebView2PrintSettings_ScaleFactor(AIsSet: LongBool; AObj: TCoreWebView2PrintSettings; var AValue: double; var Result: double); extdecl;
begin
  {$define handleExceptionFuncName :='ScaleFactor'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ScaleFactor := AValue;
  end else
    Result := AObj.ScaleFactor;
  handleExceptionEnd
end;

//property
procedure CoreWebView2PrintSettings_PageWidth(AIsSet: LongBool; AObj: TCoreWebView2PrintSettings; var AValue: double; var Result: double); extdecl;
begin
  {$define handleExceptionFuncName :='PageWidth'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.PageWidth := AValue;
  end else
    Result := AObj.PageWidth;
  handleExceptionEnd
end;

//property
procedure CoreWebView2PrintSettings_PageHeight(AIsSet: LongBool; AObj: TCoreWebView2PrintSettings; var AValue: double; var Result: double); extdecl;
begin
  {$define handleExceptionFuncName :='PageHeight'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.PageHeight := AValue;
  end else
    Result := AObj.PageHeight;
  handleExceptionEnd
end;

//property
procedure CoreWebView2PrintSettings_MarginTop(AIsSet: LongBool; AObj: TCoreWebView2PrintSettings; var AValue: double; var Result: double); extdecl;
begin
  {$define handleExceptionFuncName :='MarginTop'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.MarginTop := AValue;
  end else
    Result := AObj.MarginTop;
  handleExceptionEnd
end;

//property
procedure CoreWebView2PrintSettings_MarginBottom(AIsSet: LongBool; AObj: TCoreWebView2PrintSettings; var AValue: double; var Result: double); extdecl;
begin
  {$define handleExceptionFuncName :='MarginBottom'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.MarginBottom := AValue;
  end else
    Result := AObj.MarginBottom;
  handleExceptionEnd
end;

//property
procedure CoreWebView2PrintSettings_MarginLeft(AIsSet: LongBool; AObj: TCoreWebView2PrintSettings; var AValue: double; var Result: double); extdecl;
begin
  {$define handleExceptionFuncName :='MarginLeft'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.MarginLeft := AValue;
  end else
    Result := AObj.MarginLeft;
  handleExceptionEnd
end;

//property
procedure CoreWebView2PrintSettings_MarginRight(AIsSet: LongBool; AObj: TCoreWebView2PrintSettings; var AValue: double; var Result: double); extdecl;
begin
  {$define handleExceptionFuncName :='MarginRight'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.MarginRight := AValue;
  end else
    Result := AObj.MarginRight;
  handleExceptionEnd
end;

//property
function CoreWebView2PrintSettings_ShouldPrintBackgrounds(AIsSet: LongBool; AObj: TCoreWebView2PrintSettings; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='ShouldPrintBackgrounds'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ShouldPrintBackgrounds := AValue;
  end else
    Result := AObj.ShouldPrintBackgrounds;
  handleExceptionEnd
end;

//property
function CoreWebView2PrintSettings_ShouldPrintSelectionOnly(AIsSet: LongBool; AObj: TCoreWebView2PrintSettings; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='ShouldPrintSelectionOnly'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ShouldPrintSelectionOnly := AValue;
  end else
    Result := AObj.ShouldPrintSelectionOnly;
  handleExceptionEnd
end;

//property
function CoreWebView2PrintSettings_ShouldPrintHeaderAndFooter(AIsSet: LongBool; AObj: TCoreWebView2PrintSettings; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='ShouldPrintHeaderAndFooter'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ShouldPrintHeaderAndFooter := AValue;
  end else
    Result := AObj.ShouldPrintHeaderAndFooter;
  handleExceptionEnd
end;

//property
function CoreWebView2PrintSettings_HeaderTitle(AIsSet: LongBool; AObj: TCoreWebView2PrintSettings; AValue: PChar): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='HeaderTitle'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.HeaderTitle := AValue;
  end else
    Result := ToPChar(AObj.HeaderTitle);
  handleExceptionEnd
end;

//property
function CoreWebView2PrintSettings_FooterUri(AIsSet: LongBool; AObj: TCoreWebView2PrintSettings; AValue: PChar): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='FooterUri'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.FooterUri := AValue;
  end else
    Result := ToPChar(AObj.FooterUri);
  handleExceptionEnd
end;

//property
function CoreWebView2PrintSettings_PageRanges(AIsSet: LongBool; AObj: TCoreWebView2PrintSettings; AValue: PChar): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='PageRanges'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.PageRanges := AValue;
  end else
    Result := ToPChar(AObj.PageRanges);
  handleExceptionEnd
end;

//property
function CoreWebView2PrintSettings_PagesPerSide(AIsSet: LongBool; AObj: TCoreWebView2PrintSettings; AValue: integer): integer; extdecl;
begin
  {$define handleExceptionFuncName :='PagesPerSide'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.PagesPerSide := AValue;
  end else
    Result := AObj.PagesPerSide;
  handleExceptionEnd
end;

//property
function CoreWebView2PrintSettings_Copies(AIsSet: LongBool; AObj: TCoreWebView2PrintSettings; AValue: integer): integer; extdecl;
begin
  {$define handleExceptionFuncName :='Copies'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Copies := AValue;
  end else
    Result := AObj.Copies;
  handleExceptionEnd
end;

//property
function CoreWebView2PrintSettings_Collation(AIsSet: LongBool; AObj: TCoreWebView2PrintSettings; AValue: TWVPrintCollation): TWVPrintCollation; extdecl;
begin
  {$define handleExceptionFuncName :='Collation'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Collation := AValue;
  end else
    Result := AObj.Collation;
  handleExceptionEnd
end;

//property
function CoreWebView2PrintSettings_ColorMode(AIsSet: LongBool; AObj: TCoreWebView2PrintSettings; AValue: TWVPrintColorMode): TWVPrintColorMode; extdecl;
begin
  {$define handleExceptionFuncName :='ColorMode'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ColorMode := AValue;
  end else
    Result := AObj.ColorMode;
  handleExceptionEnd
end;

//property
function CoreWebView2PrintSettings_Duplex(AIsSet: LongBool; AObj: TCoreWebView2PrintSettings; AValue: TWVPrintDuplex): TWVPrintDuplex; extdecl;
begin
  {$define handleExceptionFuncName :='Duplex'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Duplex := AValue;
  end else
    Result := AObj.Duplex;
  handleExceptionEnd
end;

//property
function CoreWebView2PrintSettings_MediaSize(AIsSet: LongBool; AObj: TCoreWebView2PrintSettings; AValue: TWVPrintMediaSize): TWVPrintMediaSize; extdecl;
begin
  {$define handleExceptionFuncName :='MediaSize'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.MediaSize := AValue;
  end else
    Result := AObj.MediaSize;
  handleExceptionEnd
end;

//property
function CoreWebView2PrintSettings_PrinterName(AIsSet: LongBool; AObj: TCoreWebView2PrintSettings; AValue: PChar): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='PrinterName'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.PrinterName := AValue;
  end else
    Result := ToPChar(AObj.PrinterName);
  handleExceptionEnd
end;


exports
  CoreWebView2PrintSettings_Create,
  CoreWebView2PrintSettings_Initialized,
  CoreWebView2PrintSettings_BaseIntf,
  CoreWebView2PrintSettings_Orientation,
  CoreWebView2PrintSettings_ScaleFactor,
  CoreWebView2PrintSettings_PageWidth,
  CoreWebView2PrintSettings_PageHeight,
  CoreWebView2PrintSettings_MarginTop,
  CoreWebView2PrintSettings_MarginBottom,
  CoreWebView2PrintSettings_MarginLeft,
  CoreWebView2PrintSettings_MarginRight,
  CoreWebView2PrintSettings_ShouldPrintBackgrounds,
  CoreWebView2PrintSettings_ShouldPrintSelectionOnly,
  CoreWebView2PrintSettings_ShouldPrintHeaderAndFooter,
  CoreWebView2PrintSettings_HeaderTitle,
  CoreWebView2PrintSettings_FooterUri,
  CoreWebView2PrintSettings_PageRanges,
  CoreWebView2PrintSettings_PagesPerSide,
  CoreWebView2PrintSettings_Copies,
  CoreWebView2PrintSettings_Collation,
  CoreWebView2PrintSettings_ColorMode,
  CoreWebView2PrintSettings_Duplex,
  CoreWebView2PrintSettings_MediaSize,
  CoreWebView2PrintSettings_PrinterName;