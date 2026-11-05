// constructor
function TCefCallbackRef_Create(data: Pointer; out IntfCallback: ICefCallback): TCefCallbackRef; extdecl;
begin
  {$define handleExceptionID := 18300}
  handleExceptionBegin
  Result := TCefCallbackRef.Create(data);
  IntfCallback := Result as ICefCallback;
  handleExceptionEnd
end;

// function static
procedure TCefCallbackRef_UnWrap(data: Pointer; var Result: ICefCallback); extdecl;
begin
  Result := TCefCallbackRef.UnWrap(data);
end;

// procedure
procedure TCefCallbackRef_Cont(AObj: ICefCallback); extdecl;
begin
  {$define handleExceptionID := 18301}
  handleExceptionBegin
  AObj.Cont();
  handleExceptionEnd
end;

// procedure
procedure TCefCallbackRef_Cancel(AObj: ICefCallback); extdecl;
begin
  {$define handleExceptionID := 18302}
  handleExceptionBegin
  AObj.Cancel();
  handleExceptionEnd
end;

exports
  TCefCallbackRef_Create,
  TCefCallbackRef_UnWrap,
  TCefCallbackRef_Cont,
  TCefCallbackRef_Cancel;