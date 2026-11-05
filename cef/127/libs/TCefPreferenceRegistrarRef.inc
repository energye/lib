// constructor
function TCefPreferenceRegistrarRef_Create(data: Pointer): TCefPreferenceRegistrarRef; extdecl;
begin
  {$define handleExceptionID := 10700}
  handleExceptionBegin
  Result := TCefPreferenceRegistrarRef.Create(data);
  handleExceptionEnd
end;

// function
function TCefPreferenceRegistrarRef_AddPreference(AObj: TCefPreferenceRegistrarRef; const name: PChar; const default_value: ICefValue): LongBool; extdecl;
begin
  {$define handleExceptionID := 10701}
  handleExceptionBegin
  Result := AObj.AddPreference(PCharToUStr(name), default_value);
  handleExceptionEnd
end;

exports
  TCefPreferenceRegistrarRef_Create,
  TCefPreferenceRegistrarRef_AddPreference;