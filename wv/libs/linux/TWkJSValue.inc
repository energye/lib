// constructor
function TWkJSValue_Create(aResult: WebKitJavascriptResult; aIsException: LongBool; exception: PChar): TWkJSValue; extdecl;
begin
  {$define handleExceptionID := 2500}
  handleExceptionBegin
  Result := TWkJSValue.Create(aResult, aIsException, exception);
  handleExceptionEnd
end;

// constructor
function TWkJSValue_CreateWithWebKitJavascriptResult(aResult: WebKitJavascriptResult): TWkJSValue; extdecl;
begin
  {$define handleExceptionID := 2501}
  handleExceptionBegin
  Result := TWkJSValue.Create(aResult);
  handleExceptionEnd
end;

// function
procedure TWkJSValue_StringValue(AObj: TWkJSValue;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 2502}
  handleExceptionBegin
  StringBufferCreate(AObj.StringValue(), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
procedure TWkJSValue_NumberValue(AObj: TWkJSValue; var Result: double); extdecl;
begin
  {$define handleExceptionID := 2503}
  handleExceptionBegin
  Result := AObj.NumberValue();
  handleExceptionEnd
end;

// function
function TWkJSValue_IntegerValue(AObj: TWkJSValue): integer; extdecl;
begin
  {$define handleExceptionID := 2504}
  handleExceptionBegin
  Result := AObj.IntegerValue();
  handleExceptionEnd
end;

// function
function TWkJSValue_BooleanValue(AObj: TWkJSValue): LongBool; extdecl;
begin
  {$define handleExceptionID := 2505}
  handleExceptionBegin
  Result := AObj.BooleanValue();
  handleExceptionEnd
end;

// function
procedure TWkJSValue_ExceptionMessage(AObj: TWkJSValue;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 2506}
  handleExceptionBegin
  StringBufferCreate(AObj.ExceptionMessage(), AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TWkJSValue_ValueType(AObj: TWkJSValue): uWkJSValue.JSType; extdecl;
begin
  {$define handleExceptionID := 2507}
  handleExceptionBegin
  Result := AObj.ValueType;
  handleExceptionEnd
end;

exports
  TWkJSValue_Create,
  TWkJSValue_CreateWithWebKitJavascriptResult,
  TWkJSValue_StringValue,
  TWkJSValue_NumberValue,
  TWkJSValue_IntegerValue,
  TWkJSValue_BooleanValue,
  TWkJSValue_ExceptionMessage,
  TWkJSValue_ValueType;