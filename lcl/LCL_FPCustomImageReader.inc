
//property
function FPCustomImageReader_DefaultImageClass(AIsSet: LongBool; AObj: TFPCustomImageReader; AValue: TFPCustomImageClass): TFPCustomImageClass; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DefaultImageClass := AValue;
  end else
    Result := AObj.DefaultImageClass;
  handleExceptionEnd
end;

//function
function FPCustomImageReader_ImageRead(AObj: TFPCustomImageReader; Str: TStream; Img: TFPCustomImage): TFPCustomImage; extdecl;
begin
  handleExceptionBegin
  Result := AObj.ImageRead(Str, Img);
  handleExceptionEnd
end;

//function
function FPCustomImageReader_CheckContents(AObj: TFPCustomImageReader; Str: TStream): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.CheckContents(Str);
  handleExceptionEnd
end;

//function
function FPCustomImageReader_Class(): TClass; extdecl;
begin
  Result := TFPCustomImageReader;
end;


exports
  FPCustomImageReader_DefaultImageClass,
  FPCustomImageReader_ImageRead,
  FPCustomImageReader_CheckContents,
  FPCustomImageReader_Class;