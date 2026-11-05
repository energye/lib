// constructor
function TPaperSize_Create(aOwner: TPrinter): TPaperSize; extdecl;
begin
  {$define handleExceptionID := 25900}
  handleExceptionBegin
  Result := TPaperSize.Create(aOwner);
  handleExceptionEnd
end;

// property
function TPaperSize_DefaultPapers(AObj: TPaperSize): LongBool; extdecl;
begin
  {$define handleExceptionID := 25901}
  handleExceptionBegin
  Result := AObj.DefaultPapers;
  handleExceptionEnd
end;

// property
function TPaperSize_Width(AObj: TPaperSize): Integer; extdecl;
begin
  {$define handleExceptionID := 25902}
  handleExceptionBegin
  Result := AObj.Width;
  handleExceptionEnd
end;

// property
function TPaperSize_Height(AObj: TPaperSize): Integer; extdecl;
begin
  {$define handleExceptionID := 25903}
  handleExceptionBegin
  Result := AObj.Height;
  handleExceptionEnd
end;

// property
procedure TPaperSize_PaperName(ASet: LongBool; AObj: TPaperSize; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 25904}
  handleExceptionBegin
  if ASet then
  begin
    AObj.PaperName := AValue
  end else
    StringBufferCreate(AObj.PaperName, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TPaperSize_DefaultPaperName(AObj: TPaperSize; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 25905}
  handleExceptionBegin
  StringBufferCreate(AObj.DefaultPaperName, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TPaperSize_PaperRect(ASet: LongBool; AObj: TPaperSize; var AValue: TPaperRectPtr; var Result: TPaperRectPtr); extdecl;
begin
  {$define handleExceptionID := 25906}
  handleExceptionBegin
  if ASet then
  begin
    AObj.PaperRect := TPaperRectToPas(AValue)
  end else
    Result := TPaperRectToGo(AObj.PaperRect);
  handleExceptionEnd
end;

// property
function TPaperSize_SupportedPapers(AObj: TPaperSize): TStrings; extdecl;
begin
  {$define handleExceptionID := 25907}
  handleExceptionBegin
  Result := AObj.SupportedPapers;
  handleExceptionEnd
end;

// property
procedure TPaperSize_PaperRectOf(AObj: TPaperSize; aName: PChar; var Result: TPaperRectPtr); extdecl;
begin
  {$define handleExceptionID := 25908}
  handleExceptionBegin
  Result := TPaperRectToGo(AObj.PaperRectOf[aName]);
  handleExceptionEnd
end;

exports
  TPaperSize_Create,
  TPaperSize_DefaultPapers,
  TPaperSize_Width,
  TPaperSize_Height,
  TPaperSize_PaperName,
  TPaperSize_DefaultPaperName,
  TPaperSize_PaperRect,
  TPaperSize_SupportedPapers,
  TPaperSize_PaperRectOf;