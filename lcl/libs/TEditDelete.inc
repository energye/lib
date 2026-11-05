// constructor
function TEditDelete_Create(AOwner: TComponent): TEditDelete; extdecl;
begin
  {$define handleExceptionID := 46400}
  handleExceptionBegin
  Result := TEditDelete.Create(AOwner);
  handleExceptionEnd
end;

function TEditDelete_TClass(): TClass; extdecl;
begin
  Result := TEditDelete;
end;

exports
  TEditDelete_Create,
  TEditDelete_TClass;