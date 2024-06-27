
//constructor
function CefSetZoomPctTask_Create(const aEvents: IChromiumEvents; var aValue: double): TCefSetZoomPctTask; extdecl;
begin
  handleExceptionBegin
  Result := TCefSetZoomPctTask.Create(aEvents, aValue);
  handleExceptionEnd
end;

//procedure
procedure CefSetZoomPctTask_AsInterface(AObj: TCefSetZoomPctTask; var Result: ICefTask); extdecl;
begin
  Result := AObj as ICefTask;
end;


exports
  CefSetZoomPctTask_Create,
  CefSetZoomPctTask_AsInterface;