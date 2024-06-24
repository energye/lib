
//constructor
function CoreWebView2HttpRequestHeaders_Create(const aBaseIntf: ICoreWebView2HttpRequestHeaders): TCoreWebView2HttpRequestHeaders; extdecl;
begin
  handleExceptionBegin
  Result := TCoreWebView2HttpRequestHeaders.Create(aBaseIntf);
  handleExceptionEnd
end;

//property
function CoreWebView2HttpRequestHeaders_Initialized(AObj: TCoreWebView2HttpRequestHeaders): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Initialized;
  handleExceptionEnd
end;

//property
procedure CoreWebView2HttpRequestHeaders_BaseIntf(AObj: TCoreWebView2HttpRequestHeaders; var Result: ICoreWebView2HttpRequestHeaders); extdecl;
begin
  handleExceptionBegin
  Result := AObj.BaseIntf;
  handleExceptionEnd
end;

//property
procedure CoreWebView2HttpRequestHeaders_Iterator(AObj: TCoreWebView2HttpRequestHeaders; var Result: ICoreWebView2HttpHeadersCollectionIterator); extdecl;
begin
  handleExceptionBegin
  Result := AObj.Iterator;
  handleExceptionEnd
end;

//function
function CoreWebView2HttpRequestHeaders_SetHeader(AObj: TCoreWebView2HttpRequestHeaders; const aName, aValue: PChar): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.SetHeader(aName, aValue);
  handleExceptionEnd
end;

//function
function CoreWebView2HttpRequestHeaders_GetHeader(AObj: TCoreWebView2HttpRequestHeaders; const aName: PChar): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.GetHeader(aName));
  handleExceptionEnd
end;

//function
function CoreWebView2HttpRequestHeaders_GetHeaders(AObj: TCoreWebView2HttpRequestHeaders; const aName: PChar; var aIterator: ICoreWebView2HttpHeadersCollectionIterator): LongBool; extdecl;
var
  RetaIterator: ICoreWebView2HttpHeadersCollectionIterator;
begin
  handleExceptionBegin
  RetaIterator := aIterator;
  Result := AObj.GetHeaders(aName, RetaIterator);
  aIterator := RetaIterator;
  handleExceptionEnd
end;

//function
function CoreWebView2HttpRequestHeaders_Contains(AObj: TCoreWebView2HttpRequestHeaders; const aName: PChar): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Contains(aName);
  handleExceptionEnd
end;

//function
function CoreWebView2HttpRequestHeaders_RemoveHeader(AObj: TCoreWebView2HttpRequestHeaders; const aName: PChar): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.RemoveHeader(aName);
  handleExceptionEnd
end;


exports
  CoreWebView2HttpRequestHeaders_Create,
  CoreWebView2HttpRequestHeaders_Initialized,
  CoreWebView2HttpRequestHeaders_BaseIntf,
  CoreWebView2HttpRequestHeaders_Iterator,
  CoreWebView2HttpRequestHeaders_SetHeader,
  CoreWebView2HttpRequestHeaders_GetHeader,
  CoreWebView2HttpRequestHeaders_GetHeaders,
  CoreWebView2HttpRequestHeaders_Contains,
  CoreWebView2HttpRequestHeaders_RemoveHeader;