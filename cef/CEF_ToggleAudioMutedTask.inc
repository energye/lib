
//constructor
function CefToggleAudioMutedTask_Create(const aEvents: IChromiumEvents): TCefToggleAudioMutedTask; extdecl;
begin
  handleExceptionBegin
  Result := TCefToggleAudioMutedTask.Create(aEvents);
  handleExceptionEnd
end;


exports
  CefToggleAudioMutedTask_Create;