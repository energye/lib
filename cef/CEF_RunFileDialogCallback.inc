
//constructor
function RunFileDialogCallback_Create(): TRunFileDialogCallback; extdecl;
begin
  handleExceptionBegin
  Result := TRunFileDialogCallback.Create();
  handleExceptionEnd
end;

//property event
procedure RunFileDialogCallback_SetOnRunFileDialogDismissed(AObj: TRunFileDialogCallback; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := RunFileDialogCallback_OnRunFileDialogDismissed}
  {$DEFINE EventName := OnRunFileDialogDismissed}
  CEFEventMethodCode
end;


exports
  RunFileDialogCallback_Create,
  RunFileDialogCallback_SetOnRunFileDialogDismissed;