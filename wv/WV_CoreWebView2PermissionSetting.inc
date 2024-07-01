
//constructor
function CoreWebView2PermissionSetting_Create(const aBaseIntf: ICoreWebView2PermissionSetting): TCoreWebView2PermissionSetting; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TCoreWebView2PermissionSetting.Create(aBaseIntf);
  handleExceptionEnd
end;

//property
function CoreWebView2PermissionSetting_Initialized(AObj: TCoreWebView2PermissionSetting): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='Initialized'}
  handleExceptionBegin
  Result := AObj.Initialized;
  handleExceptionEnd
end;

//property
procedure CoreWebView2PermissionSetting_BaseIntf(AObj: TCoreWebView2PermissionSetting; var Result: ICoreWebView2PermissionSetting); extdecl;
begin
  {$define handleExceptionFuncName :='BaseIntf'}
  handleExceptionBegin
  Result := AObj.BaseIntf;
  handleExceptionEnd
end;

//property
function CoreWebView2PermissionSetting_PermissionKind(AObj: TCoreWebView2PermissionSetting): TWVPermissionKind; extdecl;
begin
  {$define handleExceptionFuncName :='PermissionKind'}
  handleExceptionBegin
  Result := AObj.PermissionKind;
  handleExceptionEnd
end;

//property
function CoreWebView2PermissionSetting_PermissionOrigin(AObj: TCoreWebView2PermissionSetting): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='PermissionOrigin'}
  handleExceptionBegin
  Result := ToPChar(AObj.PermissionOrigin);
  handleExceptionEnd
end;

//property
function CoreWebView2PermissionSetting_PermissionState(AObj: TCoreWebView2PermissionSetting): TWVPermissionState; extdecl;
begin
  {$define handleExceptionFuncName :='PermissionState'}
  handleExceptionBegin
  Result := AObj.PermissionState;
  handleExceptionEnd
end;


exports
  CoreWebView2PermissionSetting_Create,
  CoreWebView2PermissionSetting_Initialized,
  CoreWebView2PermissionSetting_BaseIntf,
  CoreWebView2PermissionSetting_PermissionKind,
  CoreWebView2PermissionSetting_PermissionOrigin,
  CoreWebView2PermissionSetting_PermissionState;