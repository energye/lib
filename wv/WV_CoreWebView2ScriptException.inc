
//constructor
function CoreWebView2ScriptException_Create(const aBaseIntf: ICoreWebView2ScriptException): TCoreWebView2ScriptException; extdecl;
begin
  handleExceptionBegin
  Result := TCoreWebView2ScriptException.Create(aBaseIntf);
  handleExceptionEnd
end;

//property
function CoreWebView2ScriptException_Initialized(AObj: TCoreWebView2ScriptException): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Initialized;
  handleExceptionEnd
end;

//property
procedure CoreWebView2ScriptException_BaseIntf(AObj: TCoreWebView2ScriptException; var Result: ICoreWebView2ScriptException); extdecl;
begin
  handleExceptionBegin
  Result := AObj.BaseIntf;
  handleExceptionEnd
end;

//property
function CoreWebView2ScriptException_LineNumber(AObj: TCoreWebView2ScriptException): uint32; extdecl;
begin
  handleExceptionBegin
  Result := AObj.LineNumber;
  handleExceptionEnd
end;

//property
function CoreWebView2ScriptException_ColumnNumber(AObj: TCoreWebView2ScriptException): uint32; extdecl;
begin
  handleExceptionBegin
  Result := AObj.ColumnNumber;
  handleExceptionEnd
end;

//property
function CoreWebView2ScriptException_Name(AObj: TCoreWebView2ScriptException): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.Name);
  handleExceptionEnd
end;

//property
function CoreWebView2ScriptException_Message(AObj: TCoreWebView2ScriptException): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.Message_);
  handleExceptionEnd
end;

//function
function CoreWebView2ScriptException_ToJson(AObj: TCoreWebView2ScriptException): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.ToJson());
  handleExceptionEnd
end;


exports
  CoreWebView2ScriptException_Create,
  CoreWebView2ScriptException_Initialized,
  CoreWebView2ScriptException_BaseIntf,
  CoreWebView2ScriptException_LineNumber,
  CoreWebView2ScriptException_ColumnNumber,
  CoreWebView2ScriptException_Name,
  CoreWebView2ScriptException_Message,
  CoreWebView2ScriptException_ToJson;