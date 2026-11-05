// constructor
function TSaveDialog_Create(AOwner: TComponent): TSaveDialog; extdecl;
begin
  {$define handleExceptionID := 6900}
  handleExceptionBegin
  Result := TSaveDialog.Create(AOwner);
  handleExceptionEnd
end;

function TSaveDialog_TClass(): TClass; extdecl;
begin
  Result := TSaveDialog;
end;

exports
  TSaveDialog_Create,
  TSaveDialog_TClass;