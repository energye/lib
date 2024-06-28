
//constructor
function ValueListStrings_Create(AOwner: TValueListEditor): TValueListStrings; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TValueListStrings.Create(AOwner);
  handleExceptionEnd
end;

//function
function ValueListStrings_Class(): TClass; extdecl;
begin
  Result := TValueListStrings;
end;


exports
  ValueListStrings_Create,
  ValueListStrings_Class;