// constructor
function TCefEventCompletionCallback_Create(const event: ICefWaitableEvent; out IntfCompletionCallback: ICefCompletionCallback): TCefEventCompletionCallback; extdecl;
begin
  {$define handleExceptionID := 1100}
  handleExceptionBegin
  Result := TCefEventCompletionCallback.Create(event);
  IntfCompletionCallback := Result as ICefCompletionCallback;
  handleExceptionEnd
end;

exports
  TCefEventCompletionCallback_Create;
