// constructor
function TCustomCefUrlrequestClient_Create(const events: ICEFUrlRequestClientEvents; out IntfUrlrequestClient: ICefUrlrequestClient): TCustomCefUrlrequestClient; extdecl;
begin
  {$define handleExceptionID := 4400}
  handleExceptionBegin
  Result := TCustomCefUrlrequestClient.Create(events);
  IntfUrlrequestClient := Result as ICefUrlrequestClient;
  handleExceptionEnd
end;

exports
  TCustomCefUrlrequestClient_Create;
