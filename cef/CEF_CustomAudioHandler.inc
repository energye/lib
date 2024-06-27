
//constructor
function CustomAudioHandler_Create(const events: IChromiumEvents): TCustomAudioHandler; extdecl;
begin
  handleExceptionBegin
  Result := TCustomAudioHandler.Create(events);
  handleExceptionEnd
end;

//procedure
procedure CustomAudioHandler_AsInterface(AObj: TCustomAudioHandler; var Result: ICefAudioHandler); extdecl;
begin
  Result := AObj as ICefAudioHandler;
end;


exports
  CustomAudioHandler_Create,
  CustomAudioHandler_AsInterface;