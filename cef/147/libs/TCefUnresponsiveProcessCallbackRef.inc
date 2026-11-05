// constructor
function TCefUnresponsiveProcessCallbackRef_Create(data: Pointer; out IntfUnresponsiveProcessCallback: ICefUnresponsiveProcessCallback): TCefUnresponsiveProcessCallbackRef; extdecl;
begin
  {$define handleExceptionID := 26400}
  handleExceptionBegin
  Result := TCefUnresponsiveProcessCallbackRef.Create(data);
  IntfUnresponsiveProcessCallback := Result as ICefUnresponsiveProcessCallback;
  handleExceptionEnd
end;

// function static
procedure TCefUnresponsiveProcessCallbackRef_UnWrap(data: Pointer; var Result: ICefUnresponsiveProcessCallback); extdecl;
begin
  Result := TCefUnresponsiveProcessCallbackRef.UnWrap(data);
end;

// procedure
procedure TCefUnresponsiveProcessCallbackRef_Wait(AObj: ICefUnresponsiveProcessCallback); extdecl;
begin
  {$define handleExceptionID := 26401}
  handleExceptionBegin
  AObj.Wait();
  handleExceptionEnd
end;

// procedure
procedure TCefUnresponsiveProcessCallbackRef_Terminate(AObj: ICefUnresponsiveProcessCallback); extdecl;
begin
  {$define handleExceptionID := 26402}
  handleExceptionBegin
  AObj.Terminate();
  handleExceptionEnd
end;

exports
  TCefUnresponsiveProcessCallbackRef_Create,
  TCefUnresponsiveProcessCallbackRef_UnWrap,
  TCefUnresponsiveProcessCallbackRef_Wait,
  TCefUnresponsiveProcessCallbackRef_Terminate;