
//constructor
function CefReadZoomTask_Create(const aEvents: IChromiumEvents): TCefReadZoomTask; extdecl;
begin
  handleExceptionBegin
  Result := TCefReadZoomTask.Create(aEvents);
  handleExceptionEnd
end;


exports
  CefReadZoomTask_Create;