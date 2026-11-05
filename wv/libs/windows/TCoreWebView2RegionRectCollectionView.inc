// constructor
function TCoreWebView2RegionRectCollectionView_Create(const aBaseIntf: ICoreWebView2RegionRectCollectionView): TCoreWebView2RegionRectCollectionView; extdecl;
begin
  {$define handleExceptionID := 7700}
  handleExceptionBegin
  Result := TCoreWebView2RegionRectCollectionView.Create(aBaseIntf);
  handleExceptionEnd
end;

// property
function TCoreWebView2RegionRectCollectionView_Initialized(AObj: TCoreWebView2RegionRectCollectionView): LongBool; extdecl;
begin
  {$define handleExceptionID := 7701}
  handleExceptionBegin
  Result := AObj.Initialized;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2RegionRectCollectionView_BaseIntf(AObj: TCoreWebView2RegionRectCollectionView; var Result: ICoreWebView2RegionRectCollectionView); extdecl;
begin
  {$define handleExceptionID := 7702}
  handleExceptionBegin
  Result := AObj.BaseIntf;
  handleExceptionEnd
end;

// property
function TCoreWebView2RegionRectCollectionView_Count(AObj: TCoreWebView2RegionRectCollectionView): cardinal; extdecl;
begin
  {$define handleExceptionID := 7703}
  handleExceptionBegin
  Result := AObj.Count;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2RegionRectCollectionView_Items(AObj: TCoreWebView2RegionRectCollectionView; idx: cardinal; var Result: TRect); extdecl;
begin
  {$define handleExceptionID := 7704}
  handleExceptionBegin
  Result := AObj.Items[idx];
  handleExceptionEnd
end;

exports
  TCoreWebView2RegionRectCollectionView_Create,
  TCoreWebView2RegionRectCollectionView_Initialized,
  TCoreWebView2RegionRectCollectionView_BaseIntf,
  TCoreWebView2RegionRectCollectionView_Count,
  TCoreWebView2RegionRectCollectionView_Items;