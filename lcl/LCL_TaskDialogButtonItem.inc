
//constructor
function TaskDialogButtonItem_Create(ACollection: TCollection): TTaskDialogButtonItem; extdecl;
begin
  handleExceptionBegin
  Result := TTaskDialogButtonItem.Create(ACollection);
  handleExceptionEnd
end;

//function
function TaskDialogButtonItem_Class(): TClass; extdecl;
begin
  Result := TTaskDialogButtonItem;
end;


exports
  TaskDialogButtonItem_Create,
  TaskDialogButtonItem_Class;