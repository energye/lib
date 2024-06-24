
//constructor
function WkURIRequest_Create(aURIRequest: WebKitURIRequest): TWkURIRequest; extdecl;
begin
  handleExceptionBegin
  Result := TWkURIRequest.Create(aURIRequest);
  handleExceptionEnd
end;

//function
procedure WkURIRequest_NewURIRequest(uri: PChar; var Result: IWkURIRequest); extdecl;
begin
  Result := TWkURIRequest.NewURIRequest(uri);
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
function WkURIRequest_Method(AObj: TWkURIRequest): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.Method());
  handleExceptionEnd
end;

//function
procedure WkURIRequest_Headers(AObj: TWkURIRequest; var Result: IWkHeaders); extdecl;
begin
  handleExceptionBegin
  Result := AObj.Headers();
  handleExceptionEnd
end;


exports
  WkURIRequest_Create,
  WkURIRequest_NewURIRequest,
  WkURIRequest_URI,
  WkURIRequest_Method,
  WkURIRequest_Headers;