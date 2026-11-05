// constructor
function TCefResourceReadCallbackRef_Create(data: Pointer; out IntfResourceReadCallback: ICefResourceReadCallback): TCefResourceReadCallbackRef; extdecl;
begin
  {$define handleExceptionID := 23200}
  handleExceptionBegin
  Result := TCefResourceReadCallbackRef.Create(data);
  IntfResourceReadCallback := Result as ICefResourceReadCallback;
  handleExceptionEnd
end;

// function static
procedure TCefResourceReadCallbackRef_UnWrap(data: Pointer; var Result: ICefResourceReadCallback); extdecl;
begin
  Result := TCefResourceReadCallbackRef.UnWrap(data);
end;

// procedure
procedure TCefResourceReadCallbackRef_Cont(AObj: ICefResourceReadCallback; var bytes_read: int64); extdecl;
begin
  {$define handleExceptionID := 23201}
  handleExceptionBegin
  AObj.Cont(bytes_read);
  handleExceptionEnd
end;

exports
  TCefResourceReadCallbackRef_Create,
  TCefResourceReadCallbackRef_UnWrap,
  TCefResourceReadCallbackRef_Cont;