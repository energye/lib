
//constructor
function WKUserContentController_Create(aData: WKUserContentController): TWKUserContentController; extdecl;
begin
  handleExceptionBegin
  Result := TWKUserContentController.Create(aData);
  handleExceptionEnd
end;

//function
function WKUserContentController_New(): TWKUserContentController; extdecl;
begin
  Result := TWKUserContentController.New();
end;

//function
function WKUserContentController_Data(AObj: TWKUserContentController): WKUserContentController; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Data();
  handleExceptionEnd
end;

//function
procedure WKUserContentController_UserScripts(AObj: TWKUserContentController; var Result: TStrings); extdecl;
begin
  handleExceptionBegin
  Result := AObj.UserScripts();
  handleExceptionEnd
end;

//procedure
procedure WKUserContentController_AddUserScript(AObj: TWKUserContentController; userScript: WKUserScript); extdecl;
begin
  handleExceptionBegin
  AObj.AddUserScript(userScript);
  handleExceptionEnd
end;

//procedure
procedure WKUserContentController_RemoveAllUserScripts(AObj: TWKUserContentController); extdecl;
begin
  handleExceptionBegin
  AObj.RemoveAllUserScripts();
  handleExceptionEnd
end;

//procedure
procedure WKUserContentController_AddScriptMessageHandlerName(AObj: TWKUserContentController; scriptMessageHandler: TWKScriptMessageHandler; name: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.AddScriptMessageHandlerName(scriptMessageHandler, name);
  handleExceptionEnd
end;

//procedure
procedure WKUserContentController_RemoveScriptMessageHandlerForName(AObj: TWKUserContentController; name: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.RemoveScriptMessageHandlerForName(name);
  handleExceptionEnd
end;


exports
  WKUserContentController_Create,
  WKUserContentController_New,
  WKUserContentController_Data,
  WKUserContentController_UserScripts,
  WKUserContentController_AddUserScript,
  WKUserContentController_RemoveAllUserScripts,
  WKUserContentController_AddScriptMessageHandlerName,
  WKUserContentController_RemoveScriptMessageHandlerForName;