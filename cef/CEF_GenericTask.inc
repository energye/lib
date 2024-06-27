
//constructor
function CefGenericTask_Create(const aEvents: IChromiumEvents; aTaskID: uint32): TCefGenericTask; extdecl;
begin
  handleExceptionBegin
  Result := TCefGenericTask.Create(aEvents, aTaskID);
  handleExceptionEnd
end;

//procedure
procedure CefGenericTask_AsInterface(AObj: TCefGenericTask; var Result: ICefTask); extdecl;
begin
  Result := AObj as ICefTask;
end;


exports
  CefGenericTask_Create,
  CefGenericTask_AsInterface;