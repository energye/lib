// constructor
function TTaskDialog_Create(AOwner: TComponent): TTaskDialog; extdecl;
begin
  {$define handleExceptionID := 20600}
  handleExceptionBegin
  Result := TTaskDialog.Create(AOwner);
  handleExceptionEnd
end;

function TTaskDialog_TClass(): TClass; extdecl;
begin
  Result := TTaskDialog;
end;

exports
  TTaskDialog_Create,
  TTaskDialog_TClass;