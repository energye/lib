// constructor
function TPrinter_Create(): TPrinter; extdecl;
begin
  {$define handleExceptionID := 20400}
  handleExceptionBegin
  Result := TPrinter.Create();
  handleExceptionEnd
end;

// function
function TPrinter_WriteWithPointerIntX2(AObj: TPrinter; const Buffer: Pointer; Count: Integer; var Written: Integer): LongBool; extdecl;
var
  OutWritten: Integer;
begin
  {$define handleExceptionID := 20401}
  handleExceptionBegin
  Result := AObj.Write(Buffer^, Count, OutWritten);
  Written := OutWritten;
  handleExceptionEnd
end;

// function
function TPrinter_WriteWithAnsistring(AObj: TPrinter; const s: PChar): LongBool; extdecl;
begin
  {$define handleExceptionID := 20402}
  handleExceptionBegin
  Result := AObj.Write(s);
  handleExceptionEnd
end;

// procedure
procedure TPrinter_Abort(AObj: TPrinter); extdecl;
begin
  {$define handleExceptionID := 20403}
  handleExceptionBegin
  AObj.Abort();
  handleExceptionEnd
end;

// procedure
procedure TPrinter_BeginDoc(AObj: TPrinter); extdecl;
begin
  {$define handleExceptionID := 20404}
  handleExceptionBegin
  AObj.BeginDoc();
  handleExceptionEnd
end;

// procedure
procedure TPrinter_EndDoc(AObj: TPrinter); extdecl;
begin
  {$define handleExceptionID := 20405}
  handleExceptionBegin
  AObj.EndDoc();
  handleExceptionEnd
end;

// procedure
procedure TPrinter_NewPage(AObj: TPrinter); extdecl;
begin
  {$define handleExceptionID := 20406}
  handleExceptionBegin
  AObj.NewPage();
  handleExceptionEnd
end;

// procedure
procedure TPrinter_BeginPage(AObj: TPrinter); extdecl;
begin
  {$define handleExceptionID := 20407}
  handleExceptionBegin
  AObj.BeginPage();
  handleExceptionEnd
end;

// procedure
procedure TPrinter_EndPage(AObj: TPrinter); extdecl;
begin
  {$define handleExceptionID := 20408}
  handleExceptionBegin
  AObj.EndPage();
  handleExceptionEnd
end;

// procedure
procedure TPrinter_Refresh(AObj: TPrinter); extdecl;
begin
  {$define handleExceptionID := 20409}
  handleExceptionBegin
  AObj.Refresh();
  handleExceptionEnd
end;

// procedure
procedure TPrinter_SetPrinter(AObj: TPrinter; aName: PChar); extdecl;
begin
  {$define handleExceptionID := 20410}
  handleExceptionBegin
  AObj.SetPrinter(aName);
  handleExceptionEnd
end;

// procedure
procedure TPrinter_RestoreDefaultBin(AObj: TPrinter); extdecl;
begin
  {$define handleExceptionID := 20411}
  handleExceptionBegin
  AObj.RestoreDefaultBin();
  handleExceptionEnd
end;

// property
function TPrinter_PrinterIndex(ASet: LongBool; AObj: TPrinter; AValue: integer): integer; extdecl;
begin
  {$define handleExceptionID := 20412}
  handleExceptionBegin
  if ASet then
  begin
    AObj.PrinterIndex := AValue
  end else
    Result := AObj.PrinterIndex;
  handleExceptionEnd
end;

