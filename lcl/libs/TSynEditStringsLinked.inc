// constructor
function TSynEditStringsLinked_Create(): TSynEditStringsLinked; extdecl;
begin
  {$define handleExceptionID := 38200}
  handleExceptionBegin
  Result := TSynEditStringsLinked.Create();
  handleExceptionEnd
end;

// procedure
procedure TSynEditStringsLinked_RemoveHandlers(AObj: TSynEditStringsLinked; AOwner: TObject); extdecl;
begin
  {$define handleExceptionID := 38201}
  handleExceptionBegin
  AObj.RemoveHandlers(AOwner);
  handleExceptionEnd
end;

// property
function TSynEditStringsLinked_NextLines(ASet: LongBool; AObj: TSynEditStringsLinked; AValue: TSynEditStrings): TSynEditStrings; extdecl;
begin
  {$define handleExceptionID := 38202}
  handleExceptionBegin
  if ASet then
  begin
    AObj.NextLines := AValue
  end else
    Result := AObj.NextLines;
  handleExceptionEnd
end;

exports
  TSynEditStringsLinked_Create,
  TSynEditStringsLinked_RemoveHandlers,
  TSynEditStringsLinked_NextLines;