
//constructor
function WkJSValue_Create(aResult: WebKitJavascriptResult; aIsException: LongBool; exception: PChar): TWkJSValue; extdecl;
begin
  handleExceptionBegin
  Result := TWkJSValue.Create(aResult, aIsException, exception);
  handleExceptionEnd
end;

//constructor
function WkJSValue_Create1(aResult: WebKitJavascriptResult): TWkJSValue; extdecl;
begin
  handleExceptionBegin
  Result := TWkJSValue.Create(aResult);
  handleExceptionEnd
end;

//property
function WkJSValue_ValueType(AObj: TWkJSValue): JSType; extdecl;
begin
  handleExceptionBegin
  Result := AObj.ValueType;
  handleExceptionEnd
end;

//function
function WkJSValue_StringValue(AObj: TWkJSValue): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.StringValue());
  handleExceptionEnd
end;

//function
procedure WkJSValue_NumberValue(AObj: TWkJSValue; var Result: double); extdecl;
begin
  handleExceptionBegin
  Result := AObj.NumberValue();
  handleExceptionEnd
end;

//function
function WkJSValue_IntegerValue(AObj: TWkJSValue): integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IntegerValue();
  handleExceptionEnd
end;

//function
function WkJSValue_BooleanValue(AObj: TWkJSValue): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.BooleanValue();
  handleExceptionEnd
end;

//function
function WkJSValue_ExceptionMessage(AObj: TWkJSValue): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.ExceptionMessage());
  handleExceptionEnd
end;


exports
  WkJSValue_Create,
  WkJSValue_Create1,
  WkJSValue_ValueType,
  WkJSValue_StringValue,
  WkJSValue_NumberValue,
  WkJSValue_IntegerValue,
  WkJSValue_BooleanValue,
  WkJSValue_ExceptionMessage;