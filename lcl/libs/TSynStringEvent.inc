// constructor
function TSynStringEvent_Create(): TSynStringEvent; extdecl;
begin
  {$define handleExceptionID := 45100}
  handleExceptionBegin
  Result := TSynStringEvent.Create();
  handleExceptionEnd
end;

// property
procedure TSynStringEvent_Value(ASet: LongBool; AObj: TSynStringEvent; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 45101}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Value := AValue
  end else
    StringBufferCreate(AObj.Value, AStrData, AStrSize);
  handleExceptionEnd
end;

exports
  TSynStringEvent_Create,
  TSynStringEvent_Value;