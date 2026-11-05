// constructor
function TGraphicsObject_Create(): TGraphicsObject; extdecl;
begin
  {$define handleExceptionID := 5100}
  handleExceptionBegin
  Result := TGraphicsObject.Create();
  handleExceptionEnd
end;

// event
procedure TGraphicsObject_OnChanging(AObj: TGraphicsObject; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnChanging}
  LCLEventMethodCode
end;

// event
procedure TGraphicsObject_OnChange(AObj: TGraphicsObject; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnChange}
  LCLEventMethodCode
end;

exports
  TGraphicsObject_Create,
  TGraphicsObject_OnChanging,
  TGraphicsObject_OnChange;