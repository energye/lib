// constructor
function TCefV8ExceptionRef_Create(data: Pointer; out IntfV8Exception: ICefV8Exception): TCefV8ExceptionRef; extdecl;
begin
  {$define handleExceptionID := 21300}
  handleExceptionBegin
  Result := TCefV8ExceptionRef.Create(data);
  IntfV8Exception := Result as ICefV8Exception;
  handleExceptionEnd
end;

// function
procedure TCefV8ExceptionRef_GetMessage(AObj: ICefV8Exception;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 21301}
  handleExceptionBegin
  StringBufferCreate(string(AObj.GetMessage()), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
procedure TCefV8ExceptionRef_GetSourceLine(AObj: ICefV8Exception;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 21302}
  handleExceptionBegin
  StringBufferCreate(string(AObj.GetSourceLine()), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
procedure TCefV8ExceptionRef_GetScriptResourceName(AObj: ICefV8Exception;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 21303}
  handleExceptionBegin
  StringBufferCreate(string(AObj.GetScriptResourceName()), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
function TCefV8ExceptionRef_GetLineNumber(AObj: ICefV8Exception): Integer; extdecl;
begin
  {$define handleExceptionID := 21304}
  handleExceptionBegin
  Result := AObj.GetLineNumber();
  handleExceptionEnd
end;

// function
function TCefV8ExceptionRef_GetStartPosition(AObj: ICefV8Exception): Integer; extdecl;
begin
  {$define handleExceptionID := 21305}
  handleExceptionBegin
  Result := AObj.GetStartPosition();
  handleExceptionEnd
end;

// function
function TCefV8ExceptionRef_GetEndPosition(AObj: ICefV8Exception): Integer; extdecl;
begin
  {$define handleExceptionID := 21306}
  handleExceptionBegin
  Result := AObj.GetEndPosition();
  handleExceptionEnd
end;

// function
function TCefV8ExceptionRef_GetStartColumn(AObj: ICefV8Exception): Integer; extdecl;
begin
  {$define handleExceptionID := 21307}
  handleExceptionBegin
  Result := AObj.GetStartColumn();
  handleExceptionEnd
end;

// function
function TCefV8ExceptionRef_GetEndColumn(AObj: ICefV8Exception): Integer; extdecl;
begin
  {$define handleExceptionID := 21308}
  handleExceptionBegin
  Result := AObj.GetEndColumn();
  handleExceptionEnd
end;

// function static
procedure TCefV8ExceptionRef_UnWrap(data: Pointer; var Result: ICefV8Exception); extdecl;
begin
  Result := TCefV8ExceptionRef.UnWrap(data);
end;

exports
  TCefV8ExceptionRef_Create,
  TCefV8ExceptionRef_GetMessage,
  TCefV8ExceptionRef_GetSourceLine,
  TCefV8ExceptionRef_GetScriptResourceName,
  TCefV8ExceptionRef_GetLineNumber,
  TCefV8ExceptionRef_GetStartPosition,
  TCefV8ExceptionRef_GetEndPosition,
  TCefV8ExceptionRef_GetStartColumn,
  TCefV8ExceptionRef_GetEndColumn,
  TCefV8ExceptionRef_UnWrap;