
//constructor
function CefSetZoomStepTask_Create(const aEvents: IChromiumEvents; aValue: byte): TCefSetZoomStepTask; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TCefSetZoomStepTask.Create(aEvents, aValue);
  handleExceptionEnd
end;

//procedure
procedure CefSetZoomStepTask_AsInterface(AObj: TCefSetZoomStepTask; var Result: ICefTask); extdecl;
begin
  Result := AObj as ICefTask;
end;


exports
  CefSetZoomStepTask_Create,
  CefSetZoomStepTask_AsInterface;