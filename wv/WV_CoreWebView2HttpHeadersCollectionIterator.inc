
//constructor
function CoreWebView2HttpHeadersCollectionIterator_Create(const aBaseIntf: ICoreWebView2HttpHeadersCollectionIterator): TCoreWebView2HttpHeadersCollectionIterator; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TCoreWebView2HttpHeadersCollectionIterator.Create(aBaseIntf);
  handleExceptionEnd
end;

//property
function CoreWebView2HttpHeadersCollectionIterator_Initialized(AObj: TCoreWebView2HttpHeadersCollectionIterator): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='Initialized'}
  handleExceptionBegin
  Result := AObj.Initialized;
  handleExceptionEnd
end;

//property
procedure CoreWebView2HttpHeadersCollectionIterator_BaseIntf(AObj: TCoreWebView2HttpHeadersCollectionIterator; var Result: ICoreWebView2HttpHeadersCollectionIterator); extdecl;
begin
  {$define handleExceptionFuncName :='BaseIntf'}
  handleExceptionBegin
  Result := AObj.BaseIntf;
  handleExceptionEnd
end;

//property
function CoreWebView2HttpHeadersCollectionIterator_HasCurrentHeader(AObj: TCoreWebView2HttpHeadersCollectionIterator): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='HasCurrentHeader'}
  handleExceptionBegin
  Result := AObj.HasCurrentHeader;
  handleExceptionEnd
end;

//function
function CoreWebView2HttpHeadersCollectionIterator_GetCurrentHeader(AObj: TCoreWebView2HttpHeadersCollectionIterator; var aName, aValue: PChar): LongBool; extdecl;
var
  RetaName: UnicodeString;
  RetaValue: UnicodeString;
begin
  {$define handleExceptionFuncName :='GetCurrentHeader'}
  handleExceptionBegin
  RetaName := aName;
  RetaValue := aValue;
  Result := AObj.GetCurrentHeader(RetaName, RetaValue);
  aName := ToPChar(RetaName);
  aValue := ToPChar(RetaValue);
  handleExceptionEnd
end;

//function
function CoreWebView2HttpHeadersCollectionIterator_MoveNext(AObj: TCoreWebView2HttpHeadersCollectionIterator): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='MoveNext'}
  handleExceptionBegin
  Result := AObj.MoveNext();
  handleExceptionEnd
end;


exports
  CoreWebView2HttpHeadersCollectionIterator_Create,
  CoreWebView2HttpHeadersCollectionIterator_Initialized,
  CoreWebView2HttpHeadersCollectionIterator_BaseIntf,
  CoreWebView2HttpHeadersCollectionIterator_HasCurrentHeader,
  CoreWebView2HttpHeadersCollectionIterator_GetCurrentHeader,
  CoreWebView2HttpHeadersCollectionIterator_MoveNext;