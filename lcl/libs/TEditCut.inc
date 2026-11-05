// constructor
function TEditCut_Create(AOwner: TComponent): TEditCut; extdecl;
begin
  {$define handleExceptionID := 45900}
  handleExceptionBegin
  Result := TEditCut.Create(AOwner);
  handleExceptionEnd
end;

function TEditCut_TClass(): TClass; extdecl;
begin
  Result := TEditCut;
end;

exports
  TEditCut_Create,
  TEditCut_TClass;