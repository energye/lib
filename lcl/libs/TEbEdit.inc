// constructor
function TEbEdit_Create(TheOwner: TComponent): TEbEdit; extdecl;
begin
  {$define handleExceptionID := 2600}
  handleExceptionBegin
  Result := TEbEdit.Create(TheOwner);
  handleExceptionEnd
end;

function TEbEdit_TClass(): TClass; extdecl;
begin
  Result := TEbEdit;
end;

exports
  TEbEdit_Create,
  TEbEdit_TClass;