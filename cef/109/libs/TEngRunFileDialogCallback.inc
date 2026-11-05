// constructor
function TEngRunFileDialogCallback_Create(out IntfRunFileDialogCallback: ICefRunFileDialogCallback): TEngRunFileDialogCallback; extdecl;
begin
  {$define handleExceptionID := 13500}
  handleExceptionBegin
  Result := TEngRunFileDialogCallback.Create();
  IntfRunFileDialogCallback := Result as ICefRunFileDialogCallback;
  handleExceptionEnd
end;

// event
procedure TEngRunFileDialogCallback_OnRunFileDialogCallbackFileDialogDismissed(AObj: TEngRunFileDialogCallback; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngRunFileDialogCallback_TOnRunFileDialogCallbackFileDialogDismissedEvent}
  {$DEFINE EventName := OnRunFileDialogCallbackFileDialogDismissed}
  CEFEventMethodCode
end;

exports
  TEngRunFileDialogCallback_Create,
  TEngRunFileDialogCallback_OnRunFileDialogCallbackFileDialogDismissed;