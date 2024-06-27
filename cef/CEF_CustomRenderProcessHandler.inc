
//constructor
function CefCustomRenderProcessHandler_Create(const aCefApp: TCefApplicationCore): TCefCustomRenderProcessHandler; extdecl;
begin
  handleExceptionBegin
  Result := TCefCustomRenderProcessHandler.Create(aCefApp);
  handleExceptionEnd
end;

//procedure
procedure CefCustomRenderProcessHandler_AsInterface(AObj: TCefCustomRenderProcessHandler; var Result: ICefRenderProcessHandler); extdecl;
begin
  Result := AObj as ICefRenderProcessHandler;
end;


exports
  CefCustomRenderProcessHandler_Create,
  CefCustomRenderProcessHandler_AsInterface;