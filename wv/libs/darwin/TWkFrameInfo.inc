// constructor
function TWkFrameInfo_Create(AData: WKFrameInfo): TWkFrameInfo; extdecl;
begin
  {$define handleExceptionID := 1900}
  handleExceptionBegin
  Result := TWkFrameInfo.Create(AData);
  handleExceptionEnd
end;

// function
function TWkFrameInfo_Data(AObj: TWkFrameInfo): WKFrameInfo; extdecl;
begin
  {$define handleExceptionID := 1901}
  handleExceptionBegin
  Result := AObj.Data();
  handleExceptionEnd
end;

// function
function TWkFrameInfo_IsMainFrame(AObj: TWkFrameInfo): LongBool; extdecl;
begin
  {$define handleExceptionID := 1902}
  handleExceptionBegin
  Result := AObj.IsMainFrame();
  handleExceptionEnd
end;

// function
function TWkFrameInfo_Request(AObj: TWkFrameInfo): NSURLRequest; extdecl;
begin
  {$define handleExceptionID := 1903}
  handleExceptionBegin
  Result := AObj.Request();
  handleExceptionEnd
end;

// procedure
procedure TWkFrameInfo_Release(AObj: TWkFrameInfo); extdecl;
begin
  {$define handleExceptionID := 1904}
  handleExceptionBegin
  AObj.Release();
  handleExceptionEnd
end;

exports
  TWkFrameInfo_Create,
  TWkFrameInfo_Data,
  TWkFrameInfo_IsMainFrame,
  TWkFrameInfo_Request,
  TWkFrameInfo_Release;