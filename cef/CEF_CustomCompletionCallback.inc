
//constructor
function CefCustomCompletionCallback_Create(const aEvents: IChromiumEvents): TCefCustomCompletionCallback; extdecl;
begin
  handleExceptionBegin
  Result := TCefCustomCompletionCallback.Create(aEvents);
  handleExceptionEnd
end;


exports
  CefCustomCompletionCallback_Create;
