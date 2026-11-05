// constructor
function TSynEditPointBase_Create(): TSynEditPointBase; extdecl;
begin
  {$define handleExceptionID := 37700}
  handleExceptionBegin
  Result := TSynEditPointBase.Create();
  handleExceptionEnd
end;

// constructor
function TSynEditPointBase_CreateWithSynEditStringsLinked(Lines: TSynEditStringsLinked): TSynEditPointBase; extdecl;
begin
  {$define handleExceptionID := 37701}
  handleExceptionBegin
  Result := TSynEditPointBase.Create(Lines);
  handleExceptionEnd
end;

// procedure
procedure TSynEditPointBase_Lock(AObj: TSynEditPointBase); extdecl;
begin
  {$define handleExceptionID := 37702}
  handleExceptionBegin
  AObj.Lock();
  handleExceptionEnd
end;

// procedure
procedure TSynEditPointBase_Unlock(AObj: TSynEditPointBase); extdecl;
begin
  {$define handleExceptionID := 37703}
  handleExceptionBegin
  AObj.Unlock();
  handleExceptionEnd
end;

// property
function TSynEditPointBase_Lines(ASet: LongBool; AObj: TSynEditPointBase; AValue: TSynEditStringsLinked): TSynEditStringsLinked; extdecl;
begin
  {$define handleExceptionID := 37704}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Lines := AValue
  end else
    Result := AObj.Lines;
  handleExceptionEnd
end;

// property
function TSynEditPointBase_Locked(AObj: TSynEditPointBase): LongBool; extdecl;
begin
  {$define handleExceptionID := 37705}
  handleExceptionBegin
  Result := AObj.Locked;
  handleExceptionEnd
end;

exports
  TSynEditPointBase_Create,
  TSynEditPointBase_CreateWithSynEditStringsLinked,
  TSynEditPointBase_Lock,
  TSynEditPointBase_Unlock,
  TSynEditPointBase_Lines,
  TSynEditPointBase_Locked;