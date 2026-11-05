// constructor
function TWkNSURLAuthenticationChallenge_Create(AData: NSURLAuthenticationChallenge): TWkNSURLAuthenticationChallenge; extdecl;
begin
  {$define handleExceptionID := 1100}
  handleExceptionBegin
  Result := TWkNSURLAuthenticationChallenge.Create(AData);
  handleExceptionEnd
end;

// function
function TWkNSURLAuthenticationChallenge_Data(AObj: TWkNSURLAuthenticationChallenge): NSURLAuthenticationChallenge; extdecl;
begin
  {$define handleExceptionID := 1101}
  handleExceptionBegin
  Result := AObj.Data();
  handleExceptionEnd
end;

// procedure
procedure TWkNSURLAuthenticationChallenge_Release(AObj: TWkNSURLAuthenticationChallenge); extdecl;
begin
  {$define handleExceptionID := 1102}
  handleExceptionBegin
  AObj.Release();
  handleExceptionEnd
end;

exports
  TWkNSURLAuthenticationChallenge_Create,
  TWkNSURLAuthenticationChallenge_Data,
  TWkNSURLAuthenticationChallenge_Release;