
//constructor
function JPEGImage_Create(): TJPEGImage; extdecl;
begin
  handleExceptionBegin
  Result := TJPEGImage.Create();
  handleExceptionEnd
end;

//property
function JPEGImage_CompressionQuality(AIsSet: LongBool; AObj: TJPEGImage; AValue: TJPEGQualityRange): TJPEGQualityRange; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.CompressionQuality := AValue;
  end else
    Result := AObj.CompressionQuality;
  handleExceptionEnd
end;

//property
function JPEGImage_GrayScale(AObj: TJPEGImage): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GrayScale;
  handleExceptionEnd
end;

//property
function JPEGImage_MinHeight(AIsSet: LongBool; AObj: TJPEGImage; AValue: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.MinHeight := AValue;
  end else
    Result := AObj.MinHeight;
  handleExceptionEnd
end;

//property
function JPEGImage_MinWidth(AIsSet: LongBool; AObj: TJPEGImage; AValue: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.MinWidth := AValue;
  end else
    Result := AObj.MinWidth;
  handleExceptionEnd
end;

//property
function JPEGImage_ProgressiveEncoding(AIsSet: LongBool; AObj: TJPEGImage; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ProgressiveEncoding := AValue;
  end else
    Result := AObj.ProgressiveEncoding;
  handleExceptionEnd
end;

//property
function JPEGImage_Performance(AIsSet: LongBool; AObj: TJPEGImage; AValue: TJPEGPerformance): TJPEGPerformance; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Performance := AValue;
  end else
    Result := AObj.Performance;
  handleExceptionEnd
end;

//property
function JPEGImage_Scale(AIsSet: LongBool; AObj: TJPEGImage; AValue: TJPEGScale): TJPEGScale; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Scale := AValue;
  end else
    Result := AObj.Scale;
  handleExceptionEnd
end;

//property
function JPEGImage_Smoothing(AIsSet: LongBool; AObj: TJPEGImage; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Smoothing := AValue;
  end else
    Result := AObj.Smoothing;
  handleExceptionEnd
end;

//function
function JPEGImage_Class(): TClass; extdecl;
begin
  Result := TJPEGImage;
end;

//procedure
procedure JPEGImage_Compress(AObj: TJPEGImage); extdecl;
begin
  handleExceptionBegin
  AObj.Compress();
  handleExceptionEnd
end;


exports
  JPEGImage_Create,
  JPEGImage_CompressionQuality,
  JPEGImage_GrayScale,
  JPEGImage_MinHeight,
  JPEGImage_MinWidth,
  JPEGImage_ProgressiveEncoding,
  JPEGImage_Performance,
  JPEGImage_Scale,
  JPEGImage_Smoothing,
  JPEGImage_Class,
  JPEGImage_Compress;