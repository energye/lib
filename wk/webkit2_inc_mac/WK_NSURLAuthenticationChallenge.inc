
//constructor
function NSURLAuthenticationChallenge_Create(aData: NSURLAuthenticationChallenge): TNSURLAuthenticationChallenge; extdecl;
begin
  handleExceptionBegin
  Result := TNSURLAuthenticationChallenge.Create(aData);
  handleExceptionEnd
end;

//function
function NSURLAuthenticationChallenge_Data(AObj: TNSURLAuthenticationChallenge): NSURLAuthenticationChallenge; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Data();
  handleExceptionEnd
end;


exports
  NSURLAuthenticationChallenge_Create,
  NSURLAuthenticationChallenge_Data;