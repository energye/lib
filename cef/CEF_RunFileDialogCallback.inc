
//constructor
function RunFileDialogCallback_Create(): TRunFileDialogCallback; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TRunFileDialogCallback.Create();
  handleExceptionEnd
end;

//procedure
procedure RunFileDialogCallback_AsInterface(AObj: TRunFileDialogCallback; var Result: ICefRunFileDialogCallback); extdecl;
begin
  Result := AObj as ICefRunFileDialogCallback;
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
  RunFileDialogCallback_AsInterface,
  RunFileDialogCallback_SetOnRunFileDialogDismissed;