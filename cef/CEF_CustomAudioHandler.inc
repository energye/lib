
//constructor
function CustomAudioHandler_Create(const events: IChromiumEvents): TCustomAudioHandler; extdecl;
begin
  handleExceptionBegin
  Result := TCustomAudioHandler.Create(events);
  handleExceptionEnd
end;


exports
  CustomAudioHandler_Create;