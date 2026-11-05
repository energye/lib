// constructor
function TCustomUpDown_Create(AOwner: TComponent): TCustomUpDown; extdecl;
begin
  {$define handleExceptionID := 8500}
  handleExceptionBegin
  Result := TCustomUpDown.Create(AOwner);
  handleExceptionEnd
end;

function TCustomUpDown_TClass(): TClass; extdecl;
begin
  Result := TCustomUpDown;
end;

exports
  TCustomUpDown_Create,
  TCustomUpDown_TClass;