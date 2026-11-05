// constructor
function TWkScriptMessageHandler_Create(event: IReceiveScriptMessageDelegateEvent): TWkScriptMessageHandler; extdecl;
begin
  {$define handleExceptionID := 2500}
  handleExceptionBegin
  Result := TWkScriptMessageHandler.Create(event);
  handleExceptionEnd
end;

// function
function TWkScriptMessageHandler_Data(AObj: TWkScriptMessageHandler): WKScriptMessageHandlerProtocol; extdecl;
begin
  {$define handleExceptionID := 2501}
  handleExceptionBegin
  Result := AObj.Data();
  handleExceptionEnd
end;

// procedure
procedure TWkScriptMessageHandler_Release(AObj: TWkScriptMessageHandler); extdecl;
begin
  {$define handleExceptionID := 2502}
  handleExceptionBegin
  AObj.Release();
  handleExceptionEnd
end;

exports
  TWkScriptMessageHandler_Create,
  TWkScriptMessageHandler_Data,
  TWkScriptMessageHandler_Release;