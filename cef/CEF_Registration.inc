
//function
procedure CefRegistration_UnWrap(data: Pointer; var Result: ICefRegistration); extdecl;
begin
  Result := TCefRegistrationRef.UnWrap(data);
end;


exports
  CefRegistration_UnWrap;