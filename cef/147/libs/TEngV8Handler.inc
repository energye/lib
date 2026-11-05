// constructor
function TEngV8Handler_Create(out IntfV8Handler: ICefv8Handler): TEngV8Handler; extdecl;
begin
  {$define handleExceptionID := 15100}
  handleExceptionBegin
  Result := TEngV8Handler.Create();
  IntfV8Handler := Result as ICefv8Handler;
  handleExceptionEnd
end;

// event
procedure TEngV8Handler_OnV8Execute(AObj: TEngV8Handler; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngV8Handler_TOnV8ExecuteEvent}
  {$DEFINE EventName := OnV8Execute}
  CEFEventMethodCode
end;

exports
  TEngV8Handler_Create,
  TEngV8Handler_OnV8Execute;