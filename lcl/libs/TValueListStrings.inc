// constructor
function TValueListStrings_Create(AOwner: TValueListEditor): TValueListStrings; extdecl;
begin
  {$define handleExceptionID := 26300}
  handleExceptionBegin
  Result := TValueListStrings.Create(AOwner);
  handleExceptionEnd
end;

exports
  TValueListStrings_Create;
