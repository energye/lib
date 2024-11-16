
//constructor
function CefURLRequestTask_Create(const aEvents: ICEFUrlRequestClientEvents): TCefURLRequestTask; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TCefURLRequestTask.Create(aEvents);
  handleExceptionEnd
end;

//procedure
procedure CefURLRequestTask_AsInterface(AObj: TCefURLRequestTask; var Result: ICefTask); extdecl;
begin
  Result := AObj as ICefTask;
end;


exports
  CefURLRequestTask_Create,
  CefURLRequestTask_AsInterface;