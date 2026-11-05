// constructor
function TWkNavigationResponse_Create(AData: WKNavigationResponse): TWkNavigationResponse; extdecl;
begin
  {$define handleExceptionID := 2300}
  handleExceptionBegin
  Result := TWkNavigationResponse.Create(AData);
  handleExceptionEnd
end;

// function
function TWkNavigationResponse_Data(AObj: TWkNavigationResponse): WKNavigationResponse; extdecl;
begin
  {$define handleExceptionID := 2301}
  handleExceptionBegin
  Result := AObj.Data();
  handleExceptionEnd
end;

// function static
function TWkNavigationResponse_New(): TWkNavigationResponse; extdecl;
begin
  Result := TWkNavigationResponse.New();
end;

// function
function TWkNavigationResponse_IsForMainFrame(AObj: TWkNavigationResponse): LongBool; extdecl;
begin
  {$define handleExceptionID := 2302}
  handleExceptionBegin
  Result := AObj.IsForMainFrame();
  handleExceptionEnd
end;

// function
function TWkNavigationResponse_Response(AObj: TWkNavigationResponse): NSURLResponse; extdecl;
begin
  {$define handleExceptionID := 2303}
  handleExceptionBegin
  Result := AObj.Response();
  handleExceptionEnd
end;

// function
function TWkNavigationResponse_CanShowMIMEType(AObj: TWkNavigationResponse): LongBool; extdecl;
begin
  {$define handleExceptionID := 2304}
  handleExceptionBegin
  Result := AObj.CanShowMIMEType();
  handleExceptionEnd
end;

// procedure
procedure TWkNavigationResponse_Release(AObj: TWkNavigationResponse); extdecl;
begin
  {$define handleExceptionID := 2305}
  handleExceptionBegin
  AObj.Release();
  handleExceptionEnd
end;

exports
  TWkNavigationResponse_Create,
  TWkNavigationResponse_Data,
  TWkNavigationResponse_New,
  TWkNavigationResponse_IsForMainFrame,
  TWkNavigationResponse_Response,
  TWkNavigationResponse_CanShowMIMEType,
  TWkNavigationResponse_Release;