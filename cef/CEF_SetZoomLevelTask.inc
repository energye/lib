
//constructor
function CefSetZoomLevelTask_Create(const aEvents: IChromiumEvents; var aValue: double): TCefSetZoomLevelTask; extdecl;
begin
  handleExceptionBegin
  Result := TCefSetZoomLevelTask.Create(aEvents, aValue);
  handleExceptionEnd
end;


exports
  CefSetZoomLevelTask_Create;