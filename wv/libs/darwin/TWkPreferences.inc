// constructor
function TWkPreferences_Create(AData: WKPreferences): TWkPreferences; extdecl;
begin
  {$define handleExceptionID := 2400}
  handleExceptionBegin
  Result := TWkPreferences.Create(AData);
  handleExceptionEnd
end;

// function
function TWkPreferences_Data(AObj: TWkPreferences): WKPreferences; extdecl;
begin
  {$define handleExceptionID := 2401}
  handleExceptionBegin
  Result := AObj.Data();
  handleExceptionEnd
end;

// function static
function TWkPreferences_New(): TWkPreferences; extdecl;
begin
  Result := TWkPreferences.New();
end;

// function
procedure TWkPreferences_MinimumFontSize(AObj: TWkPreferences; var Result: double); extdecl;
begin
  {$define handleExceptionID := 2402}
  handleExceptionBegin
  Result := AObj.MinimumFontSize();
  handleExceptionEnd
end;

// function
function TWkPreferences_JavaScriptEnabled(AObj: TWkPreferences): LongBool; extdecl;
begin
  {$define handleExceptionID := 2403}
  handleExceptionBegin
  Result := AObj.JavaScriptEnabled();
  handleExceptionEnd
end;

// function
function TWkPreferences_JavaScriptCanOpenWindowsAutomatically(AObj: TWkPreferences): LongBool; extdecl;
begin
  {$define handleExceptionID := 2404}
  handleExceptionBegin
  Result := AObj.JavaScriptCanOpenWindowsAutomatically();
  handleExceptionEnd
end;

// function
function TWkPreferences_JavaEnabled(AObj: TWkPreferences): LongBool; extdecl;
begin
  {$define handleExceptionID := 2405}
  handleExceptionBegin
  Result := AObj.JavaEnabled();
  handleExceptionEnd
end;

// function
function TWkPreferences_PlugInsEnabled(AObj: TWkPreferences): LongBool; extdecl;
begin
  {$define handleExceptionID := 2406}
  handleExceptionBegin
  Result := AObj.PlugInsEnabled();
  handleExceptionEnd
end;

// procedure
procedure TWkPreferences_Release(AObj: TWkPreferences); extdecl;
begin
  {$define handleExceptionID := 2407}
  handleExceptionBegin
  AObj.Release();
  handleExceptionEnd
end;

// procedure
procedure TWkPreferences_SetMinimumFontSize(AObj: TWkPreferences; var newValue: double); extdecl;
begin
  {$define handleExceptionID := 2408}
  handleExceptionBegin
  AObj.SetMinimumFontSize(newValue);
  handleExceptionEnd
end;

// procedure
procedure TWkPreferences_SetJavaScriptEnabled(AObj: TWkPreferences; newValue: LongBool); extdecl;
begin
  {$define handleExceptionID := 2409}
  handleExceptionBegin
  AObj.SetJavaScriptEnabled(newValue);
  handleExceptionEnd
end;

// procedure
procedure TWkPreferences_SetJavaScriptCanOpenWindowsAutomatically(AObj: TWkPreferences; newValue: LongBool); extdecl;
begin
  {$define handleExceptionID := 2410}
  handleExceptionBegin
  AObj.SetJavaScriptCanOpenWindowsAutomatically(newValue);
  handleExceptionEnd
end;

// procedure
procedure TWkPreferences_SetJavaEnabled(AObj: TWkPreferences; newValue: LongBool); extdecl;
begin
  {$define handleExceptionID := 2411}
  handleExceptionBegin
  AObj.SetJavaEnabled(newValue);
  handleExceptionEnd
end;

// procedure
procedure TWkPreferences_SetPlugInsEnabled(AObj: TWkPreferences; newValue: LongBool); extdecl;
begin
  {$define handleExceptionID := 2412}
  handleExceptionBegin
  AObj.SetPlugInsEnabled(newValue);
  handleExceptionEnd
end;

