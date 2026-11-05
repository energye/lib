// constructor
function TEngJsDialogHandler_Create(out IntfJsDialogHandler: ICefJsDialogHandler): TEngJsDialogHandler; extdecl;
begin
  {$define handleExceptionID := 12800}
  handleExceptionBegin
  Result := TEngJsDialogHandler.Create();
  IntfJsDialogHandler := Result as ICefJsDialogHandler;
  handleExceptionEnd
end;

// event
procedure TEngJsDialogHandler_OnJsDialogJsdialog(AObj: TEngJsDialogHandler; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngJsDialogHandler_TOnJsDialogJsdialogEvent}
  {$DEFINE EventName := OnJsDialogJsdialog}
  CEFEventMethodCode
end;

// event
procedure TEngJsDialogHandler_OnJsDialogBeforeUnloadDialog(AObj: TEngJsDialogHandler; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngJsDialogHandler_TOnJsDialogBeforeUnloadDialogEvent}
  {$DEFINE EventName := OnJsDialogBeforeUnloadDialog}
  CEFEventMethodCode
end;

// event
procedure TEngJsDialogHandler_OnJsDialogResetDialogState(AObj: TEngJsDialogHandler; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngJsDialogHandler_TOnJsDialogResetDialogStateEvent}
  {$DEFINE EventName := OnJsDialogResetDialogState}
  CEFEventMethodCode
end;

// event
procedure TEngJsDialogHandler_OnJsDialogDialogClosed(AObj: TEngJsDialogHandler; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngJsDialogHandler_TOnJsDialogDialogClosedEvent}
  {$DEFINE EventName := OnJsDialogDialogClosed}
  CEFEventMethodCode
end;

exports
  TEngJsDialogHandler_Create,
  TEngJsDialogHandler_OnJsDialogJsdialog,
  TEngJsDialogHandler_OnJsDialogBeforeUnloadDialog,
  TEngJsDialogHandler_OnJsDialogResetDialogState,
  TEngJsDialogHandler_OnJsDialogDialogClosed;