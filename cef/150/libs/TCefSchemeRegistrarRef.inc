// constructor
function TCefSchemeRegistrarRef_Create(data: Pointer): TCefSchemeRegistrarRef; extdecl;
begin
  {$define handleExceptionID := 10900}
  handleExceptionBegin
  Result := TCefSchemeRegistrarRef.Create(data);
  handleExceptionEnd
end;

// function
function TCefSchemeRegistrarRef_AddCustomScheme(AObj: TCefSchemeRegistrarRef; const schemeName: PChar; options: TCefSchemeOptions): LongBool; extdecl;
begin
  {$define handleExceptionID := 10901}
  handleExceptionBegin
  Result := AObj.AddCustomScheme(PCharToUStr(schemeName), options);
  handleExceptionEnd
end;

exports
  TCefSchemeRegistrarRef_Create,
  TCefSchemeRegistrarRef_AddCustomScheme;