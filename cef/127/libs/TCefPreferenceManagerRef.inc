// constructor
function TCefPreferenceManagerRef_Create(data: Pointer; out IntfPreferenceManager: ICefPreferenceManager): TCefPreferenceManagerRef; extdecl;
begin
  {$define handleExceptionID := 25700}
  handleExceptionBegin
  Result := TCefPreferenceManagerRef.Create(data);
  IntfPreferenceManager := Result as ICefPreferenceManager;
  handleExceptionEnd
end;

// function
function TCefPreferenceManagerRef_HasPreference(AObj: ICefPreferenceManager; const name: PChar): LongBool; extdecl;
begin
  {$define handleExceptionID := 25701}
  handleExceptionBegin
  Result := AObj.HasPreference(PCharToUStr(name));
  handleExceptionEnd
end;

// function
procedure TCefPreferenceManagerRef_GetPreference(AObj: ICefPreferenceManager; const name: PChar; var Result: ICefValue); extdecl;
begin
  {$define handleExceptionID := 25702}
  handleExceptionBegin
  Result := AObj.GetPreference(PCharToUStr(name));
  handleExceptionEnd
end;

// function
procedure TCefPreferenceManagerRef_GetAllPreferences(AObj: ICefPreferenceManager; includeDefaults: LongBool; var Result: ICefDictionaryValue); extdecl;
begin
  {$define handleExceptionID := 25703}
  handleExceptionBegin
  Result := AObj.GetAllPreferences(includeDefaults);
  handleExceptionEnd
end;

// function
function TCefPreferenceManagerRef_CanSetPreference(AObj: ICefPreferenceManager; const name: PChar): LongBool; extdecl;
begin
  {$define handleExceptionID := 25704}
  handleExceptionBegin
  Result := AObj.CanSetPreference(PCharToUStr(name));
  handleExceptionEnd
end;

// function
function TCefPreferenceManagerRef_SetPreference(AObj: ICefPreferenceManager; const name: PChar; const value: ICefValue; var error: PChar): LongBool; extdecl;
var
  Outerror: ustring;
begin
  {$define handleExceptionID := 25705}
  handleExceptionBegin
  Result := AObj.SetPreference(PCharToUStr(name), value, Outerror);
  error := ToPChar(Outerror);
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

exports
  TCefPreferenceManagerRef_Create,
  TCefPreferenceManagerRef_HasPreference,
  TCefPreferenceManagerRef_GetPreference,
  TCefPreferenceManagerRef_GetAllPreferences,
  TCefPreferenceManagerRef_CanSetPreference,
  TCefPreferenceManagerRef_SetPreference,
  TCefPreferenceManagerRef_UnWrapWithPointer,
  TCefPreferenceManagerRef_GlobalToPreferenceManager;