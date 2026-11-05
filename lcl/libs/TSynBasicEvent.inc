// constructor
function TSynBasicEvent_Create(): TSynBasicEvent; extdecl;
begin
  {$define handleExceptionID := 44900}
  handleExceptionBegin
  Result := TSynBasicEvent.Create();
  handleExceptionEnd
end;

// property
function TSynBasicEvent_Command(ASet: LongBool; AObj: TSynBasicEvent; AValue: TSynEditorCommand): TSynEditorCommand; extdecl;
begin
  {$define handleExceptionID := 44901}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Command := AValue
  end else
    Result := AObj.Command;
  handleExceptionEnd
end;

exports
  TSynBasicEvent_Create,
  TSynBasicEvent_Command;