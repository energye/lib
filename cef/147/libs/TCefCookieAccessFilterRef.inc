// constructor
function TCefCookieAccessFilterRef_Create(data: Pointer; out IntfCookieAccessFilter: ICefCookieAccessFilter): TCefCookieAccessFilterRef; extdecl;
begin
  {$define handleExceptionID := 6600}
  handleExceptionBegin
  Result := TCefCookieAccessFilterRef.Create(data);
  IntfCookieAccessFilter := Result as ICefCookieAccessFilter;
  handleExceptionEnd
end;

// function static
procedure TCefCookieAccessFilterRef_UnWrap(data: Pointer; var Result: ICefCookieAccessFilter); extdecl;
begin
  Result := TCefCookieAccessFilterRef.UnWrap(data);
end;

exports
  TCefCookieAccessFilterRef_Create,
  TCefCookieAccessFilterRef_UnWrap;