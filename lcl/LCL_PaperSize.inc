
//constructor
function PaperSize_Create(aOwner: TPrinter): TPaperSize; extdecl;
begin
  handleExceptionBegin
  Result := TPaperSize.Create(aOwner);
  handleExceptionEnd
end;

//property
function PaperSize_DefaultPapers(AObj: TPaperSize): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.DefaultPapers;
  handleExceptionEnd
end;

//property
function PaperSize_Width(AObj: TPaperSize): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Width;
  handleExceptionEnd
end;

//property
function PaperSize_Height(AObj: TPaperSize): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Height;
  handleExceptionEnd
end;

//property
function PaperSize_PaperName(AIsSet: LongBool; AObj: TPaperSize; AValue: PChar): PChar; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.PaperName := AValue;
  end else
    Result := ToPChar(AObj.PaperName);
  handleExceptionEnd
end;

//property
function PaperSize_DefaultPaperName(AObj: TPaperSize): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.DefaultPaperName);
  handleExceptionEnd
end;

//property
function PaperSize_PaperRect(AIsSet: LongBool; AObj: TPaperSize; AValue: TPaperRect): TPaperRect; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.PaperRect := AValue;
  end else
    Result := AObj.PaperRect;
  handleExceptionEnd
end;

//property
function PaperSize_SupportedPapers(AObj: TPaperSize): TStrings; extdecl;
begin
  handleExceptionBegin
  Result := AObj.SupportedPapers;
  handleExceptionEnd
end;

//property
function PaperSize_PaperRectOf(AObj: TPaperSize; aName: PChar): TPaperRect; extdecl;
begin
  handleExceptionBegin
  Result := AObj.PaperRectOf[aName];
  handleExceptionEnd
end;

//function
function PaperSize_Class(): TClass; extdecl;
begin
  Result := TPaperSize;
end;


exports
  PaperSize_Create,
  PaperSize_DefaultPapers,
  PaperSize_Width,
  PaperSize_Height,
  PaperSize_PaperName,
  PaperSize_DefaultPaperName,
  PaperSize_PaperRect,
  PaperSize_SupportedPapers,
  PaperSize_PaperRectOf,
  PaperSize_Class;