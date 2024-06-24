
//constructor
function PrinterCanvas_Create(APrinter: TPrinter): TPrinterCanvas; extdecl;
begin
  handleExceptionBegin
  Result := TPrinterCanvas.Create(APrinter);
  handleExceptionEnd
end;

//property
function PrinterCanvas_Printer(AObj: TPrinterCanvas): TPrinter; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Printer;
  handleExceptionEnd
end;

//property
function PrinterCanvas_Title(AIsSet: LongBool; AObj: TPrinterCanvas; AValue: PChar): PChar; extdecl;
begin
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
  handleExceptionBegin
  Result := AObj.PageHeight;
  handleExceptionEnd
end;

//property
function PrinterCanvas_PageWidth(AObj: TPrinterCanvas): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.PageWidth;
  handleExceptionEnd
end;

//property
function PrinterCanvas_PaperWidth(AIsSet: LongBool; AObj: TPrinterCanvas; AValue: Integer): Integer; extdecl;
begin
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
  handleExceptionBegin
  Result := AObj.PageNumber;
  handleExceptionEnd
end;

//property
function PrinterCanvas_TopMargin(AIsSet: LongBool; AObj: TPrinterCanvas; AValue: Integer): Integer; extdecl;
begin
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
  handleExceptionBegin
  AObj.BeginDoc();
  handleExceptionEnd
end;

//procedure
procedure PrinterCanvas_NewPage(AObj: TPrinterCanvas); extdecl;
begin
  handleExceptionBegin
  AObj.NewPage();
  handleExceptionEnd
end;

//procedure
procedure PrinterCanvas_BeginPage(AObj: TPrinterCanvas); extdecl;
begin
  handleExceptionBegin
  AObj.BeginPage();
  handleExceptionEnd
end;

//procedure
procedure PrinterCanvas_EndPage(AObj: TPrinterCanvas); extdecl;
begin
  handleExceptionBegin
  AObj.EndPage();
  handleExceptionEnd
end;

//procedure
procedure PrinterCanvas_EndDoc(AObj: TPrinterCanvas); extdecl;
begin
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