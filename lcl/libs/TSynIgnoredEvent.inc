// constructor
function TSynIgnoredEvent_Create(): TSynIgnoredEvent; extdecl;
begin
  {$define handleExceptionID := 44800}
  handleExceptionBegin
  Result := TSynIgnoredEvent.Create();
  handleExceptionEnd
end;

exports
  TSynIgnoredEvent_Create;
