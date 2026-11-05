// constructor
function TCefCustomMediaSinkDeviceInfoCallback_Create(const aEvents: IChromiumEvents; out IntfMediaSinkDeviceInfoCallback: ICefMediaSinkDeviceInfoCallback): TCefCustomMediaSinkDeviceInfoCallback; extdecl;
begin
  {$define handleExceptionID := 9800}
  handleExceptionBegin
  Result := TCefCustomMediaSinkDeviceInfoCallback.Create(aEvents);
  IntfMediaSinkDeviceInfoCallback := Result as ICefMediaSinkDeviceInfoCallback;
  handleExceptionEnd
end;

exports
  TCefCustomMediaSinkDeviceInfoCallback_Create;
