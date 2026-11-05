// constructor
function THelpOnHelp_Create(TheOwner: TComponent): THelpOnHelp; extdecl;
begin
  {$define handleExceptionID := 46800}
  handleExceptionBegin
  Result := THelpOnHelp.Create(TheOwner);
  handleExceptionEnd
end;

function THelpOnHelp_TClass(): TClass; extdecl;
begin
  Result := THelpOnHelp;
end;

exports
  THelpOnHelp_Create,
  THelpOnHelp_TClass;