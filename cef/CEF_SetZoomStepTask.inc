
//constructor
function CefSetZoomStepTask_Create(const aEvents: IChromiumEvents; aValue: byte): TCefSetZoomStepTask; extdecl;
begin
  handleExceptionBegin
  Result := TCefSetZoomStepTask.Create(aEvents, aValue);
  handleExceptionEnd
end;


exports
  CefSetZoomStepTask_Create;