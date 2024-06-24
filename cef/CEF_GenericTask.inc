
//constructor
function CefGenericTask_Create(const aEvents: IChromiumEvents; aTaskID: uint32): TCefGenericTask; extdecl;
begin
  handleExceptionBegin
  Result := TCefGenericTask.Create(aEvents, aTaskID);
  handleExceptionEnd
end;


exports
  CefGenericTask_Create;