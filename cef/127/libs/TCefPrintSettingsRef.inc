// constructor
function TCefPrintSettingsRef_Create(data: Pointer; out IntfPrintSettings: ICefPrintSettings): TCefPrintSettingsRef; extdecl;
begin
  {$define handleExceptionID := 20100}
  handleExceptionBegin
  Result := TCefPrintSettingsRef.Create(data);
  IntfPrintSettings := Result as ICefPrintSettings;
  handleExceptionEnd
end;

// function
function TCefPrintSettingsRef_IsValid(AObj: ICefPrintSettings): LongBool; extdecl;
begin
  {$define handleExceptionID := 20101}
  handleExceptionBegin
  Result := AObj.IsValid();
  handleExceptionEnd
end;

// function
function TCefPrintSettingsRef_IsReadOnly(AObj: ICefPrintSettings): LongBool; extdecl;
begin
  {$define handleExceptionID := 20102}
  handleExceptionBegin
  Result := AObj.IsReadOnly();
  handleExceptionEnd
end;

// function
function TCefPrintSettingsRef_IsLandscape(AObj: ICefPrintSettings): LongBool; extdecl;
begin
  {$define handleExceptionID := 20103}
  handleExceptionBegin
  Result := AObj.IsLandscape();
  handleExceptionEnd
end;

