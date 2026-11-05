// constructor
function TCoreWebView2PrintSettings_Create(const aBaseIntf: ICoreWebView2PrintSettings): TCoreWebView2PrintSettings; extdecl;
begin
  {$define handleExceptionID := 800}
  handleExceptionBegin
  Result := TCoreWebView2PrintSettings.Create(aBaseIntf);
  handleExceptionEnd
end;

// property
function TCoreWebView2PrintSettings_Initialized(AObj: TCoreWebView2PrintSettings): LongBool; extdecl;
begin
  {$define handleExceptionID := 801}
  handleExceptionBegin
  Result := AObj.Initialized;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2PrintSettings_BaseIntf(AObj: TCoreWebView2PrintSettings; var Result: ICoreWebView2PrintSettings); extdecl;
begin
  {$define handleExceptionID := 802}
  handleExceptionBegin
  Result := AObj.BaseIntf;
  handleExceptionEnd
end;

// property
function TCoreWebView2PrintSettings_Orientation(ASet: LongBool; AObj: TCoreWebView2PrintSettings; AValue: TWVPrintOrientation): TWVPrintOrientation; extdecl;
begin
  {$define handleExceptionID := 803}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Orientation := AValue
  end else
    Result := AObj.Orientation;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2PrintSettings_ScaleFactor(ASet: LongBool; AObj: TCoreWebView2PrintSettings; var AValue: double; var Result: double); extdecl;
begin
  {$define handleExceptionID := 804}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ScaleFactor := AValue
  end else
    Result := AObj.ScaleFactor;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2PrintSettings_PageWidth(ASet: LongBool; AObj: TCoreWebView2PrintSettings; var AValue: double; var Result: double); extdecl;
begin
  {$define handleExceptionID := 805}
  handleExceptionBegin
  if ASet then
  begin
    AObj.PageWidth := AValue
  end else
    Result := AObj.PageWidth;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2PrintSettings_PageHeight(ASet: LongBool; AObj: TCoreWebView2PrintSettings; var AValue: double; var Result: double); extdecl;
begin
  {$define handleExceptionID := 806}
  handleExceptionBegin
  if ASet then
  begin
    AObj.PageHeight := AValue
  end else
    Result := AObj.PageHeight;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2PrintSettings_MarginTop(ASet: LongBool; AObj: TCoreWebView2PrintSettings; var AValue: double; var Result: double); extdecl;
begin
  {$define handleExceptionID := 807}
  handleExceptionBegin
  if ASet then
  begin
    AObj.MarginTop := AValue
  end else
    Result := AObj.MarginTop;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2PrintSettings_MarginBottom(ASet: LongBool; AObj: TCoreWebView2PrintSettings; var AValue: double; var Result: double); extdecl;
begin
  {$define handleExceptionID := 808}
  handleExceptionBegin
  if ASet then
  begin
    AObj.MarginBottom := AValue
  end else
    Result := AObj.MarginBottom;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2PrintSettings_MarginLeft(ASet: LongBool; AObj: TCoreWebView2PrintSettings; var AValue: double; var Result: double); extdecl;
begin
  {$define handleExceptionID := 809}
  handleExceptionBegin
  if ASet then
  begin
    AObj.MarginLeft := AValue
  end else
    Result := AObj.MarginLeft;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2PrintSettings_MarginRight(ASet: LongBool; AObj: TCoreWebView2PrintSettings; var AValue: double; var Result: double); extdecl;
begin
  {$define handleExceptionID := 810}
  handleExceptionBegin
  if ASet then
  begin
    AObj.MarginRight := AValue
  end else
    Result := AObj.MarginRight;
  handleExceptionEnd
end;

// property
function TCoreWebView2PrintSettings_ShouldPrintBackgrounds(ASet: LongBool; AObj: TCoreWebView2PrintSettings; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 811}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ShouldPrintBackgrounds := AValue
  end else
    Result := AObj.ShouldPrintBackgrounds;
  handleExceptionEnd
end;

// property
function TCoreWebView2PrintSettings_ShouldPrintSelectionOnly(ASet: LongBool; AObj: TCoreWebView2PrintSettings; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 812}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ShouldPrintSelectionOnly := AValue
  end else
    Result := AObj.ShouldPrintSelectionOnly;
  handleExceptionEnd
end;

