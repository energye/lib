// constructor
function TCefNavigationEntryRef_Create(data: Pointer; out IntfNavigationEntry: ICefNavigationEntry): TCefNavigationEntryRef; extdecl;
begin
  {$define handleExceptionID := 19200}
  handleExceptionBegin
  Result := TCefNavigationEntryRef.Create(data);
  IntfNavigationEntry := Result as ICefNavigationEntry;
  handleExceptionEnd
end;

// function
function TCefNavigationEntryRef_IsValid(AObj: ICefNavigationEntry): LongBool; extdecl;
begin
  {$define handleExceptionID := 19201}
  handleExceptionBegin
  Result := AObj.IsValid();
  handleExceptionEnd
end;

// function
procedure TCefNavigationEntryRef_GetUrl(AObj: ICefNavigationEntry;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 19202}
  handleExceptionBegin
  StringBufferCreate(string(AObj.GetUrl()), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
procedure TCefNavigationEntryRef_GetDisplayUrl(AObj: ICefNavigationEntry;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 19203}
  handleExceptionBegin
  StringBufferCreate(string(AObj.GetDisplayUrl()), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
procedure TCefNavigationEntryRef_GetOriginalUrl(AObj: ICefNavigationEntry;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 19204}
  handleExceptionBegin
  StringBufferCreate(string(AObj.GetOriginalUrl()), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
procedure TCefNavigationEntryRef_GetTitle(AObj: ICefNavigationEntry;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 19205}
  handleExceptionBegin
  StringBufferCreate(string(AObj.GetTitle()), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
function TCefNavigationEntryRef_GetTransitionType(AObj: ICefNavigationEntry): TCefTransitionType; extdecl;
begin
  {$define handleExceptionID := 19206}
  handleExceptionBegin
  Result := AObj.GetTransitionType();
  handleExceptionEnd
end;

// function
function TCefNavigationEntryRef_HasPostData(AObj: ICefNavigationEntry): LongBool; extdecl;
begin
  {$define handleExceptionID := 19207}
  handleExceptionBegin
  Result := AObj.HasPostData();
  handleExceptionEnd
end;

// function
procedure TCefNavigationEntryRef_GetCompletionTime(AObj: ICefNavigationEntry; var Result: Double); extdecl;
begin
  {$define handleExceptionID := 19208}
  handleExceptionBegin
  Result := AObj.GetCompletionTime();
  handleExceptionEnd
end;

// function
function TCefNavigationEntryRef_GetHttpStatusCode(AObj: ICefNavigationEntry): Integer; extdecl;
begin
  {$define handleExceptionID := 19209}
  handleExceptionBegin
  Result := AObj.GetHttpStatusCode();
  handleExceptionEnd
end;

// function
procedure TCefNavigationEntryRef_GetSSLStatus(AObj: ICefNavigationEntry; var Result: ICefSSLStatus); extdecl;
begin
  {$define handleExceptionID := 19210}
  handleExceptionBegin
  Result := AObj.GetSSLStatus();
  handleExceptionEnd
end;

// function static
procedure TCefNavigationEntryRef_UnWrap(data: Pointer; var Result: ICefNavigationEntry); extdecl;
begin
  Result := TCefNavigationEntryRef.UnWrap(data);
end;

exports
  TCefNavigationEntryRef_Create,
  TCefNavigationEntryRef_IsValid,
  TCefNavigationEntryRef_GetUrl,
  TCefNavigationEntryRef_GetDisplayUrl,
  TCefNavigationEntryRef_GetOriginalUrl,
  TCefNavigationEntryRef_GetTitle,
  TCefNavigationEntryRef_GetTransitionType,
  TCefNavigationEntryRef_HasPostData,
  TCefNavigationEntryRef_GetCompletionTime,
  TCefNavigationEntryRef_GetHttpStatusCode,
  TCefNavigationEntryRef_GetSSLStatus,
  TCefNavigationEntryRef_UnWrap;