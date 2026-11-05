// constructor
function TCoreWebView2PermissionSetting_Create(const aBaseIntf: ICoreWebView2PermissionSetting): TCoreWebView2PermissionSetting; extdecl;
begin
  {$define handleExceptionID := 4600}
  handleExceptionBegin
  Result := TCoreWebView2PermissionSetting.Create(aBaseIntf);
  handleExceptionEnd
end;

// property
function TCoreWebView2PermissionSetting_Initialized(AObj: TCoreWebView2PermissionSetting): LongBool; extdecl;
begin
  {$define handleExceptionID := 4601}
  handleExceptionBegin
  Result := AObj.Initialized;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2PermissionSetting_BaseIntf(AObj: TCoreWebView2PermissionSetting; var Result: ICoreWebView2PermissionSetting); extdecl;
begin
  {$define handleExceptionID := 4602}
  handleExceptionBegin
  Result := AObj.BaseIntf;
  handleExceptionEnd
end;

// property
function TCoreWebView2PermissionSetting_PermissionKind(AObj: TCoreWebView2PermissionSetting): TWVPermissionKind; extdecl;
begin
  {$define handleExceptionID := 4603}
  handleExceptionBegin
  Result := AObj.PermissionKind;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2PermissionSetting_PermissionOrigin(AObj: TCoreWebView2PermissionSetting; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 4604}
  handleExceptionBegin
  StringBufferCreate(AObj.PermissionOrigin, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TCoreWebView2PermissionSetting_PermissionState(AObj: TCoreWebView2PermissionSetting): TWVPermissionState; extdecl;
begin
  {$define handleExceptionID := 4605}
  handleExceptionBegin
  Result := AObj.PermissionState;
  handleExceptionEnd
end;

exports
  TCoreWebView2PermissionSetting_Create,
  TCoreWebView2PermissionSetting_Initialized,
  TCoreWebView2PermissionSetting_BaseIntf,
  TCoreWebView2PermissionSetting_PermissionKind,
  TCoreWebView2PermissionSetting_PermissionOrigin,
  TCoreWebView2PermissionSetting_PermissionState;