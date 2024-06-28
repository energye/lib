
//function
procedure CefResponse_UnWrap(data: Pointer; var Result: ICefResponse); extdecl;
begin
  Result := TCefResponseRef.UnWrap(data);
end;

//function
procedure CefResponse_New(var Result: ICefResponse); extdecl;
begin
  Result := TCefResponseRef.New();
end;

//function
function CefResponse_IsReadOnly(AObj: ICefResponse): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='IsReadOnly'}
  handleExceptionBegin
  Result := AObj.IsReadOnly();
  handleExceptionEnd
end;

//function
function CefResponse_GetError(AObj: ICefResponse): TCefErrorCode; extdecl;
begin
  {$define handleExceptionFuncName :='GetError'}
  handleExceptionBegin
  Result := AObj.GetError();
  handleExceptionEnd
end;

//function
function CefResponse_GetStatus(AObj: ICefResponse): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='GetStatus'}
  handleExceptionBegin
  Result := AObj.GetStatus();
  handleExceptionEnd
end;

//function
function CefResponse_GetStatusText(AObj: ICefResponse): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='GetStatusText'}
  handleExceptionBegin
  Result := ToPChar(AObj.GetStatusText());
  handleExceptionEnd
end;

//function
function CefResponse_GetMimeType(AObj: ICefResponse): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='GetMimeType'}
  handleExceptionBegin
  Result := ToPChar(AObj.GetMimeType());
  handleExceptionEnd
end;

//function
function CefResponse_GetCharset(AObj: ICefResponse): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='GetCharset'}
  handleExceptionBegin
  Result := ToPChar(AObj.GetCharset());
  handleExceptionEnd
end;

//function
function CefResponse_GetHeaderByName(AObj: ICefResponse; const name: PChar): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='GetHeaderByName'}
  handleExceptionBegin
  Result := ToPChar(AObj.GetHeaderByName(name));
  handleExceptionEnd
end;

//function
function CefResponse_GetURL(AObj: ICefResponse): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='GetURL'}
  handleExceptionBegin
  Result := ToPChar(AObj.GetURL());
  handleExceptionEnd
end;

//procedure
procedure CefResponse_SetError(AObj: ICefResponse; error: TCefErrorCode); extdecl;
begin
  {$define handleExceptionFuncName :='SetError'}
  handleExceptionBegin
  AObj.SetError(error);
  handleExceptionEnd
end;

//procedure
procedure CefResponse_SetStatus(AObj: ICefResponse; status: Integer); extdecl;
begin
  {$define handleExceptionFuncName :='SetStatus'}
  handleExceptionBegin
  AObj.SetStatus(status);
  handleExceptionEnd
end;

//procedure
procedure CefResponse_SetStatusText(AObj: ICefResponse; const statusText: PChar); extdecl;
begin
  {$define handleExceptionFuncName :='SetStatusText'}
  handleExceptionBegin
  AObj.SetStatusText(statusText);
  handleExceptionEnd
end;

//procedure
procedure CefResponse_SetMimeType(AObj: ICefResponse; const mimetype: PChar); extdecl;
begin
  {$define handleExceptionFuncName :='SetMimeType'}
  handleExceptionBegin
  AObj.SetMimeType(mimetype);
  handleExceptionEnd
end;

//procedure
procedure CefResponse_SetCharset(AObj: ICefResponse; const charset: PChar); extdecl;
begin
  {$define handleExceptionFuncName :='SetCharset'}
  handleExceptionBegin
  AObj.SetCharset(charset);
  handleExceptionEnd
end;

//procedure
procedure CefResponse_SetHeaderByName(AObj: ICefResponse; const name,  value: PChar; overwrite: LongBool); extdecl;
begin
  {$define handleExceptionFuncName :='SetHeaderByName'}
  handleExceptionBegin
  AObj.SetHeaderByName(name,  value, overwrite);
  handleExceptionEnd
end;

//procedure
procedure CefResponse_SetHeaderMap(AObj: ICefResponse; const headerMap: ICefStringMultimap); extdecl;
begin
  {$define handleExceptionFuncName :='SetHeaderMap'}
  handleExceptionBegin
  AObj.SetHeaderMap(headerMap);
  handleExceptionEnd
end;

//procedure
procedure CefResponse_SetURL(AObj: ICefResponse; const url: PChar); extdecl;
begin
  {$define handleExceptionFuncName :='SetURL'}
  handleExceptionBegin
  AObj.SetURL(url);
  handleExceptionEnd
end;


exports
  CefResponse_UnWrap,
  CefResponse_New,
  CefResponse_IsReadOnly,
  CefResponse_GetError,
  CefResponse_GetStatus,
  CefResponse_GetStatusText,
  CefResponse_GetMimeType,
  CefResponse_GetCharset,
  CefResponse_GetHeaderByName,
  CefResponse_GetURL,
  CefResponse_SetError,
  CefResponse_SetStatus,
  CefResponse_SetStatusText,
  CefResponse_SetMimeType,
  CefResponse_SetCharset,
  CefResponse_SetHeaderByName,
  CefResponse_SetHeaderMap,
  CefResponse_SetURL;