// property
function TCoreWebView2PrintSettings_ShouldPrintHeaderAndFooter(ASet: LongBool; AObj: TCoreWebView2PrintSettings; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 813}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ShouldPrintHeaderAndFooter := AValue
  end else
    Result := AObj.ShouldPrintHeaderAndFooter;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2PrintSettings_HeaderTitle(ASet: LongBool; AObj: TCoreWebView2PrintSettings; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 814}
  handleExceptionBegin
  if ASet then
  begin
    AObj.HeaderTitle := AValue
  end else
    StringBufferCreate(AObj.HeaderTitle, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TCoreWebView2PrintSettings_FooterUri(ASet: LongBool; AObj: TCoreWebView2PrintSettings; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 815}
  handleExceptionBegin
  if ASet then
  begin
    AObj.FooterUri := AValue
  end else
    StringBufferCreate(AObj.FooterUri, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TCoreWebView2PrintSettings_PageRanges(ASet: LongBool; AObj: TCoreWebView2PrintSettings; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 816}
  handleExceptionBegin
  if ASet then
  begin
    AObj.PageRanges := AValue
  end else
    StringBufferCreate(AObj.PageRanges, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TCoreWebView2PrintSettings_PagesPerSide(ASet: LongBool; AObj: TCoreWebView2PrintSettings; AValue: integer): integer; extdecl;
begin
  {$define handleExceptionID := 817}
  handleExceptionBegin
  if ASet then
  begin
    AObj.PagesPerSide := AValue
  end else
    Result := AObj.PagesPerSide;
  handleExceptionEnd
end;

// property
function TCoreWebView2PrintSettings_Copies(ASet: LongBool; AObj: TCoreWebView2PrintSettings; AValue: integer): integer; extdecl;
begin
  {$define handleExceptionID := 818}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Copies := AValue
  end else
    Result := AObj.Copies;
  handleExceptionEnd
end;

// property
function TCoreWebView2PrintSettings_Collation(ASet: LongBool; AObj: TCoreWebView2PrintSettings; AValue: TWVPrintCollation): TWVPrintCollation; extdecl;
begin
  {$define handleExceptionID := 819}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Collation := AValue
  end else
    Result := AObj.Collation;
  handleExceptionEnd
end;

// property
function TCoreWebView2PrintSettings_ColorMode(ASet: LongBool; AObj: TCoreWebView2PrintSettings; AValue: TWVPrintColorMode): TWVPrintColorMode; extdecl;
begin
  {$define handleExceptionID := 820}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ColorMode := AValue
  end else
    Result := AObj.ColorMode;
  handleExceptionEnd
end;

// property
function TCoreWebView2PrintSettings_Duplex(ASet: LongBool; AObj: TCoreWebView2PrintSettings; AValue: TWVPrintDuplex): TWVPrintDuplex; extdecl;
begin
  {$define handleExceptionID := 821}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Duplex := AValue
  end else
    Result := AObj.Duplex;
  handleExceptionEnd
end;

// property
function TCoreWebView2PrintSettings_MediaSize(ASet: LongBool; AObj: TCoreWebView2PrintSettings; AValue: TWVPrintMediaSize): TWVPrintMediaSize; extdecl;
begin
  {$define handleExceptionID := 822}
  handleExceptionBegin
  if ASet then
  begin
    AObj.MediaSize := AValue
  end else
    Result := AObj.MediaSize;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2PrintSettings_PrinterName(ASet: LongBool; AObj: TCoreWebView2PrintSettings; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 823}
  handleExceptionBegin
  if ASet then
  begin
    AObj.PrinterName := AValue
  end else
    StringBufferCreate(AObj.PrinterName, AStrData, AStrSize);
  handleExceptionEnd
end;

exports
  TCoreWebView2PrintSettings_Create,
  TCoreWebView2PrintSettings_Initialized,
  TCoreWebView2PrintSettings_BaseIntf,
  TCoreWebView2PrintSettings_Orientation,
  TCoreWebView2PrintSettings_ScaleFactor,
  TCoreWebView2PrintSettings_PageWidth,
  TCoreWebView2PrintSettings_PageHeight,
  TCoreWebView2PrintSettings_MarginTop,
  TCoreWebView2PrintSettings_MarginBottom,
  TCoreWebView2PrintSettings_MarginLeft,
  TCoreWebView2PrintSettings_MarginRight,
  TCoreWebView2PrintSettings_ShouldPrintBackgrounds,
  TCoreWebView2PrintSettings_ShouldPrintSelectionOnly,
  TCoreWebView2PrintSettings_ShouldPrintHeaderAndFooter,
  TCoreWebView2PrintSettings_HeaderTitle,
  TCoreWebView2PrintSettings_FooterUri,
  TCoreWebView2PrintSettings_PageRanges,
  TCoreWebView2PrintSettings_PagesPerSide,
  TCoreWebView2PrintSettings_Copies,
  TCoreWebView2PrintSettings_Collation,
  TCoreWebView2PrintSettings_ColorMode,
  TCoreWebView2PrintSettings_Duplex,
  TCoreWebView2PrintSettings_MediaSize,
  TCoreWebView2PrintSettings_PrinterName;