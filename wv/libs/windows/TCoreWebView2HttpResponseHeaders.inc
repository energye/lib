// constructor
function TCoreWebView2HttpResponseHeaders_Create(const aBaseIntf: ICoreWebView2HttpResponseHeaders): TCoreWebView2HttpResponseHeaders; extdecl;
begin
  {$define handleExceptionID := 4900}
  handleExceptionBegin
  Result := TCoreWebView2HttpResponseHeaders.Create(aBaseIntf);
  handleExceptionEnd
end;

// function
procedure TCoreWebView2HttpResponseHeaders_GetHeader(AObj: TCoreWebView2HttpResponseHeaders; const aName: PChar;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 4901}
  handleExceptionBegin
  StringBufferCreate(string(AObj.GetHeader(PCharToUStr(aName))), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
function TCoreWebView2HttpResponseHeaders_GetHeaders(AObj: TCoreWebView2HttpResponseHeaders; const aName: PChar; var aIterator: ICoreWebView2HttpHeadersCollectionIterator): LongBool; extdecl;
var
  OutaIterator: ICoreWebView2HttpHeadersCollectionIterator = nil;
begin
  {$define handleExceptionID := 4902}
  handleExceptionBegin
  Result := AObj.GetHeaders(PCharToUStr(aName), OutaIterator);
  aIterator := OutaIterator;
  handleExceptionEnd
end;

// function
function TCoreWebView2HttpResponseHeaders_Contains(AObj: TCoreWebView2HttpResponseHeaders; const aName: PChar): LongBool; extdecl;
begin
  {$define handleExceptionID := 4903}
  handleExceptionBegin
  Result := AObj.Contains(PCharToUStr(aName));
  handleExceptionEnd
end;

// function
function TCoreWebView2HttpResponseHeaders_AppendHeader(AObj: TCoreWebView2HttpResponseHeaders; const aName: PChar; const aValue: PChar): LongBool; extdecl;
begin
  {$define handleExceptionID := 4904}
  handleExceptionBegin
  Result := AObj.AppendHeader(PCharToUStr(aName), PCharToUStr(aValue));
  handleExceptionEnd
end;

// property
function TCoreWebView2HttpResponseHeaders_Initialized(AObj: TCoreWebView2HttpResponseHeaders): LongBool; extdecl;
begin
  {$define handleExceptionID := 4905}
  handleExceptionBegin
  Result := AObj.Initialized;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2HttpResponseHeaders_BaseIntf(AObj: TCoreWebView2HttpResponseHeaders; var Result: ICoreWebView2HttpResponseHeaders); extdecl;
begin
  {$define handleExceptionID := 4906}
  handleExceptionBegin
  Result := AObj.BaseIntf;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2HttpResponseHeaders_Iterator(AObj: TCoreWebView2HttpResponseHeaders; var Result: ICoreWebView2HttpHeadersCollectionIterator); extdecl;
begin
  {$define handleExceptionID := 4907}
  handleExceptionBegin
  Result := AObj.Iterator;
  handleExceptionEnd
end;

exports
  TCoreWebView2HttpResponseHeaders_Create,
  TCoreWebView2HttpResponseHeaders_GetHeader,
  TCoreWebView2HttpResponseHeaders_GetHeaders,
  TCoreWebView2HttpResponseHeaders_Contains,
  TCoreWebView2HttpResponseHeaders_AppendHeader,
  TCoreWebView2HttpResponseHeaders_Initialized,
  TCoreWebView2HttpResponseHeaders_BaseIntf,
  TCoreWebView2HttpResponseHeaders_Iterator;