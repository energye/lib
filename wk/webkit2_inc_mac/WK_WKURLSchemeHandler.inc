
//constructor
function WKURLSchemeHandler_Create(event: IWKURLSchemeHandlerDelegateEvent): TWKURLSchemeHandler; extdecl;
begin
  handleExceptionBegin
  Result := TWKURLSchemeHandler.Create(event);
  handleExceptionEnd
end;

//function
function WKURLSchemeHandler_Data(AObj: TWKURLSchemeHandler): WKURLSchemeHandlerProtocol; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Data();
  handleExceptionEnd
end;

//procedure
procedure WKURLSchemeHandler_Release(AObj: TWKURLSchemeHandler); extdecl;
begin
  handleExceptionBegin
  AObj.Release();
  handleExceptionEnd
end;


exports
  WKURLSchemeHandler_Create,
  WKURLSchemeHandler_Data,
  WKURLSchemeHandler_Release;