// constructor
function TEngPreferenceObserver_Create(out IntfPreferenceObserver: ICefPreferenceObserver): TEngPreferenceObserver; extdecl;
begin
  {$define handleExceptionID := 17300}
  handleExceptionBegin
  Result := TEngPreferenceObserver.Create();
  IntfPreferenceObserver := Result as ICefPreferenceObserver;
  handleExceptionEnd
end;

// event
procedure TEngPreferenceObserver_OnPreferenceObserverPreferenceChanged(AObj: TEngPreferenceObserver; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngPreferenceObserver_TOnPreferenceObserverPreferenceChangedEvent}
  {$DEFINE EventName := OnPreferenceObserverPreferenceChanged}
  CEFEventMethodCode
end;

exports
  TEngPreferenceObserver_Create,
  TEngPreferenceObserver_OnPreferenceObserverPreferenceChanged;