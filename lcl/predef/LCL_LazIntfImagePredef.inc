
function LazIntfImage_DataDescription(AObj: TLazIntfImage): TRawImageDescription; extdecl;
begin
  handleExceptionBegin
  Result := AObj.DataDescription;
  handleExceptionEnd
end;

procedure LazIntfImage_SetDataDescription(AObj: TLazIntfImage; const AValue: TRawImageDescription); extdecl;
begin
  handleExceptionBegin
  AObj.DataDescription := AValue;
  handleExceptionEnd
end;

function LazIntfImage_CheckDescription(AObj: TLazIntfImage; const ADescription: TRawImageDescription; ExceptionOnError: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.CheckDescription(ADescription, ExceptionOnError);
  handleExceptionEnd
end;

procedure LazIntfImage_SetDataDescriptionKeepData(AObj: TLazIntfImage; const ADescription: TRawImageDescription); extdecl;
begin
  handleExceptionBegin
  AObj.SetDataDescriptionKeepData(ADescription);
  handleExceptionEnd
end;

exports
  LazIntfImage_DataDescription,
  LazIntfImage_SetDataDescription,
  LazIntfImage_CheckDescription,
  LazIntfImage_SetDataDescriptionKeepData;
