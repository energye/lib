// constructor
function TAction_Create(AOwner: TComponent): TAction; extdecl;
begin
  {$define handleExceptionID := 15600}
  handleExceptionBegin
  Result := TAction.Create(AOwner);
  handleExceptionEnd
end;

function TAction_TClass(): TClass; extdecl;
begin
  Result := TAction;
end;

exports
  TAction_Create,
  TAction_TClass;