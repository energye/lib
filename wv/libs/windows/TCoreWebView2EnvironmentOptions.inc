// constructor
function TCoreWebView2EnvironmentOptions_Create(const aAdditionalBrowserArguments: PChar; const aLanguage: PChar; const aTargetCompatibleBrowserVersion: PChar; aAllowSingleSignOnUsingOSPrimaryAccount: LongBool; aExclusiveUserDataFolderAccess: LongBool; aCustomCrashReportingEnabled: LongBool; const aSchemeRegistrations: TWVCustomSchemeRegistrationArray; aSchemeRegistrationsCount: Integer; aEnableTrackingPrevention: LongBool; aAreBrowserExtensionsEnabled: LongBool; aChannelSearchKind: TWVChannelSearchKind; aReleaseChannels: TWVReleaseChannels; aScrollBarStyle: TWVScrollBarStyle; out IntfEnvironmentOptions: ICoreWebView2EnvironmentOptions; out IntfEnvironmentOptions2: ICoreWebView2EnvironmentOptions2; out IntfEnvironmentOptions3: ICoreWebView2EnvironmentOptions3; out IntfEnvironmentOptions4: ICoreWebView2EnvironmentOptions4; out IntfEnvironmentOptions5: ICoreWebView2EnvironmentOptions5; out IntfEnvironmentOptions6: ICoreWebView2EnvironmentOptions6; out IntfEnvironmentOptions7: ICoreWebView2EnvironmentOptions7; out IntfEnvironmentOptions8: ICoreWebView2EnvironmentOptions8): TCoreWebView2EnvironmentOptions; extdecl;
var
  TempaSchemeRegistrations: TWVCustomSchemeRegistrationArray = nil;
  TempaSchemeRegistrationsIdx: Integer;
begin
  {$define handleExceptionID := 8600}
  handleExceptionBegin
  SetLength(TempaSchemeRegistrations, aSchemeRegistrationsCount);
  for TempaSchemeRegistrationsIdx := 0 to aSchemeRegistrationsCount - 1 do
  begin
    TempaSchemeRegistrations[TempaSchemeRegistrationsIdx] := aSchemeRegistrations[TempaSchemeRegistrationsIdx]
  end;
  Result := TCoreWebView2EnvironmentOptions.Create(aAdditionalBrowserArguments, aLanguage, aTargetCompatibleBrowserVersion, aAllowSingleSignOnUsingOSPrimaryAccount, aExclusiveUserDataFolderAccess, aCustomCrashReportingEnabled, TempaSchemeRegistrations, aEnableTrackingPrevention, aAreBrowserExtensionsEnabled, aChannelSearchKind, aReleaseChannels, aScrollBarStyle);
  IntfEnvironmentOptions := Result as ICoreWebView2EnvironmentOptions;
  IntfEnvironmentOptions2 := Result as ICoreWebView2EnvironmentOptions2;
  IntfEnvironmentOptions3 := Result as ICoreWebView2EnvironmentOptions3;
  IntfEnvironmentOptions4 := Result as ICoreWebView2EnvironmentOptions4;
  IntfEnvironmentOptions5 := Result as ICoreWebView2EnvironmentOptions5;
  IntfEnvironmentOptions6 := Result as ICoreWebView2EnvironmentOptions6;
  IntfEnvironmentOptions7 := Result as ICoreWebView2EnvironmentOptions7;
  IntfEnvironmentOptions8 := Result as ICoreWebView2EnvironmentOptions8;
  handleExceptionEnd
end;

// function
function TCoreWebView2EnvironmentOptions_Get_AdditionalBrowserArguments(AObj: ICoreWebView2EnvironmentOptions; var value: PChar): HResult; extdecl;
var
  Outvalue: PWideChar;
begin
  {$define handleExceptionID := 8601}
  handleExceptionBegin
  Result := AObj.Get_AdditionalBrowserArguments(Outvalue);
  value := ToPChar(Outvalue);
  handleExceptionEnd
end;

