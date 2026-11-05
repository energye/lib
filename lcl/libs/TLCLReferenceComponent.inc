// property
function TLCLReferenceComponent_HandleAllocated(AObj: TLCLReferenceComponent): LongBool; extdecl;
begin
  {$define handleExceptionID := 24700}
  handleExceptionBegin
  Result := AObj.HandleAllocated;
  handleExceptionEnd
end;

// property
function TLCLReferenceComponent_ReferenceAllocated(AObj: TLCLReferenceComponent): LongBool; extdecl;
begin
  {$define handleExceptionID := 24701}
  handleExceptionBegin
  Result := AObj.ReferenceAllocated;
  handleExceptionEnd
end;

exports
  TLCLReferenceComponent_HandleAllocated,
  TLCLReferenceComponent_ReferenceAllocated;