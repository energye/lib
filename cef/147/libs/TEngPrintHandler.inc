// constructor
function TEngPrintHandler_Create(out IntfPrintHandler: ICefPrintHandler): TEngPrintHandler; extdecl;
begin
  {$define handleExceptionID := 16700}
  handleExceptionBegin
  Result := TEngPrintHandler.Create();
  IntfPrintHandler := Result as ICefPrintHandler;
  handleExceptionEnd
end;

// event
procedure TEngPrintHandler_OnPrintPrintStart(AObj: TEngPrintHandler; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngPrintHandler_TOnPrintPrintStartEvent}
  {$DEFINE EventName := OnPrintPrintStart}
  CEFEventMethodCode
end;

// event
procedure TEngPrintHandler_OnPrintPrintSettings(AObj: TEngPrintHandler; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngPrintHandler_TOnPrintPrintSettingsEvent}
  {$DEFINE EventName := OnPrintPrintSettings}
  CEFEventMethodCode
end;

// event
procedure TEngPrintHandler_OnPrintPrintDialog(AObj: TEngPrintHandler; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngPrintHandler_TOnPrintPrintDialogEvent}
  {$DEFINE EventName := OnPrintPrintDialog}
  CEFEventMethodCode
end;

// event
procedure TEngPrintHandler_OnPrintPrintJob(AObj: TEngPrintHandler; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngPrintHandler_TOnPrintPrintJobEvent}
  {$DEFINE EventName := OnPrintPrintJob}
  CEFEventMethodCode
end;

// event
procedure TEngPrintHandler_OnPrintPrintReset(AObj: TEngPrintHandler; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngPrintHandler_TOnPrintPrintResetEvent}
  {$DEFINE EventName := OnPrintPrintReset}
  CEFEventMethodCode
end;

// event
procedure TEngPrintHandler_OnPrintGetPDFPaperSize(AObj: TEngPrintHandler; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngPrintHandler_TOnPrintGetPDFPaperSizeEvent}
  {$DEFINE EventName := OnPrintGetPDFPaperSize}
  CEFEventMethodCode
end;

exports
  TEngPrintHandler_Create,
  TEngPrintHandler_OnPrintPrintStart,
  TEngPrintHandler_OnPrintPrintSettings,
  TEngPrintHandler_OnPrintPrintDialog,
  TEngPrintHandler_OnPrintPrintJob,
  TEngPrintHandler_OnPrintPrintReset,
  TEngPrintHandler_OnPrintGetPDFPaperSize;