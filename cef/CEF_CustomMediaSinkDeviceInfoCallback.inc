
//constructor
function CefCustomMediaSinkDeviceInfoCallback_Create(const aEvents: IChromiumEvents): TCefCustomMediaSinkDeviceInfoCallback; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TCefCustomMediaSinkDeviceInfoCallback.Create(aEvents);
  handleExceptionEnd
end;

//procedure
procedure CefCustomMediaSinkDeviceInfoCallback_AsInterface(AObj: TCefCustomMediaSinkDeviceInfoCallback; var Result: ICefMediaSinkDeviceInfoCallback); extdecl;
begin
  Result := AObj as ICefMediaSinkDeviceInfoCallback;
end;


exports
  CefCustomMediaSinkDeviceInfoCallback_Create,
  CefCustomMediaSinkDeviceInfoCallback_AsInterface;