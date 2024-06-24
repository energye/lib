
//constructor
function CefSetAudioMutedTask_Create(const aEvents: IChromiumEvents; aValue: LongBool): TCefSetAudioMutedTask; extdecl;
begin
  handleExceptionBegin
  Result := TCefSetAudioMutedTask.Create(aEvents, aValue);
  handleExceptionEnd
end;


exports
  CefSetAudioMutedTask_Create;