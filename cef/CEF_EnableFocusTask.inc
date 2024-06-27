
//constructor
function CefEnableFocusTask_Create(const aEvents: IChromiumEvents): TCefEnableFocusTask; extdecl;
begin
  handleExceptionBegin
  Result := TCefEnableFocusTask.Create(aEvents);
  handleExceptionEnd
end;

//procedure
procedure CefEnableFocusTask_AsInterface(AObj: TCefEnableFocusTask; var Result: ICefTask); extdecl;
begin
  Result := AObj as ICefTask;
end;


exports
  CefEnableFocusTask_Create,
  CefEnableFocusTask_AsInterface;