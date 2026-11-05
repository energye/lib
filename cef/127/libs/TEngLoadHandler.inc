// constructor
function TEngLoadHandler_Create(out IntfLoadHandler: ICefLoadHandler): TEngLoadHandler; extdecl;
begin
  {$define handleExceptionID := 12900}
  handleExceptionBegin
  Result := TEngLoadHandler.Create();
  IntfLoadHandler := Result as ICefLoadHandler;
  handleExceptionEnd
end;

// event
procedure TEngLoadHandler_OnLoadLoadingStateChange(AObj: TEngLoadHandler; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngLoadHandler_TOnLoadLoadingStateChangeEvent}
  {$DEFINE EventName := OnLoadLoadingStateChange}
  CEFEventMethodCode
end;

// event
procedure TEngLoadHandler_OnLoadLoadStart(AObj: TEngLoadHandler; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngLoadHandler_TOnLoadLoadStartEvent}
  {$DEFINE EventName := OnLoadLoadStart}
  CEFEventMethodCode
end;

// event
procedure TEngLoadHandler_OnLoadLoadEnd(AObj: TEngLoadHandler; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngLoadHandler_TOnLoadLoadEndEvent}
  {$DEFINE EventName := OnLoadLoadEnd}
  CEFEventMethodCode
end;

// event
procedure TEngLoadHandler_OnLoadLoadError(AObj: TEngLoadHandler; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngLoadHandler_TOnLoadLoadErrorEvent}
  {$DEFINE EventName := OnLoadLoadError}
  CEFEventMethodCode
end;

exports
  TEngLoadHandler_Create,
  TEngLoadHandler_OnLoadLoadingStateChange,
  TEngLoadHandler_OnLoadLoadStart,
  TEngLoadHandler_OnLoadLoadEnd,
  TEngLoadHandler_OnLoadLoadError;