// constructor
function TWkURLSchemeHandler_Create(event: IWKURLSchemeHandlerDelegateEvent): TWkURLSchemeHandler; extdecl;
begin
  {$define handleExceptionID := 2700}
  handleExceptionBegin
  Result := TWkURLSchemeHandler.Create(event);
  handleExceptionEnd
end;

// function
function TWkURLSchemeHandler_Data(AObj: TWkURLSchemeHandler): WKURLSchemeHandlerProtocol; extdecl;
begin
  {$define handleExceptionID := 2701}
  handleExceptionBegin
  Result := AObj.Data();
  handleExceptionEnd
end;

// procedure
procedure TWkURLSchemeHandler_Release(AObj: TWkURLSchemeHandler); extdecl;
begin
  {$define handleExceptionID := 2702}
  handleExceptionBegin
  AObj.Release();
  handleExceptionEnd
end;

exports
  TWkURLSchemeHandler_Create,
  TWkURLSchemeHandler_Data,
  TWkURLSchemeHandler_Release;