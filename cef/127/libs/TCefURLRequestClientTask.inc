// constructor
function TCefURLRequestClientTask_Create(const aEvents: ICEFUrlRequestClientEvents; out IntfTask: ICefTask): TCefURLRequestClientTask; extdecl;
begin
  {$define handleExceptionID := 4800}
  handleExceptionBegin
  Result := TCefURLRequestClientTask.Create(aEvents);
  IntfTask := Result as ICefTask;
  handleExceptionEnd
end;

exports
  TCefURLRequestClientTask_Create;
