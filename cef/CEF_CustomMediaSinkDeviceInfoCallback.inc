
//constructor
function CefCustomMediaSinkDeviceInfoCallback_Create(const aEvents: IChromiumEvents): TCefCustomMediaSinkDeviceInfoCallback; extdecl;
begin
  handleExceptionBegin
  Result := TCefCustomMediaSinkDeviceInfoCallback.Create(aEvents);
  handleExceptionEnd
end;


exports
  CefCustomMediaSinkDeviceInfoCallback_Create;