// procedure
procedure TWkPreferences_SetTabFocusesLinks(AObj: TWkPreferences; newValue: LongBool); extdecl;
begin
  {$define handleExceptionID := 2413}
  handleExceptionBegin
  AObj.SetTabFocusesLinks(newValue);
  handleExceptionEnd
end;

// procedure
procedure TWkPreferences_SetFraudulentWebsiteWarningEnabled(AObj: TWkPreferences; newValue: LongBool); extdecl;
begin
  {$define handleExceptionID := 2414}
  handleExceptionBegin
  AObj.SetFraudulentWebsiteWarningEnabled(newValue);
  handleExceptionEnd
end;

// procedure
procedure TWkPreferences_SetTextInteractionEnabled(AObj: TWkPreferences; newValue: LongBool); extdecl;
begin
  {$define handleExceptionID := 2415}
  handleExceptionBegin
  AObj.SetTextInteractionEnabled(newValue);
  handleExceptionEnd
end;

// procedure
procedure TWkPreferences_SetElementFullscreenEnabled(AObj: TWkPreferences; newValue: LongBool); extdecl;
begin
  {$define handleExceptionID := 2416}
  handleExceptionBegin
  AObj.SetElementFullscreenEnabled(newValue);
  handleExceptionEnd
end;

// procedure
procedure TWkPreferences_SetValueForKey(AObj: TWkPreferences; value: NSObject; key: PChar); extdecl;
begin
  {$define handleExceptionID := 2417}
  handleExceptionBegin
  AObj.SetValueForKey(value, key);
  handleExceptionEnd
end;

// procedure
procedure TWkPreferences_SetBoolValueForKey(AObj: TWkPreferences; value: LongBool; key: PChar); extdecl;
begin
  {$define handleExceptionID := 2418}
  handleExceptionBegin
  AObj.SetBoolValueForKey(value, key);
  handleExceptionEnd
end;

// procedure
procedure TWkPreferences_SetStringValueForKey(AObj: TWkPreferences; value: PChar; key: PChar); extdecl;
begin
  {$define handleExceptionID := 2419}
  handleExceptionBegin
  AObj.SetStringValueForKey(value, key);
  handleExceptionEnd
end;

// procedure
procedure TWkPreferences_SetNumberValueForKey(AObj: TWkPreferences; value: Integer; key: PChar); extdecl;
begin
  {$define handleExceptionID := 2420}
  handleExceptionBegin
  AObj.SetNumberValueForKey(value, key);
  handleExceptionEnd
end;

// procedure
procedure TWkPreferences_SetDoubleValueForKey(AObj: TWkPreferences; var value: Double; key: PChar); extdecl;
begin
  {$define handleExceptionID := 2421}
  handleExceptionBegin
  AObj.SetDoubleValueForKey(value, key);
  handleExceptionEnd
end;

exports
  TWkPreferences_Create,
  TWkPreferences_Data,
  TWkPreferences_New,
  TWkPreferences_MinimumFontSize,
  TWkPreferences_JavaScriptEnabled,
  TWkPreferences_JavaScriptCanOpenWindowsAutomatically,
  TWkPreferences_JavaEnabled,
  TWkPreferences_PlugInsEnabled,
  TWkPreferences_Release,
  TWkPreferences_SetMinimumFontSize,
  TWkPreferences_SetJavaScriptEnabled,
  TWkPreferences_SetJavaScriptCanOpenWindowsAutomatically,
  TWkPreferences_SetJavaEnabled,
  TWkPreferences_SetPlugInsEnabled,
  TWkPreferences_SetTabFocusesLinks,
  TWkPreferences_SetFraudulentWebsiteWarningEnabled,
  TWkPreferences_SetTextInteractionEnabled,
  TWkPreferences_SetElementFullscreenEnabled,
  TWkPreferences_SetValueForKey,
  TWkPreferences_SetBoolValueForKey,
  TWkPreferences_SetStringValueForKey,
  TWkPreferences_SetNumberValueForKey,
  TWkPreferences_SetDoubleValueForKey;