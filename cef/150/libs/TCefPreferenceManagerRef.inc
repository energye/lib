// constructor
function TCefPreferenceManagerRef_Create(data: Pointer; out IntfPreferenceManager: ICefPreferenceManager): TCefPreferenceManagerRef; extdecl;
begin
  {$define handleExceptionID := 25900}
  handleExceptionBegin
  Result := TCefPreferenceManagerRef.Create(data);
  IntfPreferenceManager := Result as ICefPreferenceManager;
  handleExceptionEnd
end;

// function
function TCefPreferenceManagerRef_HasPreference(AObj: ICefPreferenceManager; const name: PChar): LongBool; extdecl;
begin
  {$define handleExceptionID := 25901}
  handleExceptionBegin
  Result := AObj.HasPreference(PCharToUStr(name));
  handleExceptionEnd
end;

// function
procedure TCefPreferenceManagerRef_GetPreference(AObj: ICefPreferenceManager; const name: PChar; var Result: ICefValue); extdecl;
begin
  {$define handleExceptionID := 25902}
  handleExceptionBegin
  Result := AObj.GetPreference(PCharToUStr(name));
  handleExceptionEnd
end;

// function
procedure TCefPreferenceManagerRef_GetAllPreferences(AObj: ICefPreferenceManager; includeDefaults: LongBool; var Result: ICefDictionaryValue); extdecl;
begin
  {$define handleExceptionID := 25903}
  handleExceptionBegin
  Result := AObj.GetAllPreferences(includeDefaults);
  handleExceptionEnd
end;

// function
function TCefPreferenceManagerRef_CanSetPreference(AObj: ICefPreferenceManager; const name: PChar): LongBool; extdecl;
begin
  {$define handleExceptionID := 25904}
  handleExceptionBegin
  Result := AObj.CanSetPreference(PCharToUStr(name));
  handleExceptionEnd
end;

// function
function TCefPreferenceManagerRef_SetPreference(AObj: ICefPreferenceManager; const name: PChar; const value: ICefValue; var error: PChar): LongBool; extdecl;
var
  Outerror: ustring;
begin
  {$define handleExceptionID := 25905}
  handleExceptionBegin
  Result := AObj.SetPreference(PCharToUStr(name), value, Outerror);
  error := ToPChar(Outerror);
  handleExceptionEnd
end;

// function
procedure TCefPreferenceManagerRef_AddPreferenceObserver(AObj: ICefPreferenceManager; const name: PChar; const observer: ICefPreferenceObserver; var Result: ICefRegistration); extdecl;
begin
  {$define handleExceptionID := 25906}
  handleExceptionBegin
  Result := AObj.AddPreferenceObserver(PCharToUStr(name), observer);
  handleExceptionEnd
end;

// function static
procedure TCefPreferenceManagerRef_UnWrapWithPointer(data: Pointer; var Result: ICefPreferenceManager); extdecl;
begin
  Result := TCefPreferenceManagerRef.UnWrap(data);
end;

// function static
procedure TCefPreferenceManagerRef_GlobalToPreferenceManager(var Result: ICefPreferenceManager); extdecl;
begin
  Result := TCefPreferenceManagerRef.Global();
end;

// procedure static
procedure TCefPreferenceManagerRef_GetChromeVariationsAsSwitches(const switches: TStrings); extdecl;
begin
  TCefPreferenceManagerRef.GetChromeVariationsAsSwitches(switches);
end;

// procedure static
procedure TCefPreferenceManagerRef_GetChromeVariationsAsStrings(const strings: TStrings); extdecl;
begin
  TCefPreferenceManagerRef.GetChromeVariationsAsStrings(strings);
end;

exports
  TCefPreferenceManagerRef_Create,
  TCefPreferenceManagerRef_HasPreference,
  TCefPreferenceManagerRef_GetPreference,
  TCefPreferenceManagerRef_GetAllPreferences,
  TCefPreferenceManagerRef_CanSetPreference,
  TCefPreferenceManagerRef_SetPreference,
  TCefPreferenceManagerRef_AddPreferenceObserver,
  TCefPreferenceManagerRef_UnWrapWithPointer,
  TCefPreferenceManagerRef_GlobalToPreferenceManager,
  TCefPreferenceManagerRef_GetChromeVariationsAsSwitches,
  TCefPreferenceManagerRef_GetChromeVariationsAsStrings;