
//constructor
function TaskDialog_Create(AOwner: TComponent): TTaskDialog; extdecl;
begin
  handleExceptionBegin
  Result := TTaskDialog.Create(AOwner);
  handleExceptionEnd
end;

//function
function TaskDialog_Class(): TClass; extdecl;
begin
  Result := TTaskDialog;
end;


exports
  TaskDialog_Create,
  TaskDialog_Class;