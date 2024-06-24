
//constructor
function CefEnableFocusTask_Create(const aEvents: IChromiumEvents): TCefEnableFocusTask; extdecl;
begin
  handleExceptionBegin
  Result := TCefEnableFocusTask.Create(aEvents);
  handleExceptionEnd
end;


exports
  CefEnableFocusTask_Create;