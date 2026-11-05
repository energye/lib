// constructor
function TSynEditStorageMem_Create(): TSynEditStorageMem; extdecl;
begin
  {$define handleExceptionID := 39200}
  handleExceptionBegin
  Result := TSynEditStorageMem.Create();
  handleExceptionEnd
end;

// procedure
procedure TSynEditStorageMem_InsertRows(AObj: TSynEditStorageMem; AIndex: Integer; ACount: Integer); extdecl;
begin
  {$define handleExceptionID := 39201}
  handleExceptionBegin
  AObj.InsertRows(AIndex, ACount);
  handleExceptionEnd
end;

// procedure
procedure TSynEditStorageMem_DeleteRows(AObj: TSynEditStorageMem; AIndex: Integer; ACount: Integer); extdecl;
begin
  {$define handleExceptionID := 39202}
  handleExceptionBegin
  AObj.DeleteRows(AIndex, ACount);
  handleExceptionEnd
end;

// property
function TSynEditStorageMem_Capacity(ASet: LongBool; AObj: TSynEditStorageMem; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 39203}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Capacity := AValue
  end else
    Result := AObj.Capacity;
  handleExceptionEnd
end;

// property
function TSynEditStorageMem_Count(ASet: LongBool; AObj: TSynEditStorageMem; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 39204}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Count := AValue
  end else
    Result := AObj.Count;
  handleExceptionEnd
end;

exports
  TSynEditStorageMem_Create,
  TSynEditStorageMem_InsertRows,
  TSynEditStorageMem_DeleteRows,
  TSynEditStorageMem_Capacity,
  TSynEditStorageMem_Count;