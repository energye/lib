// constructor
function TTimer_Create(AOwner: TComponent): TTimer; extdecl;
begin
  {$define handleExceptionID := 16500}
  handleExceptionBegin
  Result := TTimer.Create(AOwner);
  handleExceptionEnd
end;

function TTimer_TClass(): TClass; extdecl;
begin
  Result := TTimer;
end;

exports
  TTimer_Create,
  TTimer_TClass;