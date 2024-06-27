
//constructor
function CefSavePrefsTask_Create(const aEvents: IChromiumEvents): TCefSavePrefsTask; extdecl;
begin
  handleExceptionBegin
  Result := TCefSavePrefsTask.Create(aEvents);
  handleExceptionEnd
end;

//procedure
procedure CefSavePrefsTask_AsInterface(AObj: TCefSavePrefsTask; var Result: ICefTask); extdecl;
begin
  Result := AObj as ICefTask;
end;


exports
  CefSavePrefsTask_Create,
  CefSavePrefsTask_AsInterface;