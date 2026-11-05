// constructor
function TGEEdit_Create(TheOwner: TComponent): TGEEdit; extdecl;
begin
  {$define handleExceptionID := 2500}
  handleExceptionBegin
  Result := TGEEdit.Create(TheOwner);
  handleExceptionEnd
end;

function TGEEdit_TClass(): TClass; extdecl;
begin
  Result := TGEEdit;
end;

exports
  TGEEdit_Create,
  TGEEdit_TClass;