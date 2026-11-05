// constructor
function TCefUrlrequestClientRef_Create(data: Pointer; out IntfUrlrequestClient: ICefUrlrequestClient): TCefUrlrequestClientRef; extdecl;
begin
  {$define handleExceptionID := 5000}
  handleExceptionBegin
  Result := TCefUrlrequestClientRef.Create(data);
  IntfUrlrequestClient := Result as ICefUrlrequestClient;
  handleExceptionEnd
end;

// function static
procedure TCefUrlrequestClientRef_UnWrap(data: Pointer; var Result: ICefUrlrequestClient); extdecl;
begin
  Result := TCefUrlrequestClientRef.UnWrap(data);
end;

exports
  TCefUrlrequestClientRef_Create,
  TCefUrlrequestClientRef_UnWrap;