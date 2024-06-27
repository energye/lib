
//constructor
function CefCustomCompletionCallback_Create(const aEvents: IChromiumEvents): TCefCustomCompletionCallback; extdecl;
begin
  handleExceptionBegin
  Result := TCefCustomCompletionCallback.Create(aEvents);
  handleExceptionEnd
end;

//procedure
procedure CefCustomCompletionCallback_AsInterface(AObj: TCefCustomCompletionCallback; var Result: ICefCompletionCallback); extdecl;
begin
  Result := AObj as ICefCompletionCallback;
end;


exports
  CefCustomCompletionCallback_Create,
  CefCustomCompletionCallback_AsInterface;