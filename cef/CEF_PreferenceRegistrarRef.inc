
//function
function CefPreferenceRegistrarRef_AddPreference(AObj: TCefPreferenceRegistrarRef; const name: PChar; const defaultvalue: ICefValue): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='AddPreference'}
  handleExceptionBegin
  Result := AObj.AddPreference(name, defaultvalue);
  handleExceptionEnd
end;


exports
  CefPreferenceRegistrarRef_AddPreference;