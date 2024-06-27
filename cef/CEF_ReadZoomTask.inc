
//constructor
function CefReadZoomTask_Create(const aEvents: IChromiumEvents): TCefReadZoomTask; extdecl;
begin
  handleExceptionBegin
  Result := TCefReadZoomTask.Create(aEvents);
  handleExceptionEnd
end;

//procedure
procedure CefReadZoomTask_AsInterface(AObj: TCefReadZoomTask; var Result: ICefTask); extdecl;
begin
  Result := AObj as ICefTask;
end;


exports
  CefReadZoomTask_Create,
  CefReadZoomTask_AsInterface;