// constructor
function TCefCustomCompletionCallback_Create(const aEvents: IChromiumEvents; out IntfCompletionCallback: ICefCompletionCallback): TCefCustomCompletionCallback; extdecl;
begin
  {$define handleExceptionID := 1100}
  handleExceptionBegin
  Result := TCefCustomCompletionCallback.Create(aEvents);
  IntfCompletionCallback := Result as ICefCompletionCallback;
  handleExceptionEnd
end;

exports
  TCefCustomCompletionCallback_Create;
