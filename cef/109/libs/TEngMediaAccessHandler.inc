// constructor
function TEngMediaAccessHandler_Create(out IntfMediaAccessHandler: ICefMediaAccessHandler): TEngMediaAccessHandler; extdecl;
begin
  {$define handleExceptionID := 16300}
  handleExceptionBegin
  Result := TEngMediaAccessHandler.Create();
  IntfMediaAccessHandler := Result as ICefMediaAccessHandler;
  handleExceptionEnd
end;

// event
procedure TEngMediaAccessHandler_OnMediaAccessRequestMediaAccessPermission(AObj: TEngMediaAccessHandler; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngMediaAccessHandler_TOnMediaAccessRequestMediaAccessPermissionEvent}
  {$DEFINE EventName := OnMediaAccessRequestMediaAccessPermission}
  CEFEventMethodCode
end;

exports
  TEngMediaAccessHandler_Create,
  TEngMediaAccessHandler_OnMediaAccessRequestMediaAccessPermission;