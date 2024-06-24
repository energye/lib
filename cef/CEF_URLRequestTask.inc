
//constructor
function CefURLRequestTask_Create(const aEvents: ICEFUrlRequestClientEvents): TCefURLRequestTask; extdecl;
begin
  handleExceptionBegin
  Result := TCefURLRequestTask.Create(aEvents);
  handleExceptionEnd
end;


exports
  CefURLRequestTask_Create;