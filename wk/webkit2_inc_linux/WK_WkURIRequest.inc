
//constructor
function WkURIRequest_Create(aURIRequest: WebKitURIRequest): TWkURIRequest; extdecl;
begin
  handleExceptionBegin
  Result := TWkURIRequest.Create(aURIRequest);
  handleExceptionEnd
end;

//function
function WkURIRequest_NewURIRequest(aUri: PChar): TWkURIRequest; extdecl;
begin
  Result := TWkURIRequest.NewURIRequest(aUri);
end;

//property
function WkURIRequest_URI(AIsSet: LongBool; AObj: TWkURIRequest; AValue: PChar): PChar; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.URI := AValue;
  end else
    Result := ToPChar(AObj.URI);
  handleExceptionEnd
end;

//function
function WkURIRequest_Data(AObj: TWkURIRequest): WebKitURIRequest; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Data();
  handleExceptionEnd
end;

//function
function WkURIRequest_Method(AObj: TWkURIRequest): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.Method());
  handleExceptionEnd
end;

//function
function WkURIRequest_Headers(AObj: TWkURIRequest): PSoupMessageHeaders; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Headers();
  handleExceptionEnd
end;


exports
  WkURIRequest_Create,
  WkURIRequest_NewURIRequest,
  WkURIRequest_URI,
  WkURIRequest_Data,
  WkURIRequest_Method,
  WkURIRequest_Headers;