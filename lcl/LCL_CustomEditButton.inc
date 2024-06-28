
//constructor
function CustomEditButton_Create(AOwner: TComponent): TCustomEditButton; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TCustomEditButton.Create(AOwner);
  handleExceptionEnd
end;

//function
function CustomEditButton_Class(): TClass; extdecl;
begin
  Result := TCustomEditButton;
end;


exports
  CustomEditButton_Create,
  CustomEditButton_Class;