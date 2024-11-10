
//constructor
function WKPreferences_Create(aData: WKPreferences): TWKPreferences; extdecl;
begin
  handleExceptionBegin
  Result := TWKPreferences.Create(aData);
  handleExceptionEnd
end;

//function
function WKPreferences_New(): TWKPreferences; extdecl;
begin
  Result := TWKPreferences.New();
end;

//function
function WKPreferences_Data(AObj: TWKPreferences): WKPreferences; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Data();
  handleExceptionEnd
end;

//function
procedure WKPreferences_MinimumFontSize(AObj: TWKPreferences; var Result: double); extdecl;
begin
  handleExceptionBegin
  Result := AObj.MinimumFontSize();
  handleExceptionEnd
end;

//function
function WKPreferences_JavaScriptEnabled(AObj: TWKPreferences): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.JavaScriptEnabled();
  handleExceptionEnd
end;

//function
function WKPreferences_JavaScriptCanOpenWindowsAutomatically(AObj: TWKPreferences): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.JavaScriptCanOpenWindowsAutomatically();
  handleExceptionEnd
end;

//function
function WKPreferences_JavaEnabled(AObj: TWKPreferences): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.JavaEnabled();
  handleExceptionEnd
end;

//function
function WKPreferences_PlugInsEnabled(AObj: TWKPreferences): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.PlugInsEnabled();
  handleExceptionEnd
end;

//procedure
procedure WKPreferences_Release(AObj: TWKPreferences); extdecl;
begin
  handleExceptionBegin
  AObj.Release();
  handleExceptionEnd
end;

//procedure
procedure WKPreferences_SetMinimumFontSize(AObj: TWKPreferences; var newValue: double); extdecl;
begin
  handleExceptionBegin
  AObj.SetMinimumFontSize(newValue);
  handleExceptionEnd
end;

//procedure
procedure WKPreferences_SetJavaScriptEnabled(AObj: TWKPreferences; newValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.SetJavaScriptEnabled(newValue);
  handleExceptionEnd
end;

//procedure
procedure WKPreferences_SetJavaScriptCanOpenWindowsAutomatically(AObj: TWKPreferences; newValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.SetJavaScriptCanOpenWindowsAutomatically(newValue);
  handleExceptionEnd
end;

//procedure
procedure WKPreferences_SetJavaEnabled(AObj: TWKPreferences; newValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.SetJavaEnabled(newValue);
  handleExceptionEnd
end;

//procedure
procedure WKPreferences_SetPlugInsEnabled(AObj: TWKPreferences; newValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.SetPlugInsEnabled(newValue);
  handleExceptionEnd
end;

//procedure
procedure WKPreferences_SetTabFocusesLinks(AObj: TWKPreferences; newValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.SetTabFocusesLinks(newValue);
  handleExceptionEnd
end;

//procedure
procedure WKPreferences_SetFraudulentWebsiteWarningEnabled(AObj: TWKPreferences; newValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.SetFraudulentWebsiteWarningEnabled(newValue);
  handleExceptionEnd
end;

//procedure
procedure WKPreferences_SetTextInteractionEnabled(AObj: TWKPreferences; newValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.SetTextInteractionEnabled(newValue);
  handleExceptionEnd
end;

//procedure
procedure WKPreferences_SetElementFullscreenEnabled(AObj: TWKPreferences; newValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.SetElementFullscreenEnabled(newValue);
  handleExceptionEnd
end;

//procedure
procedure WKPreferences_SetValueForKey(AObj: TWKPreferences; value: LongBool; key: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.SetValueForKey(value, key);
  handleExceptionEnd
end;


exports
  WKPreferences_Create,
  WKPreferences_New,
  WKPreferences_Data,
  WKPreferences_MinimumFontSize,
  WKPreferences_JavaScriptEnabled,
  WKPreferences_JavaScriptCanOpenWindowsAutomatically,
  WKPreferences_JavaEnabled,
  WKPreferences_PlugInsEnabled,
  WKPreferences_Release,
  WKPreferences_SetMinimumFontSize,
  WKPreferences_SetJavaScriptEnabled,
  WKPreferences_SetJavaScriptCanOpenWindowsAutomatically,
  WKPreferences_SetJavaEnabled,
  WKPreferences_SetPlugInsEnabled,
  WKPreferences_SetTabFocusesLinks,
  WKPreferences_SetFraudulentWebsiteWarningEnabled,
  WKPreferences_SetTextInteractionEnabled,
  WKPreferences_SetElementFullscreenEnabled,
  WKPreferences_SetValueForKey;