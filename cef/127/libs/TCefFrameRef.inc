// constructor
function TCefFrameRef_Create(data: Pointer; out IntfFrame: ICefFrame): TCefFrameRef; extdecl;
begin
  {$define handleExceptionID := 19300}
  handleExceptionBegin
  Result := TCefFrameRef.Create(data);
  IntfFrame := Result as ICefFrame;
  handleExceptionEnd
end;

// function
function TCefFrameRef_IsValid(AObj: ICefFrame): LongBool; extdecl;
begin
  {$define handleExceptionID := 19301}
  handleExceptionBegin
  Result := AObj.IsValid();
  handleExceptionEnd
end;

// function
function TCefFrameRef_IsMain(AObj: ICefFrame): LongBool; extdecl;
begin
  {$define handleExceptionID := 19302}
  handleExceptionBegin
  Result := AObj.IsMain();
  handleExceptionEnd
end;

// function
function TCefFrameRef_IsFocused(AObj: ICefFrame): LongBool; extdecl;
begin
  {$define handleExceptionID := 19303}
  handleExceptionBegin
  Result := AObj.IsFocused();
  handleExceptionEnd
end;

// function
procedure TCefFrameRef_GetName(AObj: ICefFrame;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 19304}
  handleExceptionBegin
  StringBufferCreate(string(AObj.GetName()), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
procedure TCefFrameRef_GetIdentifier(AObj: ICefFrame;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 19305}
  handleExceptionBegin
  StringBufferCreate(string(AObj.GetIdentifier()), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
procedure TCefFrameRef_GetParent(AObj: ICefFrame; var Result: ICefFrame); extdecl;
begin
  {$define handleExceptionID := 19306}
  handleExceptionBegin
  Result := AObj.GetParent();
  handleExceptionEnd
end;

// function
procedure TCefFrameRef_GetUrl(AObj: ICefFrame;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 19307}
  handleExceptionBegin
  StringBufferCreate(string(AObj.GetUrl()), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
procedure TCefFrameRef_GetBrowser(AObj: ICefFrame; var Result: ICefBrowser); extdecl;
begin
  {$define handleExceptionID := 19308}
  handleExceptionBegin
  Result := AObj.GetBrowser();
  handleExceptionEnd
end;

// function
procedure TCefFrameRef_GetV8Context(AObj: ICefFrame; var Result: ICefv8Context); extdecl;
begin
  {$define handleExceptionID := 19309}
  handleExceptionBegin
  Result := AObj.GetV8Context();
  handleExceptionEnd
end;

// function
procedure TCefFrameRef_CreateUrlRequest(AObj: ICefFrame; const request: ICefRequest; const client: ICefUrlrequestClient; var Result: ICefUrlRequest); extdecl;
begin
  {$define handleExceptionID := 19310}
  handleExceptionBegin
  Result := AObj.CreateUrlRequest(request, client);
  handleExceptionEnd
end;

// function static
procedure TCefFrameRef_UnWrap(data: Pointer; var Result: ICefFrame); extdecl;
begin
  Result := TCefFrameRef.UnWrap(data);
end;

// procedure
procedure TCefFrameRef_Undo(AObj: ICefFrame); extdecl;
begin
  {$define handleExceptionID := 19311}
  handleExceptionBegin
  AObj.Undo();
  handleExceptionEnd
end;

// procedure
procedure TCefFrameRef_Redo(AObj: ICefFrame); extdecl;
begin
  {$define handleExceptionID := 19312}
  handleExceptionBegin
  AObj.Redo();
  handleExceptionEnd
end;

// procedure
procedure TCefFrameRef_Cut(AObj: ICefFrame); extdecl;
begin
  {$define handleExceptionID := 19313}
  handleExceptionBegin
  AObj.Cut();
  handleExceptionEnd
end;

// procedure
procedure TCefFrameRef_Copy(AObj: ICefFrame); extdecl;
begin
  {$define handleExceptionID := 19314}
  handleExceptionBegin
  AObj.Copy();
  handleExceptionEnd
end;

// procedure
procedure TCefFrameRef_Paste(AObj: ICefFrame); extdecl;
begin
  {$define handleExceptionID := 19315}
  handleExceptionBegin
  AObj.Paste();
  handleExceptionEnd
end;

// procedure
procedure TCefFrameRef_Del(AObj: ICefFrame); extdecl;
begin
  {$define handleExceptionID := 19316}
  handleExceptionBegin
  AObj.Del();
  handleExceptionEnd
end;

// procedure
procedure TCefFrameRef_SelectAll(AObj: ICefFrame); extdecl;
begin
  {$define handleExceptionID := 19317}
  handleExceptionBegin
  AObj.SelectAll();
  handleExceptionEnd
end;

// procedure
procedure TCefFrameRef_ViewSource(AObj: ICefFrame); extdecl;
begin
  {$define handleExceptionID := 19318}
  handleExceptionBegin
  AObj.ViewSource();
  handleExceptionEnd
end;

// procedure
procedure TCefFrameRef_GetSource(AObj: ICefFrame; const visitor: ICefStringVisitor); extdecl;
begin
  {$define handleExceptionID := 19319}
  handleExceptionBegin
  AObj.GetSource(visitor);
  handleExceptionEnd
end;

// procedure
procedure TCefFrameRef_GetText(AObj: ICefFrame; const visitor: ICefStringVisitor); extdecl;
begin
  {$define handleExceptionID := 19320}
  handleExceptionBegin
  AObj.GetText(visitor);
  handleExceptionEnd
end;

// procedure
procedure TCefFrameRef_LoadRequest(AObj: ICefFrame; const request: ICefRequest); extdecl;
begin
  {$define handleExceptionID := 19321}
  handleExceptionBegin
  AObj.LoadRequest(request);
  handleExceptionEnd
end;

// procedure
procedure TCefFrameRef_LoadUrl(AObj: ICefFrame; const url: PChar); extdecl;
begin
  {$define handleExceptionID := 19322}
  handleExceptionBegin
  AObj.LoadUrl(PCharToUStr(url));
  handleExceptionEnd
end;

// procedure
procedure TCefFrameRef_ExecuteJavaScript(AObj: ICefFrame; const code: PChar; const scriptUrl: PChar; startLine: Integer); extdecl;
begin
  {$define handleExceptionID := 19323}
  handleExceptionBegin
  AObj.ExecuteJavaScript(PCharToUStr(code), PCharToUStr(scriptUrl), startLine);
  handleExceptionEnd
end;

// procedure
procedure TCefFrameRef_VisitDom(AObj: ICefFrame; const visitor: ICefDomVisitor); extdecl;
begin
  {$define handleExceptionID := 19324}
  handleExceptionBegin
  AObj.VisitDom(visitor);
  handleExceptionEnd
end;

// procedure
procedure TCefFrameRef_SendProcessMessage(AObj: ICefFrame; targetProcess: TCefProcessId; const message_: ICefProcessMessage); extdecl;
begin
  {$define handleExceptionID := 19325}
  handleExceptionBegin
  AObj.SendProcessMessage(targetProcess, message_);
  handleExceptionEnd
end;

exports
  TCefFrameRef_Create,
  TCefFrameRef_IsValid,
  TCefFrameRef_IsMain,
  TCefFrameRef_IsFocused,
  TCefFrameRef_GetName,
  TCefFrameRef_GetIdentifier,
  TCefFrameRef_GetParent,
  TCefFrameRef_GetUrl,
  TCefFrameRef_GetBrowser,
  TCefFrameRef_GetV8Context,
  TCefFrameRef_CreateUrlRequest,
  TCefFrameRef_UnWrap,
  TCefFrameRef_Undo,
  TCefFrameRef_Redo,
  TCefFrameRef_Cut,
  TCefFrameRef_Copy,
  TCefFrameRef_Paste,
  TCefFrameRef_Del,
  TCefFrameRef_SelectAll,
  TCefFrameRef_ViewSource,
  TCefFrameRef_GetSource,
  TCefFrameRef_GetText,
  TCefFrameRef_LoadRequest,
  TCefFrameRef_LoadUrl,
  TCefFrameRef_ExecuteJavaScript,
  TCefFrameRef_VisitDom,
  TCefFrameRef_SendProcessMessage;