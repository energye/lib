
//function
function CefSchemeRegistrarRef_AddCustomScheme(AObj: TCefSchemeRegistrarRef; const schemeName: PChar; options: TCefSchemeOptions): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='AddCustomScheme'}
  handleExceptionBegin
  Result := AObj.AddCustomScheme(schemeName, options);
  handleExceptionEnd
end;


exports
  CefSchemeRegistrarRef_AddCustomScheme;