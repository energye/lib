// function
function TFPCustomImageReader_ImageRead(AObj: TFPCustomImageReader; Str: TStream; Img: TFPCustomImage): TFPCustomImage; extdecl;
begin
  {$define handleExceptionID := 27700}
  handleExceptionBegin
  Result := AObj.ImageRead(Str, Img);
  handleExceptionEnd
end;

// function
function TFPCustomImageReader_CheckContents(AObj: TFPCustomImageReader; Str: TStream): LongBool; extdecl;
begin
  {$define handleExceptionID := 27701}
  handleExceptionBegin
  Result := AObj.CheckContents(Str);
  handleExceptionEnd
end;

// function static
procedure TFPCustomImageReader_ImageSize(Str: TStream; var Result: TPoint); extdecl;
begin
  Result := TFPCustomImageReader.ImageSize(Str);
end;

// property
function TFPCustomImageReader_DefaultImageClass(ASet: LongBool; AObj: TFPCustomImageReader; AValue: TFPCustomImageClass): TFPCustomImageClass; extdecl;
begin
  {$define handleExceptionID := 27702}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DefaultImageClass := AValue
  end else
    Result := AObj.DefaultImageClass;
  handleExceptionEnd
end;

exports
  TFPCustomImageReader_ImageRead,
  TFPCustomImageReader_CheckContents,
  TFPCustomImageReader_ImageSize,
  TFPCustomImageReader_DefaultImageClass;