// property
function TLazAccessibleObjectEnumerator_Current(AObj: TLazAccessibleObjectEnumerator): TLazAccessibleObject; extdecl;
begin
  {$define handleExceptionID := 28000}
  handleExceptionBegin
  Result := AObj.Current;
  handleExceptionEnd
end;

exports
  TLazAccessibleObjectEnumerator_Current;