// function
function TCoreWebView2EnvironmentOptions_Set_AdditionalBrowserArguments(AObj: ICoreWebView2EnvironmentOptions; value: PChar): HResult; extdecl;
begin
  {$define handleExceptionID := 8602}
  handleExceptionBegin
  Result := AObj.Set_AdditionalBrowserArguments(PCharToPWChar(value));
  handleExceptionEnd
end;

// function
function TCoreWebView2EnvironmentOptions_Get_Language(AObj: ICoreWebView2EnvironmentOptions; var value: PChar): HResult; extdecl;
var
  Outvalue: PWideChar;
begin
  {$define handleExceptionID := 8603}
  handleExceptionBegin
  Result := AObj.Get_Language(Outvalue);
  value := ToPChar(Outvalue);
  handleExceptionEnd
end;

// function
function TCoreWebView2EnvironmentOptions_Set_Language(AObj: ICoreWebView2EnvironmentOptions; value: PChar): HResult; extdecl;
begin
  {$define handleExceptionID := 8604}
  handleExceptionBegin
  Result := AObj.Set_Language(PCharToPWChar(value));
  handleExceptionEnd
end;

// function
function TCoreWebView2EnvironmentOptions_Get_TargetCompatibleBrowserVersion(AObj: ICoreWebView2EnvironmentOptions; var value: PChar): HResult; extdecl;
var
  Outvalue: PWideChar;
begin
  {$define handleExceptionID := 8605}
  handleExceptionBegin
  Result := AObj.Get_TargetCompatibleBrowserVersion(Outvalue);
  value := ToPChar(Outvalue);
  handleExceptionEnd
end;

// function
function TCoreWebView2EnvironmentOptions_Set_TargetCompatibleBrowserVersion(AObj: ICoreWebView2EnvironmentOptions; value: PChar): HResult; extdecl;
begin
  {$define handleExceptionID := 8606}
  handleExceptionBegin
  Result := AObj.Set_TargetCompatibleBrowserVersion(PCharToPWChar(value));
  handleExceptionEnd
end;

// function
function TCoreWebView2EnvironmentOptions_Get_AllowSingleSignOnUsingOSPrimaryAccount(AObj: ICoreWebView2EnvironmentOptions; var allow: Integer): HResult; extdecl;
var
  Outallow: Integer;
begin
  {$define handleExceptionID := 8607}
  handleExceptionBegin
  Result := AObj.Get_AllowSingleSignOnUsingOSPrimaryAccount(Outallow);
  allow := Outallow;
  handleExceptionEnd
end;

// function
function TCoreWebView2EnvironmentOptions_Set_AllowSingleSignOnUsingOSPrimaryAccount(AObj: ICoreWebView2EnvironmentOptions; allow: Integer): HResult; extdecl;
begin
  {$define handleExceptionID := 8608}
  handleExceptionBegin
  Result := AObj.Set_AllowSingleSignOnUsingOSPrimaryAccount(allow);
  handleExceptionEnd
end;

// function
function TCoreWebView2EnvironmentOptions_Get_ExclusiveUserDataFolderAccess(AObj: ICoreWebView2EnvironmentOptions2; var value: Integer): HResult; extdecl;
var
  Outvalue: Integer;
begin
  {$define handleExceptionID := 8609}
  handleExceptionBegin
  Result := AObj.Get_ExclusiveUserDataFolderAccess(Outvalue);
  value := Outvalue;
  handleExceptionEnd
end;

// function
function TCoreWebView2EnvironmentOptions_Set_ExclusiveUserDataFolderAccess(AObj: ICoreWebView2EnvironmentOptions2; value: Integer): HResult; extdecl;
begin
  {$define handleExceptionID := 8610}
  handleExceptionBegin
  Result := AObj.Set_ExclusiveUserDataFolderAccess(value);
  handleExceptionEnd
end;

// function
function TCoreWebView2EnvironmentOptions_Get_IsCustomCrashReportingEnabled(AObj: ICoreWebView2EnvironmentOptions3; var value: Integer): HResult; extdecl;
var
  Outvalue: Integer;
begin
  {$define handleExceptionID := 8611}
  handleExceptionBegin
  Result := AObj.Get_IsCustomCrashReportingEnabled(Outvalue);
  value := Outvalue;
  handleExceptionEnd
end;

