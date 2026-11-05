// constructor
function TJPEGImage_Create(): TJPEGImage; extdecl;
begin
  {$define handleExceptionID := 15000}
  handleExceptionBegin
  Result := TJPEGImage.Create();
  handleExceptionEnd
end;

{$IFNDEF DisableLCLJPEG}
// procedure
procedure TJPEGImage_Compress(AObj: TJPEGImage); extdecl;
begin
  {$define handleExceptionID := 15001}
  handleExceptionBegin
  AObj.Compress();
  handleExceptionEnd
end;
{$ENDIF}

{$IFNDEF DisableLCLJPEG}
// property
function TJPEGImage_CompressionQuality(ASet: LongBool; AObj: TJPEGImage; AValue: TJPEGQualityRange): TJPEGQualityRange; extdecl;
begin
  {$define handleExceptionID := 15002}
  handleExceptionBegin
  if ASet then
  begin
    AObj.CompressionQuality := AValue
  end else
    Result := AObj.CompressionQuality;
  handleExceptionEnd
end;
{$ENDIF}

{$IFNDEF DisableLCLJPEG}
// property
function TJPEGImage_GrayScale(ASet: LongBool; AObj: TJPEGImage; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 15003}
  handleExceptionBegin
  if ASet then
  begin
    AObj.GrayScale := AValue
  end else
    Result := AObj.GrayScale;
  handleExceptionEnd
end;
{$ENDIF}

{$IFNDEF DisableLCLJPEG}
// property
function TJPEGImage_MinHeight(ASet: LongBool; AObj: TJPEGImage; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 15004}
  handleExceptionBegin
  if ASet then
  begin
    AObj.MinHeight := AValue
  end else
    Result := AObj.MinHeight;
  handleExceptionEnd
end;
{$ENDIF}

{$IFNDEF DisableLCLJPEG}
// property
function TJPEGImage_MinWidth(ASet: LongBool; AObj: TJPEGImage; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 15005}
  handleExceptionBegin
  if ASet then
  begin
    AObj.MinWidth := AValue
  end else
    Result := AObj.MinWidth;
  handleExceptionEnd
end;
{$ENDIF}

{$IFNDEF DisableLCLJPEG}
// property
function TJPEGImage_ProgressiveEncoding(ASet: LongBool; AObj: TJPEGImage; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 15006}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ProgressiveEncoding := AValue
  end else
    Result := AObj.ProgressiveEncoding;
  handleExceptionEnd
end;
{$ENDIF}

{$IFNDEF DisableLCLJPEG}
// property
function TJPEGImage_Performance(ASet: LongBool; AObj: TJPEGImage; AValue: TJPEGPerformance): TJPEGPerformance; extdecl;
begin
  {$define handleExceptionID := 15007}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Performance := AValue
  end else
    Result := AObj.Performance;
  handleExceptionEnd
end;
{$ENDIF}

{$IFNDEF DisableLCLJPEG}
// property
function TJPEGImage_Scale(ASet: LongBool; AObj: TJPEGImage; AValue: TJPEGScale): TJPEGScale; extdecl;
begin
  {$define handleExceptionID := 15008}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Scale := AValue
  end else
    Result := AObj.Scale;
  handleExceptionEnd
end;
{$ENDIF}

{$IFNDEF DisableLCLJPEG}
// property
function TJPEGImage_Smoothing(ASet: LongBool; AObj: TJPEGImage; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 15009}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Smoothing := AValue
  end else
    Result := AObj.Smoothing;
  handleExceptionEnd
end;
{$ENDIF}

exports
  TJPEGImage_Create,
{$IFNDEF DisableLCLJPEG}
  TJPEGImage_Compress,
{$ENDIF}
{$IFNDEF DisableLCLJPEG}
  TJPEGImage_CompressionQuality,
{$ENDIF}
{$IFNDEF DisableLCLJPEG}
  TJPEGImage_GrayScale,
{$ENDIF}
{$IFNDEF DisableLCLJPEG}
  TJPEGImage_MinHeight,
{$ENDIF}
{$IFNDEF DisableLCLJPEG}
  TJPEGImage_MinWidth,
{$ENDIF}
{$IFNDEF DisableLCLJPEG}
  TJPEGImage_ProgressiveEncoding,
{$ENDIF}
{$IFNDEF DisableLCLJPEG}
  TJPEGImage_Performance,
{$ENDIF}
{$IFNDEF DisableLCLJPEG}
  TJPEGImage_Scale,
{$ENDIF}
{$IFNDEF DisableLCLJPEG}
  TJPEGImage_Smoothing{$ENDIF}
;