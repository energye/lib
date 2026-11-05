// constructor
function TPrinterCanvas_Create(APrinter: TPrinter): TPrinterCanvas; extdecl;
begin
  {$define handleExceptionID := 26000}
  handleExceptionBegin
  Result := TPrinterCanvas.Create(APrinter);
  handleExceptionEnd
end;

// procedure
procedure TPrinterCanvas_BeginDoc(AObj: TPrinterCanvas); extdecl;
begin
  {$define handleExceptionID := 26001}
  handleExceptionBegin
  AObj.BeginDoc();
  handleExceptionEnd
end;

// procedure
procedure TPrinterCanvas_NewPage(AObj: TPrinterCanvas); extdecl;
begin
  {$define handleExceptionID := 26002}
  handleExceptionBegin
  AObj.NewPage();
  handleExceptionEnd
end;

// procedure
procedure TPrinterCanvas_BeginPage(AObj: TPrinterCanvas); extdecl;
begin
  {$define handleExceptionID := 26003}
  handleExceptionBegin
  AObj.BeginPage();
  handleExceptionEnd
end;

// procedure
procedure TPrinterCanvas_EndPage(AObj: TPrinterCanvas); extdecl;
begin
  {$define handleExceptionID := 26004}
  handleExceptionBegin
  AObj.EndPage();
  handleExceptionEnd
end;

// procedure
procedure TPrinterCanvas_EndDoc(AObj: TPrinterCanvas); extdecl;
begin
  {$define handleExceptionID := 26005}
  handleExceptionBegin
  AObj.EndDoc();
  handleExceptionEnd
end;

// property
function TPrinterCanvas_Printer(AObj: TPrinterCanvas): TPrinter; extdecl;
begin
  {$define handleExceptionID := 26006}
  handleExceptionBegin
  Result := AObj.Printer;
  handleExceptionEnd
end;

// property
procedure TPrinterCanvas_Title(ASet: LongBool; AObj: TPrinterCanvas; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 26007}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Title := AValue
  end else
    StringBufferCreate(AObj.Title, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TPrinterCanvas_PageHeight(AObj: TPrinterCanvas): Integer; extdecl;
begin
  {$define handleExceptionID := 26008}
  handleExceptionBegin
  Result := AObj.PageHeight;
  handleExceptionEnd
end;

// property
function TPrinterCanvas_PageWidth(AObj: TPrinterCanvas): Integer; extdecl;
begin
  {$define handleExceptionID := 26009}
  handleExceptionBegin
  Result := AObj.PageWidth;
  handleExceptionEnd
end;

// property
function TPrinterCanvas_PaperWidth(ASet: LongBool; AObj: TPrinterCanvas; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 26010}
  handleExceptionBegin
  if ASet then
  begin
    AObj.PaperWidth := AValue
  end else
    Result := AObj.PaperWidth;
  handleExceptionEnd
end;

// property
function TPrinterCanvas_PaperHeight(ASet: LongBool; AObj: TPrinterCanvas; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 26011}
  handleExceptionBegin
  if ASet then
  begin
    AObj.PaperHeight := AValue
  end else
    Result := AObj.PaperHeight;
  handleExceptionEnd
end;

// property
function TPrinterCanvas_PageNumber(AObj: TPrinterCanvas): Integer; extdecl;
begin
  {$define handleExceptionID := 26012}
  handleExceptionBegin
  Result := AObj.PageNumber;
  handleExceptionEnd
end;

// property
function TPrinterCanvas_TopMargin(ASet: LongBool; AObj: TPrinterCanvas; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 26013}
  handleExceptionBegin
  if ASet then
  begin
    AObj.TopMargin := AValue
  end else
    Result := AObj.TopMargin;
  handleExceptionEnd
end;

// property
function TPrinterCanvas_LeftMargin(ASet: LongBool; AObj: TPrinterCanvas; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 26014}
  handleExceptionBegin
  if ASet then
  begin
    AObj.LeftMargin := AValue
  end else
    Result := AObj.LeftMargin;
  handleExceptionEnd
end;

// property
function TPrinterCanvas_BottomMargin(ASet: LongBool; AObj: TPrinterCanvas; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 26015}
  handleExceptionBegin
  if ASet then
  begin
    AObj.BottomMargin := AValue
  end else
    Result := AObj.BottomMargin;
  handleExceptionEnd
end;

// property
function TPrinterCanvas_RightMargin(ASet: LongBool; AObj: TPrinterCanvas; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 26016}
  handleExceptionBegin
  if ASet then
  begin
    AObj.RightMargin := AValue
  end else
    Result := AObj.RightMargin;
  handleExceptionEnd
end;

// property
function TPrinterCanvas_Orientation(ASet: LongBool; AObj: TPrinterCanvas; AValue: TPrinterOrientation): TPrinterOrientation; extdecl;
begin
  {$define handleExceptionID := 26017}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Orientation := AValue
  end else
    Result := AObj.Orientation;
  handleExceptionEnd
end;

// property
function TPrinterCanvas_XDPI(ASet: LongBool; AObj: TPrinterCanvas; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 26018}
  handleExceptionBegin
  if ASet then
  begin
    AObj.XDPI := AValue
  end else
    Result := AObj.XDPI;
  handleExceptionEnd
end;

// property
function TPrinterCanvas_YDPI(ASet: LongBool; AObj: TPrinterCanvas; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 26019}
  handleExceptionBegin
  if ASet then
  begin
    AObj.YDPI := AValue
  end else
    Result := AObj.YDPI;
  handleExceptionEnd
end;

exports
  TPrinterCanvas_Create,
  TPrinterCanvas_BeginDoc,
  TPrinterCanvas_NewPage,
  TPrinterCanvas_BeginPage,
  TPrinterCanvas_EndPage,
  TPrinterCanvas_EndDoc,
  TPrinterCanvas_Printer,
  TPrinterCanvas_Title,
  TPrinterCanvas_PageHeight,
  TPrinterCanvas_PageWidth,
  TPrinterCanvas_PaperWidth,
  TPrinterCanvas_PaperHeight,
  TPrinterCanvas_PageNumber,
  TPrinterCanvas_TopMargin,
  TPrinterCanvas_LeftMargin,
  TPrinterCanvas_BottomMargin,
  TPrinterCanvas_RightMargin,
  TPrinterCanvas_Orientation,
  TPrinterCanvas_XDPI,
  TPrinterCanvas_YDPI;