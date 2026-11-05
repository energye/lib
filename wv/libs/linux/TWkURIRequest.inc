// constructor
function TWkURIRequest_Create(aURIRequest: WebKitURIRequest): TWkURIRequest; extdecl;
begin
  {$define handleExceptionID := 3100}
  handleExceptionBegin
  Result := TWkURIRequest.Create(aURIRequest);
  handleExceptionEnd
end;

// function
function TWkURIRequest_Data(AObj: TWkURIRequest): WebKitURIRequest; extdecl;
begin
  {$define handleExceptionID := 3101}
  handleExceptionBegin
  Result := AObj.Data();
  handleExceptionEnd
end;

// function
procedure TWkURIRequest_Method(AObj: TWkURIRequest;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 3102}
  handleExceptionBegin
  StringBufferCreate(AObj.Method(), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
function TWkURIRequest_Headers(AObj: TWkURIRequest): PSoupMessageHeaders; extdecl;
begin
  {$define handleExceptionID := 3103}
  handleExceptionBegin
  Result := AObj.Headers();
  handleExceptionEnd
end;

// function static
function TWkURIRequest_NewURIRequest(aUri: PChar): TWkURIRequest; extdecl;
begin
  Result := TWkURIRequest.NewURIRequest(aUri);
end;

// property
procedure TWkURIRequest_URI(ASet: LongBool; AObj: TWkURIRequest; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 3104}
  handleExceptionBegin
  if ASet then
  begin
    AObj.URI := AValue
  end else
    StringBufferCreate(AObj.URI, AStrData, AStrSize);
  handleExceptionEnd
end;

exports
  TWkURIRequest_Create,
  TWkURIRequest_Data,
  TWkURIRequest_Method,
  TWkURIRequest_Headers,
  TWkURIRequest_NewURIRequest,
  TWkURIRequest_URI;