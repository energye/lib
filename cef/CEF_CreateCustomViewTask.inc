
//constructor
function CefCreateCustomViewTask_Create(const aEvents: ICefViewDelegateEvents): TCefCreateCustomViewTask; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TCefCreateCustomViewTask.Create(aEvents);
  handleExceptionEnd
end;

//procedure
procedure CefCreateCustomViewTask_AsInterface(AObj: TCefCreateCustomViewTask; var Result: ICefTask); extdecl;
begin
  Result := AObj as ICefTask;
end;


exports
  CefCreateCustomViewTask_Create,
  CefCreateCustomViewTask_AsInterface;