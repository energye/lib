
//constructor
function CustomVirtualDrawTree_Create(AOwner: TComponent): TCustomVirtualDrawTree; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TCustomVirtualDrawTree.Create(AOwner);
  handleExceptionEnd
end;

//function
function CustomVirtualDrawTree_Class(): TClass; extdecl;
begin
  Result := TCustomVirtualDrawTree;
end;


exports
  CustomVirtualDrawTree_Create,
  CustomVirtualDrawTree_Class;