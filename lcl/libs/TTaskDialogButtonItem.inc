// constructor
function TTaskDialogButtonItem_Create(ACollection: TCollection): TTaskDialogButtonItem; extdecl;
begin
  {$define handleExceptionID := 20900}
  handleExceptionBegin
  Result := TTaskDialogButtonItem.Create(ACollection);
  handleExceptionEnd
end;

exports
  TTaskDialogButtonItem_Create;
