
//constructor
function CefCreateCustomViewTask_Create(const aEvents: ICefViewDelegateEvents): TCefCreateCustomViewTask; extdecl;
begin
  handleExceptionBegin
  Result := TCefCreateCustomViewTask.Create(aEvents);
  handleExceptionEnd
end;


exports
  CefCreateCustomViewTask_Create;