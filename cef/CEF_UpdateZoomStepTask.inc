
//constructor
function CefUpdateZoomStepTask_Create(const aEvents: IChromiumEvents; aInc: LongBool): TCefUpdateZoomStepTask; extdecl;
begin
  handleExceptionBegin
  Result := TCefUpdateZoomStepTask.Create(aEvents, aInc);
  handleExceptionEnd
end;

//procedure
procedure CefUpdateZoomStepTask_AsInterface(AObj: TCefUpdateZoomStepTask; var Result: ICefTask); extdecl;
begin
  Result := AObj as ICefTask;
end;


exports
  CefUpdateZoomStepTask_Create,
  CefUpdateZoomStepTask_AsInterface;