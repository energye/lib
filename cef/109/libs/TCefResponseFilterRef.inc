// constructor
function TCefResponseFilterRef_Create(data: Pointer; out IntfResponseFilter: ICefResponseFilter): TCefResponseFilterRef; extdecl;
begin
  {$define handleExceptionID := 3800}
  handleExceptionBegin
  Result := TCefResponseFilterRef.Create(data);
  IntfResponseFilter := Result as ICefResponseFilter;
  handleExceptionEnd
end;

// function static
procedure TCefResponseFilterRef_UnWrap(data: Pointer; var Result: ICefResponseFilter); extdecl;
begin
  Result := TCefResponseFilterRef.UnWrap(data);
end;

exports
  TCefResponseFilterRef_Create,
  TCefResponseFilterRef_UnWrap;