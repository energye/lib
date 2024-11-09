
//constructor
function NSURLCredential_Create(aData: NSURLCredential): TNSURLCredential; extdecl;
begin
  handleExceptionBegin
  Result := TNSURLCredential.Create(aData);
  handleExceptionEnd
end;

//function
function NSURLCredential_Data(AObj: TNSURLCredential): NSURLCredential; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Data();
  handleExceptionEnd
end;

//function
function NSURLCredential_Persistence(AObj: TNSURLCredential): NSURLCredentialPersistence; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Persistence();
  handleExceptionEnd
end;

//procedure
procedure NSURLCredential_Release(AObj: TNSURLCredential); extdecl;
begin
  handleExceptionBegin
  AObj.Release();
  handleExceptionEnd
end;


exports
  NSURLCredential_Create,
  NSURLCredential_Data,
  NSURLCredential_Persistence,
  NSURLCredential_Release;