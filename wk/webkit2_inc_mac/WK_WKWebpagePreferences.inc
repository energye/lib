
//constructor
function WKWebpagePreferences_Create(aData: WKWebpagePreferences): TWKWebpagePreferences; extdecl;
begin
  handleExceptionBegin
  Result := TWKWebpagePreferences.Create(aData);
  handleExceptionEnd
end;

//function
function WKWebpagePreferences_New(): TWKWebpagePreferences; extdecl;
begin
  Result := TWKWebpagePreferences.New();
end;

//function
function WKWebpagePreferences_Data(AObj: TWKWebpagePreferences): WKWebpagePreferences; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Data();
  handleExceptionEnd
end;

//function
function WKWebpagePreferences_PreferredContentMode(AObj: TWKWebpagePreferences): WKContentMode; extdecl;
begin
  handleExceptionBegin
  Result := AObj.PreferredContentMode();
  handleExceptionEnd
end;

//function
function WKWebpagePreferences_AllowsContentJavaScript(AObj: TWKWebpagePreferences): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.AllowsContentJavaScript();
  handleExceptionEnd
end;

//procedure
procedure WKWebpagePreferences_SetPreferredContentMode(AObj: TWKWebpagePreferences; aValue: WKContentMode); extdecl;
begin
  handleExceptionBegin
  AObj.SetPreferredContentMode(aValue);
  handleExceptionEnd
end;

//procedure
procedure WKWebpagePreferences_SetAllowsContentJavaScript(AObj: TWKWebpagePreferences; aValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.SetAllowsContentJavaScript(aValue);
  handleExceptionEnd
end;


exports
  WKWebpagePreferences_Create,
  WKWebpagePreferences_New,
  WKWebpagePreferences_Data,
  WKWebpagePreferences_PreferredContentMode,
  WKWebpagePreferences_AllowsContentJavaScript,
  WKWebpagePreferences_SetPreferredContentMode,
  WKWebpagePreferences_SetAllowsContentJavaScript;