
//function
procedure CefPrintSettings_New(var Result: ICefPrintSettings); extdecl;
begin
  Result := TCefPrintSettingsRef.New();
end;

//function
procedure CefPrintSettings_UnWrap(data: Pointer; var Result: ICefPrintSettings); extdecl;
begin
  Result := TCefPrintSettingsRef.UnWrap(data);
end;

//function
function CefPrintSettings_IsValid(AObj: ICefPrintSettings): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IsValid();
  handleExceptionEnd
end;

//function
function CefPrintSettings_IsReadOnly(AObj: ICefPrintSettings): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IsReadOnly();
  handleExceptionEnd
end;

//function
function CefPrintSettings_IsLandscape(AObj: ICefPrintSettings): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IsLandscape();
  handleExceptionEnd
end;

//function
function CefPrintSettings_GetDeviceName(AObj: ICefPrintSettings): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.GetDeviceName());
  handleExceptionEnd
end;

//function
function CefPrintSettings_GetDpi(AObj: ICefPrintSettings): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetDpi();
  handleExceptionEnd
end;

//function
function CefPrintSettings_GetPageRangesCount(AObj: ICefPrintSettings): NativeUInt; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetPageRangesCount();
  handleExceptionEnd
end;

//function
function CefPrintSettings_IsSelectionOnly(AObj: ICefPrintSettings): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IsSelectionOnly();
  handleExceptionEnd
end;

//function
function CefPrintSettings_WillCollate(AObj: ICefPrintSettings): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.WillCollate();
  handleExceptionEnd
end;

//function
function CefPrintSettings_GetColorModel(AObj: ICefPrintSettings): TCefColorModel; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetColorModel();
  handleExceptionEnd
end;

//function
function CefPrintSettings_GetCopies(AObj: ICefPrintSettings): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetCopies();
  handleExceptionEnd
end;

//function
function CefPrintSettings_GetDuplexMode(AObj: ICefPrintSettings): TCefDuplexMode; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetDuplexMode();
  handleExceptionEnd
end;

//procedure
procedure CefPrintSettings_SetOrientation(AObj: ICefPrintSettings; landscape: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.SetOrientation(landscape);
  handleExceptionEnd
end;

//procedure
procedure CefPrintSettings_SetPrinterPrintableArea(AObj: ICefPrintSettings; const physicalSizeDeviceUnits: PCefSize; const printableAreaDeviceUnits: PCefRect; landscapeNeedsFlip: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.SetPrinterPrintableArea(physicalSizeDeviceUnits, printableAreaDeviceUnits, landscapeNeedsFlip);
  handleExceptionEnd
end;

//procedure
procedure CefPrintSettings_SetDeviceName(AObj: ICefPrintSettings; const name: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.SetDeviceName(name);
  handleExceptionEnd
end;

//procedure
procedure CefPrintSettings_SetDpi(AObj: ICefPrintSettings; dpi: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.SetDpi(dpi);
  handleExceptionEnd
end;

//procedure
procedure CefPrintSettings_SetSelectionOnly(AObj: ICefPrintSettings; selectionOnly: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.SetSelectionOnly(selectionOnly);
  handleExceptionEnd
end;

//procedure
procedure CefPrintSettings_SetCollate(AObj: ICefPrintSettings; collate: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.SetCollate(collate);
  handleExceptionEnd
end;

//procedure
procedure CefPrintSettings_SetColorModel(AObj: ICefPrintSettings; model: TCefColorModel); extdecl;
begin
  handleExceptionBegin
  AObj.SetColorModel(model);
  handleExceptionEnd
end;

//procedure
procedure CefPrintSettings_SetCopies(AObj: ICefPrintSettings; copies: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.SetCopies(copies);
  handleExceptionEnd
end;

//procedure
procedure CefPrintSettings_SetDuplexMode(AObj: ICefPrintSettings; mode: TCefDuplexMode); extdecl;
begin
  handleExceptionBegin
  AObj.SetDuplexMode(mode);
  handleExceptionEnd
end;


exports
  CefPrintSettings_New,
  CefPrintSettings_UnWrap,
  CefPrintSettings_IsValid,
  CefPrintSettings_IsReadOnly,
  CefPrintSettings_IsLandscape,
  CefPrintSettings_GetDeviceName,
  CefPrintSettings_GetDpi,
  CefPrintSettings_GetPageRangesCount,
  CefPrintSettings_IsSelectionOnly,
  CefPrintSettings_WillCollate,
  CefPrintSettings_GetColorModel,
  CefPrintSettings_GetCopies,
  CefPrintSettings_GetDuplexMode,
  CefPrintSettings_SetOrientation,
  CefPrintSettings_SetPrinterPrintableArea,
  CefPrintSettings_SetDeviceName,
  CefPrintSettings_SetDpi,
  CefPrintSettings_SetSelectionOnly,
  CefPrintSettings_SetCollate,
  CefPrintSettings_SetColorModel,
  CefPrintSettings_SetCopies,
  CefPrintSettings_SetDuplexMode;