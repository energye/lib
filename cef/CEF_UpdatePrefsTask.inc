
//constructor
function CefUpdatePrefsTask_Create(const aEvents: IChromiumEvents): TCefUpdatePrefsTask; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TCefUpdatePrefsTask.Create(aEvents);
  handleExceptionEnd
end;

//procedure
procedure CefUpdatePrefsTask_AsInterface(AObj: TCefUpdatePrefsTask; var Result: ICefTask); extdecl;
begin
  Result := AObj as ICefTask;
end;


exports
  CefUpdatePrefsTask_Create,
  CefUpdatePrefsTask_AsInterface;