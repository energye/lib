
//property
function LCLReferenceComponent_HandleAllocated(AObj: TLCLReferenceComponent): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.HandleAllocated;
  handleExceptionEnd
end;

//property
function LCLReferenceComponent_ReferenceAllocated(AObj: TLCLReferenceComponent): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.ReferenceAllocated;
  handleExceptionEnd
end;

//function
function LCLReferenceComponent_Class(): TClass; extdecl;
begin
  Result := TLCLReferenceComponent;
end;


exports
  LCLReferenceComponent_HandleAllocated,
  LCLReferenceComponent_ReferenceAllocated,
  LCLReferenceComponent_Class;