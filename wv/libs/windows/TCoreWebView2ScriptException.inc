// constructor
function TCoreWebView2ScriptException_Create(const aBaseIntf: ICoreWebView2ScriptException): TCoreWebView2ScriptException; extdecl;
begin
  {$define handleExceptionID := 6700}
  handleExceptionBegin
  Result := TCoreWebView2ScriptException.Create(aBaseIntf);
  handleExceptionEnd
end;

// function
procedure TCoreWebView2ScriptException_ToJson(AObj: TCoreWebView2ScriptException;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 6701}
  handleExceptionBegin
  StringBufferCreate(string(AObj.ToJson()), AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TCoreWebView2ScriptException_Initialized(AObj: TCoreWebView2ScriptException): LongBool; extdecl;
begin
  {$define handleExceptionID := 6702}
  handleExceptionBegin
  Result := AObj.Initialized;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2ScriptException_BaseIntf(AObj: TCoreWebView2ScriptException; var Result: ICoreWebView2ScriptException); extdecl;
begin
  {$define handleExceptionID := 6703}
  handleExceptionBegin
  Result := AObj.BaseIntf;
  handleExceptionEnd
end;

// property
function TCoreWebView2ScriptException_LineNumber(AObj: TCoreWebView2ScriptException): cardinal; extdecl;
begin
  {$define handleExceptionID := 6704}
  handleExceptionBegin
  Result := AObj.LineNumber;
  handleExceptionEnd
end;

// property
function TCoreWebView2ScriptException_ColumnNumber(AObj: TCoreWebView2ScriptException): cardinal; extdecl;
begin
  {$define handleExceptionID := 6705}
  handleExceptionBegin
  Result := AObj.ColumnNumber;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2ScriptException_Name(AObj: TCoreWebView2ScriptException; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 6706}
  handleExceptionBegin
  StringBufferCreate(AObj.Name, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TCoreWebView2ScriptException_Message_(AObj: TCoreWebView2ScriptException; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 6707}
  handleExceptionBegin
  StringBufferCreate(AObj.Message_, AStrData, AStrSize);
  handleExceptionEnd
end;

exports
  TCoreWebView2ScriptException_Create,
  TCoreWebView2ScriptException_ToJson,
  TCoreWebView2ScriptException_Initialized,
  TCoreWebView2ScriptException_BaseIntf,
  TCoreWebView2ScriptException_LineNumber,
  TCoreWebView2ScriptException_ColumnNumber,
  TCoreWebView2ScriptException_Name,
  TCoreWebView2ScriptException_Message_;