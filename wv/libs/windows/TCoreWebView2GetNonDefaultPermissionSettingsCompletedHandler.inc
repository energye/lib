// constructor
function TCoreWebView2GetNonDefaultPermissionSettingsCompletedHandler_Create(const aEvents: IWVBrowserEvents; out IntfGetNonDefaultPermissionSettingsCompletedHandler: ICoreWebView2GetNonDefaultPermissionSettingsCompletedHandler): TCoreWebView2GetNonDefaultPermissionSettingsCompletedHandler; extdecl;
begin
  {$define handleExceptionID := 9400}
  handleExceptionBegin
  Result := TCoreWebView2GetNonDefaultPermissionSettingsCompletedHandler.Create(aEvents);
  IntfGetNonDefaultPermissionSettingsCompletedHandler := Result as ICoreWebView2GetNonDefaultPermissionSettingsCompletedHandler;
  handleExceptionEnd
end;

// function
function TCoreWebView2GetNonDefaultPermissionSettingsCompletedHandler_Invoke(AObj: ICoreWebView2GetNonDefaultPermissionSettingsCompletedHandler; errorCode: HResult; const result_: ICoreWebView2PermissionSettingCollectionView): HResult; extdecl;
begin
  {$define handleExceptionID := 9401}
  handleExceptionBegin
  Result := AObj.Invoke(errorCode, result_);
  handleExceptionEnd
end;

exports
  TCoreWebView2GetNonDefaultPermissionSettingsCompletedHandler_Create,
  TCoreWebView2GetNonDefaultPermissionSettingsCompletedHandler_Invoke;