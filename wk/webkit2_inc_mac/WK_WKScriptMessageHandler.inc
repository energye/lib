
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

//procedure
procedure WKScriptMessageHandler_Release(AObj: TWKScriptMessageHandler); extdecl;
begin
  handleExceptionBegin
  AObj.Release();
  handleExceptionEnd
end;


exports
  WKScriptMessageHandler_Create,
  WKScriptMessageHandler_Data,
  WKScriptMessageHandler_Release;