
//constructor
function CefCustomRenderProcessHandler_Create(const aCefApp: TCefApplicationCore): TCefCustomRenderProcessHandler; extdecl;
begin
  handleExceptionBegin
  Result := TCefCustomRenderProcessHandler.Create(aCefApp);
  handleExceptionEnd
end;


exports
  CefCustomRenderProcessHandler_Create;