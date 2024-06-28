
//constructor
function PrinterCanvas_Create(APrinter: TPrinter): TPrinterCanvas; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TPrinterCanvas.Create(APrinter);
  handleExceptionEnd
end;

//property
function PrinterCanvas_Printer(AObj: TPrinterCanvas): TPrinter; extdecl;
begin
  {$define handleExceptionFuncName :='Printer'}
  handleExceptionBegin
  Result := AObj.Printer;
  handleExceptionEnd
end;

//property
function PrinterCanvas_Title(AIsSet: LongBool; AObj: TPrinterCanvas; AValue: PChar): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='Title'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Title := AValue;
  end else
    Result := ToPChar(AObj.Title);
  handleExceptionEnd
end;

//property
function PrinterCanvas_PageHeight(AObj: TPrinterCanvas): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='PageHeight'}
  handleExceptionBegin
  Result := AObj.PageHeight;
  handleExceptionEnd
end;

//property
function PrinterCanvas_PageWidth(AObj: TPrinterCanvas): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='PageWidth'}
  handleExceptionBegin
  Result := AObj.PageWidth;
  handleExceptionEnd
end;

//property
function PrinterCanvas_PaperWidth(AIsSet: LongBool; AObj: TPrinterCanvas; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='PaperWidth'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.PaperWidth := AValue;
  end else
    Result := AObj.PaperWidth;
  handleExceptionEnd
end;

//property
function PrinterCanvas_PaperHeight(AIsSet: LongBool; AObj: TPrinterCanvas; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='PaperHeight'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.PaperHeight := AValue;
  end else
    Result := AObj.PaperHeight;
  handleExceptionEnd
end;

//property
function PrinterCanvas_PageNumber(AObj: TPrinterCanvas): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='PageNumber'}
  handleExceptionBegin
  Result := AObj.PageNumber;
  handleExceptionEnd
end;

//property
function PrinterCanvas_TopMargin(AIsSet: LongBool; AObj: TPrinterCanvas; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='TopMargin'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.TopMargin := AValue;
  end else
    Result := AObj.TopMargin;
  handleExceptionEnd
end;

//property
function PrinterCanvas_LeftMargin(AIsSet: LongBool; AObj: TPrinterCanvas; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='LeftMargin'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.LeftMargin := AValue;
  end else
    Result := AObj.LeftMargin;
  handleExceptionEnd
end;

//property
function PrinterCanvas_BottomMargin(AIsSet: LongBool; AObj: TPrinterCanvas; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='BottomMargin'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.BottomMargin := AValue;
  end else
    Result := AObj.BottomMargin;
  handleExceptionEnd
end;

//property
function PrinterCanvas_RightMargin(AIsSet: LongBool; AObj: TPrinterCanvas; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='RightMargin'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.RightMargin := AValue;
  end else
    Result := AObj.RightMargin;
  handleExceptionEnd
end;

//property
function PrinterCanvas_Orientation(AIsSet: LongBool; AObj: TPrinterCanvas; AValue: TPrinterOrientation): TPrinterOrientation; extdecl;
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
function PrinterCanvas_XDPI(AIsSet: LongBool; AObj: TPrinterCanvas; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='XDPI'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.XDPI := AValue;
  end else
    Result := AObj.XDPI;
  handleExceptionEnd
end;

//property
function PrinterCanvas_YDPI(AIsSet: LongBool; AObj: TPrinterCanvas; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='YDPI'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.YDPI := AValue;
  end else
    Result := AObj.YDPI;
  handleExceptionEnd
end;

//function
function PrinterCanvas_Class(): TClass; extdecl;
begin
  Result := TPrinterCanvas;
end;

//procedure
procedure PrinterCanvas_BeginDoc(AObj: TPrinterCanvas); extdecl;
begin
  {$define handleExceptionFuncName :='BeginDoc'}
  handleExceptionBegin
  AObj.BeginDoc();
  handleExceptionEnd
end;

//procedure
procedure PrinterCanvas_NewPage(AObj: TPrinterCanvas); extdecl;
begin
  {$define handleExceptionFuncName :='NewPage'}
  handleExceptionBegin
  AObj.NewPage();
  handleExceptionEnd
end;

//procedure
procedure PrinterCanvas_BeginPage(AObj: TPrinterCanvas); extdecl;
begin
  {$define handleExceptionFuncName :='BeginPage'}
  handleExceptionBegin
  AObj.BeginPage();
  handleExceptionEnd
end;

//procedure
procedure PrinterCanvas_EndPage(AObj: TPrinterCanvas); extdecl;
begin
  {$define handleExceptionFuncName :='EndPage'}
  handleExceptionBegin
  AObj.EndPage();
  handleExceptionEnd
end;

//procedure
procedure PrinterCanvas_EndDoc(AObj: TPrinterCanvas); extdecl;
begin
  {$define handleExceptionFuncName :='EndDoc'}
  handleExceptionBegin
  AObj.EndDoc();
  handleExceptionEnd
end;


exports
  PrinterCanvas_Create,
  PrinterCanvas_Printer,
  PrinterCanvas_Title,
  PrinterCanvas_PageHeight,
  PrinterCanvas_PageWidth,
  PrinterCanvas_PaperWidth,
  PrinterCanvas_PaperHeight,
  PrinterCanvas_PageNumber,
  PrinterCanvas_TopMargin,
  PrinterCanvas_LeftMargin,
  PrinterCanvas_BottomMargin,
  PrinterCanvas_RightMargin,
  PrinterCanvas_Orientation,
  PrinterCanvas_XDPI,
  PrinterCanvas_YDPI,
  PrinterCanvas_Class,
  PrinterCanvas_BeginDoc,
  PrinterCanvas_NewPage,
  PrinterCanvas_BeginPage,
  PrinterCanvas_EndPage,
  PrinterCanvas_EndDoc;