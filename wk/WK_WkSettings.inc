
//constructor
function WkSettings_Create(): TWkSettings; extdecl;
begin
  handleExceptionBegin
  Result := TWkSettings.Create();
  handleExceptionEnd
end;

//constructor
function WkSettings_Create1(aSetting: WebKitSettings): TWkSettings; extdecl;
begin
  handleExceptionBegin
  Result := TWkSettings.Create(aSetting);
  handleExceptionEnd
end;

//property
function WkSettings_EnableJavascript(AIsSet: LongBool; AObj: TWkSettings; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.EnableJavascript := AValue;
  end else
    Result := AObj.EnableJavascript;
  handleExceptionEnd
end;

//property
function WkSettings_AutoLoadImages(AIsSet: LongBool; AObj: TWkSettings; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.AutoLoadImages := AValue;
  end else
    Result := AObj.AutoLoadImages;
  handleExceptionEnd
end;

//property
function WkSettings_EnableDeveloperExtras(AIsSet: LongBool; AObj: TWkSettings; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.EnableDeveloperExtras := AValue;
  end else
    Result := AObj.EnableDeveloperExtras;
  handleExceptionEnd
end;

//function
function WkSettings_Data(AObj: TWkSettings): WebKitSettings; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Data();
  handleExceptionEnd
end;

//procedure
procedure WkSettings_SetUserAgentWithApplicationDetails(AObj: TWkSettings; applicationname,  applicationversion: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.SetUserAgentWithApplicationDetails(applicationname,  applicationversion);
  handleExceptionEnd
end;

//procedure
procedure WkSettings_SetHardwareAccelerationPolicy(AObj: TWkSettings; policy: WebKitHardwareAccelerationPolicy); extdecl;
begin
  handleExceptionBegin
  AObj.SetHardwareAccelerationPolicy(policy);
  handleExceptionEnd
end;


exports
  WkSettings_Create,
  WkSettings_Create1,
  WkSettings_EnableJavascript,
  WkSettings_AutoLoadImages,
  WkSettings_EnableDeveloperExtras,
  WkSettings_Data,
  WkSettings_SetUserAgentWithApplicationDetails,
  WkSettings_SetHardwareAccelerationPolicy;