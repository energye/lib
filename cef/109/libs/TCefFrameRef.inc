// constructor
function TCefFrameRef_Create(data: Pointer; out IntfFrame: ICefFrame): TCefFrameRef; extdecl;
begin
  {$define handleExceptionID := 18700}
  handleExceptionBegin
  Result := TCefFrameRef.Create(data);
  IntfFrame := Result as ICefFrame;
  handleExceptionEnd
end;

// function
function TCefFrameRef_IsValid(AObj: ICefFrame): LongBool; extdecl;
begin
  {$define handleExceptionID := 18701}
  handleExceptionBegin
  Result := AObj.IsValid();
  handleExceptionEnd
end;

// function
function TCefFrameRef_IsMain(AObj: ICefFrame): LongBool; extdecl;
begin
  {$define handleExceptionID := 18702}
  handleExceptionBegin
  Result := AObj.IsMain();
  handleExceptionEnd
end;

// function
function TCefFrameRef_IsFocused(AObj: ICefFrame): LongBool; extdecl;
begin
  {$define handleExceptionID := 18703}
  handleExceptionBegin
  Result := AObj.IsFocused();
  handleExceptionEnd
end;

// function
procedure TCefFrameRef_GetName(AObj: ICefFrame;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 18704}
  handleExceptionBegin
  StringBufferCreate(string(AObj.GetName()), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
procedure TCefFrameRef_GetIdentifier(AObj: ICefFrame; var Result: Int64); extdecl;
begin
  {$define handleExceptionID := 18705}
  handleExceptionBegin
  Result := AObj.GetIdentifier();
  handleExceptionEnd
end;

// function
procedure TCefFrameRef_GetParent(AObj: ICefFrame; var Result: ICefFrame); extdecl;
begin
  {$define handleExceptionID := 18706}
  handleExceptionBegin
  Result := AObj.GetParent();
  handleExceptionEnd
end;

// function
procedure TCefFrameRef_GetUrl(AObj: ICefFrame;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 18707}
  handleExceptionBegin
  StringBufferCreate(string(AObj.GetUrl()), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
procedure TCefFrameRef_GetBrowser(AObj: ICefFrame; var Result: ICefBrowser); extdecl;
begin
  {$define handleExceptionID := 18708}
  handleExceptionBegin
  Result := AObj.GetBrowser();
  handleExceptionEnd
end;

// function
procedure TCefFrameRef_GetV8Context(AObj: ICefFrame; var Result: ICefv8Context); extdecl;
begin
  {$define handleExceptionID := 18709}
  handleExceptionBegin
  Result := AObj.GetV8Context();
  handleExceptionEnd
end;

// function
procedure TCefFrameRef_CreateUrlRequest(AObj: ICefFrame; const request: ICefRequest; const client: ICefUrlrequestClient; var Result: ICefUrlRequest); extdecl;
begin
  {$define handleExceptionID := 18710}
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
  {$define handleExceptionID := 18711}
  handleExceptionBegin
  AObj.Undo();
  handleExceptionEnd
end;

// procedure
procedure TCefFrameRef_Redo(AObj: ICefFrame); extdecl;
begin
  {$define handleExceptionID := 18712}
  handleExceptionBegin
  AObj.Redo();
  handleExceptionEnd
end;

// procedure
procedure TCefFrameRef_Cut(AObj: ICefFrame); extdecl;
begin
  {$define handleExceptionID := 18713}
  handleExceptionBegin
  AObj.Cut();
  handleExceptionEnd
end;

// procedure
procedure TCefFrameRef_Copy(AObj: ICefFrame); extdecl;
begin
  {$define handleExceptionID := 18714}
  handleExceptionBegin
  AObj.Copy();
  handleExceptionEnd
end;

// procedure
procedure TCefFrameRef_Paste(AObj: ICefFrame); extdecl;
begin
  {$define handleExceptionID := 18715}
  handleExceptionBegin
  AObj.Paste();
  handleExceptionEnd
end;

// procedure
procedure TCefFrameRef_Del(AObj: ICefFrame); extdecl;
begin
  {$define handleExceptionID := 18716}
  handleExceptionBegin
  AObj.Del();
  handleExceptionEnd
end;

// procedure
procedure TCefFrameRef_SelectAll(AObj: ICefFrame); extdecl;
begin
  {$define handleExceptionID := 18717}
  handleExceptionBegin
  AObj.SelectAll();
  handleExceptionEnd
end;

// procedure
procedure TCefFrameRef_ViewSource(AObj: ICefFrame); extdecl;
begin
  {$define handleExceptionID := 18718}
  handleExceptionBegin
  AObj.ViewSource();
  handleExceptionEnd
end;

// procedure
procedure TCefFrameRef_GetSource(AObj: ICefFrame; const visitor: ICefStringVisitor); extdecl;
begin
  {$define handleExceptionID := 18719}
  handleExceptionBegin
  AObj.GetSource(visitor);
  handleExceptionEnd
end;

// procedure
procedure TCefFrameRef_GetText(AObj: ICefFrame; const visitor: ICefStringVisitor); extdecl;
begin
  {$define handleExceptionID := 18720}
  handleExceptionBegin
  AObj.GetText(visitor);
  handleExceptionEnd
end;

// procedure
procedure TCefFrameRef_LoadRequest(AObj: ICefFrame; const request: ICefRequest); extdecl;
begin
  {$define handleExceptionID := 18721}
  handleExceptionBegin
  AObj.LoadRequest(request);
  handleExceptionEnd
end;

// procedure
procedure TCefFrameRef_LoadUrl(AObj: ICefFrame; const url: PChar); extdecl;
begin
  {$define handleExceptionID := 18722}
  handleExceptionBegin
  AObj.LoadUrl(PCharToUStr(url));
  handleExceptionEnd
end;

// procedure
procedure TCefFrameRef_ExecuteJavaScript(AObj: ICefFrame; const code: PChar; const scriptUrl: PChar; startLine: Integer); extdecl;
begin
  {$define handleExceptionID := 18723}
  handleExceptionBegin
  AObj.ExecuteJavaScript(PCharToUStr(code), PCharToUStr(scriptUrl), startLine);
  handleExceptionEnd
end;

// procedure
procedure TCefFrameRef_VisitDom(AObj: ICefFrame; const visitor: ICefDomVisitor); extdecl;
begin
  {$define handleExceptionID := 18724}
  handleExceptionBegin
  AObj.VisitDom(visitor);
  handleExceptionEnd
end;

// procedure
procedure TCefFrameRef_SendProcessMessage(AObj: ICefFrame; targetProcess: TCefProcessId; const message_: ICefProcessMessage); extdecl;
begin
  {$define handleExceptionID := 18725}
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