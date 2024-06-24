
//constructor
function CustomCefUrlrequestClient_Create(const events: ICEFUrlRequestClientEvents): TCustomCefUrlrequestClient; extdecl;
begin
  handleExceptionBegin
  Result := TCustomCefUrlrequestClient.Create(events);
  handleExceptionEnd
end;


exports
  CustomCefUrlrequestClient_Create;