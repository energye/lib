
//constructor
function CefSetZoomLevelTask_Create(const aEvents: IChromiumEvents; var aValue: double): TCefSetZoomLevelTask; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TCefSetZoomLevelTask.Create(aEvents, aValue);
  handleExceptionEnd
end;

//procedure
procedure CefSetZoomLevelTask_AsInterface(AObj: TCefSetZoomLevelTask; var Result: ICefTask); extdecl;
begin
  Result := AObj as ICefTask;
end;


exports
  CefSetZoomLevelTask_Create,
  CefSetZoomLevelTask_AsInterface;