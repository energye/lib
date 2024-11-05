
//constructor
function WKFrameInfo_Create(aData: WKFrameInfo): TWKFrameInfo; extdecl;
begin
  handleExceptionBegin
  Result := TWKFrameInfo.Create(aData);
  handleExceptionEnd
end;

//function
function WKFrameInfo_Data(AObj: TWKFrameInfo): WKFrameInfo; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Data();
  handleExceptionEnd
end;

//function
function WKFrameInfo_IsMainFrame(AObj: TWKFrameInfo): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IsMainFrame();
  handleExceptionEnd
end;

//function
function WKFrameInfo_Request(AObj: TWKFrameInfo): NSURLRequest; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Request();
  handleExceptionEnd
end;


exports
  WKFrameInfo_Create,
  WKFrameInfo_Data,
  WKFrameInfo_IsMainFrame,
  WKFrameInfo_Request;