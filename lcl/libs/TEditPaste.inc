// constructor
function TEditPaste_Create(AOwner: TComponent): TEditPaste; extdecl;
begin
  {$define handleExceptionID := 46100}
  handleExceptionBegin
  Result := TEditPaste.Create(AOwner);
  handleExceptionEnd
end;

function TEditPaste_TClass(): TClass; extdecl;
begin
  Result := TEditPaste;
end;

exports
  TEditPaste_Create,
  TEditPaste_TClass;