// constructor
function TCefRegistrationRef_Create(data: Pointer; out IntfRegistration: ICefRegistration): TCefRegistrationRef; extdecl;
begin
  {$define handleExceptionID := 25800}
  handleExceptionBegin
  Result := TCefRegistrationRef.Create(data);
  IntfRegistration := Result as ICefRegistration;
  handleExceptionEnd
end;

// function static
procedure TCefRegistrationRef_UnWrap(data: Pointer; var Result: ICefRegistration); extdecl;
begin
  Result := TCefRegistrationRef.UnWrap(data);
end;

exports
  TCefRegistrationRef_Create,
  TCefRegistrationRef_UnWrap;