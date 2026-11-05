// constructor
function TEngDialogHandler_Create(out IntfDialogHandler: ICefDialogHandler): TEngDialogHandler; extdecl;
begin
  {$define handleExceptionID := 11900}
  handleExceptionBegin
  Result := TEngDialogHandler.Create();
  IntfDialogHandler := Result as ICefDialogHandler;
  handleExceptionEnd
end;

// event
procedure TEngDialogHandler_OnDialogFileDialog(AObj: TEngDialogHandler; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngDialogHandler_TOnDialogFileDialogEvent}
  {$DEFINE EventName := OnDialogFileDialog}
  CEFEventMethodCode
end;

exports
  TEngDialogHandler_Create,
  TEngDialogHandler_OnDialogFileDialog;