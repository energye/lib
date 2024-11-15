
//constructor
function PDFPrintOptions_Create(): TPDFPrintOptions; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TPDFPrintOptions.Create();
  handleExceptionEnd
end;

//property
function PDFPrintOptions_PageWidth(AIsSet: LongBool; AObj: TPDFPrintOptions; AValue: integer): integer; extdecl;
begin
  {$define handleExceptionFuncName :='PageWidth'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.page_width := AValue;
  end else
    Result := AObj.page_width;
  handleExceptionEnd
end;

//property
function PDFPrintOptions_PageHeight(AIsSet: LongBool; AObj: TPDFPrintOptions; AValue: integer): integer; extdecl;
begin
  {$define handleExceptionFuncName :='PageHeight'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.page_height := AValue;
  end else
    Result := AObj.page_height;
  handleExceptionEnd
end;

//property
function PDFPrintOptions_ScaleFactor(AIsSet: LongBool; AObj: TPDFPrintOptions; AValue: integer): integer; extdecl;
begin
  {$define handleExceptionFuncName :='ScaleFactor'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.scale_factor := AValue;
  end else
    Result := AObj.scale_factor;
  handleExceptionEnd
end;

//property
function PDFPrintOptions_MarginTop(AIsSet: LongBool; AObj: TPDFPrintOptions; AValue: integer): integer; extdecl;
begin
  {$define handleExceptionFuncName :='MarginTop'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.margin_top := AValue;
  end else
    Result := AObj.margin_top;
  handleExceptionEnd
end;

//property
function PDFPrintOptions_MarginRight(AIsSet: LongBool; AObj: TPDFPrintOptions; AValue: integer): integer; extdecl;
begin
  {$define handleExceptionFuncName :='MarginRight'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.margin_right := AValue;
  end else
    Result := AObj.margin_right;
  handleExceptionEnd
end;

//property
function PDFPrintOptions_MarginBottom(AIsSet: LongBool; AObj: TPDFPrintOptions; AValue: integer): integer; extdecl;
begin
  {$define handleExceptionFuncName :='MarginBottom'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.margin_bottom := AValue;
  end else
    Result := AObj.margin_bottom;
  handleExceptionEnd
end;

//property
function PDFPrintOptions_MarginLeft(AIsSet: LongBool; AObj: TPDFPrintOptions; AValue: integer): integer; extdecl;
begin
  {$define handleExceptionFuncName :='MarginLeft'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.margin_left := AValue;
  end else
    Result := AObj.margin_left;
  handleExceptionEnd
end;

//property
function PDFPrintOptions_MarginType(AIsSet: LongBool; AObj: TPDFPrintOptions; AValue: TCefPdfPrintMarginType): TCefPdfPrintMarginType; extdecl;
begin
  {$define handleExceptionFuncName :='MarginType'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.margin_type := AValue;
  end else
    Result := AObj.margin_type;
  handleExceptionEnd
end;

//property
function PDFPrintOptions_HeaderFooterEnabled(AIsSet: LongBool; AObj: TPDFPrintOptions; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='HeaderFooterEnabled'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.header_footer_enabled := AValue;
  end else
    Result := AObj.header_footer_enabled;
  handleExceptionEnd
end;

//property
function PDFPrintOptions_SelectionOnly(AIsSet: LongBool; AObj: TPDFPrintOptions; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='SelectionOnly'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.selection_only := AValue;
  end else
    Result := AObj.selection_only;
  handleExceptionEnd
end;

//property
function PDFPrintOptions_Landscape(AIsSet: LongBool; AObj: TPDFPrintOptions; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='Landscape'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.landscape := AValue;
  end else
    Result := AObj.landscape;
  handleExceptionEnd
end;

//property
function PDFPrintOptions_BackgroundsEnabled(AIsSet: LongBool; AObj: TPDFPrintOptions; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='BackgroundsEnabled'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.backgrounds_enabled := AValue;
  end else
    Result := AObj.backgrounds_enabled;
  handleExceptionEnd
end;


exports
  PDFPrintOptions_Create,
  PDFPrintOptions_PageWidth,
  PDFPrintOptions_PageHeight,
  PDFPrintOptions_ScaleFactor,
  PDFPrintOptions_MarginTop,
  PDFPrintOptions_MarginRight,
  PDFPrintOptions_MarginBottom,
  PDFPrintOptions_MarginLeft,
  PDFPrintOptions_MarginType,
  PDFPrintOptions_HeaderFooterEnabled,
  PDFPrintOptions_SelectionOnly,
  PDFPrintOptions_Landscape,
  PDFPrintOptions_BackgroundsEnabled;