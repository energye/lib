// constructor
function TCefGetExtensionResourceCallbackRef_Create(data: Pointer; out IntfGetExtensionResourceCallback: ICefGetExtensionResourceCallback): TCefGetExtensionResourceCallbackRef; extdecl;
begin
  {$define handleExceptionID := 26600}
  handleExceptionBegin
  Result := TCefGetExtensionResourceCallbackRef.Create(data);
  IntfGetExtensionResourceCallback := Result as ICefGetExtensionResourceCallback;
  handleExceptionEnd
end;

// function static
procedure TCefGetExtensionResourceCallbackRef_UnWrap(data: Pointer; var Result: ICefGetExtensionResourceCallback); extdecl;
begin
  Result := TCefGetExtensionResourceCallbackRef.UnWrap(data);
end;

// procedure
procedure TCefGetExtensionResourceCallbackRef_Cont(AObj: ICefGetExtensionResourceCallback; const stream: ICefStreamReader); extdecl;
begin
  {$define handleExceptionID := 26601}
  handleExceptionBegin
  AObj.Cont(stream);
  handleExceptionEnd
end;

// procedure
procedure TCefGetExtensionResourceCallbackRef_Cancel(AObj: ICefGetExtensionResourceCallback); extdecl;
begin
  {$define handleExceptionID := 26602}
  handleExceptionBegin
  AObj.Cancel();
  handleExceptionEnd
end;

exports
  TCefGetExtensionResourceCallbackRef_Create,
  TCefGetExtensionResourceCallbackRef_UnWrap,
  TCefGetExtensionResourceCallbackRef_Cont,
  TCefGetExtensionResourceCallbackRef_Cancel;