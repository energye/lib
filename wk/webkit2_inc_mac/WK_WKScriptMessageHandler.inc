
//constructor
function WKScriptMessageHandler_Create(event: IReceiveScriptMessageDelegateEvent): TWKScriptMessageHandler; extdecl;
begin
  handleExceptionBegin
  Result := TWKScriptMessageHandler.Create(event);
  handleExceptionEnd
end;

//function
function WKScriptMessageHandler_Data(AObj: TWKScriptMessageHandler): WKScriptMessageHandlerProtocol; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Data();
  handleExceptionEnd
end;


exports
  WKScriptMessageHandler_Create,
  WKScriptMessageHandler_Data;