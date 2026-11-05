// constructor
function TCoreWebView2HttpHeadersCollectionIterator_Create(const aBaseIntf: ICoreWebView2HttpHeadersCollectionIterator): TCoreWebView2HttpHeadersCollectionIterator; extdecl;
begin
  {$define handleExceptionID := 4700}
  handleExceptionBegin
  Result := TCoreWebView2HttpHeadersCollectionIterator.Create(aBaseIntf);
  handleExceptionEnd
end;

// function
function TCoreWebView2HttpHeadersCollectionIterator_GetCurrentHeader(AObj: TCoreWebView2HttpHeadersCollectionIterator; var aName: PChar; var aValue: PChar): LongBool; extdecl;
var
  OutaName: wvstring;
  OutaValue: wvstring;
begin
  {$define handleExceptionID := 4701}
  handleExceptionBegin
  OutaName := aName;
  OutaValue := aValue;
  Result := AObj.GetCurrentHeader(OutaName, OutaValue);
  aName := ToPChar(OutaName);
  aValue := ToPChar(OutaValue);
  handleExceptionEnd
end;

// function
function TCoreWebView2HttpHeadersCollectionIterator_MoveNext(AObj: TCoreWebView2HttpHeadersCollectionIterator): LongBool; extdecl;
begin
  {$define handleExceptionID := 4702}
  handleExceptionBegin
  Result := AObj.MoveNext();
  handleExceptionEnd
end;

// property
function TCoreWebView2HttpHeadersCollectionIterator_Initialized(AObj: TCoreWebView2HttpHeadersCollectionIterator): LongBool; extdecl;
begin
  {$define handleExceptionID := 4703}
  handleExceptionBegin
  Result := AObj.Initialized;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2HttpHeadersCollectionIterator_BaseIntf(AObj: TCoreWebView2HttpHeadersCollectionIterator; var Result: ICoreWebView2HttpHeadersCollectionIterator); extdecl;
begin
  {$define handleExceptionID := 4704}
  handleExceptionBegin
  Result := AObj.BaseIntf;
  handleExceptionEnd
end;

// property
function TCoreWebView2HttpHeadersCollectionIterator_HasCurrentHeader(AObj: TCoreWebView2HttpHeadersCollectionIterator): LongBool; extdecl;
begin
  {$define handleExceptionID := 4705}
  handleExceptionBegin
  Result := AObj.HasCurrentHeader;
  handleExceptionEnd
end;

exports
  TCoreWebView2HttpHeadersCollectionIterator_Create,
  TCoreWebView2HttpHeadersCollectionIterator_GetCurrentHeader,
  TCoreWebView2HttpHeadersCollectionIterator_MoveNext,
  TCoreWebView2HttpHeadersCollectionIterator_Initialized,
  TCoreWebView2HttpHeadersCollectionIterator_BaseIntf,
  TCoreWebView2HttpHeadersCollectionIterator_HasCurrentHeader;