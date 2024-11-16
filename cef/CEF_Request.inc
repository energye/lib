
//function
procedure CefRequest_UnWrap(data: Pointer; var Result: ICefRequest); extdecl;
begin
  Result := TCefRequestRef.UnWrap(data);
end;

//function
procedure CefRequest_New(var Result: ICefRequest); extdecl;
begin
  Result := TCefRequestRef.New();
end;

//function
function CefRequest_IsReadOnly(AObj: ICefRequest): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='IsReadOnly'}
  handleExceptionBegin
  Result := AObj.IsReadOnly();
  handleExceptionEnd
end;

//function
procedure CefRequest_GetUrl(AObj: ICefRequest; const RetValue: TString); extdecl;
begin
  {$define handleExceptionFuncName :='GetUrl'}
  handleExceptionBegin
  RetValue.SetValue(AObj.GetUrl());
  handleExceptionEnd
end;

//function
procedure CefRequest_GetMethod(AObj: ICefRequest; const RetValue: TString); extdecl;
begin
  {$define handleExceptionFuncName :='GetMethod'}
  handleExceptionBegin
  RetValue.SetValue(AObj.GetMethod());
  handleExceptionEnd
end;

//function
procedure CefRequest_GetPostData(AObj: ICefRequest; var Result: ICefPostData); extdecl;
begin
  {$define handleExceptionFuncName :='GetPostData'}
  handleExceptionBegin
  Result := AObj.GetPostData();
  handleExceptionEnd
end;

//function
procedure CefRequest_GetReferrerUrl(AObj: ICefRequest; const RetValue: TString); extdecl;
begin
  {$define handleExceptionFuncName :='GetReferrerUrl'}
  handleExceptionBegin
  RetValue.SetValue(AObj.GetReferrerUrl());
  handleExceptionEnd
end;

//function
function CefRequest_GetReferrerPolicy(AObj: ICefRequest): TCefReferrerPolicy; extdecl;
begin
  {$define handleExceptionFuncName :='GetReferrerPolicy'}
  handleExceptionBegin
  Result := AObj.GetReferrerPolicy();
  handleExceptionEnd
end;

//function
procedure CefRequest_GetHeaderByName(AObj: ICefRequest; const name: PChar; const RetValue: TString); extdecl;
begin
  {$define handleExceptionFuncName :='GetHeaderByName'}
  handleExceptionBegin
  RetValue.SetValue(AObj.GetHeaderByName(name));
  handleExceptionEnd
end;

//function
function CefRequest_GetFlags(AObj: ICefRequest): TCefUrlRequestFlags; extdecl;
begin
  {$define handleExceptionFuncName :='GetFlags'}
  handleExceptionBegin
  Result := AObj.GetFlags();
  handleExceptionEnd
end;

//function
procedure CefRequest_GetFirstPartyForCookies(AObj: ICefRequest; const RetValue: TString); extdecl;
begin
  {$define handleExceptionFuncName :='GetFirstPartyForCookies'}
  handleExceptionBegin
  RetValue.SetValue(AObj.GetFirstPartyForCookies());
  handleExceptionEnd
end;

//function
function CefRequest_GetResourceType(AObj: ICefRequest): TCefResourceType; extdecl;
begin
  {$define handleExceptionFuncName :='GetResourceType'}
  handleExceptionBegin
  Result := AObj.GetResourceType();
  handleExceptionEnd
end;

//function
function CefRequest_GetTransitionType(AObj: ICefRequest): TCefTransitionType; extdecl;
begin
  {$define handleExceptionFuncName :='GetTransitionType'}
  handleExceptionBegin
  Result := AObj.GetTransitionType();
  handleExceptionEnd
end;

//function
procedure CefRequest_GetIdentifier(AObj: ICefRequest; var Result: uint64); extdecl;
begin
  {$define handleExceptionFuncName :='GetIdentifier'}
  handleExceptionBegin
  Result := AObj.GetIdentifier();
  handleExceptionEnd
