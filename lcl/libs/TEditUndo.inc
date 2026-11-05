// constructor
function TEditUndo_Create(AOwner: TComponent): TEditUndo; extdecl;
begin
  {$define handleExceptionID := 46300}
  handleExceptionBegin
  Result := TEditUndo.Create(AOwner);
  handleExceptionEnd
end;

function TEditUndo_TClass(): TClass; extdecl;
begin
  Result := TEditUndo;
end;

exports
  TEditUndo_Create,
  TEditUndo_TClass;