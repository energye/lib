// constructor
function TEngMediaSinkDeviceInfoCallback_Create(out IntfMediaSinkDeviceInfoCallback: ICefMediaSinkDeviceInfoCallback): TEngMediaSinkDeviceInfoCallback; extdecl;
begin
  {$define handleExceptionID := 15800}
  handleExceptionBegin
  Result := TEngMediaSinkDeviceInfoCallback.Create();
  IntfMediaSinkDeviceInfoCallback := Result as ICefMediaSinkDeviceInfoCallback;
  handleExceptionEnd
end;

// event
procedure TEngMediaSinkDeviceInfoCallback_OnMediaSinkDeviceInfoCallbackMediaSinkDeviceInfo(AObj: TEngMediaSinkDeviceInfoCallback; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngMediaSinkDeviceInfoCallback_TOnMediaSinkDeviceInfoCallbackMediaSinkDeviceInfoEvent}
  {$DEFINE EventName := OnMediaSinkDeviceInfoCallbackMediaSinkDeviceInfo}
  CEFEventMethodCode
end;

exports
  TEngMediaSinkDeviceInfoCallback_Create,
  TEngMediaSinkDeviceInfoCallback_OnMediaSinkDeviceInfoCallbackMediaSinkDeviceInfo;