
//constructor
function CoreWebView2ObjectCollectionView_Create(const aBaseIntf: ICoreWebView2ObjectCollectionView): TCoreWebView2ObjectCollectionView; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TCoreWebView2ObjectCollectionView.Create(aBaseIntf);
  handleExceptionEnd
end;

//property
function CoreWebView2ObjectCollectionView_Initialized(AObj: TCoreWebView2ObjectCollectionView): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='Initialized'}
  handleExceptionBegin
  Result := AObj.Initialized;
  handleExceptionEnd
end;

//property
procedure CoreWebView2ObjectCollectionView_BaseIntf(AObj: TCoreWebView2ObjectCollectionView; var Result: ICoreWebView2ObjectCollectionView); extdecl;
begin
  {$define handleExceptionFuncName :='BaseIntf'}
  handleExceptionBegin
  Result := AObj.BaseIntf;
  handleExceptionEnd
end;

//property
function CoreWebView2ObjectCollectionView_Count(AObj: TCoreWebView2ObjectCollectionView): uint32; extdecl;
begin
  {$define handleExceptionFuncName :='Count'}
  handleExceptionBegin
  Result := AObj.Count;
  handleExceptionEnd
end;

//property
procedure CoreWebView2ObjectCollectionView_Items(AObj: TCoreWebView2ObjectCollectionView; idx: uint32; var Result: IUnknown); extdecl;
begin
  {$define handleExceptionFuncName :='Items'}
  handleExceptionBegin
  Result := AObj.Items[idx];
  handleExceptionEnd
end;


exports
  CoreWebView2ObjectCollectionView_Create,
  CoreWebView2ObjectCollectionView_Initialized,
  CoreWebView2ObjectCollectionView_BaseIntf,
  CoreWebView2ObjectCollectionView_Count,
  CoreWebView2ObjectCollectionView_Items;