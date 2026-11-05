// constructor
function TCefResponseRef_Create(data: Pointer; out IntfResponse: ICefResponse): TCefResponseRef; extdecl;
begin
  {$define handleExceptionID := 20600}
  handleExceptionBegin
  Result := TCefResponseRef.Create(data);
  IntfResponse := Result as ICefResponse;
  handleExceptionEnd
end;

// function
function TCefResponseRef_IsReadOnly(AObj: ICefResponse): LongBool; extdecl;
begin
  {$define handleExceptionID := 20601}
  handleExceptionBegin
  Result := AObj.IsReadOnly();
  handleExceptionEnd
end;

// function
function TCefResponseRef_GetError(AObj: ICefResponse): TCefErrorCode; extdecl;
begin
  {$define handleExceptionID := 20602}
  handleExceptionBegin
  Result := AObj.GetError();
  handleExceptionEnd
end;

// function
function TCefResponseRef_GetStatus(AObj: ICefResponse): Integer; extdecl;
begin
  {$define handleExceptionID := 20603}
  handleExceptionBegin
  Result := AObj.GetStatus();
  handleExceptionEnd
end;

// function
procedure TCefResponseRef_GetStatusText(AObj: ICefResponse;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 20604}
  handleExceptionBegin
  StringBufferCreate(string(AObj.GetStatusText()), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
procedure TCefResponseRef_GetMimeType(AObj: ICefResponse;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 20605}
  handleExceptionBegin
  StringBufferCreate(string(AObj.GetMimeType()), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
procedure TCefResponseRef_GetCharset(AObj: ICefResponse;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 20606}
  handleExceptionBegin
  StringBufferCreate(string(AObj.GetCharset()), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
procedure TCefResponseRef_GetHeaderByName(AObj: ICefResponse; const name: PChar;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 20607}
  handleExceptionBegin
  StringBufferCreate(string(AObj.GetHeaderByName(PCharToUStr(name))), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
procedure TCefResponseRef_GetURL(AObj: ICefResponse;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 20608}
  handleExceptionBegin
  StringBufferCreate(string(AObj.GetURL()), AStrData, AStrSize);
  handleExceptionEnd
end;

// function static
procedure TCefResponseRef_UnWrap(data: Pointer; var Result: ICefResponse); extdecl;
begin
  Result := TCefResponseRef.UnWrap(data);
end;

// function static
procedure TCefResponseRef_New(var Result: ICefResponse); extdecl;
begin
  Result := TCefResponseRef.New();
end;

// procedure
procedure TCefResponseRef_SetError(AObj: ICefResponse; error: TCefErrorCode); extdecl;
begin
  {$define handleExceptionID := 20609}
  handleExceptionBegin
  AObj.SetError(error);
  handleExceptionEnd
end;

// procedure
procedure TCefResponseRef_SetStatus(AObj: ICefResponse; status: Integer); extdecl;
begin
  {$define handleExceptionID := 20610}
  handleExceptionBegin
  AObj.SetStatus(status);
  handleExceptionEnd
end;

// procedure
procedure TCefResponseRef_SetStatusText(AObj: ICefResponse; const StatusText: PChar); extdecl;
begin
  {$define handleExceptionID := 20611}
  handleExceptionBegin
  AObj.SetStatusText(PCharToUStr(StatusText));
  handleExceptionEnd
end;

// procedure
procedure TCefResponseRef_SetMimeType(AObj: ICefResponse; const mimetype: PChar); extdecl;
begin
  {$define handleExceptionID := 20612}
  handleExceptionBegin
  AObj.SetMimeType(PCharToUStr(mimetype));
  handleExceptionEnd
end;

// procedure
procedure TCefResponseRef_SetCharset(AObj: ICefResponse; const charset: PChar); extdecl;
begin
  {$define handleExceptionID := 20613}
  handleExceptionBegin
  AObj.SetCharset(PCharToUStr(charset));
  handleExceptionEnd
end;

// procedure
procedure TCefResponseRef_SetHeaderByName(AObj: ICefResponse; const name: PChar; const value: PChar; overwrite: LongBool); extdecl;
begin
  {$define handleExceptionID := 20614}
  handleExceptionBegin
  AObj.SetHeaderByName(PCharToUStr(name), PCharToUStr(value), overwrite);
  handleExceptionEnd
end;

// procedure
procedure TCefResponseRef_GetHeaderMap(AObj: ICefResponse; const headerMap: ICefStringMultimap); extdecl;
begin
  {$define handleExceptionID := 20615}
  handleExceptionBegin
  AObj.GetHeaderMap(headerMap);
  handleExceptionEnd
end;

// procedure
procedure TCefResponseRef_SetHeaderMap(AObj: ICefResponse; const headerMap: ICefStringMultimap); extdecl;
begin
  {$define handleExceptionID := 20616}
  handleExceptionBegin
  AObj.SetHeaderMap(headerMap);
  handleExceptionEnd
end;

// procedure
procedure TCefResponseRef_SetURL(AObj: ICefResponse; const url: PChar); extdecl;
begin
  {$define handleExceptionID := 20617}
  handleExceptionBegin
  AObj.SetURL(PCharToUStr(url));
  handleExceptionEnd
end;

exports
  TCefResponseRef_Create,
  TCefResponseRef_IsReadOnly,
  TCefResponseRef_GetError,
  TCefResponseRef_GetStatus,
  TCefResponseRef_GetStatusText,
  TCefResponseRef_GetMimeType,
  TCefResponseRef_GetCharset,
  TCefResponseRef_GetHeaderByName,
  TCefResponseRef_GetURL,
  TCefResponseRef_UnWrap,
  TCefResponseRef_New,
  TCefResponseRef_SetError,
  TCefResponseRef_SetStatus,
  TCefResponseRef_SetStatusText,
  TCefResponseRef_SetMimeType,
  TCefResponseRef_SetCharset,
  TCefResponseRef_SetHeaderByName,
  TCefResponseRef_GetHeaderMap,
  TCefResponseRef_SetHeaderMap,
  TCefResponseRef_SetURL;