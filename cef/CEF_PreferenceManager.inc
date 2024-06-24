
//function
procedure CefPreferenceManager_UnWrap(data: Pointer; var Result: ICefPreferenceManager); extdecl;
begin
  Result := TCefPreferenceManagerRef.UnWrap(data);
end;

//function
procedure CefPreferenceManager_Global(var Result: ICefPreferenceManager); extdecl;
begin
  Result := TCefPreferenceManagerRef.Global();
end;

//function
function CefPreferenceManager_HasPreference(AObj: ICefPreferenceManager; const name: PChar): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.HasPreference(name);
  handleExceptionEnd
end;

//function
procedure CefPreferenceManager_GetPreference(AObj: ICefPreferenceManager; const name: PChar; var Result: ICefValue); extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetPreference(name);
  handleExceptionEnd
end;

//function
procedure CefPreferenceManager_GetAllPreferences(AObj: ICefPreferenceManager; includeDefaults: LongBool; var Result: ICefDictionaryValue); extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetAllPreferences(includeDefaults);
  handleExceptionEnd
end;

//function
function CefPreferenceManager_CanSetPreference(AObj: ICefPreferenceManager; const name: PChar): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.CanSetPreference(name);
  handleExceptionEnd
end;

//function
function CefPreferenceManager_SetPreference(AObj: ICefPreferenceManager; const name: PChar; const value: ICefValue; out outError: PChar): LongBool; extdecl;
var
  RetoutError: UnicodeString;
begin
  handleExceptionBegin
  RetoutError := outError;
  Result := AObj.SetPreference(name, value, RetoutError);
  outError := ToPChar(RetoutError);
  handleExceptionEnd
end;


exports
  CefPreferenceManager_UnWrap,
  CefPreferenceManager_Global,
  CefPreferenceManager_HasPreference,
  CefPreferenceManager_GetPreference,
  CefPreferenceManager_GetAllPreferences,
  CefPreferenceManager_CanSetPreference,
  CefPreferenceManager_SetPreference;