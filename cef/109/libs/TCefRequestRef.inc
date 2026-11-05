// constructor
function TCefRequestRef_Create(data: Pointer; out IntfRequest: ICefRequest): TCefRequestRef; extdecl;
begin
  {$define handleExceptionID := 19700}
  handleExceptionBegin
  Result := TCefRequestRef.Create(data);
  IntfRequest := Result as ICefRequest;
  handleExceptionEnd
end;

// function
function TCefRequestRef_IsReadOnly(AObj: ICefRequest): LongBool; extdecl;
begin
  {$define handleExceptionID := 19701}
  handleExceptionBegin
  Result := AObj.IsReadOnly();
  handleExceptionEnd
end;

// function
procedure TCefRequestRef_GetUrl(AObj: ICefRequest;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 19702}
  handleExceptionBegin
  StringBufferCreate(string(AObj.GetUrl()), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
procedure TCefRequestRef_GetMethod(AObj: ICefRequest;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 19703}
  handleExceptionBegin
  StringBufferCreate(string(AObj.GetMethod()), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
procedure TCefRequestRef_GetPostData(AObj: ICefRequest; var Result: ICefPostData); extdecl;
begin
  {$define handleExceptionID := 19704}
  handleExceptionBegin
  Result := AObj.GetPostData();
  handleExceptionEnd
end;

// function
procedure TCefRequestRef_GetReferrerUrl(AObj: ICefRequest;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 19705}
  handleExceptionBegin
  StringBufferCreate(string(AObj.GetReferrerUrl()), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
function TCefRequestRef_GetReferrerPolicy(AObj: ICefRequest): TCefReferrerPolicy; extdecl;
begin
  {$define handleExceptionID := 19706}
  handleExceptionBegin
  Result := AObj.GetReferrerPolicy();
  handleExceptionEnd
end;

// function
procedure TCefRequestRef_GetHeaderByName(AObj: ICefRequest; const name: PChar;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 19707}
  handleExceptionBegin
  StringBufferCreate(string(AObj.GetHeaderByName(PCharToUStr(name))), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
function TCefRequestRef_GetFlags(AObj: ICefRequest): TCefUrlRequestFlags; extdecl;
begin
  {$define handleExceptionID := 19708}
  handleExceptionBegin
  Result := AObj.GetFlags();
  handleExceptionEnd
end;

// function
procedure TCefRequestRef_GetFirstPartyForCookies(AObj: ICefRequest;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 19709}
  handleExceptionBegin
  StringBufferCreate(string(AObj.GetFirstPartyForCookies()), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
function TCefRequestRef_GetResourceType(AObj: ICefRequest): TCefResourceType; extdecl;
begin
  {$define handleExceptionID := 19710}
  handleExceptionBegin
  Result := AObj.GetResourceType();
  handleExceptionEnd
end;

// function
function TCefRequestRef_GetTransitionType(AObj: ICefRequest): TCefTransitionType; extdecl;
begin
  {$define handleExceptionID := 19711}
  handleExceptionBegin
  Result := AObj.GetTransitionType();
  handleExceptionEnd
end;

// function
procedure TCefRequestRef_GetIdentifier(AObj: ICefRequest; var Result: UInt64); extdecl;
begin
  {$define handleExceptionID := 19712}
  handleExceptionBegin
  Result := AObj.GetIdentifier();
  handleExceptionEnd
end;

// function static
procedure TCefRequestRef_UnWrap(data: Pointer; var Result: ICefRequest); extdecl;
begin
  Result := TCefRequestRef.UnWrap(data);
end;

// function static
procedure TCefRequestRef_New(var Result: ICefRequest); extdecl;
begin
  Result := TCefRequestRef.New();
end;

// procedure
procedure TCefRequestRef_GetHeaderMap(AObj: ICefRequest; const HeaderMap: ICefStringMultimap); extdecl;
begin
  {$define handleExceptionID := 19713}
  handleExceptionBegin
  AObj.GetHeaderMap(HeaderMap);
  handleExceptionEnd
end;

// procedure
procedure TCefRequestRef_SetUrl(AObj: ICefRequest; const value: PChar); extdecl;
begin
  {$define handleExceptionID := 19714}
  handleExceptionBegin
  AObj.SetUrl(PCharToUStr(value));
  handleExceptionEnd
end;

// procedure
procedure TCefRequestRef_SetMethod(AObj: ICefRequest; const value: PChar); extdecl;
begin
  {$define handleExceptionID := 19715}
  handleExceptionBegin
  AObj.SetMethod(PCharToUStr(value));
  handleExceptionEnd
end;

// procedure
procedure TCefRequestRef_SetReferrer(AObj: ICefRequest; const referrerUrl: PChar; policy: TCefReferrerPolicy); extdecl;
begin
  {$define handleExceptionID := 19716}
  handleExceptionBegin
  AObj.SetReferrer(PCharToUStr(referrerUrl), policy);
  handleExceptionEnd
end;

// procedure
procedure TCefRequestRef_SetPostData(AObj: ICefRequest; const value: ICefPostData); extdecl;
begin
  {$define handleExceptionID := 19717}
  handleExceptionBegin
  AObj.SetPostData(value);
  handleExceptionEnd
end;

// procedure
procedure TCefRequestRef_SetHeaderMap(AObj: ICefRequest; const HeaderMap: ICefStringMultimap); extdecl;
begin
  {$define handleExceptionID := 19718}
  handleExceptionBegin
  AObj.SetHeaderMap(HeaderMap);
  handleExceptionEnd
end;

// procedure
procedure TCefRequestRef_SetHeaderByName(AObj: ICefRequest; const name: PChar; const value: PChar; overwrite: LongBool); extdecl;
begin
  {$define handleExceptionID := 19719}
  handleExceptionBegin
  AObj.SetHeaderByName(PCharToUStr(name), PCharToUStr(value), overwrite);
  handleExceptionEnd
end;

// procedure
procedure TCefRequestRef_SetFlags(AObj: ICefRequest; flags: TCefUrlRequestFlags); extdecl;
begin
  {$define handleExceptionID := 19720}
  handleExceptionBegin
  AObj.SetFlags(flags);
  handleExceptionEnd
end;

// procedure
procedure TCefRequestRef_SetFirstPartyForCookies(AObj: ICefRequest; const url: PChar); extdecl;
begin
  {$define handleExceptionID := 19721}
  handleExceptionBegin
  AObj.SetFirstPartyForCookies(PCharToUStr(url));
  handleExceptionEnd
end;

// procedure
procedure TCefRequestRef_Assign(AObj: ICefRequest; const url: PChar; const method: PChar; const postData: ICefPostData; const headerMap: ICefStringMultimap); extdecl;
begin
  {$define handleExceptionID := 19722}
  handleExceptionBegin
  AObj.Assign(PCharToUStr(url), PCharToUStr(method), postData, headerMap);
  handleExceptionEnd
end;

exports
  TCefRequestRef_Create,
  TCefRequestRef_IsReadOnly,
  TCefRequestRef_GetUrl,
  TCefRequestRef_GetMethod,
  TCefRequestRef_GetPostData,
  TCefRequestRef_GetReferrerUrl,
  TCefRequestRef_GetReferrerPolicy,
  TCefRequestRef_GetHeaderByName,
  TCefRequestRef_GetFlags,
  TCefRequestRef_GetFirstPartyForCookies,
  TCefRequestRef_GetResourceType,
  TCefRequestRef_GetTransitionType,
  TCefRequestRef_GetIdentifier,
  TCefRequestRef_UnWrap,
  TCefRequestRef_New,
  TCefRequestRef_GetHeaderMap,
  TCefRequestRef_SetUrl,
  TCefRequestRef_SetMethod,
  TCefRequestRef_SetReferrer,
  TCefRequestRef_SetPostData,
  TCefRequestRef_SetHeaderMap,
  TCefRequestRef_SetHeaderByName,
  TCefRequestRef_SetFlags,
  TCefRequestRef_SetFirstPartyForCookies,
  TCefRequestRef_Assign;