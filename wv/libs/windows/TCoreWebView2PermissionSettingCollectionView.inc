// constructor
function TCoreWebView2PermissionSettingCollectionView_Create(const aBaseIntf: ICoreWebView2PermissionSettingCollectionView): TCoreWebView2PermissionSettingCollectionView; extdecl;
begin
  {$define handleExceptionID := 5300}
  handleExceptionBegin
  Result := TCoreWebView2PermissionSettingCollectionView.Create(aBaseIntf);
  handleExceptionEnd
end;

// property
function TCoreWebView2PermissionSettingCollectionView_Initialized(AObj: TCoreWebView2PermissionSettingCollectionView): LongBool; extdecl;
begin
  {$define handleExceptionID := 5301}
  handleExceptionBegin
  Result := AObj.Initialized;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2PermissionSettingCollectionView_BaseIntf(AObj: TCoreWebView2PermissionSettingCollectionView; var Result: ICoreWebView2PermissionSettingCollectionView); extdecl;
begin
  {$define handleExceptionID := 5302}
  handleExceptionBegin
  Result := AObj.BaseIntf;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2PermissionSettingCollectionView_ValueAtIndex(AObj: TCoreWebView2PermissionSettingCollectionView; idx: cardinal; var Result: ICoreWebView2PermissionSetting); extdecl;
begin
  {$define handleExceptionID := 5303}
  handleExceptionBegin
  Result := AObj.ValueAtIndex[idx];
  handleExceptionEnd
end;

// property
function TCoreWebView2PermissionSettingCollectionView_Count(AObj: TCoreWebView2PermissionSettingCollectionView): cardinal; extdecl;
begin
  {$define handleExceptionID := 5304}
  handleExceptionBegin
  Result := AObj.Count;
  handleExceptionEnd
end;

exports
  TCoreWebView2PermissionSettingCollectionView_Create,
  TCoreWebView2PermissionSettingCollectionView_Initialized,
  TCoreWebView2PermissionSettingCollectionView_BaseIntf,
  TCoreWebView2PermissionSettingCollectionView_ValueAtIndex,
  TCoreWebView2PermissionSettingCollectionView_Count;