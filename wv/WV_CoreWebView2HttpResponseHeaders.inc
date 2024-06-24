
//constructor
function CoreWebView2HttpResponseHeaders_Create(const aBaseIntf: ICoreWebView2HttpResponseHeaders): TCoreWebView2HttpResponseHeaders; extdecl;
begin
  handleExceptionBegin
  Result := TCoreWebView2HttpResponseHeaders.Create(aBaseIntf);
  handleExceptionEnd
end;

//property
function CoreWebView2HttpResponseHeaders_Initialized(AObj: TCoreWebView2HttpResponseHeaders): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Initialized;
  handleExceptionEnd
end;

//property
procedure CoreWebView2HttpResponseHeaders_BaseIntf(AObj: TCoreWebView2HttpResponseHeaders; var Result: ICoreWebView2HttpResponseHeaders); extdecl;
begin
  handleExceptionBegin
  Result := AObj.BaseIntf;
  handleExceptionEnd
end;

//property
procedure CoreWebView2HttpResponseHeaders_Iterator(AObj: TCoreWebView2HttpResponseHeaders; var Result: ICoreWebView2HttpHeadersCollectionIterator); extdecl;
begin
  handleExceptionBegin
  Result := AObj.Iterator;
  handleExceptionEnd
end;

//function
function CoreWebView2HttpResponseHeaders_GetHeader(AObj: TCoreWebView2HttpResponseHeaders; const aName: PChar): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.GetHeader(aName));
  handleExceptionEnd
end;

//function
function CoreWebView2HttpResponseHeaders_GetHeaders(AObj: TCoreWebView2HttpResponseHeaders; const aName: PChar; var aIterator: ICoreWebView2HttpHeadersCollectionIterator): LongBool; extdecl;
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
function CoreWebView2HttpResponseHeaders_Contains(AObj: TCoreWebView2HttpResponseHeaders; const aName: PChar): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Contains(aName);
  handleExceptionEnd
end;

//function
function CoreWebView2HttpResponseHeaders_AppendHeader(AObj: TCoreWebView2HttpResponseHeaders; const aName, aValue: PChar): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.AppendHeader(aName, aValue);
  handleExceptionEnd
end;


exports
  CoreWebView2HttpResponseHeaders_Create,
  CoreWebView2HttpResponseHeaders_Initialized,
  CoreWebView2HttpResponseHeaders_BaseIntf,
  CoreWebView2HttpResponseHeaders_Iterator,
  CoreWebView2HttpResponseHeaders_GetHeader,
  CoreWebView2HttpResponseHeaders_GetHeaders,
  CoreWebView2HttpResponseHeaders_Contains,
  CoreWebView2HttpResponseHeaders_AppendHeader;