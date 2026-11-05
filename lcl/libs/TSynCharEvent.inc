// constructor
function TSynCharEvent_Create(): TSynCharEvent; extdecl;
begin
  {$define handleExceptionID := 45000}
  handleExceptionBegin
  Result := TSynCharEvent.Create();
  handleExceptionEnd
end;

// property
procedure TSynCharEvent_Key(ASet: LongBool; AObj: TSynCharEvent; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 45001}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Key := AValue
  end else
    StringBufferCreate(AObj.Key, AStrData, AStrSize);
  handleExceptionEnd
end;

exports
  TSynCharEvent_Create,
  TSynCharEvent_Key;