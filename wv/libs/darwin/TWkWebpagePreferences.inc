// constructor
function TWkWebpagePreferences_Create(AData: WKWebpagePreferences): TWkWebpagePreferences; extdecl;
begin
  {$define handleExceptionID := 3100}
  handleExceptionBegin
  Result := TWkWebpagePreferences.Create(AData);
  handleExceptionEnd
end;

// function
function TWkWebpagePreferences_Data(AObj: TWkWebpagePreferences): WKWebpagePreferences; extdecl;
begin
  {$define handleExceptionID := 3101}
  handleExceptionBegin
  Result := AObj.Data();
  handleExceptionEnd
end;

// function static
function TWkWebpagePreferences_New(): TWkWebpagePreferences; extdecl;
begin
  Result := TWkWebpagePreferences.New();
end;

// function
function TWkWebpagePreferences_PreferredContentMode(AObj: TWkWebpagePreferences): WKContentMode; extdecl;
begin
  {$define handleExceptionID := 3102}
  handleExceptionBegin
  Result := AObj.PreferredContentMode();
  handleExceptionEnd
end;

// function
function TWkWebpagePreferences_AllowsContentJavaScript(AObj: TWkWebpagePreferences): LongBool; extdecl;
begin
  {$define handleExceptionID := 3103}
  handleExceptionBegin
  Result := AObj.AllowsContentJavaScript();
  handleExceptionEnd
end;

// procedure
procedure TWkWebpagePreferences_Release(AObj: TWkWebpagePreferences); extdecl;
begin
  {$define handleExceptionID := 3104}
  handleExceptionBegin
  AObj.Release();
  handleExceptionEnd
end;

// procedure
procedure TWkWebpagePreferences_SetPreferredContentMode(AObj: TWkWebpagePreferences; aValue: WKContentMode); extdecl;
begin
  {$define handleExceptionID := 3105}
  handleExceptionBegin
  AObj.SetPreferredContentMode(aValue);
  handleExceptionEnd
end;

// procedure
procedure TWkWebpagePreferences_SetAllowsContentJavaScript(AObj: TWkWebpagePreferences; aValue: LongBool); extdecl;
begin
  {$define handleExceptionID := 3106}
  handleExceptionBegin
  AObj.SetAllowsContentJavaScript(aValue);
  handleExceptionEnd
end;

exports
  TWkWebpagePreferences_Create,
  TWkWebpagePreferences_Data,
  TWkWebpagePreferences_New,
  TWkWebpagePreferences_PreferredContentMode,
  TWkWebpagePreferences_AllowsContentJavaScript,
  TWkWebpagePreferences_Release,
  TWkWebpagePreferences_SetPreferredContentMode,
  TWkWebpagePreferences_SetAllowsContentJavaScript;