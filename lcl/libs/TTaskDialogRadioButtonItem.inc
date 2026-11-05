// constructor
function TTaskDialogRadioButtonItem_Create(ACollection: TCollection): TTaskDialogRadioButtonItem; extdecl;
begin
  {$define handleExceptionID := 21000}
  handleExceptionBegin
  Result := TTaskDialogRadioButtonItem.Create(ACollection);
  handleExceptionEnd
end;

exports
  TTaskDialogRadioButtonItem_Create;
