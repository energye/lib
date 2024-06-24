
//constructor
function CefUpdateZoomPctTask_Create(const aEvents: IChromiumEvents; aInc: LongBool): TCefUpdateZoomPctTask; extdecl;
begin
  handleExceptionBegin
  Result := TCefUpdateZoomPctTask.Create(aEvents, aInc);
  handleExceptionEnd
end;


exports
  CefUpdateZoomPctTask_Create;