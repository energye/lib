// constructor
function TCefNavigationEntryRef_Create(data: Pointer; out IntfNavigationEntry: ICefNavigationEntry): TCefNavigationEntryRef; extdecl;
begin
  {$define handleExceptionID := 19800}
  handleExceptionBegin
  Result := TCefNavigationEntryRef.Create(data);
  IntfNavigationEntry := Result as ICefNavigationEntry;
  handleExceptionEnd
end;

// function
function TCefNavigationEntryRef_IsValid(AObj: ICefNavigationEntry): LongBool; extdecl;
begin
  {$define handleExceptionID := 19801}
  handleExceptionBegin
  Result := AObj.IsValid();
  handleExceptionEnd
end;

// function
procedure TCefNavigationEntryRef_GetUrl(AObj: ICefNavigationEntry;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 19802}
  handleExceptionBegin
  StringBufferCreate(string(AObj.GetUrl()), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
procedure TCefNavigationEntryRef_GetDisplayUrl(AObj: ICefNavigationEntry;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 19803}
  handleExceptionBegin
  StringBufferCreate(string(AObj.GetDisplayUrl()), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
procedure TCefNavigationEntryRef_GetOriginalUrl(AObj: ICefNavigationEntry;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 19804}
  handleExceptionBegin
  StringBufferCreate(string(AObj.GetOriginalUrl()), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
procedure TCefNavigationEntryRef_GetTitle(AObj: ICefNavigationEntry;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 19805}
  handleExceptionBegin
  StringBufferCreate(string(AObj.GetTitle()), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
function TCefNavigationEntryRef_GetTransitionType(AObj: ICefNavigationEntry): TCefTransitionType; extdecl;
begin
  {$define handleExceptionID := 19806}
  handleExceptionBegin
  Result := AObj.GetTransitionType();
  handleExceptionEnd
end;

// function
function TCefNavigationEntryRef_HasPostData(AObj: ICefNavigationEntry): LongBool; extdecl;
begin
  {$define handleExceptionID := 19807}
  handleExceptionBegin
  Result := AObj.HasPostData();
  handleExceptionEnd
end;

// function
procedure TCefNavigationEntryRef_GetCompletionTime(AObj: ICefNavigationEntry; var Result: Double); extdecl;
begin
  {$define handleExceptionID := 19808}
  handleExceptionBegin
  Result := AObj.GetCompletionTime();
  handleExceptionEnd
end;

// function
function TCefNavigationEntryRef_GetHttpStatusCode(AObj: ICefNavigationEntry): Integer; extdecl;
begin
  {$define handleExceptionID := 19809}
  handleExceptionBegin
  Result := AObj.GetHttpStatusCode();
  handleExceptionEnd
end;

// function
procedure TCefNavigationEntryRef_GetSSLStatus(AObj: ICefNavigationEntry; var Result: ICefSSLStatus); extdecl;
begin
  {$define handleExceptionID := 19810}
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