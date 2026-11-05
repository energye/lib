// constructor manually create
function TNotifyEventDelegate_Create(): TNotifyEventDelegate; extdecl;
begin
  {$define handleExceptionID := 41700}
  handleExceptionBegin
  Result := TNotifyEventDelegate.Create();
  handleExceptionEnd
end;

// event
procedure TNotifyEventDelegate_OnNotify(AObj: TNotifyEventDelegate; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnNotify}
  LCLEventMethodCode
end;

exports
  TNotifyEventDelegate_Create,
  TNotifyEventDelegate_OnNotify;