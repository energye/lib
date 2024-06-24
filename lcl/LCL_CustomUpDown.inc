
//constructor
function CustomUpDown_Create(AOwner: TComponent): TCustomUpDown; extdecl;
begin
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