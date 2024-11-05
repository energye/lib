
//constructor
function WKURLSchemeHandler_Create(event: IWKURLSchemeHandlerEvent): TWKURLSchemeHandler; extdecl;
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


exports
  WKURLSchemeHandler_Create,
  WKURLSchemeHandler_Data;