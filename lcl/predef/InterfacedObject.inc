
//constructor
function InterfacedObject_Create(): TInterfacedObject; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TInterfacedObject.Create();
  handleExceptionEnd
end;

//property
function InterfacedObject_RefCount(AObj: TInterfacedObject): LongInt; extdecl;
begin
  {$define handleExceptionFuncName :='RefCount'}
  handleExceptionBegin
  Result := AObj.RefCount;
  handleExceptionEnd
end;

//function
function InterfacedObject_Class(): TClass;
begin
  Result := TInterfacedObject;
end;


exports
  InterfacedObject_Create,
  InterfacedObject_RefCount,
  InterfacedObject_Class;
