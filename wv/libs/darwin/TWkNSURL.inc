// constructor
function TWkNSURL_Create(AData: NSURL): TWkNSURL; extdecl;
begin
  {$define handleExceptionID := 1000}
  handleExceptionBegin
  Result := TWkNSURL.Create(AData);
  handleExceptionEnd
end;

// function
function TWkNSURL_Data(AObj: TWkNSURL): NSURL; extdecl;
begin
  {$define handleExceptionID := 1001}
  handleExceptionBegin
  Result := AObj.Data();
  handleExceptionEnd
end;

// function static
function TWkNSURL_New(): TWkNSURL; extdecl;
begin
  Result := TWkNSURL.New();
end;

// function static
function TWkNSURL_URLWithString(URLString: PChar): TWkNSURL; extdecl;
begin
  Result := TWkNSURL.URLWithString(URLString);
end;

// function static
function TWkNSURL_URLWithStringRelativeToURL(URLString: PChar; baseURL: NSURL): TWkNSURL; extdecl;
begin
  Result := TWkNSURL.URLWithStringRelativeToURL(URLString, baseURL);
end;

// function
procedure TWkNSURL_AbsoluteString(AObj: TWkNSURL;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 1002}
  handleExceptionBegin
  StringBufferCreate(AObj.AbsoluteString(), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
procedure TWkNSURL_RelativeString(AObj: TWkNSURL;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 1003}
  handleExceptionBegin
  StringBufferCreate(AObj.RelativeString(), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
function TWkNSURL_BaseURL(AObj: TWkNSURL): TWkNSURL; extdecl;
begin
  {$define handleExceptionID := 1004}
  handleExceptionBegin
  Result := AObj.BaseURL();
  handleExceptionEnd
end;

// function
function TWkNSURL_AbsoluteURL(AObj: TWkNSURL): TWkNSURL; extdecl;
begin
  {$define handleExceptionID := 1005}
  handleExceptionBegin
  Result := AObj.AbsoluteURL();
  handleExceptionEnd
end;

// function
procedure TWkNSURL_Scheme(AObj: TWkNSURL;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 1006}
  handleExceptionBegin
  StringBufferCreate(AObj.Scheme(), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
procedure TWkNSURL_Host(AObj: TWkNSURL;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 1007}
  handleExceptionBegin
  StringBufferCreate(AObj.Host(), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
function TWkNSURL_Port(AObj: TWkNSURL): Integer; extdecl;
begin
  {$define handleExceptionID := 1008}
  handleExceptionBegin
  Result := AObj.Port();
  handleExceptionEnd
end;

// function
procedure TWkNSURL_User(AObj: TWkNSURL;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 1009}
  handleExceptionBegin
  StringBufferCreate(AObj.User(), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
procedure TWkNSURL_Password(AObj: TWkNSURL;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 1010}
  handleExceptionBegin
  StringBufferCreate(AObj.Password(), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
procedure TWkNSURL_Path(AObj: TWkNSURL;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 1011}
  handleExceptionBegin
  StringBufferCreate(AObj.Path(), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
procedure TWkNSURL_Fragment(AObj: TWkNSURL;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 1012}
  handleExceptionBegin
  StringBufferCreate(AObj.Fragment(), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
procedure TWkNSURL_ParameterString(AObj: TWkNSURL;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 1013}
  handleExceptionBegin
  StringBufferCreate(AObj.ParameterString(), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
procedure TWkNSURL_Query(AObj: TWkNSURL;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 1014}
  handleExceptionBegin
  StringBufferCreate(AObj.Query(), AStrData, AStrSize);
  handleExceptionEnd
end;

// procedure
procedure TWkNSURL_Release(AObj: TWkNSURL); extdecl;
begin
  {$define handleExceptionID := 1015}
  handleExceptionBegin
  AObj.Release();
  handleExceptionEnd
end;

exports
  TWkNSURL_Create,
  TWkNSURL_Data,
  TWkNSURL_New,
  TWkNSURL_URLWithString,
  TWkNSURL_URLWithStringRelativeToURL,
  TWkNSURL_AbsoluteString,
  TWkNSURL_RelativeString,
  TWkNSURL_BaseURL,
  TWkNSURL_AbsoluteURL,
  TWkNSURL_Scheme,
  TWkNSURL_Host,
  TWkNSURL_Port,
  TWkNSURL_User,
  TWkNSURL_Password,
  TWkNSURL_Path,
  TWkNSURL_Fragment,
  TWkNSURL_ParameterString,
  TWkNSURL_Query,
  TWkNSURL_Release;