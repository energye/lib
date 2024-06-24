
//constructor
function CefSetZoomPctTask_Create(const aEvents: IChromiumEvents; var aValue: double): TCefSetZoomPctTask; extdecl;
begin
  handleExceptionBegin
  Result := TCefSetZoomPctTask.Create(aEvents, aValue);
  handleExceptionEnd
end;


exports
  CefSetZoomPctTask_Create;