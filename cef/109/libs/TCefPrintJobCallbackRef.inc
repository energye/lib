// constructor
function TCefPrintJobCallbackRef_Create(data: Pointer; out IntfPrintJobCallback: ICefPrintJobCallback): TCefPrintJobCallbackRef; extdecl;
begin
  {$define handleExceptionID := 24400}
  handleExceptionBegin
  Result := TCefPrintJobCallbackRef.Create(data);
  IntfPrintJobCallback := Result as ICefPrintJobCallback;
  handleExceptionEnd
end;

// function static
procedure TCefPrintJobCallbackRef_UnWrap(data: Pointer; var Result: ICefPrintJobCallback); extdecl;
begin
  Result := TCefPrintJobCallbackRef.UnWrap(data);
end;

// procedure
procedure TCefPrintJobCallbackRef_cont(AObj: ICefPrintJobCallback); extdecl;
begin
  {$define handleExceptionID := 24401}
  handleExceptionBegin
  AObj.cont();
  handleExceptionEnd
end;

exports
  TCefPrintJobCallbackRef_Create,
  TCefPrintJobCallbackRef_UnWrap,
  TCefPrintJobCallbackRef_cont;