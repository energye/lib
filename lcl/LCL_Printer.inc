
//constructor
function Printer_Create(): TPrinter; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TPrinter.Create();
  handleExceptionEnd
end;

//property
function Printer_PrinterIndex(AIsSet: LongBool; AObj: TPrinter; AValue: integer): integer; extdecl;
begin
  {$define handleExceptionFuncName :='PrinterIndex'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.PrinterIndex := AValue;
  end else
    Result := AObj.PrinterIndex;
  handleExceptionEnd
end;

//property
function Printer_PrinterName(AObj: TPrinter): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='PrinterName'}
  handleExceptionBegin
  Result := ToPChar(AObj.PrinterName);
  handleExceptionEnd
end;

//property
function Printer_PaperSize(AObj: TPrinter): TPaperSize; extdecl;
begin
  {$define handleExceptionFuncName :='PaperSize'}
  handleExceptionBegin
  Result := AObj.PaperSize;
  handleExceptionEnd
end;

//property
function Printer_Orientation(AIsSet: LongBool; AObj: TPrinter; AValue: TPrinterOrientation): TPrinterOrientation; extdecl;
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
function Printer_PrinterState(AObj: TPrinter): TPrinterState; extdecl;
begin
  {$define handleExceptionFuncName :='PrinterState'}
  handleExceptionBegin
  Result := AObj.PrinterState;
  handleExceptionEnd
end;

//property
function Printer_Copies(AIsSet: LongBool; AObj: TPrinter; AValue: Integer): Integer; extdecl;
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
function Printer_Printers(AObj: TPrinter): TStrings; extdecl;
begin
  {$define handleExceptionFuncName :='Printers'}
  handleExceptionBegin
  Result := AObj.Printers;
  handleExceptionEnd
end;

//property
function Printer_FileName(AIsSet: LongBool; AObj: TPrinter; AValue: PChar): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='FileName'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.FileName := AValue;
  end else
    Result := ToPChar(AObj.FileName);
  handleExceptionEnd
end;

//property
function Printer_Fonts(AObj: TPrinter): TStrings; extdecl;
begin
  {$define handleExceptionFuncName :='Fonts'}
  handleExceptionBegin
  Result := AObj.Fonts;
  handleExceptionEnd
end;

//property
function Printer_Canvas(AObj: TPrinter): TCanvas; extdecl;
begin
  {$define handleExceptionFuncName :='Canvas'}
  handleExceptionBegin
  Result := AObj.Canvas;
  handleExceptionEnd
end;

//property
function Printer_CanvasClass(AIsSet: LongBool; AObj: TPrinter; AValue: TPrinterCanvasRef): TPrinterCanvasRef; extdecl;
begin
  {$define handleExceptionFuncName :='CanvasClass'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.CanvasClass := AValue;
  end else
    Result := AObj.CanvasClass;
  handleExceptionEnd
end;

//property
function Printer_PageHeight(AObj: TPrinter): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='PageHeight'}
  handleExceptionBegin
  Result := AObj.PageHeight;
  handleExceptionEnd
end;

//property
function Printer_PageWidth(AObj: TPrinter): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='PageWidth'}
  handleExceptionBegin
  Result := AObj.PageWidth;
  handleExceptionEnd
end;

//property
function Printer_PageNumber(AObj: TPrinter): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='PageNumber'}
  handleExceptionBegin
  Result := AObj.PageNumber;
  handleExceptionEnd
end;

//property
function Printer_Aborted(AObj: TPrinter): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='Aborted'}
  handleExceptionBegin
  Result := AObj.Aborted;
  handleExceptionEnd
end;

//property
function Printer_Printing(AObj: TPrinter): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='Printing'}
  handleExceptionBegin
  Result := AObj.Printing;
  handleExceptionEnd
end;

//property
function Printer_Title(AIsSet: LongBool; AObj: TPrinter; AValue: PChar): PChar; extdecl;
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
function Printer_PrinterType(AObj: TPrinter): TPrinterType; extdecl;
begin
  {$define handleExceptionFuncName :='PrinterType'}
  handleExceptionBegin
  Result := AObj.PrinterType;
  handleExceptionEnd
end;

//property
function Printer_CanPrint(AObj: TPrinter): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='CanPrint'}
  handleExceptionBegin
  Result := AObj.CanPrint;
  handleExceptionEnd
end;

//property
function Printer_CanRenderCopies(AObj: TPrinter): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='CanRenderCopies'}
  handleExceptionBegin
  Result := AObj.CanRenderCopies;
  handleExceptionEnd
end;

//property
function Printer_XDPI(AObj: TPrinter): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='XDPI'}
  handleExceptionBegin
  Result := AObj.XDPI;
  handleExceptionEnd
end;

//property
function Printer_YDPI(AObj: TPrinter): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='YDPI'}
  handleExceptionBegin
  Result := AObj.YDPI;
  handleExceptionEnd
end;

