// constructor
function TWkUserContentController_Create(AData: WKUserContentController): TWkUserContentController; extdecl;
begin
  {$define handleExceptionID := 2900}
  handleExceptionBegin
  Result := TWkUserContentController.Create(AData);
  handleExceptionEnd
end;

// function
function TWkUserContentController_Data(AObj: TWkUserContentController): WKUserContentController; extdecl;
begin
  {$define handleExceptionID := 2901}
  handleExceptionBegin
  Result := AObj.Data();
  handleExceptionEnd
end;

// function static
function TWkUserContentController_New(): TWkUserContentController; extdecl;
begin
  Result := TWkUserContentController.New();
end;

// function
function TWkUserContentController_UserScripts(AObj: TWkUserContentController): TStrings; extdecl;
begin
  {$define handleExceptionID := 2902}
  handleExceptionBegin
  Result := AObj.UserScripts();
  handleExceptionEnd
end;

// procedure
procedure TWkUserContentController_Release(AObj: TWkUserContentController); extdecl;
begin
  {$define handleExceptionID := 2903}
  handleExceptionBegin
  AObj.Release();
  handleExceptionEnd
end;

// procedure
procedure TWkUserContentController_AddUserScript(AObj: TWkUserContentController; userScript: WKUserScript); extdecl;
begin
  {$define handleExceptionID := 2904}
  handleExceptionBegin
  AObj.AddUserScript(userScript);
  handleExceptionEnd
end;

// procedure
procedure TWkUserContentController_RemoveAllUserScripts(AObj: TWkUserContentController); extdecl;
begin
  {$define handleExceptionID := 2905}
  handleExceptionBegin
  AObj.RemoveAllUserScripts();
  handleExceptionEnd
end;

// procedure
procedure TWkUserContentController_AddScriptMessageHandlerName(AObj: TWkUserContentController; scriptMessageHandler: TWKScriptMessageHandler; name: PChar); extdecl;
begin
  {$define handleExceptionID := 2906}
  handleExceptionBegin
  AObj.AddScriptMessageHandlerName(scriptMessageHandler, name);
  handleExceptionEnd
end;

// procedure
procedure TWkUserContentController_RemoveScriptMessageHandlerForName(AObj: TWkUserContentController; name: PChar); extdecl;
begin
  {$define handleExceptionID := 2907}
  handleExceptionBegin
  AObj.RemoveScriptMessageHandlerForName(name);
  handleExceptionEnd
end;

exports
  TWkUserContentController_Create,
  TWkUserContentController_Data,
  TWkUserContentController_New,
  TWkUserContentController_UserScripts,
  TWkUserContentController_Release,
  TWkUserContentController_AddUserScript,
  TWkUserContentController_RemoveAllUserScripts,
  TWkUserContentController_AddScriptMessageHandlerName,
  TWkUserContentController_RemoveScriptMessageHandlerForName;