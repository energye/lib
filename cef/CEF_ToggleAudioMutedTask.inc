
//constructor
function CefToggleAudioMutedTask_Create(const aEvents: IChromiumEvents): TCefToggleAudioMutedTask; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TCefToggleAudioMutedTask.Create(aEvents);
  handleExceptionEnd
end;

//procedure
procedure CefToggleAudioMutedTask_AsInterface(AObj: TCefToggleAudioMutedTask; var Result: ICefTask); extdecl;
begin
  Result := AObj as ICefTask;
end;


exports
  CefToggleAudioMutedTask_Create,
  CefToggleAudioMutedTask_AsInterface;