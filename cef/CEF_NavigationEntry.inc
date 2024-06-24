
//function
procedure CefNavigationEntry_UnWrap(data: Pointer; var Result: ICefNavigationEntry); extdecl;
begin
  Result := TCefNavigationEntryRef.UnWrap(data);
end;

//function
function CefNavigationEntry_IsValid(AObj: ICefNavigationEntry): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IsValid();
  handleExceptionEnd
end;

//function
function CefNavigationEntry_GetUrl(AObj: ICefNavigationEntry): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.GetUrl());
  handleExceptionEnd
end;

//function
function CefNavigationEntry_GetDisplayUrl(AObj: ICefNavigationEntry): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.GetDisplayUrl());
  handleExceptionEnd
end;

//function
function CefNavigationEntry_GetOriginalUrl(AObj: ICefNavigationEntry): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.GetOriginalUrl());
  handleExceptionEnd
end;

//function
function CefNavigationEntry_GetTitle(AObj: ICefNavigationEntry): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.GetTitle());
  handleExceptionEnd
end;

//function
function CefNavigationEntry_GetTransitionType(AObj: ICefNavigationEntry): TCefTransitionType; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetTransitionType();
  handleExceptionEnd
end;

//function
function CefNavigationEntry_HasPostData(AObj: ICefNavigationEntry): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.HasPostData();
  handleExceptionEnd
end;

//function
procedure CefNavigationEntry_GetCompletionTime(AObj: ICefNavigationEntry; var Result: TDateTime); extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetCompletionTime();
  handleExceptionEnd
end;

//function
function CefNavigationEntry_GetHttpStatusCode(AObj: ICefNavigationEntry): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetHttpStatusCode();
  handleExceptionEnd
end;

//function
procedure CefNavigationEntry_GetSSLStatus(AObj: ICefNavigationEntry; var Result: ICefSSLStatus); extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetSSLStatus();
  handleExceptionEnd
end;


exports
  CefNavigationEntry_UnWrap,
  CefNavigationEntry_IsValid,
  CefNavigationEntry_GetUrl,
  CefNavigationEntry_GetDisplayUrl,
  CefNavigationEntry_GetOriginalUrl,
  CefNavigationEntry_GetTitle,
  CefNavigationEntry_GetTransitionType,
  CefNavigationEntry_HasPostData,
  CefNavigationEntry_GetCompletionTime,
  CefNavigationEntry_GetHttpStatusCode,
  CefNavigationEntry_GetSSLStatus;