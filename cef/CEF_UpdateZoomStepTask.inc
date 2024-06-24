
//constructor
function CefUpdateZoomStepTask_Create(const aEvents: IChromiumEvents; aInc: LongBool): TCefUpdateZoomStepTask; extdecl;
begin
  handleExceptionBegin
  Result := TCefUpdateZoomStepTask.Create(aEvents, aInc);
  handleExceptionEnd
end;


exports
  CefUpdateZoomStepTask_Create;