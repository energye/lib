// constructor
function TWkUIDelegate_Create(event: IWKUIDelegateEvent): TWkUIDelegate; extdecl;
begin
  {$define handleExceptionID := 2600}
  handleExceptionBegin
  Result := TWkUIDelegate.Create(event);
  handleExceptionEnd
end;

// function
function TWkUIDelegate_Data(AObj: TWkUIDelegate): WKUIDelegateProtocol; extdecl;
begin
  {$define handleExceptionID := 2601}
  handleExceptionBegin
  Result := AObj.Data();
  handleExceptionEnd
end;

// procedure
procedure TWkUIDelegate_Release(AObj: TWkUIDelegate); extdecl;
begin
  {$define handleExceptionID := 2602}
  handleExceptionBegin
  AObj.Release();
  handleExceptionEnd
end;

exports
  TWkUIDelegate_Create,
  TWkUIDelegate_Data,
  TWkUIDelegate_Release;