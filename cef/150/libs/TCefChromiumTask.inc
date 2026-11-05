// constructor
function TCefChromiumTask_Create(const aEvents: IChromiumEvents; out IntfTask: ICefTask): TCefChromiumTask; extdecl;
begin
  {$define handleExceptionID := 4600}
  handleExceptionBegin
  Result := TCefChromiumTask.Create(aEvents);
  IntfTask := Result as ICefTask;
  handleExceptionEnd
end;

exports
  TCefChromiumTask_Create;