// property
procedure TPrinter_PrinterName(AObj: TPrinter; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 20413}
  handleExceptionBegin
  StringBufferCreate(AObj.PrinterName, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TPrinter_PaperSize(AObj: TPrinter): TPaperSize; extdecl;
begin
  {$define handleExceptionID := 20414}
  handleExceptionBegin
  Result := AObj.PaperSize;
  handleExceptionEnd
end;

// property
function TPrinter_Orientation(ASet: LongBool; AObj: TPrinter; AValue: TPrinterOrientation): TPrinterOrientation; extdecl;
begin
  {$define handleExceptionID := 20415}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Orientation := AValue
  end else
    Result := AObj.Orientation;
  handleExceptionEnd
end;

// property
function TPrinter_PrinterState(AObj: TPrinter): TPrinterState; extdecl;
begin
  {$define handleExceptionID := 20416}
  handleExceptionBegin
  Result := AObj.PrinterState;
  handleExceptionEnd
end;

// property
function TPrinter_Copies(ASet: LongBool; AObj: TPrinter; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 20417}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Copies := AValue
  end else
    Result := AObj.Copies;
  handleExceptionEnd
end;

// property
function TPrinter_Printers(AObj: TPrinter): TStrings; extdecl;
begin
  {$define handleExceptionID := 20418}
  handleExceptionBegin
  Result := AObj.Printers;
  handleExceptionEnd
end;

// property
procedure TPrinter_FileName(ASet: LongBool; AObj: TPrinter; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 20419}
  handleExceptionBegin
  if ASet then
  begin
    AObj.FileName := AValue
  end else
    StringBufferCreate(AObj.FileName, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TPrinter_Fonts(AObj: TPrinter): TStrings; extdecl;
begin
  {$define handleExceptionID := 20420}
  handleExceptionBegin
  Result := AObj.Fonts;
  handleExceptionEnd
end;

// property
function TPrinter_Canvas(AObj: TPrinter): TCanvas; extdecl;
begin
  {$define handleExceptionID := 20421}
  handleExceptionBegin
  Result := AObj.Canvas;
  handleExceptionEnd
end;

// property
function TPrinter_CanvasClass(ASet: LongBool; AObj: TPrinter; AValue: TPrinterCanvasRef): TPrinterCanvasRef; extdecl;
begin
  {$define handleExceptionID := 20422}
  handleExceptionBegin
  if ASet then
  begin
    AObj.CanvasClass := AValue
  end else
    Result := AObj.CanvasClass;
  handleExceptionEnd
end;

// property
function TPrinter_PageHeight(AObj: TPrinter): Integer; extdecl;
begin
  {$define handleExceptionID := 20423}
  handleExceptionBegin
  Result := AObj.PageHeight;
  handleExceptionEnd
end;

// property
function TPrinter_PageWidth(AObj: TPrinter): Integer; extdecl;
begin
  {$define handleExceptionID := 20424}
  handleExceptionBegin
  Result := AObj.PageWidth;
  handleExceptionEnd
end;

// property
function TPrinter_PageNumber(AObj: TPrinter): Integer; extdecl;
begin
  {$define handleExceptionID := 20425}
  handleExceptionBegin
  Result := AObj.PageNumber;
  handleExceptionEnd
end;

// property
function TPrinter_Aborted(AObj: TPrinter): LongBool; extdecl;
begin
  {$define handleExceptionID := 20426}
  handleExceptionBegin
  Result := AObj.Aborted;
  handleExceptionEnd
end;

// property
function TPrinter_Printing(AObj: TPrinter): LongBool; extdecl;
begin
  {$define handleExceptionID := 20427}
  handleExceptionBegin
  Result := AObj.Printing;
  handleExceptionEnd
end;

// property
procedure TPrinter_Title(ASet: LongBool; AObj: TPrinter; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 20428}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Title := AValue
  end else
    StringBufferCreate(AObj.Title, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TPrinter_PrinterType(AObj: TPrinter): TPrinterType; extdecl;
begin
  {$define handleExceptionID := 20429}
  handleExceptionBegin
  Result := AObj.PrinterType;
  handleExceptionEnd
end;

// property
function TPrinter_CanPrint(AObj: TPrinter): LongBool; extdecl;
begin
  {$define handleExceptionID := 20430}
  handleExceptionBegin
  Result := AObj.CanPrint;
  handleExceptionEnd
end;

// property
function TPrinter_CanRenderCopies(AObj: TPrinter): LongBool; extdecl;
begin
  {$define handleExceptionID := 20431}
  handleExceptionBegin
  Result := AObj.CanRenderCopies;
  handleExceptionEnd
end;

// property
function TPrinter_XDPI(AObj: TPrinter): Integer; extdecl;
begin
  {$define handleExceptionID := 20432}
  handleExceptionBegin
  Result := AObj.XDPI;
  handleExceptionEnd
end;

// property
function TPrinter_YDPI(AObj: TPrinter): Integer; extdecl;
begin
  {$define handleExceptionID := 20433}
  handleExceptionBegin
  Result := AObj.YDPI;
  handleExceptionEnd
end;

// property
function TPrinter_RawMode(ASet: LongBool; AObj: TPrinter; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 20434}
  handleExceptionBegin
  if ASet then
  begin
    AObj.RawMode := AValue
  end else
    Result := AObj.RawMode;
  handleExceptionEnd
end;

// property
procedure TPrinter_DefaultBinName(AObj: TPrinter; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 20435}
  handleExceptionBegin
  StringBufferCreate(AObj.DefaultBinName, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TPrinter_BinName(ASet: LongBool; AObj: TPrinter; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 20436}
  handleExceptionBegin
  if ASet then
  begin
    AObj.BinName := AValue
  end else
    StringBufferCreate(AObj.BinName, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TPrinter_SupportedBins(AObj: TPrinter): TStrings; extdecl;
begin
  {$define handleExceptionID := 20437}
  handleExceptionBegin
  Result := AObj.SupportedBins;
  handleExceptionEnd
end;

exports
  TPrinter_Create,
  TPrinter_WriteWithPointerIntX2,
  TPrinter_WriteWithAnsistring,
  TPrinter_Abort,
  TPrinter_BeginDoc,
  TPrinter_EndDoc,
  TPrinter_NewPage,
  TPrinter_BeginPage,
  TPrinter_EndPage,
  TPrinter_Refresh,
  TPrinter_SetPrinter,
  TPrinter_RestoreDefaultBin,
  TPrinter_PrinterIndex,
  TPrinter_PrinterName,
  TPrinter_PaperSize,
  TPrinter_Orientation,
  TPrinter_PrinterState,
  TPrinter_Copies,
  TPrinter_Printers,
  TPrinter_FileName,
  TPrinter_Fonts,
  TPrinter_Canvas,
  TPrinter_CanvasClass,
  TPrinter_PageHeight,
  TPrinter_PageWidth,
  TPrinter_PageNumber,
  TPrinter_Aborted,
  TPrinter_Printing,
  TPrinter_Title,
  TPrinter_PrinterType,
  TPrinter_CanPrint,
  TPrinter_CanRenderCopies,
  TPrinter_XDPI,
  TPrinter_YDPI,
  TPrinter_RawMode,
  TPrinter_DefaultBinName,
  TPrinter_BinName,
  TPrinter_SupportedBins;