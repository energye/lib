
//constructor
function Action_Create(AOwner: TComponent): TAction; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TAction.Create(AOwner);
  handleExceptionEnd
end;

//function
function Action_Class(): TClass; extdecl;
begin
  Result := TAction;
end;


exports
  Action_Create,
  Action_Class;