
//constructor
function TaskDialogRadioButtonItem_Create(ACollection: TCollection): TTaskDialogRadioButtonItem; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TTaskDialogRadioButtonItem.Create(ACollection);
  handleExceptionEnd
end;

//function
function TaskDialogRadioButtonItem_Class(): TClass; extdecl;
begin
  Result := TTaskDialogRadioButtonItem;
end;


exports
  TaskDialogRadioButtonItem_Create,
  TaskDialogRadioButtonItem_Class;