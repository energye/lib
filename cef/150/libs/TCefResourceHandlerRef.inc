// constructor
function TCefResourceHandlerRef_Create(data: Pointer; out IntfResourceHandler: ICefResourceHandler): TCefResourceHandlerRef; extdecl;
begin
  {$define handleExceptionID := 3800}
  handleExceptionBegin
  Result := TCefResourceHandlerRef.Create(data);
  IntfResourceHandler := Result as ICefResourceHandler;
  handleExceptionEnd
end;

// function static
procedure TCefResourceHandlerRef_UnWrap(data: Pointer; var Result: ICefResourceHandler); extdecl;
begin
  Result := TCefResourceHandlerRef.UnWrap(data);
end;

exports
  TCefResourceHandlerRef_Create,
  TCefResourceHandlerRef_UnWrap;