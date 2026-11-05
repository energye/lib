// constructor
function TLCLComponent_Create(AOwner: TComponent): TLCLComponent; extdecl;
begin
  {$define handleExceptionID := 600}
  handleExceptionBegin
  Result := TLCLComponent.Create(AOwner);
  handleExceptionEnd
end;

function TLCLComponent_TClass(): TClass; extdecl;
begin
  Result := TLCLComponent;
end;

exports
  TLCLComponent_Create,
  TLCLComponent_TClass;