
//constructor
function CoreWebView2PermissionSettingCollectionView_Create(const aBaseIntf: ICoreWebView2PermissionSettingCollectionView): TCoreWebView2PermissionSettingCollectionView; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TCoreWebView2PermissionSettingCollectionView.Create(aBaseIntf);
  handleExceptionEnd
end;

//property
function CoreWebView2PermissionSettingCollectionView_Initialized(AObj: TCoreWebView2PermissionSettingCollectionView): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='Initialized'}
  handleExceptionBegin
  Result := AObj.Initialized;
  handleExceptionEnd
end;

//property
procedure CoreWebView2PermissionSettingCollectionView_BaseIntf(AObj: TCoreWebView2PermissionSettingCollectionView; var Result: ICoreWebView2PermissionSettingCollectionView); extdecl;
begin
  {$define handleExceptionFuncName :='BaseIntf'}
  handleExceptionBegin
  Result := AObj.BaseIntf;
  handleExceptionEnd
end;

//property
procedure CoreWebView2PermissionSettingCollectionView_ValueAtIndex(AObj: TCoreWebView2PermissionSettingCollectionView; idx: uint32; var Result: ICoreWebView2PermissionSetting); extdecl;
begin
  {$define handleExceptionFuncName :='ValueAtIndex'}
  handleExceptionBegin
  Result := AObj.ValueAtIndex[idx];
  handleExceptionEnd
end;

//property
function CoreWebView2PermissionSettingCollectionView_Count(AObj: TCoreWebView2PermissionSettingCollectionView): uint32; extdecl;
begin
  {$define handleExceptionFuncName :='Count'}
  handleExceptionBegin
  Result := AObj.Count;
  handleExceptionEnd
end;


exports
  CoreWebView2PermissionSettingCollectionView_Create,
  CoreWebView2PermissionSettingCollectionView_Initialized,
  CoreWebView2PermissionSettingCollectionView_BaseIntf,
  CoreWebView2PermissionSettingCollectionView_ValueAtIndex,
  CoreWebView2PermissionSettingCollectionView_Count;