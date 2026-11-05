// constructor
function TButtonControl_Create(TheOwner: TComponent): TButtonControl; extdecl;
begin
  {$define handleExceptionID := 1500}
  handleExceptionBegin
  Result := TButtonControl.Create(TheOwner);
  handleExceptionEnd
end;

function TButtonControl_TClass(): TClass; extdecl;
begin
  Result := TButtonControl;
end;

exports
  TButtonControl_Create,
  TButtonControl_TClass;