// constructor
function TPDFPrintOptions_Create(): TPDFPrintOptions; extdecl;
begin
  {$define handleExceptionID := 2900}
  handleExceptionBegin
  Result := TPDFPrintOptions.Create();
  handleExceptionEnd
end;

// procedure
procedure TPDFPrintOptions_CopyToSettings(AObj: TPDFPrintOptions; var aSettings: TCefPdfPrintSettingsPtr); extdecl;
var
  OutaSettings: TCefPdfPrintSettings;
begin
  {$define handleExceptionID := 2901}
  handleExceptionBegin
  OutaSettings := TCefPdfPrintSettingsToPas(aSettings);
  AObj.CopyToSettings(OutaSettings);
  aSettings := TCefPdfPrintSettingsToGo(OutaSettings);
  handleExceptionEnd
end;

// property
function TPDFPrintOptions_Landscape(ASet: LongBool; AObj: TPDFPrintOptions; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 2902}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Landscape := AValue
  end else
    Result := AObj.Landscape;
  handleExceptionEnd
end;

// property
function TPDFPrintOptions_PrintBackground(ASet: LongBool; AObj: TPDFPrintOptions; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 2903}
  handleExceptionBegin
  if ASet then
  begin
    AObj.PrintBackground := AValue
  end else
    Result := AObj.PrintBackground;
  handleExceptionEnd
end;

// property
function TPDFPrintOptions_PreferCSSPageSize(ASet: LongBool; AObj: TPDFPrintOptions; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 2904}
  handleExceptionBegin
  if ASet then
  begin
    AObj.PreferCSSPageSize := AValue
  end else
    Result := AObj.PreferCSSPageSize;
  handleExceptionEnd
end;

