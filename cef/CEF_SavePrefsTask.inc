
//constructor
function CefSavePrefsTask_Create(const aEvents: IChromiumEvents): TCefSavePrefsTask; extdecl;
begin
  handleExceptionBegin
  Result := TCefSavePrefsTask.Create(aEvents);
  handleExceptionEnd
end;


exports
  CefSavePrefsTask_Create;