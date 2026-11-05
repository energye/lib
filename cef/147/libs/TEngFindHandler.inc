// constructor
function TEngFindHandler_Create(out IntfFindHandler: ICefFindHandler): TEngFindHandler; extdecl;
begin
  {$define handleExceptionID := 12600}
  handleExceptionBegin
  Result := TEngFindHandler.Create();
  IntfFindHandler := Result as ICefFindHandler;
  handleExceptionEnd
end;

// event
procedure TEngFindHandler_OnFindFindResult(AObj: TEngFindHandler; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngFindHandler_TOnFindFindResultEvent}
  {$DEFINE EventName := OnFindFindResult}
  CEFEventMethodCode
end;

exports
  TEngFindHandler_Create,
  TEngFindHandler_OnFindFindResult;