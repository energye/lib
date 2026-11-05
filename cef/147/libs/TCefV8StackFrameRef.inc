// constructor
function TCefV8StackFrameRef_Create(data: Pointer; out IntfV8StackFrame: ICefV8StackFrame): TCefV8StackFrameRef; extdecl;
begin
  {$define handleExceptionID := 22200}
  handleExceptionBegin
  Result := TCefV8StackFrameRef.Create(data);
  IntfV8StackFrame := Result as ICefV8StackFrame;
  handleExceptionEnd
end;

// function
function TCefV8StackFrameRef_IsValid(AObj: ICefV8StackFrame): LongBool; extdecl;
begin
  {$define handleExceptionID := 22201}
  handleExceptionBegin
  Result := AObj.IsValid();
  handleExceptionEnd
end;

// function
procedure TCefV8StackFrameRef_GetScriptName(AObj: ICefV8StackFrame;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 22202}
  handleExceptionBegin
  StringBufferCreate(string(AObj.GetScriptName()), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
procedure TCefV8StackFrameRef_GetScriptNameOrSourceUrl(AObj: ICefV8StackFrame;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 22203}
  handleExceptionBegin
  StringBufferCreate(string(AObj.GetScriptNameOrSourceUrl()), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
procedure TCefV8StackFrameRef_GetFunctionName(AObj: ICefV8StackFrame;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 22204}
  handleExceptionBegin
  StringBufferCreate(string(AObj.GetFunctionName()), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
function TCefV8StackFrameRef_GetLineNumber(AObj: ICefV8StackFrame): Integer; extdecl;
begin
  {$define handleExceptionID := 22205}
  handleExceptionBegin
  Result := AObj.GetLineNumber();
  handleExceptionEnd
end;

// function
function TCefV8StackFrameRef_GetColumn(AObj: ICefV8StackFrame): Integer; extdecl;
begin
  {$define handleExceptionID := 22206}
  handleExceptionBegin
  Result := AObj.GetColumn();
  handleExceptionEnd
end;

// function
function TCefV8StackFrameRef_IsEval(AObj: ICefV8StackFrame): LongBool; extdecl;
begin
  {$define handleExceptionID := 22207}
  handleExceptionBegin
  Result := AObj.IsEval();
  handleExceptionEnd
end;

// function
function TCefV8StackFrameRef_IsConstructor(AObj: ICefV8StackFrame): LongBool; extdecl;
begin
  {$define handleExceptionID := 22208}
  handleExceptionBegin
  Result := AObj.IsConstructor();
  handleExceptionEnd
end;

// function static
procedure TCefV8StackFrameRef_UnWrap(data: Pointer; var Result: ICefV8StackFrame); extdecl;
begin
  Result := TCefV8StackFrameRef.UnWrap(data);
end;

exports
  TCefV8StackFrameRef_Create,
  TCefV8StackFrameRef_IsValid,
  TCefV8StackFrameRef_GetScriptName,
  TCefV8StackFrameRef_GetScriptNameOrSourceUrl,
  TCefV8StackFrameRef_GetFunctionName,
  TCefV8StackFrameRef_GetLineNumber,
  TCefV8StackFrameRef_GetColumn,
  TCefV8StackFrameRef_IsEval,
  TCefV8StackFrameRef_IsConstructor,
  TCefV8StackFrameRef_UnWrap;