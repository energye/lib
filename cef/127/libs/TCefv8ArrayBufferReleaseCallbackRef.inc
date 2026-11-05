// constructor
function TCefv8ArrayBufferReleaseCallbackRef_Create(data: Pointer; out IntfV8ArrayBufferReleaseCallback: ICefv8ArrayBufferReleaseCallback): TCefv8ArrayBufferReleaseCallbackRef; extdecl;
begin
  {$define handleExceptionID := 5200}
  handleExceptionBegin
  Result := TCefv8ArrayBufferReleaseCallbackRef.Create(data);
  IntfV8ArrayBufferReleaseCallback := Result as ICefv8ArrayBufferReleaseCallback;
  handleExceptionEnd
end;

// function static
procedure TCefv8ArrayBufferReleaseCallbackRef_UnWrap(data: Pointer; var Result: ICefv8ArrayBufferReleaseCallback); extdecl;
begin
  Result := TCefv8ArrayBufferReleaseCallbackRef.UnWrap(data);
end;

exports
  TCefv8ArrayBufferReleaseCallbackRef_Create,
  TCefv8ArrayBufferReleaseCallbackRef_UnWrap;