// function
procedure TCefPrintSettingsRef_GetDeviceName(AObj: ICefPrintSettings;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 20104}
  handleExceptionBegin
  StringBufferCreate(string(AObj.GetDeviceName()), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
function TCefPrintSettingsRef_GetDpi(AObj: ICefPrintSettings): Integer; extdecl;
begin
  {$define handleExceptionID := 20105}
  handleExceptionBegin
  Result := AObj.GetDpi();
  handleExceptionEnd
end;

// function
function TCefPrintSettingsRef_GetPageRangesCount(AObj: ICefPrintSettings): NativeUInt; extdecl;
begin
  {$define handleExceptionID := 20106}
  handleExceptionBegin
  Result := AObj.GetPageRangesCount();
  handleExceptionEnd
end;

// function
function TCefPrintSettingsRef_IsSelectionOnly(AObj: ICefPrintSettings): LongBool; extdecl;
begin
  {$define handleExceptionID := 20107}
  handleExceptionBegin
  Result := AObj.IsSelectionOnly();
  handleExceptionEnd
end;

// function
function TCefPrintSettingsRef_WillCollate(AObj: ICefPrintSettings): LongBool; extdecl;
begin
  {$define handleExceptionID := 20108}
  handleExceptionBegin
  Result := AObj.WillCollate();
  handleExceptionEnd
end;

// function
function TCefPrintSettingsRef_GetColorModel(AObj: ICefPrintSettings): TCefColorModel; extdecl;
begin
  {$define handleExceptionID := 20109}
  handleExceptionBegin
  Result := AObj.GetColorModel();
  handleExceptionEnd
end;

// function
function TCefPrintSettingsRef_GetCopies(AObj: ICefPrintSettings): Integer; extdecl;
begin
  {$define handleExceptionID := 20110}
  handleExceptionBegin
  Result := AObj.GetCopies();
  handleExceptionEnd
end;

// function
function TCefPrintSettingsRef_GetDuplexMode(AObj: ICefPrintSettings): TCefDuplexMode; extdecl;
begin
  {$define handleExceptionID := 20111}
  handleExceptionBegin
  Result := AObj.GetDuplexMode();
  handleExceptionEnd
end;

// function static
procedure TCefPrintSettingsRef_New(var Result: ICefPrintSettings); extdecl;
begin
  Result := TCefPrintSettingsRef.New();
end;

// function static
procedure TCefPrintSettingsRef_UnWrap(data: Pointer; var Result: ICefPrintSettings); extdecl;
begin
  Result := TCefPrintSettingsRef.UnWrap(data);
end;

// procedure
procedure TCefPrintSettingsRef_SetOrientation(AObj: ICefPrintSettings; landscape: LongBool); extdecl;
begin
  {$define handleExceptionID := 20112}
  handleExceptionBegin
  AObj.SetOrientation(landscape);
  handleExceptionEnd
end;

// procedure
procedure TCefPrintSettingsRef_SetPrinterPrintableArea(AObj: ICefPrintSettings; const physicalSizeDeviceUnits: TCefSizePtr; const printableAreaDeviceUnits: TCefRectPtr; landscapeNeedsFlip: LongBool); extdecl;
var
  InphysicalSizeDeviceUnits: TCefSize;
  InprintableAreaDeviceUnits: TCefRect;
begin
  {$define handleExceptionID := 20113}
  handleExceptionBegin
  InphysicalSizeDeviceUnits := TCefSizeToPas(physicalSizeDeviceUnits);
  InprintableAreaDeviceUnits := TCefRectToPas(printableAreaDeviceUnits);
  AObj.SetPrinterPrintableArea(@InphysicalSizeDeviceUnits, @InprintableAreaDeviceUnits, landscapeNeedsFlip);
  handleExceptionEnd
end;

// procedure
procedure TCefPrintSettingsRef_SetDeviceName(AObj: ICefPrintSettings; const name: PChar); extdecl;
begin
  {$define handleExceptionID := 20114}
  handleExceptionBegin
  AObj.SetDeviceName(PCharToUStr(name));
  handleExceptionEnd
end;

// procedure
procedure TCefPrintSettingsRef_SetDpi(AObj: ICefPrintSettings; dpi: Integer); extdecl;
begin
  {$define handleExceptionID := 20115}
  handleExceptionBegin
  AObj.SetDpi(dpi);
  handleExceptionEnd
end;

// procedure
procedure TCefPrintSettingsRef_SetPageRanges(AObj: ICefPrintSettings; const ranges: TCefRangeArray; rangesCount: Integer); extdecl;
var
  Tempranges: TCefRangeArray = nil;
  TemprangesIdx: Integer;
begin
  {$define handleExceptionID := 20116}
  handleExceptionBegin
  SetLength(Tempranges, rangesCount);
  for TemprangesIdx := 0 to rangesCount - 1 do
  begin
    Tempranges[TemprangesIdx] := ranges[TemprangesIdx]
  end;
  AObj.SetPageRanges(Tempranges);
  SetLength(Tempranges, 0);
  handleExceptionEnd
end;

// procedure
procedure TCefPrintSettingsRef_GetPageRanges(AObj: ICefPrintSettings; var ranges: TCefRangeArray; var rangesCount: Integer); extdecl;
var
  Outranges: TCefRangeArray = nil;
begin
  {$define handleExceptionID := 20117}
  handleExceptionBegin
  AObj.GetPageRanges(Outranges);
  rangesCount := Length(Outranges);
  ranges := Outranges;
  handleExceptionEnd
end;

// procedure
procedure TCefPrintSettingsRef_SetSelectionOnly(AObj: ICefPrintSettings; selectionOnly: LongBool); extdecl;
begin
  {$define handleExceptionID := 20118}
  handleExceptionBegin
  AObj.SetSelectionOnly(selectionOnly);
  handleExceptionEnd
end;

// procedure
procedure TCefPrintSettingsRef_SetCollate(AObj: ICefPrintSettings; collate: LongBool); extdecl;
begin
  {$define handleExceptionID := 20119}
  handleExceptionBegin
  AObj.SetCollate(collate);
  handleExceptionEnd
end;

// procedure
procedure TCefPrintSettingsRef_SetColorModel(AObj: ICefPrintSettings; model: TCefColorModel); extdecl;
begin
  {$define handleExceptionID := 20120}
  handleExceptionBegin
  AObj.SetColorModel(model);
  handleExceptionEnd
end;

// procedure
procedure TCefPrintSettingsRef_SetCopies(AObj: ICefPrintSettings; copies: Integer); extdecl;
begin
  {$define handleExceptionID := 20121}
  handleExceptionBegin
  AObj.SetCopies(copies);
  handleExceptionEnd
end;

// procedure
procedure TCefPrintSettingsRef_SetDuplexMode(AObj: ICefPrintSettings; mode: TCefDuplexMode); extdecl;
begin
  {$define handleExceptionID := 20122}
  handleExceptionBegin
  AObj.SetDuplexMode(mode);
  handleExceptionEnd
end;

exports
  TCefPrintSettingsRef_Create,
  TCefPrintSettingsRef_IsValid,
  TCefPrintSettingsRef_IsReadOnly,
  TCefPrintSettingsRef_IsLandscape,
  TCefPrintSettingsRef_GetDeviceName,
  TCefPrintSettingsRef_GetDpi,
  TCefPrintSettingsRef_GetPageRangesCount,
  TCefPrintSettingsRef_IsSelectionOnly,
  TCefPrintSettingsRef_WillCollate,
  TCefPrintSettingsRef_GetColorModel,
  TCefPrintSettingsRef_GetCopies,
  TCefPrintSettingsRef_GetDuplexMode,
  TCefPrintSettingsRef_New,
  TCefPrintSettingsRef_UnWrap,
  TCefPrintSettingsRef_SetOrientation,
  TCefPrintSettingsRef_SetPrinterPrintableArea,
  TCefPrintSettingsRef_SetDeviceName,
  TCefPrintSettingsRef_SetDpi,
  TCefPrintSettingsRef_SetPageRanges,
  TCefPrintSettingsRef_GetPageRanges,
  TCefPrintSettingsRef_SetSelectionOnly,
  TCefPrintSettingsRef_SetCollate,
  TCefPrintSettingsRef_SetColorModel,
  TCefPrintSettingsRef_SetCopies,
  TCefPrintSettingsRef_SetDuplexMode;