end;

//procedure
procedure CefRequest_SetUrl(AObj: ICefRequest; const value: PChar); extdecl;
begin
  {$define handleExceptionFuncName :='SetUrl'}
  handleExceptionBegin
  AObj.SetUrl(value);
  handleExceptionEnd
end;

//procedure
procedure CefRequest_SetMethod(AObj: ICefRequest; const value: PChar); extdecl;
begin
  {$define handleExceptionFuncName :='SetMethod'}
  handleExceptionBegin
  AObj.SetMethod(value);
  handleExceptionEnd
end;

//procedure
procedure CefRequest_SetReferrer(AObj: ICefRequest; const referrerUrl: PChar; policy: TCefReferrerPolicy); extdecl;
begin
  {$define handleExceptionFuncName :='SetReferrer'}
  handleExceptionBegin
  AObj.SetReferrer(referrerUrl, policy);
  handleExceptionEnd
end;

//procedure
procedure CefRequest_SetPostData(AObj: ICefRequest; const value: ICefPostData); extdecl;
begin
  {$define handleExceptionFuncName :='SetPostData'}
  handleExceptionBegin
  AObj.SetPostData(value);
  handleExceptionEnd
end;

//procedure
procedure CefRequest_SetHeaderMap(AObj: ICefRequest; const headerMap: ICefStringMultimap); extdecl;
begin
  {$define handleExceptionFuncName :='SetHeaderMap'}
  handleExceptionBegin
  AObj.SetHeaderMap(headerMap);
  handleExceptionEnd
end;

//procedure
procedure CefRequest_SetHeaderByName(AObj: ICefRequest; const name,  value: PChar; overwrite: LongBool); extdecl;
begin
  {$define handleExceptionFuncName :='SetHeaderByName'}
  handleExceptionBegin
  AObj.SetHeaderByName(name,  value, overwrite);
  handleExceptionEnd
end;

//procedure
procedure CefRequest_SetFlags(AObj: ICefRequest; flags: TCefUrlRequestFlags); extdecl;
begin
  {$define handleExceptionFuncName :='SetFlags'}
  handleExceptionBegin
  AObj.SetFlags(flags);
  handleExceptionEnd
end;

//procedure
procedure CefRequest_SetFirstPartyForCookies(AObj: ICefRequest; const url: PChar); extdecl;
begin
  {$define handleExceptionFuncName :='SetFirstPartyForCookies'}
  handleExceptionBegin
  AObj.SetFirstPartyForCookies(url);
  handleExceptionEnd
end;

//procedure
procedure CefRequest_Assign(AObj: ICefRequest; const url,  method: PChar; const postData: ICefPostData; const headerMap: ICefStringMultimap); extdecl;
begin
  {$define handleExceptionFuncName :='Assign'}
  handleExceptionBegin
  AObj.Assign(url,  method, postData, headerMap);
  handleExceptionEnd
end;


exports
  CefRequest_UnWrap,
  CefRequest_New,
  CefRequest_IsReadOnly,
  CefRequest_GetUrl,
  CefRequest_GetMethod,
  CefRequest_GetPostData,
  CefRequest_GetReferrerUrl,
  CefRequest_GetReferrerPolicy,
  CefRequest_GetHeaderByName,
  CefRequest_GetFlags,
  CefRequest_GetFirstPartyForCookies,
  CefRequest_GetResourceType,
  CefRequest_GetTransitionType,
  CefRequest_GetIdentifier,
  CefRequest_SetUrl,
  CefRequest_SetMethod,
  CefRequest_SetReferrer,
  CefRequest_SetPostData,
  CefRequest_SetHeaderMap,
  CefRequest_SetHeaderByName,
  CefRequest_SetFlags,
  CefRequest_SetFirstPartyForCookies,
  CefRequest_Assign;