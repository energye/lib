// constructor
function THelpContextAction_Create(TheOwner: TComponent): THelpContextAction; extdecl;
begin
  {$define handleExceptionID := 46900}
  handleExceptionBegin
  Result := THelpContextAction.Create(TheOwner);
  handleExceptionEnd
end;

function THelpContextAction_TClass(): TClass; extdecl;
begin
  Result := THelpContextAction;
end;

exports
  THelpContextAction_Create,
  THelpContextAction_TClass;