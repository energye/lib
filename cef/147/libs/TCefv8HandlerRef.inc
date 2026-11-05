// constructor
function TCefv8HandlerRef_Create(data: Pointer; out IntfV8Handler: ICefv8Handler): TCefv8HandlerRef; extdecl;
begin
  {$define handleExceptionID := 5200}
  handleExceptionBegin
  Result := TCefv8HandlerRef.Create(data);
  IntfV8Handler := Result as ICefv8Handler;
  handleExceptionEnd
end;

// function static
procedure TCefv8HandlerRef_UnWrap(data: Pointer; var Result: ICefv8Handler); extdecl;
begin
  Result := TCefv8HandlerRef.UnWrap(data);
end;

exports
  TCefv8HandlerRef_Create,
  TCefv8HandlerRef_UnWrap;