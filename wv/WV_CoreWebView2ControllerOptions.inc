
//constructor
function CoreWebView2ControllerOptions_Create(const aBaseIntf: ICoreWebView2ControllerOptions): TCoreWebView2ControllerOptions; extdecl;
begin
  handleExceptionBegin
  Result := TCoreWebView2ControllerOptions.Create(aBaseIntf);
  handleExceptionEnd
end;

//property
function CoreWebView2ControllerOptions_Initialized(AObj: TCoreWebView2ControllerOptions): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Initialized;
  handleExceptionEnd
end;

//property
procedure CoreWebView2ControllerOptions_BaseIntf(AIsSet: LongBool; AObj: TCoreWebView2ControllerOptions; AValue: ICoreWebView2ControllerOptions; var Result: ICoreWebView2ControllerOptions); extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.BaseIntf := AValue;
  end else
    Result := AObj.BaseIntf;
  handleExceptionEnd
end;

//property
function CoreWebView2ControllerOptions_ProfileName(AIsSet: LongBool; AObj: TCoreWebView2ControllerOptions; AValue: PChar): PChar; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ProfileName := AValue;
  end else
    Result := ToPChar(AObj.ProfileName);
  handleExceptionEnd
end;

//property
function CoreWebView2ControllerOptions_IsInPrivateModeEnabled(AIsSet: LongBool; AObj: TCoreWebView2ControllerOptions; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.IsInPrivateModeEnabled := AValue;
  end else
    Result := AObj.IsInPrivateModeEnabled;
  handleExceptionEnd
end;

//property
function CoreWebView2ControllerOptions_ScriptLocale(AIsSet: LongBool; AObj: TCoreWebView2ControllerOptions; AValue: PChar): PChar; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ScriptLocale := AValue;
  end else
    Result := ToPChar(AObj.ScriptLocale);
  handleExceptionEnd
end;


exports
  CoreWebView2ControllerOptions_Create,
  CoreWebView2ControllerOptions_Initialized,
  CoreWebView2ControllerOptions_BaseIntf,
  CoreWebView2ControllerOptions_ProfileName,
  CoreWebView2ControllerOptions_IsInPrivateModeEnabled,
  CoreWebView2ControllerOptions_ScriptLocale;