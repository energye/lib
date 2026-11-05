// constructor
function TInterfacedObject_Create(): TInterfacedObject; extdecl;
begin
  {$define handleExceptionID := 31500}
  handleExceptionBegin
  Result := TInterfacedObject.Create();
  handleExceptionEnd
end;

// property
function TInterfacedObject_RefCount(AObj: TInterfacedObject): Integer; extdecl;
begin
  {$define handleExceptionID := 31501}
  handleExceptionBegin
  Result := AObj.RefCount;
  handleExceptionEnd
end;

exports
  TInterfacedObject_Create,
  TInterfacedObject_RefCount;