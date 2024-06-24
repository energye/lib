
//constructor
function CustomStringTreeOptions_Create(AOwner: TBaseVirtualTree): TCustomStringTreeOptions; extdecl;
begin
  handleExceptionBegin
  Result := TCustomStringTreeOptions.Create(AOwner);
  handleExceptionEnd
end;

//function
function CustomStringTreeOptions_Class(): TClass; extdecl;
begin
  Result := TCustomStringTreeOptions;
end;


exports
  CustomStringTreeOptions_Create,
  CustomStringTreeOptions_Class;