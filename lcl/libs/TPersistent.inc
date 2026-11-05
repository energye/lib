// constructor
function TPersistent_Create(): TPersistent; extdecl;
begin
  {$define handleExceptionID := 200}
  handleExceptionBegin
  Result := TPersistent.Create();
  handleExceptionEnd
end;

// function
procedure TPersistent_GetNamePath(AObj: TPersistent;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 201}
  handleExceptionBegin
  StringBufferCreate(AObj.GetNamePath(), AStrData, AStrSize);
  handleExceptionEnd
end;

// procedure
procedure TPersistent_Assign(AObj: TPersistent; Source: TPersistent); extdecl;
begin
  {$define handleExceptionID := 202}
  handleExceptionBegin
  AObj.Assign(Source);
  handleExceptionEnd
end;

exports
  TPersistent_Create,
  TPersistent_GetNamePath,
  TPersistent_Assign;