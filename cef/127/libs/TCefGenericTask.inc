// constructor
function TCefGenericTask_Create(const aEvents: IChromiumEvents; aTaskID: cardinal; out IntfTask: ICefTask): TCefGenericTask; extdecl;
begin
  {$define handleExceptionID := 4700}
  handleExceptionBegin
  Result := TCefGenericTask.Create(aEvents, aTaskID);
  IntfTask := Result as ICefTask;
  handleExceptionEnd
end;

exports
  TCefGenericTask_Create;
