// constructor
function TEditCopy_Create(AOwner: TComponent): TEditCopy; extdecl;
begin
  {$define handleExceptionID := 46000}
  handleExceptionBegin
  Result := TEditCopy.Create(AOwner);
  handleExceptionEnd
end;

function TEditCopy_TClass(): TClass; extdecl;
begin
  Result := TEditCopy;
end;

exports
  TEditCopy_Create,
  TEditCopy_TClass;