// function
function TCoreWebView2EnvironmentOptions_Set_IsCustomCrashReportingEnabled(AObj: ICoreWebView2EnvironmentOptions3; value: Integer): HResult; extdecl;
begin
  {$define handleExceptionID := 8612}
  handleExceptionBegin
  Result := AObj.Set_IsCustomCrashReportingEnabled(value);
  handleExceptionEnd
end;

// function
function TCoreWebView2EnvironmentOptions_GetCustomSchemeRegistrations(AObj: ICoreWebView2EnvironmentOptions4; var Count: SYSUINT; var schemeRegistrations: PPCoreWebView2CustomSchemeRegistration): HResult; extdecl;
var
  OutCount: SYSUINT;
  OutschemeRegistrations: PPCoreWebView2CustomSchemeRegistration;
begin
  {$define handleExceptionID := 8613}
  handleExceptionBegin
  Result := AObj.GetCustomSchemeRegistrations(OutCount, OutschemeRegistrations);
  Count := OutCount;
  schemeRegistrations := OutschemeRegistrations;
  handleExceptionEnd
end;

// function
function TCoreWebView2EnvironmentOptions_SetCustomSchemeRegistrations(AObj: ICoreWebView2EnvironmentOptions4; Count: SYSUINT; schemeRegistrations: PPCoreWebView2CustomSchemeRegistration): HResult; extdecl;
begin
  {$define handleExceptionID := 8614}
  handleExceptionBegin
  Result := AObj.SetCustomSchemeRegistrations(Count, schemeRegistrations);
  handleExceptionEnd
end;

// function
function TCoreWebView2EnvironmentOptions_Get_EnableTrackingPrevention(AObj: ICoreWebView2EnvironmentOptions5; var value: Integer): HResult; extdecl;
var
  Outvalue: Integer;
begin
  {$define handleExceptionID := 8615}
  handleExceptionBegin
  Result := AObj.Get_EnableTrackingPrevention(Outvalue);
  value := Outvalue;
  handleExceptionEnd
end;

// function
function TCoreWebView2EnvironmentOptions_Set_EnableTrackingPrevention(AObj: ICoreWebView2EnvironmentOptions5; value: Integer): HResult; extdecl;
begin
  {$define handleExceptionID := 8616}
  handleExceptionBegin
  Result := AObj.Set_EnableTrackingPrevention(value);
  handleExceptionEnd
end;

// function
function TCoreWebView2EnvironmentOptions_Get_AreBrowserExtensionsEnabled(AObj: ICoreWebView2EnvironmentOptions6; var value: Integer): HResult; extdecl;
var
  Outvalue: Integer;
begin
  {$define handleExceptionID := 8617}
  handleExceptionBegin
  Result := AObj.Get_AreBrowserExtensionsEnabled(Outvalue);
  value := Outvalue;
  handleExceptionEnd
end;

// function
function TCoreWebView2EnvironmentOptions_Set_AreBrowserExtensionsEnabled(AObj: ICoreWebView2EnvironmentOptions6; value: Integer): HResult; extdecl;
begin
  {$define handleExceptionID := 8618}
  handleExceptionBegin
  Result := AObj.Set_AreBrowserExtensionsEnabled(value);
  handleExceptionEnd
end;

// function
function TCoreWebView2EnvironmentOptions_Get_ChannelSearchKind(AObj: ICoreWebView2EnvironmentOptions7; var value: COREWEBVIEW2_CHANNEL_SEARCH_KIND): HResult; extdecl;
var
  Outvalue: COREWEBVIEW2_CHANNEL_SEARCH_KIND;
begin
  {$define handleExceptionID := 8619}
  handleExceptionBegin
  Result := AObj.Get_ChannelSearchKind(Outvalue);
  value := Outvalue;
  handleExceptionEnd
end;

// function
function TCoreWebView2EnvironmentOptions_Set_ChannelSearchKind(AObj: ICoreWebView2EnvironmentOptions7; value: COREWEBVIEW2_CHANNEL_SEARCH_KIND): HResult; extdecl;
begin
  {$define handleExceptionID := 8620}
  handleExceptionBegin
  Result := AObj.Set_ChannelSearchKind(value);
  handleExceptionEnd
