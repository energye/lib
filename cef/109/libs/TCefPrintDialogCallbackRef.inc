// constructor
function TCefPrintDialogCallbackRef_Create(data: Pointer; out IntfPrintDialogCallback: ICefPrintDialogCallback): TCefPrintDialogCallbackRef; extdecl;
begin
  {$define handleExceptionID := 24300}
  handleExceptionBegin
  Result := TCefPrintDialogCallbackRef.Create(data);
  IntfPrintDialogCallback := Result as ICefPrintDialogCallback;
  handleExceptionEnd
end;

// function static
procedure TCefPrintDialogCallbackRef_UnWrap(data: Pointer; var Result: ICefPrintDialogCallback); extdecl;
begin
  Result := TCefPrintDialogCallbackRef.UnWrap(data);
end;

// procedure
procedure TCefPrintDialogCallbackRef_cont(AObj: ICefPrintDialogCallback; const settings: ICefPrintSettings); extdecl;
begin
  {$define handleExceptionID := 24301}
  handleExceptionBegin
  AObj.cont(settings);
  handleExceptionEnd
end;

// procedure
procedure TCefPrintDialogCallbackRef_cancel(AObj: ICefPrintDialogCallback); extdecl;
begin
  {$define handleExceptionID := 24302}
  handleExceptionBegin
  AObj.cancel();
  handleExceptionEnd
end;

exports
  TCefPrintDialogCallbackRef_Create,
  TCefPrintDialogCallbackRef_UnWrap,
  TCefPrintDialogCallbackRef_cont,
  TCefPrintDialogCallbackRef_cancel;