// constructor
function TCefManagedTask_Create(out IntfTask: ICefTask): TCefManagedTask; extdecl;
begin
  {$define handleExceptionID := 4500}
  handleExceptionBegin
  Result := TCefManagedTask.Create();
  IntfTask := Result as ICefTask;
  handleExceptionEnd
end;

exports
  TCefManagedTask_Create;
