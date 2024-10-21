
//constructor
function PDFPrintOptions_Create(): TPDFPrintOptions; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TPDFPrintOptions.Create();
  handleExceptionEnd
end;

//property
function PDFPrintOptions_Landscape(AIsSet: LongBool; AObj: TPDFPrintOptions; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='Landscape'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Landscape := AValue;
  end else
    Result := AObj.Landscape;
  handleExceptionEnd
end;

//property
function PDFPrintOptions_PrintBackground(AIsSet: LongBool; AObj: TPDFPrintOptions; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='PrintBackground'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.PrintBackground := AValue;
  end else
    Result := AObj.PrintBackground;
  handleExceptionEnd
end;

//property
function PDFPrintOptions_PreferCSSPageSize(AIsSet: LongBool; AObj: TPDFPrintOptions; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='PreferCSSPageSize'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.PreferCSSPageSize := AValue;
  end else
    Result := AObj.PreferCSSPageSize;
  handleExceptionEnd
end;

//property
function PDFPrintOptions_PageRanges(AIsSet: LongBool; AObj: TPDFPrintOptions; AValue: PChar): PChar; extdecl;
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
function PDFPrintOptions_DisplayHeaderFooter(AIsSet: LongBool; AObj: TPDFPrintOptions; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='DisplayHeaderFooter'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DisplayHeaderFooter := AValue;
  end else
    Result := AObj.DisplayHeaderFooter;
  handleExceptionEnd
end;

//property
function PDFPrintOptions_HeaderTemplate(AIsSet: LongBool; AObj: TPDFPrintOptions; AValue: PChar): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='HeaderTemplate'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.HeaderTemplate := AValue;
  end else
    Result := ToPChar(AObj.HeaderTemplate);
  handleExceptionEnd
end;

//property
function PDFPrintOptions_FooterTemplate(AIsSet: LongBool; AObj: TPDFPrintOptions; AValue: PChar): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='FooterTemplate'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.FooterTemplate := AValue;
  end else
    Result := ToPChar(AObj.FooterTemplate);
  handleExceptionEnd
end;

//property
function PDFPrintOptions_GenerateTaggedPDF(AIsSet: LongBool; AObj: TPDFPrintOptions; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='GenerateTaggedPDF'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.GenerateTaggedPDF := AValue;
  end else
    Result := AObj.GenerateTaggedPDF;
  handleExceptionEnd
end;

//property
procedure PDFPrintOptions_Scale(AIsSet: LongBool; AObj: TPDFPrintOptions; var AValue: double; var Result: double); extdecl;
begin
  {$define handleExceptionFuncName :='Scale'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Scale := AValue;
  end else
    Result := AObj.Scale;
  handleExceptionEnd
end;

//property
procedure PDFPrintOptions_ScalePct(AIsSet: LongBool; AObj: TPDFPrintOptions; var AValue: double; var Result: double); extdecl;
begin
  {$define handleExceptionFuncName :='ScalePct'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ScalePct := AValue;
  end else
    Result := AObj.ScalePct;
  handleExceptionEnd
end;

//property
procedure PDFPrintOptions_PaperWidthInch(AIsSet: LongBool; AObj: TPDFPrintOptions; var AValue: double; var Result: double); extdecl;
begin
  {$define handleExceptionFuncName :='PaperWidthInch'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.PaperWidthInch := AValue;
  end else
    Result := AObj.PaperWidthInch;
  handleExceptionEnd
end;

//property
procedure PDFPrintOptions_PaperHeightInch(AIsSet: LongBool; AObj: TPDFPrintOptions; var AValue: double; var Result: double); extdecl;
begin
  {$define handleExceptionFuncName :='PaperHeightInch'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.PaperHeightInch := AValue;
  end else
    Result := AObj.PaperHeightInch;
  handleExceptionEnd
end;

//property
procedure PDFPrintOptions_PaperWidthMM(AIsSet: LongBool; AObj: TPDFPrintOptions; var AValue: double; var Result: double); extdecl;
begin
  {$define handleExceptionFuncName :='PaperWidthMM'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.PaperWidthMM := AValue;
  end else
    Result := AObj.PaperWidthMM;
  handleExceptionEnd
end;

//property
procedure PDFPrintOptions_PaperHeightMM(AIsSet: LongBool; AObj: TPDFPrintOptions; var AValue: double; var Result: double); extdecl;
begin
  {$define handleExceptionFuncName :='PaperHeightMM'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.PaperHeightMM := AValue;
  end else
    Result := AObj.PaperHeightMM;
  handleExceptionEnd
end;

//property
function PDFPrintOptions_MarginType(AIsSet: LongBool; AObj: TPDFPrintOptions; AValue: TCefPdfPrintMarginType): TCefPdfPrintMarginType; extdecl;
begin
  {$define handleExceptionFuncName :='MarginType'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.MarginType := AValue;
  end else
    Result := AObj.MarginType;
  handleExceptionEnd
end;

//property
procedure PDFPrintOptions_MarginTopInch(AIsSet: LongBool; AObj: TPDFPrintOptions; var AValue: double; var Result: double); extdecl;
begin
  {$define handleExceptionFuncName :='MarginTopInch'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.MarginTopInch := AValue;
  end else
    Result := AObj.MarginTopInch;
  handleExceptionEnd
end;

//property
procedure PDFPrintOptions_MarginRightInch(AIsSet: LongBool; AObj: TPDFPrintOptions; var AValue: double; var Result: double); extdecl;
begin
  {$define handleExceptionFuncName :='MarginRightInch'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.MarginRightInch := AValue;
  end else
    Result := AObj.MarginRightInch;
  handleExceptionEnd
end;

//property
procedure PDFPrintOptions_MarginBottomInch(AIsSet: LongBool; AObj: TPDFPrintOptions; var AValue: double; var Result: double); extdecl;
begin
  {$define handleExceptionFuncName :='MarginBottomInch'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.MarginBottomInch := AValue;
  end else
    Result := AObj.MarginBottomInch;
  handleExceptionEnd
end;

//property
procedure PDFPrintOptions_MarginLeftInch(AIsSet: LongBool; AObj: TPDFPrintOptions; var AValue: double; var Result: double); extdecl;
begin
  {$define handleExceptionFuncName :='MarginLeftInch'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.MarginLeftInch := AValue;
  end else
    Result := AObj.MarginLeftInch;
  handleExceptionEnd
end;

//property
procedure PDFPrintOptions_MarginTopMM(AIsSet: LongBool; AObj: TPDFPrintOptions; var AValue: double; var Result: double); extdecl;
begin
  {$define handleExceptionFuncName :='MarginTopMM'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.MarginTopMM := AValue;
  end else
    Result := AObj.MarginTopMM;
  handleExceptionEnd
end;

//property
procedure PDFPrintOptions_MarginRightMM(AIsSet: LongBool; AObj: TPDFPrintOptions; var AValue: double; var Result: double); extdecl;
begin
  {$define handleExceptionFuncName :='MarginRightMM'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.MarginRightMM := AValue;
  end else
    Result := AObj.MarginRightMM;
  handleExceptionEnd
end;

//property
procedure PDFPrintOptions_MarginBottomMM(AIsSet: LongBool; AObj: TPDFPrintOptions; var AValue: double; var Result: double); extdecl;
begin
  {$define handleExceptionFuncName :='MarginBottomMM'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.MarginBottomMM := AValue;
  end else
    Result := AObj.MarginBottomMM;
  handleExceptionEnd
end;

//property
procedure PDFPrintOptions_MarginLeftMM(AIsSet: LongBool; AObj: TPDFPrintOptions; var AValue: double; var Result: double); extdecl;
begin
  {$define handleExceptionFuncName :='MarginLeftMM'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.MarginLeftMM := AValue;
  end else
    Result := AObj.MarginLeftMM;
  handleExceptionEnd
end;

//procedure
procedure PDFPrintOptions_CopyToSettings(AObj: TPDFPrintOptions; var aSettings: PEngPdfPrintSettingsPtr); extdecl;
var
  InaSettings: TCefPdfPrintSettings;
  RetaSettings: TEngPdfPrintSettingsPtr;
begin
  {$define handleExceptionFuncName :='CopyToSettings'}
  handleExceptionBegin
  AObj.CopyToSettings(InaSettings);
  RetaSettings := EngPdfPrintSettingsToGo(InaSettings);
  aSettings := @RetaSettings;
  handleExceptionEnd
end;


exports
  PDFPrintOptions_Create,
  PDFPrintOptions_Landscape,
  PDFPrintOptions_PrintBackground,
  PDFPrintOptions_PreferCSSPageSize,
  PDFPrintOptions_PageRanges,
  PDFPrintOptions_DisplayHeaderFooter,
  PDFPrintOptions_HeaderTemplate,
  PDFPrintOptions_FooterTemplate,
  PDFPrintOptions_GenerateTaggedPDF,
  PDFPrintOptions_Scale,
  PDFPrintOptions_ScalePct,
  PDFPrintOptions_PaperWidthInch,
  PDFPrintOptions_PaperHeightInch,
  PDFPrintOptions_PaperWidthMM,
  PDFPrintOptions_PaperHeightMM,
  PDFPrintOptions_MarginType,
  PDFPrintOptions_MarginTopInch,
  PDFPrintOptions_MarginRightInch,
  PDFPrintOptions_MarginBottomInch,
  PDFPrintOptions_MarginLeftInch,
  PDFPrintOptions_MarginTopMM,
  PDFPrintOptions_MarginRightMM,
  PDFPrintOptions_MarginBottomMM,
  PDFPrintOptions_MarginLeftMM,
  PDFPrintOptions_CopyToSettings;