// constructor
function TCefResourceSkipCallbackRef_Create(data: Pointer; out IntfResourceSkipCallback: ICefResourceSkipCallback): TCefResourceSkipCallbackRef; extdecl;
begin
  {$define handleExceptionID := 22500}
  handleExceptionBegin
  Result := TCefResourceSkipCallbackRef.Create(data);
  IntfResourceSkipCallback := Result as ICefResourceSkipCallback;
  handleExceptionEnd
end;

// function static
procedure TCefResourceSkipCallbackRef_UnWrap(data: Pointer; var Result: ICefResourceSkipCallback); extdecl;
begin
  Result := TCefResourceSkipCallbackRef.UnWrap(data);
end;

// procedure
procedure TCefResourceSkipCallbackRef_Cont(AObj: ICefResourceSkipCallback; var bytes_skipped: int64); extdecl;
begin
  {$define handleExceptionID := 22501}
  handleExceptionBegin
  AObj.Cont(bytes_skipped);
  handleExceptionEnd
end;

exports
  TCefResourceSkipCallbackRef_Create,
  TCefResourceSkipCallbackRef_UnWrap,
  TCefResourceSkipCallbackRef_Cont;