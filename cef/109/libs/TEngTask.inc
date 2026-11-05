// constructor
function TEngTask_Create(out IntfTask: ICefTask): TEngTask; extdecl;
begin
  {$define handleExceptionID := 13900}
  handleExceptionBegin
  Result := TEngTask.Create();
  IntfTask := Result as ICefTask;
  handleExceptionEnd
end;

// event
procedure TEngTask_OnTaskExecute(AObj: TEngTask; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngTask_TOnTaskExecuteEvent}
  {$DEFINE EventName := OnTaskExecute}
  CEFEventMethodCode
end;

exports
  TEngTask_Create,
  TEngTask_OnTaskExecute;