// property
procedure TPDFPrintOptions_PageRanges(ASet: LongBool; AObj: TPDFPrintOptions; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 2905}
  handleExceptionBegin
  if ASet then
  begin
    AObj.PageRanges := AValue
  end else
    StringBufferCreate(AObj.PageRanges, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TPDFPrintOptions_DisplayHeaderFooter(ASet: LongBool; AObj: TPDFPrintOptions; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 2906}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DisplayHeaderFooter := AValue
  end else
    Result := AObj.DisplayHeaderFooter;
  handleExceptionEnd
end;

// property
procedure TPDFPrintOptions_HeaderTemplate(ASet: LongBool; AObj: TPDFPrintOptions; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 2907}
  handleExceptionBegin
  if ASet then
  begin
    AObj.HeaderTemplate := AValue
  end else
    StringBufferCreate(AObj.HeaderTemplate, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TPDFPrintOptions_FooterTemplate(ASet: LongBool; AObj: TPDFPrintOptions; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 2908}
  handleExceptionBegin
  if ASet then
  begin
    AObj.FooterTemplate := AValue
  end else
    StringBufferCreate(AObj.FooterTemplate, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TPDFPrintOptions_Scale(ASet: LongBool; AObj: TPDFPrintOptions; var AValue: double; var Result: double); extdecl;
begin
  {$define handleExceptionID := 2909}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Scale := AValue
  end else
    Result := AObj.Scale;
  handleExceptionEnd
end;

// property
procedure TPDFPrintOptions_ScalePct(ASet: LongBool; AObj: TPDFPrintOptions; var AValue: double; var Result: double); extdecl;
begin
  {$define handleExceptionID := 2910}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ScalePct := AValue
  end else
    Result := AObj.ScalePct;
  handleExceptionEnd
end;

// property
procedure TPDFPrintOptions_PaperWidthInch(ASet: LongBool; AObj: TPDFPrintOptions; var AValue: double; var Result: double); extdecl;
begin
  {$define handleExceptionID := 2911}
  handleExceptionBegin
  if ASet then
  begin
    AObj.PaperWidthInch := AValue
  end else
    Result := AObj.PaperWidthInch;
  handleExceptionEnd
end;

// property
procedure TPDFPrintOptions_PaperHeightInch(ASet: LongBool; AObj: TPDFPrintOptions; var AValue: double; var Result: double); extdecl;
begin
  {$define handleExceptionID := 2912}
  handleExceptionBegin
  if ASet then
  begin
    AObj.PaperHeightInch := AValue
  end else
    Result := AObj.PaperHeightInch;
  handleExceptionEnd
end;

// property
procedure TPDFPrintOptions_PaperWidthMM(ASet: LongBool; AObj: TPDFPrintOptions; var AValue: double; var Result: double); extdecl;
begin
  {$define handleExceptionID := 2913}
  handleExceptionBegin
  if ASet then
  begin
    AObj.PaperWidthMM := AValue
  end else
    Result := AObj.PaperWidthMM;
  handleExceptionEnd
end;

// property
procedure TPDFPrintOptions_PaperHeightMM(ASet: LongBool; AObj: TPDFPrintOptions; var AValue: double; var Result: double); extdecl;
begin
  {$define handleExceptionID := 2914}
  handleExceptionBegin
  if ASet then
  begin
    AObj.PaperHeightMM := AValue
  end else
    Result := AObj.PaperHeightMM;
  handleExceptionEnd
end;

// property
function TPDFPrintOptions_MarginType(ASet: LongBool; AObj: TPDFPrintOptions; AValue: TCefPdfPrintMarginType): TCefPdfPrintMarginType; extdecl;
begin
  {$define handleExceptionID := 2915}
  handleExceptionBegin
  if ASet then
  begin
    AObj.MarginType := AValue
  end else
    Result := AObj.MarginType;
  handleExceptionEnd
end;

// property
procedure TPDFPrintOptions_MarginTopInch(ASet: LongBool; AObj: TPDFPrintOptions; var AValue: double; var Result: double); extdecl;
begin
  {$define handleExceptionID := 2916}
  handleExceptionBegin
  if ASet then
  begin
    AObj.MarginTopInch := AValue
  end else
    Result := AObj.MarginTopInch;
  handleExceptionEnd
end;

// property
procedure TPDFPrintOptions_MarginRightInch(ASet: LongBool; AObj: TPDFPrintOptions; var AValue: double; var Result: double); extdecl;
begin
  {$define handleExceptionID := 2917}
  handleExceptionBegin
  if ASet then
  begin
    AObj.MarginRightInch := AValue
  end else
    Result := AObj.MarginRightInch;
  handleExceptionEnd
end;

// property
procedure TPDFPrintOptions_MarginBottomInch(ASet: LongBool; AObj: TPDFPrintOptions; var AValue: double; var Result: double); extdecl;
begin
  {$define handleExceptionID := 2918}
  handleExceptionBegin
  if ASet then
  begin
    AObj.MarginBottomInch := AValue
  end else
    Result := AObj.MarginBottomInch;
  handleExceptionEnd
end;

// property
procedure TPDFPrintOptions_MarginLeftInch(ASet: LongBool; AObj: TPDFPrintOptions; var AValue: double; var Result: double); extdecl;
begin
  {$define handleExceptionID := 2919}
  handleExceptionBegin
  if ASet then
  begin
    AObj.MarginLeftInch := AValue
  end else
    Result := AObj.MarginLeftInch;
  handleExceptionEnd
end;

// property
procedure TPDFPrintOptions_MarginTopMM(ASet: LongBool; AObj: TPDFPrintOptions; var AValue: double; var Result: double); extdecl;
begin
  {$define handleExceptionID := 2920}
  handleExceptionBegin
  if ASet then
  begin
    AObj.MarginTopMM := AValue
  end else
    Result := AObj.MarginTopMM;
  handleExceptionEnd
end;

// property
procedure TPDFPrintOptions_MarginRightMM(ASet: LongBool; AObj: TPDFPrintOptions; var AValue: double; var Result: double); extdecl;
begin
  {$define handleExceptionID := 2921}
  handleExceptionBegin
  if ASet then
  begin
    AObj.MarginRightMM := AValue
  end else
    Result := AObj.MarginRightMM;
  handleExceptionEnd
end;

// property
procedure TPDFPrintOptions_MarginBottomMM(ASet: LongBool; AObj: TPDFPrintOptions; var AValue: double; var Result: double); extdecl;
begin
  {$define handleExceptionID := 2922}
  handleExceptionBegin
  if ASet then
  begin
    AObj.MarginBottomMM := AValue
  end else
    Result := AObj.MarginBottomMM;
  handleExceptionEnd
end;

// property
procedure TPDFPrintOptions_MarginLeftMM(ASet: LongBool; AObj: TPDFPrintOptions; var AValue: double; var Result: double); extdecl;
begin
  {$define handleExceptionID := 2923}
  handleExceptionBegin
  if ASet then
  begin
    AObj.MarginLeftMM := AValue
  end else
    Result := AObj.MarginLeftMM;
  handleExceptionEnd
end;

exports
  TPDFPrintOptions_Create,
  TPDFPrintOptions_CopyToSettings,
  TPDFPrintOptions_Landscape,
  TPDFPrintOptions_PrintBackground,
  TPDFPrintOptions_PreferCSSPageSize,
  TPDFPrintOptions_PageRanges,
  TPDFPrintOptions_DisplayHeaderFooter,
  TPDFPrintOptions_HeaderTemplate,
  TPDFPrintOptions_FooterTemplate,
  TPDFPrintOptions_Scale,
  TPDFPrintOptions_ScalePct,
  TPDFPrintOptions_PaperWidthInch,
  TPDFPrintOptions_PaperHeightInch,
  TPDFPrintOptions_PaperWidthMM,
  TPDFPrintOptions_PaperHeightMM,
  TPDFPrintOptions_MarginType,
  TPDFPrintOptions_MarginTopInch,
  TPDFPrintOptions_MarginRightInch,
  TPDFPrintOptions_MarginBottomInch,
  TPDFPrintOptions_MarginLeftInch,
  TPDFPrintOptions_MarginTopMM,
  TPDFPrintOptions_MarginRightMM,
  TPDFPrintOptions_MarginBottomMM,
  TPDFPrintOptions_MarginLeftMM;