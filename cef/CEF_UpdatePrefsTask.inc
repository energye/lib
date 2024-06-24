
//constructor
function CefUpdatePrefsTask_Create(const aEvents: IChromiumEvents): TCefUpdatePrefsTask; extdecl;
begin
  handleExceptionBegin
  Result := TCefUpdatePrefsTask.Create(aEvents);
  handleExceptionEnd
end;


exports
  CefUpdatePrefsTask_Create;