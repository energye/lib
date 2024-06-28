
//constructor
function CustomUpDown_Create(AOwner: TComponent): TCustomUpDown; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TCustomUpDown.Create(AOwner);
  handleExceptionEnd
end;

//function
function CustomUpDown_Class(): TClass; extdecl;
begin
  Result := TCustomUpDown;
end;


exports
  CustomUpDown_Create,
  CustomUpDown_Class;