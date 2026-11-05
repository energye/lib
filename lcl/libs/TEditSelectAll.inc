// constructor
function TEditSelectAll_Create(AOwner: TComponent): TEditSelectAll; extdecl;
begin
  {$define handleExceptionID := 46200}
  handleExceptionBegin
  Result := TEditSelectAll.Create(AOwner);
  handleExceptionEnd
end;

function TEditSelectAll_TClass(): TClass; extdecl;
begin
  Result := TEditSelectAll;
end;

exports
  TEditSelectAll_Create,
  TEditSelectAll_TClass;