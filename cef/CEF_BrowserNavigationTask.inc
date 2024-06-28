
//constructor
function CefBrowserNavigationTask_Create(const aEvents: IChromiumEvents; aTask: TCefBrowserNavigation): TCefBrowserNavigationTask; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TCefBrowserNavigationTask.Create(aEvents, aTask);
  handleExceptionEnd
end;

//procedure
procedure CefBrowserNavigationTask_AsInterface(AObj: TCefBrowserNavigationTask; var Result: ICefTask); extdecl;
begin
  Result := AObj as ICefTask;
end;


exports
  CefBrowserNavigationTask_Create,
  CefBrowserNavigationTask_AsInterface;