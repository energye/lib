
//constructor
function LCLComponent_Create(TheOwner: TComponent): TLCLComponent; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TLCLComponent.Create(TheOwner);
  handleExceptionEnd
end;

//property
function LCLComponent_LCLRefCount(AObj: TLCLComponent): integer; extdecl;
begin
  {$define handleExceptionFuncName :='LCLRefCount'}
  handleExceptionBegin
  Result := AObj.LCLRefCount;
  handleExceptionEnd
end;

//function
function LCLComponent_Class(): TClass; extdecl;
begin
  Result := TLCLComponent;
end;

//procedure
procedure LCLComponent_RemoveAllHandlersOfObject(AObj: TLCLComponent; AnObject: TObject); extdecl;
begin
  {$define handleExceptionFuncName :='RemoveAllHandlersOfObject'}
  handleExceptionBegin
  AObj.RemoveAllHandlersOfObject(AnObject);
  handleExceptionEnd
end;

//procedure
procedure LCLComponent_IncLCLRefCount(AObj: TLCLComponent); extdecl;
begin
  {$define handleExceptionFuncName :='IncLCLRefCount'}
  handleExceptionBegin
  AObj.IncLCLRefCount();
  handleExceptionEnd
end;

//procedure
procedure LCLComponent_DecLCLRefCount(AObj: TLCLComponent); extdecl;
begin
  {$define handleExceptionFuncName :='DecLCLRefCount'}
  handleExceptionBegin
  AObj.DecLCLRefCount();
  handleExceptionEnd
end;


exports
  LCLComponent_Create,
  LCLComponent_LCLRefCount,
  LCLComponent_Class,
  LCLComponent_RemoveAllHandlersOfObject,
  LCLComponent_IncLCLRefCount,
  LCLComponent_DecLCLRefCount;