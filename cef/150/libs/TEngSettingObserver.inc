// constructor
function TEngSettingObserver_Create(out IntfSettingObserver: ICefSettingObserver): TEngSettingObserver; extdecl;
begin
  {$define handleExceptionID := 17400}
  handleExceptionBegin
  Result := TEngSettingObserver.Create();
  IntfSettingObserver := Result as ICefSettingObserver;
  handleExceptionEnd
end;

// event
procedure TEngSettingObserver_OnSettingObserverSettingChanged(AObj: TEngSettingObserver; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngSettingObserver_TOnSettingObserverSettingChangedEvent}
  {$DEFINE EventName := OnSettingObserverSettingChanged}
  CEFEventMethodCode
end;

exports
  TEngSettingObserver_Create,
  TEngSettingObserver_OnSettingObserverSettingChanged;