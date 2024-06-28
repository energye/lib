
//constructor
function ButtonControl_Create(TheOwner: TComponent): TButtonControl; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TButtonControl.Create(TheOwner);
  handleExceptionEnd
end;

//function
function ButtonControl_Class(): TClass; extdecl;
begin
  Result := TButtonControl;
end;


exports
  ButtonControl_Create,
  ButtonControl_Class;