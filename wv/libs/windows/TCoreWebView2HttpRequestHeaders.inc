// constructor
function TCoreWebView2HttpRequestHeaders_Create(const aBaseIntf: ICoreWebView2HttpRequestHeaders): TCoreWebView2HttpRequestHeaders; extdecl;
begin
  {$define handleExceptionID := 5000}
  handleExceptionBegin
  Result := TCoreWebView2HttpRequestHeaders.Create(aBaseIntf);
  handleExceptionEnd
end;

// function
function TCoreWebView2HttpRequestHeaders_SetHeader(AObj: TCoreWebView2HttpRequestHeaders; const aName: PChar; const aValue: PChar): LongBool; extdecl;
begin
  {$define handleExceptionID := 5001}
  handleExceptionBegin
  Result := AObj.SetHeader(PCharToUStr(aName), PCharToUStr(aValue));
  handleExceptionEnd
end;

// function
procedure TCoreWebView2HttpRequestHeaders_GetHeader(AObj: TCoreWebView2HttpRequestHeaders; const aName: PChar;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 5002}
  handleExceptionBegin
  StringBufferCreate(string(AObj.GetHeader(PCharToUStr(aName))), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
function TCoreWebView2HttpRequestHeaders_GetHeaders(AObj: TCoreWebView2HttpRequestHeaders; const aName: PChar; var aValue: ICoreWebView2HttpHeadersCollectionIterator): LongBool; extdecl;
var
  OutaValue: ICoreWebView2HttpHeadersCollectionIterator = nil;
begin
  {$define handleExceptionID := 5003}
  handleExceptionBegin
  Result := AObj.GetHeaders(PCharToUStr(aName), OutaValue);
  aValue := OutaValue;
  handleExceptionEnd
end;

// function
function TCoreWebView2HttpRequestHeaders_Contains(AObj: TCoreWebView2HttpRequestHeaders; const aValue: PChar): LongBool; extdecl;
begin
  {$define handleExceptionID := 5004}
  handleExceptionBegin
  Result := AObj.Contains(PCharToUStr(aValue));
  handleExceptionEnd
end;

// function
function TCoreWebView2HttpRequestHeaders_RemoveHeader(AObj: TCoreWebView2HttpRequestHeaders; const aName: PChar): LongBool; extdecl;
begin
  {$define handleExceptionID := 5005}
  handleExceptionBegin
  Result := AObj.RemoveHeader(PCharToUStr(aName));
  handleExceptionEnd
end;

// property
function TCoreWebView2HttpRequestHeaders_Initialized(AObj: TCoreWebView2HttpRequestHeaders): LongBool; extdecl;
begin
  {$define handleExceptionID := 5006}
  handleExceptionBegin
  Result := AObj.Initialized;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2HttpRequestHeaders_BaseIntf(AObj: TCoreWebView2HttpRequestHeaders; var Result: ICoreWebView2HttpRequestHeaders); extdecl;
begin
  {$define handleExceptionID := 5007}
  handleExceptionBegin
  Result := AObj.BaseIntf;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2HttpRequestHeaders_Iterator(AObj: TCoreWebView2HttpRequestHeaders; var Result: ICoreWebView2HttpHeadersCollectionIterator); extdecl;
begin
  {$define handleExceptionID := 5008}
  handleExceptionBegin
  Result := AObj.Iterator;
  handleExceptionEnd
end;

exports
  TCoreWebView2HttpRequestHeaders_Create,
  TCoreWebView2HttpRequestHeaders_SetHeader,
  TCoreWebView2HttpRequestHeaders_GetHeader,
  TCoreWebView2HttpRequestHeaders_GetHeaders,
  TCoreWebView2HttpRequestHeaders_Contains,
  TCoreWebView2HttpRequestHeaders_RemoveHeader,
  TCoreWebView2HttpRequestHeaders_Initialized,
  TCoreWebView2HttpRequestHeaders_BaseIntf,
  TCoreWebView2HttpRequestHeaders_Iterator;