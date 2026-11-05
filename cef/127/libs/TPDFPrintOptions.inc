// constructor
function TPDFPrintOptions_Create(): TPDFPrintOptions; extdecl;
begin
  {$define handleExceptionID := 3000}
  handleExceptionBegin
  Result := TPDFPrintOptions.Create();
  handleExceptionEnd
end;

// procedure
procedure TPDFPrintOptions_CopyToSettings(AObj: TPDFPrintOptions; var aSettings: TCefPdfPrintSettingsPtr); extdecl;
var
  OutaSettings: TCefPdfPrintSettings;
begin
  {$define handleExceptionID := 3001}
  handleExceptionBegin
  OutaSettings := TCefPdfPrintSettingsToPas(aSettings);
  AObj.CopyToSettings(OutaSettings);
  aSettings := TCefPdfPrintSettingsToGo(OutaSettings);
  handleExceptionEnd
end;

// property
function TPDFPrintOptions_Landscape(ASet: LongBool; AObj: TPDFPrintOptions; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 3002}
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
  {$define handleExceptionID := 3003}
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
  {$define handleExceptionID := 3004}
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
  {$define handleExceptionID := 3005}
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
  {$define handleExceptionID := 3006}
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
  {$define handleExceptionID := 3007}
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
  {$define handleExceptionID := 3008}
  handleExceptionBegin
  if ASet then
  begin
    AObj.FooterTemplate := AValue
  end else
    StringBufferCreate(AObj.FooterTemplate, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TPDFPrintOptions_GenerateTaggedPDF(ASet: LongBool; AObj: TPDFPrintOptions; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 3009}
  handleExceptionBegin
  if ASet then
  begin
    AObj.GenerateTaggedPDF := AValue
  end else
    Result := AObj.GenerateTaggedPDF;
  handleExceptionEnd
end;

// property
function TPDFPrintOptions_GenerateDocumentOutline(ASet: LongBool; AObj: TPDFPrintOptions; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 3010}
  handleExceptionBegin
  if ASet then
  begin
    AObj.GenerateDocumentOutline := AValue
  end else
    Result := AObj.GenerateDocumentOutline;
  handleExceptionEnd
end;

// property
procedure TPDFPrintOptions_Scale(ASet: LongBool; AObj: TPDFPrintOptions; var AValue: double; var Result: double); extdecl;
begin
  {$define handleExceptionID := 3011}
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
  {$define handleExceptionID := 3012}
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
  {$define handleExceptionID := 3013}
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
  {$define handleExceptionID := 3014}
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
  {$define handleExceptionID := 3015}
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
  {$define handleExceptionID := 3016}
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
  {$define handleExceptionID := 3017}
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
  {$define handleExceptionID := 3018}
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
  {$define handleExceptionID := 3019}
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
  {$define handleExceptionID := 3020}
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
  {$define handleExceptionID := 3021}
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
  {$define handleExceptionID := 3022}
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
  {$define handleExceptionID := 3023}
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
  {$define handleExceptionID := 3024}
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
  {$define handleExceptionID := 3025}
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
  TPDFPrintOptions_GenerateTaggedPDF,
  TPDFPrintOptions_GenerateDocumentOutline,
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