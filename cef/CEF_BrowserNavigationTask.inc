
//constructor
function CefBrowserNavigationTask_Create(const aEvents: IChromiumEvents; aTask: TCefBrowserNavigation): TCefBrowserNavigationTask; extdecl;
begin
  handleExceptionBegin
  Result := TCefBrowserNavigationTask.Create(aEvents, aTask);
  handleExceptionEnd
end;


exports
  CefBrowserNavigationTask_Create;