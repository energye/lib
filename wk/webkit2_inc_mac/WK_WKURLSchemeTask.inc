
//constructor
function WKURLSchemeTask_Create(aData: WKURLSchemeTask): TWKURLSchemeTask; extdecl;
begin
  handleExceptionBegin
  Result := TWKURLSchemeTask.Create(aData);
  handleExceptionEnd
end;

//function
function WKURLSchemeTask_Data(AObj: TWKURLSchemeTask): WKURLSchemeTask; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Data();
  handleExceptionEnd
end;

//function
function WKURLSchemeTask_Request(AObj: TWKURLSchemeTask): NSURLRequest; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Request();
  handleExceptionEnd
end;

//procedure
procedure WKURLSchemeTask_Release(AObj: TWKURLSchemeTask); extdecl;
begin
  handleExceptionBegin
  AObj.Release();
  handleExceptionEnd
end;

//procedure
procedure WKURLSchemeTask_ReceiveResponse(AObj: TWKURLSchemeTask; response: NSURLResponse); extdecl;
begin
  handleExceptionBegin
  AObj.ReceiveResponse(response);
  handleExceptionEnd
end;

//procedure
procedure WKURLSchemeTask_ReceiveData(AObj: TWKURLSchemeTask; aDataBytes: Pointer; aLength: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.ReceiveData(aDataBytes, aLength);
  handleExceptionEnd
end;

//procedure
procedure WKURLSchemeTask_Finish(AObj: TWKURLSchemeTask); extdecl;
begin
  handleExceptionBegin
  AObj.Finish();
  handleExceptionEnd
end;

//procedure
procedure WKURLSchemeTask_FailWithError(AObj: TWKURLSchemeTask; error: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.FailWithError(error);
  handleExceptionEnd
end;


exports
  WKURLSchemeTask_Create,
  WKURLSchemeTask_Data,
  WKURLSchemeTask_Request,
  WKURLSchemeTask_Release,
  WKURLSchemeTask_ReceiveResponse,
  WKURLSchemeTask_ReceiveData,
  WKURLSchemeTask_Finish,
  WKURLSchemeTask_FailWithError;