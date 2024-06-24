
//constructor
function Action_Create(AOwner: TComponent): TAction; extdecl;
begin
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