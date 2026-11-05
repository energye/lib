// constructor
function TCefViewDelegateTask_Create(const aEvents: ICefViewDelegateEvents; out IntfTask: ICefTask): TCefViewDelegateTask; extdecl;
begin
  {$define handleExceptionID := 4700}
  handleExceptionBegin
  Result := TCefViewDelegateTask.Create(aEvents);
  IntfTask := Result as ICefTask;
  handleExceptionEnd
end;

exports
  TCefViewDelegateTask_Create;
