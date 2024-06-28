
//constructor
function CustomVirtualTreeOptions_Create(AOwner: TBaseVirtualTree): TCustomVirtualTreeOptions; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TCustomVirtualTreeOptions.Create(AOwner);
  handleExceptionEnd
end;

//property
function CustomVirtualTreeOptions_Owner(AObj: TCustomVirtualTreeOptions): TBaseVirtualTree; extdecl;
begin
  {$define handleExceptionFuncName :='Owner'}
  handleExceptionBegin
  Result := AObj.Owner;
  handleExceptionEnd
end;

//function
function CustomVirtualTreeOptions_Class(): TClass; extdecl;
begin
  Result := TCustomVirtualTreeOptions;
end;

//procedure
procedure CustomVirtualTreeOptions_AssignTo(AObj: TCustomVirtualTreeOptions; Dest: TPersistent); extdecl;
begin
  {$define handleExceptionFuncName :='AssignTo'}
  handleExceptionBegin
  AObj.AssignTo(Dest);
  handleExceptionEnd
end;


exports
  CustomVirtualTreeOptions_Create,
  CustomVirtualTreeOptions_Owner,
  CustomVirtualTreeOptions_Class,
  CustomVirtualTreeOptions_AssignTo;