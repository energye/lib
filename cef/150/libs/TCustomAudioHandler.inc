// constructor
function TCustomAudioHandler_Create(const events: IChromiumEvents; out IntfAudioHandler: ICefAudioHandler): TCustomAudioHandler; extdecl;
begin
  {$define handleExceptionID := 9600}
  handleExceptionBegin
  Result := TCustomAudioHandler.Create(events);
  IntfAudioHandler := Result as ICefAudioHandler;
  handleExceptionEnd
end;

exports
  TCustomAudioHandler_Create;
