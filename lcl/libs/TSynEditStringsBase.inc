// function
function TSynEditStringsBase_GetPCharWithInt(AObj: TSynEditStringsBase; ALineIndex: Integer): PChar; extdecl;
begin
  {$define handleExceptionID := 38000}
  handleExceptionBegin
  Result := AObj.GetPChar(ALineIndex);
  handleExceptionEnd
end;

// function
function TSynEditStringsBase_GetPCharWithIntX2(AObj: TSynEditStringsBase; ALineIndex: Integer; var ALen: Integer): PChar; extdecl;
var
  OutALen: Integer;
begin
  {$define handleExceptionID := 38001}
  handleExceptionBegin
  Result := AObj.GetPChar(ALineIndex, OutALen);
  ALen := OutALen;
  handleExceptionEnd
end;

// procedure
procedure TSynEditStringsBase_SendHighlightChanged(AObj: TSynEditStringsBase; aIndex: Integer; aCount: Integer); extdecl;
begin
  {$define handleExceptionID := 38002}
  handleExceptionBegin
  AObj.SendHighlightChanged(aIndex, aCount);
  handleExceptionEnd
end;

// property
function TSynEditStringsBase_Ranges(ASet: LongBool; AObj: TSynEditStringsBase; Index: Pointer; AValue: TSynManagedStorageMem): TSynManagedStorageMem; extdecl;
begin
  {$define handleExceptionID := 38003}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Ranges[Index] := AValue
  end else
    Result := AObj.Ranges[Index];
  handleExceptionEnd
end;

exports
  TSynEditStringsBase_GetPCharWithInt,
  TSynEditStringsBase_GetPCharWithIntX2,
  TSynEditStringsBase_SendHighlightChanged,
  TSynEditStringsBase_Ranges;