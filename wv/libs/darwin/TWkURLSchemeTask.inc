// constructor
function TWkURLSchemeTask_Create(AData: WKURLSchemeTask): TWkURLSchemeTask; extdecl;
begin
  {$define handleExceptionID := 2800}
  handleExceptionBegin
  Result := TWkURLSchemeTask.Create(AData);
  handleExceptionEnd
end;

// function
function TWkURLSchemeTask_Data(AObj: TWkURLSchemeTask): WKURLSchemeTask; extdecl;
begin
  {$define handleExceptionID := 2801}
  handleExceptionBegin
  Result := AObj.Data();
  handleExceptionEnd
end;

// function
function TWkURLSchemeTask_Request(AObj: TWkURLSchemeTask): NSURLRequest; extdecl;
begin
  {$define handleExceptionID := 2802}
  handleExceptionBegin
  Result := AObj.Request();
  handleExceptionEnd
end;

// procedure
procedure TWkURLSchemeTask_Release(AObj: TWkURLSchemeTask); extdecl;
begin
  {$define handleExceptionID := 2803}
  handleExceptionBegin
  AObj.Release();
  handleExceptionEnd
end;

// procedure
procedure TWkURLSchemeTask_ReceiveResponse(AObj: TWkURLSchemeTask; response: NSURLResponse); extdecl;
begin
  {$define handleExceptionID := 2804}
  handleExceptionBegin
  AObj.ReceiveResponse(response);
  handleExceptionEnd
end;

// procedure
procedure TWkURLSchemeTask_ReceiveData(AObj: TWkURLSchemeTask; ADataBytes: Pointer; ALength: Integer); extdecl;
begin
  {$define handleExceptionID := 2805}
  handleExceptionBegin
  AObj.ReceiveData(ADataBytes, ALength);
  handleExceptionEnd
end;

// procedure
procedure TWkURLSchemeTask_Finish(AObj: TWkURLSchemeTask); extdecl;
begin
  {$define handleExceptionID := 2806}
  handleExceptionBegin
  AObj.Finish();
  handleExceptionEnd
end;

// procedure
procedure TWkURLSchemeTask_FailWithError(AObj: TWkURLSchemeTask; code: Integer; error: PChar); extdecl;
begin
  {$define handleExceptionID := 2807}
  handleExceptionBegin
  AObj.FailWithError(code, error);
  handleExceptionEnd
end;

exports
  TWkURLSchemeTask_Create,
  TWkURLSchemeTask_Data,
  TWkURLSchemeTask_Request,
  TWkURLSchemeTask_Release,
  TWkURLSchemeTask_ReceiveResponse,
  TWkURLSchemeTask_ReceiveData,
  TWkURLSchemeTask_Finish,
  TWkURLSchemeTask_FailWithError;