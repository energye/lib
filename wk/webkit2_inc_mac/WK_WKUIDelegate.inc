
//constructor
function WKUIDelegate_Create(event: IWKUIDelegateEvent): TWKUIDelegate; extdecl;
begin
  handleExceptionBegin
  Result := TWKUIDelegate.Create(event);
  handleExceptionEnd
end;

//function
function WKUIDelegate_Data(AObj: TWKUIDelegate): WKUIDelegateProtocol; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Data();
  handleExceptionEnd
end;

//procedure
procedure WKUIDelegate_Release(AObj: TWKUIDelegate); extdecl;
begin
  handleExceptionBegin
  AObj.Release();
  handleExceptionEnd
end;


exports
  WKUIDelegate_Create,
  WKUIDelegate_Data,
  WKUIDelegate_Release;