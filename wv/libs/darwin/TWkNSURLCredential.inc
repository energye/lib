// constructor
function TWkNSURLCredential_Create(AData: NSURLCredential): TWkNSURLCredential; extdecl;
begin
  {$define handleExceptionID := 1200}
  handleExceptionBegin
  Result := TWkNSURLCredential.Create(AData);
  handleExceptionEnd
end;

// function
function TWkNSURLCredential_Data(AObj: TWkNSURLCredential): NSURLCredential; extdecl;
begin
  {$define handleExceptionID := 1201}
  handleExceptionBegin
  Result := AObj.Data();
  handleExceptionEnd
end;

// function
function TWkNSURLCredential_Persistence(AObj: TWkNSURLCredential): NSURLCredentialPersistence; extdecl;
begin
  {$define handleExceptionID := 1202}
  handleExceptionBegin
  Result := AObj.Persistence();
  handleExceptionEnd
end;

// procedure
procedure TWkNSURLCredential_Release(AObj: TWkNSURLCredential); extdecl;
begin
  {$define handleExceptionID := 1203}
  handleExceptionBegin
  AObj.Release();
  handleExceptionEnd
end;

exports
  TWkNSURLCredential_Create,
  TWkNSURLCredential_Data,
  TWkNSURLCredential_Persistence,
  TWkNSURLCredential_Release;