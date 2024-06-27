
//constructor
function CefSetAudioMutedTask_Create(const aEvents: IChromiumEvents; aValue: LongBool): TCefSetAudioMutedTask; extdecl;
begin
  handleExceptionBegin
  Result := TCefSetAudioMutedTask.Create(aEvents, aValue);
  handleExceptionEnd
end;

//procedure
procedure CefSetAudioMutedTask_AsInterface(AObj: TCefSetAudioMutedTask; var Result: ICefTask); extdecl;
begin
  Result := AObj as ICefTask;
end;


exports
  CefSetAudioMutedTask_Create,
  CefSetAudioMutedTask_AsInterface;