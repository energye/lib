// constructor manually create
function TEtoBuffer_Create(): TEtoBuffer; extdecl;
begin
  {$define handleExceptionID := 40100}
  handleExceptionBegin
  Result := TEtoBuffer.Create();
  handleExceptionEnd
end;

// function
function TEtoBuffer_Eto(AObj: TEtoBuffer): PInteger; extdecl;
begin
  {$define handleExceptionID := 40101}
  handleExceptionBegin
  Result := AObj.Eto();
  handleExceptionEnd
end;

// function
function TEtoBuffer_Len(AObj: TEtoBuffer): Integer; extdecl;
begin
  {$define handleExceptionID := 40102}
  handleExceptionBegin
  Result := AObj.Len();
  handleExceptionEnd
end;

// procedure
procedure TEtoBuffer_Clear(AObj: TEtoBuffer); extdecl;
begin
  {$define handleExceptionID := 40103}
  handleExceptionBegin
  AObj.Clear();
  handleExceptionEnd
end;

// procedure
procedure TEtoBuffer_SetMinLength(AObj: TEtoBuffer; ALen: Integer); extdecl;
begin
  {$define handleExceptionID := 40104}
  handleExceptionBegin
  AObj.SetMinLength(ALen);
  handleExceptionEnd
end;

exports
  TEtoBuffer_Create,
  TEtoBuffer_Eto,
  TEtoBuffer_Len,
  TEtoBuffer_Clear,
  TEtoBuffer_SetMinLength;