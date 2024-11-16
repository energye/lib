
//constructor
function CustomCefUrlrequestClient_Create(const events: ICEFUrlRequestClientEvents): TCustomCefUrlrequestClient; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TCustomCefUrlrequestClient.Create(events);
  handleExceptionEnd
end;

//procedure
procedure CustomCefUrlrequestClient_AsInterface(AObj: TCustomCefUrlrequestClient; var Result: ICefUrlrequestClient); extdecl;
begin
  Result := AObj as ICefUrlrequestClient;
end;


exports
  CustomCefUrlrequestClient_Create,
  CustomCefUrlrequestClient_AsInterface;