end;

// function
function TCoreWebView2EnvironmentOptions_Get_ReleaseChannels(AObj: ICoreWebView2EnvironmentOptions7; var value: COREWEBVIEW2_RELEASE_CHANNELS): HResult; extdecl;
var
  Outvalue: COREWEBVIEW2_RELEASE_CHANNELS;
begin
  {$define handleExceptionID := 8621}
  handleExceptionBegin
  Result := AObj.Get_ReleaseChannels(Outvalue);
  value := Outvalue;
  handleExceptionEnd
end;

// function
function TCoreWebView2EnvironmentOptions_Set_ReleaseChannels(AObj: ICoreWebView2EnvironmentOptions7; value: COREWEBVIEW2_RELEASE_CHANNELS): HResult; extdecl;
begin
  {$define handleExceptionID := 8622}
  handleExceptionBegin
  Result := AObj.Set_ReleaseChannels(value);
  handleExceptionEnd
end;

// function
function TCoreWebView2EnvironmentOptions_Get_ScrollBarStyle(AObj: ICoreWebView2EnvironmentOptions8; var value: COREWEBVIEW2_SCROLLBAR_STYLE): HResult; extdecl;
var
  Outvalue: COREWEBVIEW2_SCROLLBAR_STYLE;
begin
  {$define handleExceptionID := 8623}
  handleExceptionBegin
  Result := AObj.Get_ScrollBarStyle(Outvalue);
  value := Outvalue;
  handleExceptionEnd
end;

// function
function TCoreWebView2EnvironmentOptions_Set_ScrollBarStyle(AObj: ICoreWebView2EnvironmentOptions8; value: COREWEBVIEW2_SCROLLBAR_STYLE): HResult; extdecl;
begin
  {$define handleExceptionID := 8624}
  handleExceptionBegin
  Result := AObj.Set_ScrollBarStyle(value);
  handleExceptionEnd
end;

exports
  TCoreWebView2EnvironmentOptions_Create,
  TCoreWebView2EnvironmentOptions_Get_AdditionalBrowserArguments,
  TCoreWebView2EnvironmentOptions_Set_AdditionalBrowserArguments,
  TCoreWebView2EnvironmentOptions_Get_Language,
  TCoreWebView2EnvironmentOptions_Set_Language,
  TCoreWebView2EnvironmentOptions_Get_TargetCompatibleBrowserVersion,
  TCoreWebView2EnvironmentOptions_Set_TargetCompatibleBrowserVersion,
  TCoreWebView2EnvironmentOptions_Get_AllowSingleSignOnUsingOSPrimaryAccount,
  TCoreWebView2EnvironmentOptions_Set_AllowSingleSignOnUsingOSPrimaryAccount,
  TCoreWebView2EnvironmentOptions_Get_ExclusiveUserDataFolderAccess,
  TCoreWebView2EnvironmentOptions_Set_ExclusiveUserDataFolderAccess,
  TCoreWebView2EnvironmentOptions_Get_IsCustomCrashReportingEnabled,
  TCoreWebView2EnvironmentOptions_Set_IsCustomCrashReportingEnabled,
  TCoreWebView2EnvironmentOptions_GetCustomSchemeRegistrations,
  TCoreWebView2EnvironmentOptions_SetCustomSchemeRegistrations,
  TCoreWebView2EnvironmentOptions_Get_EnableTrackingPrevention,
  TCoreWebView2EnvironmentOptions_Set_EnableTrackingPrevention,
  TCoreWebView2EnvironmentOptions_Get_AreBrowserExtensionsEnabled,
  TCoreWebView2EnvironmentOptions_Set_AreBrowserExtensionsEnabled,
  TCoreWebView2EnvironmentOptions_Get_ChannelSearchKind,
  TCoreWebView2EnvironmentOptions_Set_ChannelSearchKind,
  TCoreWebView2EnvironmentOptions_Get_ReleaseChannels,
  TCoreWebView2EnvironmentOptions_Set_ReleaseChannels,
  TCoreWebView2EnvironmentOptions_Get_ScrollBarStyle,
  TCoreWebView2EnvironmentOptions_Set_ScrollBarStyle;