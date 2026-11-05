// constructor
function TCefJsDialogCallbackRef_Create(data: Pointer; out IntfJsDialogCallback: ICefJsDialogCallback): TCefJsDialogCallbackRef; extdecl;
begin
  {$define handleExceptionID := 18900}
  handleExceptionBegin
  Result := TCefJsDialogCallbackRef.Create(data);
  IntfJsDialogCallback := Result as ICefJsDialogCallback;
  handleExceptionEnd
end;

// function static
procedure TCefJsDialogCallbackRef_UnWrap(data: Pointer; var Result: ICefJsDialogCallback); extdecl;
begin
  Result := TCefJsDialogCallbackRef.UnWrap(data);
end;

// procedure
procedure TCefJsDialogCallbackRef_Cont(AObj: ICefJsDialogCallback; success: LongBool; const userInput: PChar); extdecl;
begin
  {$define handleExceptionID := 18901}
  handleExceptionBegin
  AObj.Cont(success, PCharToUStr(userInput));
  handleExceptionEnd
end;

exports
  TCefJsDialogCallbackRef_Create,
  TCefJsDialogCallbackRef_UnWrap,
  TCefJsDialogCallbackRef_Cont;