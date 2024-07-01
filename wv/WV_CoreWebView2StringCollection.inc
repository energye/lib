
//constructor
function CoreWebView2StringCollection_Create(const aBaseIntf: ICoreWebView2StringCollection): TCoreWebView2StringCollection; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TCoreWebView2StringCollection.Create(aBaseIntf);
  handleExceptionEnd
end;

//property
function CoreWebView2StringCollection_Initialized(AObj: TCoreWebView2StringCollection): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='Initialized'}
  handleExceptionBegin
  Result := AObj.Initialized;
  handleExceptionEnd
end;

//property
procedure CoreWebView2StringCollection_BaseIntf(AObj: TCoreWebView2StringCollection; var Result: ICoreWebView2StringCollection); extdecl;
begin
  {$define handleExceptionFuncName :='BaseIntf'}
  handleExceptionBegin
  Result := AObj.BaseIntf;
  handleExceptionEnd
end;

//property
function CoreWebView2StringCollection_Count(AObj: TCoreWebView2StringCollection): uint32; extdecl;
begin
  {$define handleExceptionFuncName :='Count'}
  handleExceptionBegin
  Result := AObj.Count;
  handleExceptionEnd
end;

//property
function CoreWebView2StringCollection_Items(AObj: TCoreWebView2StringCollection; idx: uint32): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='Items'}
  handleExceptionBegin
  Result := ToPChar(AObj.Items[idx]);
  handleExceptionEnd
end;


exports
  CoreWebView2StringCollection_Create,
  CoreWebView2StringCollection_Initialized,
  CoreWebView2StringCollection_BaseIntf,
  CoreWebView2StringCollection_Count,
  CoreWebView2StringCollection_Items;