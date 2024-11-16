
//constructor
function CefUpdateZoomPctTask_Create(const aEvents: IChromiumEvents; aInc: LongBool): TCefUpdateZoomPctTask; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TCefUpdateZoomPctTask.Create(aEvents, aInc);
  handleExceptionEnd
end;

//procedure
procedure CefUpdateZoomPctTask_AsInterface(AObj: TCefUpdateZoomPctTask; var Result: ICefTask); extdecl;
begin
  Result := AObj as ICefTask;
end;


exports
  CefUpdateZoomPctTask_Create,
  CefUpdateZoomPctTask_AsInterface;