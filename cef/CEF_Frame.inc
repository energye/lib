
//function
procedure CefFrame_UnWrap(data: Pointer; var Result: ICefFrame); extdecl;
begin
  Result := TCefFrameRef.UnWrap(data);
end;

//function
function CefFrame_IsValid(AObj: ICefFrame): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IsValid();
  handleExceptionEnd
end;

//function
function CefFrame_IsMain(AObj: ICefFrame): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IsMain();
  handleExceptionEnd
end;

//function
function CefFrame_IsFocused(AObj: ICefFrame): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IsFocused();
  handleExceptionEnd
end;

//function
function CefFrame_GetName(AObj: ICefFrame): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.GetName());
  handleExceptionEnd
end;

//function
procedure CefFrame_GetIdentifier(AObj: ICefFrame; var Result: Int64); extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetIdentifier();
  handleExceptionEnd
end;

//function
procedure CefFrame_GetParent(AObj: ICefFrame; var Result: ICefFrame); extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetParent();
  handleExceptionEnd
end;

//function
function CefFrame_GetUrl(AObj: ICefFrame): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.GetUrl());
  handleExceptionEnd
end;

//function
procedure CefFrame_GetBrowser(AObj: ICefFrame; var Result: ICefBrowser); extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetBrowser();
  handleExceptionEnd
end;

//function
procedure CefFrame_GetV8Context(AObj: ICefFrame; var Result: ICefv8Context); extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetV8Context();
  handleExceptionEnd
end;

//function
procedure CefFrame_CreateUrlRequest(AObj: ICefFrame; const request: ICefRequest; const client: ICefUrlrequestClient; var Result: ICefUrlRequest); extdecl;
begin
  handleExceptionBegin
  Result := AObj.CreateUrlRequest(request, client);
  handleExceptionEnd
end;

//procedure
procedure CefFrame_Undo(AObj: ICefFrame); extdecl;
begin
  handleExceptionBegin
  AObj.Undo();
  handleExceptionEnd
end;

//procedure
procedure CefFrame_Redo(AObj: ICefFrame); extdecl;
begin
  handleExceptionBegin
  AObj.Redo();
  handleExceptionEnd
end;

//procedure
procedure CefFrame_Cut(AObj: ICefFrame); extdecl;
begin
  handleExceptionBegin
  AObj.Cut();
  handleExceptionEnd
end;

//procedure
procedure CefFrame_Copy(AObj: ICefFrame); extdecl;
begin
  handleExceptionBegin
  AObj.Copy();
  handleExceptionEnd
end;

//procedure
procedure CefFrame_Paste(AObj: ICefFrame); extdecl;
begin
  handleExceptionBegin
  AObj.Paste();
  handleExceptionEnd
end;

//procedure
procedure CefFrame_Del(AObj: ICefFrame); extdecl;
begin
  handleExceptionBegin
  AObj.Del();
  handleExceptionEnd
end;

//procedure
procedure CefFrame_SelectAll(AObj: ICefFrame); extdecl;
begin
  handleExceptionBegin
  AObj.SelectAll();
  handleExceptionEnd
end;

//procedure
procedure CefFrame_ViewSource(AObj: ICefFrame); extdecl;
begin
  handleExceptionBegin
  AObj.ViewSource();
  handleExceptionEnd
end;

//procedure
procedure CefFrame_GetSource(AObj: ICefFrame; const visitor: ICefStringVisitor); extdecl;
begin
  handleExceptionBegin
  AObj.GetSource(visitor);
  handleExceptionEnd
end;

//procedure
procedure CefFrame_GetText(AObj: ICefFrame; const visitor: ICefStringVisitor); extdecl;
begin
  handleExceptionBegin
  AObj.GetText(visitor);
  handleExceptionEnd
end;

//procedure
procedure CefFrame_LoadRequest(AObj: ICefFrame; const request: ICefRequest); extdecl;
begin
  handleExceptionBegin
  AObj.LoadRequest(request);
  handleExceptionEnd
end;

//procedure
procedure CefFrame_LoadUrl(AObj: ICefFrame; const url: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.LoadUrl(url);
  handleExceptionEnd
end;

//procedure
procedure CefFrame_ExecuteJavaScript(AObj: ICefFrame; const code,  scriptUrl: PChar; startLine: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.ExecuteJavaScript(code,  scriptUrl, startLine);
  handleExceptionEnd
end;

//procedure
procedure CefFrame_VisitDom(AObj: ICefFrame; const visitor: ICefDomVisitor); extdecl;
begin
  handleExceptionBegin
  AObj.VisitDom(visitor);
  handleExceptionEnd
end;

//procedure
procedure CefFrame_SendProcessMessage(AObj: ICefFrame; targetProcess: TCefProcessId; const message: ICefProcessMessage); extdecl;
begin
  handleExceptionBegin
  AObj.SendProcessMessage(targetProcess, message);
  handleExceptionEnd
end;


exports
  CefFrame_UnWrap,
  CefFrame_IsValid,
  CefFrame_IsMain,
  CefFrame_IsFocused,
  CefFrame_GetName,
  CefFrame_GetIdentifier,
  CefFrame_GetParent,
  CefFrame_GetUrl,
  CefFrame_GetBrowser,
  CefFrame_GetV8Context,
  CefFrame_CreateUrlRequest,
  CefFrame_Undo,
  CefFrame_Redo,
  CefFrame_Cut,
  CefFrame_Copy,
  CefFrame_Paste,
  CefFrame_Del,
  CefFrame_SelectAll,
  CefFrame_ViewSource,
  CefFrame_GetSource,
  CefFrame_GetText,
  CefFrame_LoadRequest,
  CefFrame_LoadUrl,
  CefFrame_ExecuteJavaScript,
  CefFrame_VisitDom,
  CefFrame_SendProcessMessage;