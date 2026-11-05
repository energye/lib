// constructor
function TCoreWebView2ObjectCollectionView_Create(const aBaseIntf: ICoreWebView2ObjectCollectionView): TCoreWebView2ObjectCollectionView; extdecl;
begin
  {$define handleExceptionID := 7400}
  handleExceptionBegin
  Result := TCoreWebView2ObjectCollectionView.Create(aBaseIntf);
  handleExceptionEnd
end;

// property
function TCoreWebView2ObjectCollectionView_Initialized(AObj: TCoreWebView2ObjectCollectionView): LongBool; extdecl;
begin
  {$define handleExceptionID := 7401}
  handleExceptionBegin
  Result := AObj.Initialized;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2ObjectCollectionView_BaseIntf(AObj: TCoreWebView2ObjectCollectionView; var Result: ICoreWebView2ObjectCollectionView); extdecl;
begin
  {$define handleExceptionID := 7402}
  handleExceptionBegin
  Result := AObj.BaseIntf;
  handleExceptionEnd
end;

// property
function TCoreWebView2ObjectCollectionView_Count(AObj: TCoreWebView2ObjectCollectionView): cardinal; extdecl;
begin
  {$define handleExceptionID := 7403}
  handleExceptionBegin
  Result := AObj.Count;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2ObjectCollectionView_Items(AObj: TCoreWebView2ObjectCollectionView; idx: cardinal; var Result: IUnknown); extdecl;
begin
  {$define handleExceptionID := 7404}
  handleExceptionBegin
  Result := AObj.Items[idx];
  handleExceptionEnd
end;

exports
  TCoreWebView2ObjectCollectionView_Create,
  TCoreWebView2ObjectCollectionView_Initialized,
  TCoreWebView2ObjectCollectionView_BaseIntf,
  TCoreWebView2ObjectCollectionView_Count,
  TCoreWebView2ObjectCollectionView_Items;