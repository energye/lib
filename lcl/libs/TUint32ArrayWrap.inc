// constructor
function TUint32ArrayWrap_Create(AData: TUint32Array; ADataCount: Integer): TUint32ArrayWrap; extdecl;
var
  TempAData: TUint32Array = nil;
  TempADataIdx: Integer;
begin
  {$define handleExceptionID := 31800}
  handleExceptionBegin
  SetLength(TempAData, ADataCount);
  for TempADataIdx := 0 to ADataCount - 1 do
  begin
    TempAData[TempADataIdx] := AData[TempADataIdx]
  end;
  Result := TUint32ArrayWrap.Create(TempAData);
  handleExceptionEnd
end;

// constructor
function TUint32ArrayWrap_CreateWithInt(ASize: integer): TUint32ArrayWrap; extdecl;
begin
  {$define handleExceptionID := 31801}
  handleExceptionBegin
  Result := TUint32ArrayWrap.Create(ASize);
  handleExceptionEnd
end;

// function
function TUint32ArrayWrap_Uint32ArrayData(AObj: TUint32ArrayWrap): PUint32Array; extdecl;
begin
  {$define handleExceptionID := 31802}
  handleExceptionBegin
  Result := AObj.Uint32ArrayData();
  handleExceptionEnd
end;

// function
function TUint32ArrayWrap_Size(AObj: TUint32ArrayWrap): integer; extdecl;
begin
  {$define handleExceptionID := 31803}
  handleExceptionBegin
  Result := AObj.Size();
  handleExceptionEnd
end;

// function
function TUint32ArrayWrap_GetValue(AObj: TUint32ArrayWrap; AIndex: integer): uint32; extdecl;
begin
  {$define handleExceptionID := 31804}
  handleExceptionBegin
  Result := AObj.GetValue(AIndex);
  handleExceptionEnd
end;

// procedure
procedure TUint32ArrayWrap_SetValue(AObj: TUint32ArrayWrap; AIndex: integer; AValue: uint32); extdecl;
begin
  {$define handleExceptionID := 31805}
  handleExceptionBegin
  AObj.SetValue(AIndex, AValue);
  handleExceptionEnd
end;

exports
  TUint32ArrayWrap_Create,
  TUint32ArrayWrap_CreateWithInt,
  TUint32ArrayWrap_Uint32ArrayData,
  TUint32ArrayWrap_Size,
  TUint32ArrayWrap_GetValue,
  TUint32ArrayWrap_SetValue;