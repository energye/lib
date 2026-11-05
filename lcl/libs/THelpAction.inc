// constructor
function THelpAction_Create(TheOwner: TComponent): THelpAction; extdecl;
begin
  {$define handleExceptionID := 46500}
  handleExceptionBegin
  Result := THelpAction.Create(TheOwner);
  handleExceptionEnd
end;

function THelpAction_TClass(): TClass; extdecl;
begin
  Result := THelpAction;
end;

exports
  THelpAction_Create,
  THelpAction_TClass;