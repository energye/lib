// constructor
function TCefResourceRequestHandlerRef_Create(data: Pointer; out IntfResourceRequestHandler: ICefResourceRequestHandler): TCefResourceRequestHandlerRef; extdecl;
begin
  {$define handleExceptionID := 6100}
  handleExceptionBegin
  Result := TCefResourceRequestHandlerRef.Create(data);
  IntfResourceRequestHandler := Result as ICefResourceRequestHandler;
  handleExceptionEnd
end;

// function static
procedure TCefResourceRequestHandlerRef_UnWrap(data: Pointer; var Result: ICefResourceRequestHandler); extdecl;
begin
  Result := TCefResourceRequestHandlerRef.UnWrap(data);
end;

exports
  TCefResourceRequestHandlerRef_Create,
  TCefResourceRequestHandlerRef_UnWrap;