//property
function Printer_RawMode(AIsSet: LongBool; AObj: TPrinter; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='RawMode'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.RawMode := AValue;
  end else
    Result := AObj.RawMode;
  handleExceptionEnd
end;

//property
function Printer_DefaultBinName(AObj: TPrinter): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='DefaultBinName'}
  handleExceptionBegin
  Result := ToPChar(AObj.DefaultBinName);
  handleExceptionEnd
end;

//property
function Printer_BinName(AIsSet: LongBool; AObj: TPrinter; AValue: PChar): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='BinName'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.BinName := AValue;
  end else
    Result := ToPChar(AObj.BinName);
  handleExceptionEnd
end;

//property
function Printer_SupportedBins(AObj: TPrinter): TStrings; extdecl;
begin
  {$define handleExceptionFuncName :='SupportedBins'}
  handleExceptionBegin
  Result := AObj.SupportedBins;
  handleExceptionEnd
end;

//function
function Printer_Write(AObj: TPrinter; const Buffer: Pointer; Count: Integer; out OutWritten: Integer): LongBool; extdecl;
var
  RetOutWritten: Integer;
begin
  {$define handleExceptionFuncName :='Write'}
  handleExceptionBegin
  RetOutWritten := OutWritten;
  Result := AObj.Write(Buffer^, Count, RetOutWritten);
  OutWritten := RetOutWritten;
  handleExceptionEnd
end;

//function
function Printer_Write1(AObj: TPrinter; const s: PChar): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='Write1'}
  handleExceptionBegin
  Result := AObj.Write(s);
  handleExceptionEnd
end;

//function
function Printer_Class(): TClass; extdecl;
begin
  Result := TPrinter;
end;

//procedure
procedure Printer_Abort(AObj: TPrinter); extdecl;
begin
  {$define handleExceptionFuncName :='Abort'}
  handleExceptionBegin
  AObj.Abort();
  handleExceptionEnd
end;

//procedure
procedure Printer_BeginDoc(AObj: TPrinter); extdecl;
begin
  {$define handleExceptionFuncName :='BeginDoc'}
  handleExceptionBegin
  AObj.BeginDoc();
  handleExceptionEnd
end;

//procedure
procedure Printer_EndDoc(AObj: TPrinter); extdecl;
begin
  {$define handleExceptionFuncName :='EndDoc'}
  handleExceptionBegin
  AObj.EndDoc();
  handleExceptionEnd
end;

//procedure
procedure Printer_NewPage(AObj: TPrinter); extdecl;
begin
  {$define handleExceptionFuncName :='NewPage'}
  handleExceptionBegin
  AObj.NewPage();
  handleExceptionEnd
end;

//procedure
procedure Printer_BeginPage(AObj: TPrinter); extdecl;
begin
  {$define handleExceptionFuncName :='BeginPage'}
  handleExceptionBegin
  AObj.BeginPage();
  handleExceptionEnd
end;

//procedure
procedure Printer_EndPage(AObj: TPrinter); extdecl;
begin
  {$define handleExceptionFuncName :='EndPage'}
  handleExceptionBegin
  AObj.EndPage();
  handleExceptionEnd
end;

//procedure
procedure Printer_Refresh(AObj: TPrinter); extdecl;
begin
  {$define handleExceptionFuncName :='Refresh'}
  handleExceptionBegin
  AObj.Refresh();
  handleExceptionEnd
end;

//procedure
procedure Printer_SetPrinter(AObj: TPrinter; aName: PChar); extdecl;
begin
  {$define handleExceptionFuncName :='SetPrinter'}
  handleExceptionBegin
  AObj.SetPrinter(aName);
  handleExceptionEnd
end;

//procedure
procedure Printer_RestoreDefaultBin(AObj: TPrinter); extdecl;
begin
  {$define handleExceptionFuncName :='RestoreDefaultBin'}
  handleExceptionBegin
  AObj.RestoreDefaultBin();
  handleExceptionEnd
end;


exports
  Printer_Create,
  Printer_PrinterIndex,
  Printer_PrinterName,
  Printer_PaperSize,
  Printer_Orientation,
  Printer_PrinterState,
  Printer_Copies,
  Printer_Printers,
  Printer_FileName,
  Printer_Fonts,
  Printer_Canvas,
  Printer_CanvasClass,
  Printer_PageHeight,
  Printer_PageWidth,
  Printer_PageNumber,
  Printer_Aborted,
  Printer_Printing,
  Printer_Title,
  Printer_PrinterType,
  Printer_CanPrint,
  Printer_CanRenderCopies,
  Printer_XDPI,
  Printer_YDPI,
  Printer_RawMode,
  Printer_DefaultBinName,
  Printer_BinName,
  Printer_SupportedBins,
  Printer_Write,
  Printer_Write1,
  Printer_Class,
  Printer_Abort,
  Printer_BeginDoc,
  Printer_EndDoc,
  Printer_NewPage,
  Printer_BeginPage,
  Printer_EndPage,
  Printer_Refresh,
  Printer_SetPrinter,
  Printer_RestoreDefaultBin;