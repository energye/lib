// constructor
function TCefv8ValueRef_Create(data: Pointer; out IntfV8Value: ICefv8Value): TCefv8ValueRef; extdecl;
begin
  {$define handleExceptionID := 21600}
  handleExceptionBegin
  Result := TCefv8ValueRef.Create(data);
  IntfV8Value := Result as ICefv8Value;
  handleExceptionEnd
end;

// function
function TCefv8ValueRef_IsValid(AObj: ICefv8Value): LongBool; extdecl;
begin
  {$define handleExceptionID := 21601}
  handleExceptionBegin
  Result := AObj.IsValid();
  handleExceptionEnd
end;

// function
function TCefv8ValueRef_IsUndefined(AObj: ICefv8Value): LongBool; extdecl;
begin
  {$define handleExceptionID := 21602}
  handleExceptionBegin
  Result := AObj.IsUndefined();
  handleExceptionEnd
end;

// function
function TCefv8ValueRef_IsNull(AObj: ICefv8Value): LongBool; extdecl;
begin
  {$define handleExceptionID := 21603}
  handleExceptionBegin
  Result := AObj.IsNull();
  handleExceptionEnd
end;

// function
function TCefv8ValueRef_IsBool(AObj: ICefv8Value): LongBool; extdecl;
begin
  {$define handleExceptionID := 21604}
  handleExceptionBegin
  Result := AObj.IsBool();
  handleExceptionEnd
end;

// function
function TCefv8ValueRef_IsInt(AObj: ICefv8Value): LongBool; extdecl;
begin
  {$define handleExceptionID := 21605}
  handleExceptionBegin
  Result := AObj.IsInt();
  handleExceptionEnd
end;

// function
function TCefv8ValueRef_IsUInt(AObj: ICefv8Value): LongBool; extdecl;
begin
  {$define handleExceptionID := 21606}
  handleExceptionBegin
  Result := AObj.IsUInt();
  handleExceptionEnd
end;

// function
function TCefv8ValueRef_IsDouble(AObj: ICefv8Value): LongBool; extdecl;
begin
  {$define handleExceptionID := 21607}
  handleExceptionBegin
  Result := AObj.IsDouble();
  handleExceptionEnd
end;

// function
function TCefv8ValueRef_IsDate(AObj: ICefv8Value): LongBool; extdecl;
begin
  {$define handleExceptionID := 21608}
  handleExceptionBegin
  Result := AObj.IsDate();
  handleExceptionEnd
end;

// function
function TCefv8ValueRef_IsString(AObj: ICefv8Value): LongBool; extdecl;
begin
  {$define handleExceptionID := 21609}
  handleExceptionBegin
  Result := AObj.IsString();
  handleExceptionEnd
end;

// function
function TCefv8ValueRef_IsObject(AObj: ICefv8Value): LongBool; extdecl;
begin
  {$define handleExceptionID := 21610}
  handleExceptionBegin
  Result := AObj.IsObject();
  handleExceptionEnd
end;

// function
function TCefv8ValueRef_IsArray(AObj: ICefv8Value): LongBool; extdecl;
begin
  {$define handleExceptionID := 21611}
  handleExceptionBegin
  Result := AObj.IsArray();
  handleExceptionEnd
end;

// function
function TCefv8ValueRef_IsArrayBuffer(AObj: ICefv8Value): LongBool; extdecl;
begin
  {$define handleExceptionID := 21612}
  handleExceptionBegin
  Result := AObj.IsArrayBuffer();
  handleExceptionEnd
end;

// function
function TCefv8ValueRef_IsFunction(AObj: ICefv8Value): LongBool; extdecl;
begin
  {$define handleExceptionID := 21613}
  handleExceptionBegin
  Result := AObj.IsFunction();
  handleExceptionEnd
end;

// function
function TCefv8ValueRef_IsPromise(AObj: ICefv8Value): LongBool; extdecl;
begin
  {$define handleExceptionID := 21614}
  handleExceptionBegin
  Result := AObj.IsPromise();
  handleExceptionEnd
end;

// function
function TCefv8ValueRef_IsSame(AObj: ICefv8Value; const that: ICefv8Value): LongBool; extdecl;
begin
  {$define handleExceptionID := 21615}
  handleExceptionBegin
  Result := AObj.IsSame(that);
  handleExceptionEnd
end;

// function
function TCefv8ValueRef_GetBoolValue(AObj: ICefv8Value): LongBool; extdecl;
begin
  {$define handleExceptionID := 21616}
  handleExceptionBegin
  Result := AObj.GetBoolValue();
  handleExceptionEnd
end;

// function
function TCefv8ValueRef_GetIntValue(AObj: ICefv8Value): Integer; extdecl;
begin
  {$define handleExceptionID := 21617}
  handleExceptionBegin
  Result := AObj.GetIntValue();
  handleExceptionEnd
end;

// function
function TCefv8ValueRef_GetUIntValue(AObj: ICefv8Value): Cardinal; extdecl;
begin
  {$define handleExceptionID := 21618}
  handleExceptionBegin
  Result := AObj.GetUIntValue();
  handleExceptionEnd
end;

// function
procedure TCefv8ValueRef_GetDoubleValue(AObj: ICefv8Value; var Result: Double); extdecl;
begin
  {$define handleExceptionID := 21619}
  handleExceptionBegin
  Result := AObj.GetDoubleValue();
  handleExceptionEnd
end;

// function
procedure TCefv8ValueRef_GetDateValue(AObj: ICefv8Value; var Result: Double); extdecl;
begin
  {$define handleExceptionID := 21620}
  handleExceptionBegin
  Result := AObj.GetDateValue();
  handleExceptionEnd
end;

// function
procedure TCefv8ValueRef_GetStringValue(AObj: ICefv8Value;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 21621}
  handleExceptionBegin
  StringBufferCreate(string(AObj.GetStringValue()), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
function TCefv8ValueRef_IsUserCreated(AObj: ICefv8Value): LongBool; extdecl;
begin
  {$define handleExceptionID := 21622}
  handleExceptionBegin
  Result := AObj.IsUserCreated();
  handleExceptionEnd
end;

// function
function TCefv8ValueRef_HasException(AObj: ICefv8Value): LongBool; extdecl;
begin
  {$define handleExceptionID := 21623}
  handleExceptionBegin
  Result := AObj.HasException();
  handleExceptionEnd
end;

// function
procedure TCefv8ValueRef_GetException(AObj: ICefv8Value; var Result: ICefV8Exception); extdecl;
begin
  {$define handleExceptionID := 21624}
  handleExceptionBegin
  Result := AObj.GetException();
  handleExceptionEnd
end;

// function
function TCefv8ValueRef_ClearException(AObj: ICefv8Value): LongBool; extdecl;
begin
  {$define handleExceptionID := 21625}
  handleExceptionBegin
  Result := AObj.ClearException();
  handleExceptionEnd
end;

// function
function TCefv8ValueRef_WillRethrowExceptions(AObj: ICefv8Value): LongBool; extdecl;
begin
  {$define handleExceptionID := 21626}
  handleExceptionBegin
  Result := AObj.WillRethrowExceptions();
  handleExceptionEnd
end;

// function
function TCefv8ValueRef_SetRethrowExceptions(AObj: ICefv8Value; rethrow: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 21627}
  handleExceptionBegin
  Result := AObj.SetRethrowExceptions(rethrow);
  handleExceptionEnd
end;

// function
function TCefv8ValueRef_HasValueByKey(AObj: ICefv8Value; const key: PChar): LongBool; extdecl;
begin
  {$define handleExceptionID := 21628}
  handleExceptionBegin
  Result := AObj.HasValueByKey(PCharToUStr(key));
  handleExceptionEnd
end;

// function
function TCefv8ValueRef_HasValueByIndex(AObj: ICefv8Value; index: Integer): LongBool; extdecl;
begin
  {$define handleExceptionID := 21629}
  handleExceptionBegin
  Result := AObj.HasValueByIndex(index);
  handleExceptionEnd
end;

// function
function TCefv8ValueRef_DeleteValueByKey(AObj: ICefv8Value; const key: PChar): LongBool; extdecl;
begin
  {$define handleExceptionID := 21630}
  handleExceptionBegin
  Result := AObj.DeleteValueByKey(PCharToUStr(key));
  handleExceptionEnd
end;

// function
function TCefv8ValueRef_DeleteValueByIndex(AObj: ICefv8Value; index: Integer): LongBool; extdecl;
begin
  {$define handleExceptionID := 21631}
  handleExceptionBegin
  Result := AObj.DeleteValueByIndex(index);
  handleExceptionEnd
end;

// function
procedure TCefv8ValueRef_GetValueByKey(AObj: ICefv8Value; const key: PChar; var Result: ICefv8Value); extdecl;
begin
  {$define handleExceptionID := 21632}
  handleExceptionBegin
  Result := AObj.GetValueByKey(PCharToUStr(key));
  handleExceptionEnd
end;

// function
procedure TCefv8ValueRef_GetValueByIndex(AObj: ICefv8Value; index: Integer; var Result: ICefv8Value); extdecl;
begin
  {$define handleExceptionID := 21633}
  handleExceptionBegin
  Result := AObj.GetValueByIndex(index);
  handleExceptionEnd
end;

// function
function TCefv8ValueRef_SetValueByKey(AObj: ICefv8Value; const key: PChar; const value: ICefv8Value; attribute: TCefV8PropertyAttributes): LongBool; extdecl;
begin
  {$define handleExceptionID := 21634}
  handleExceptionBegin
  Result := AObj.SetValueByKey(PCharToUStr(key), value, attribute);
  handleExceptionEnd
end;

// function
function TCefv8ValueRef_SetValueByIndex(AObj: ICefv8Value; index: Integer; const value: ICefv8Value): LongBool; extdecl;
begin
  {$define handleExceptionID := 21635}
  handleExceptionBegin
  Result := AObj.SetValueByIndex(index, value);
  handleExceptionEnd
end;

// function
function TCefv8ValueRef_SetValueByAccessor(AObj: ICefv8Value; const key: PChar; settings: TCefV8AccessControls; attribute: TCefV8PropertyAttributes): LongBool; extdecl;
begin
  {$define handleExceptionID := 21636}
  handleExceptionBegin
  Result := AObj.SetValueByAccessor(PCharToUStr(key), settings, attribute);
  handleExceptionEnd
end;

// function
function TCefv8ValueRef_GetKeys(AObj: ICefv8Value; const keys: TStrings): Integer; extdecl;
begin
  {$define handleExceptionID := 21637}
  handleExceptionBegin
  Result := AObj.GetKeys(keys);
  handleExceptionEnd
end;

// function
function TCefv8ValueRef_SetUserData(AObj: ICefv8Value; const data: ICefv8Value): LongBool; extdecl;
begin
  {$define handleExceptionID := 21638}
  handleExceptionBegin
  Result := AObj.SetUserData(data);
  handleExceptionEnd
end;

// function
procedure TCefv8ValueRef_GetUserData(AObj: ICefv8Value; var Result: ICefv8Value); extdecl;
begin
  {$define handleExceptionID := 21639}
  handleExceptionBegin
  Result := AObj.GetUserData();
  handleExceptionEnd
end;

// function
function TCefv8ValueRef_GetExternallyAllocatedMemory(AObj: ICefv8Value): Integer; extdecl;
begin
  {$define handleExceptionID := 21640}
  handleExceptionBegin
  Result := AObj.GetExternallyAllocatedMemory();
  handleExceptionEnd
end;

// function
function TCefv8ValueRef_AdjustExternallyAllocatedMemory(AObj: ICefv8Value; changeInBytes: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 21641}
  handleExceptionBegin
  Result := AObj.AdjustExternallyAllocatedMemory(changeInBytes);
  handleExceptionEnd
end;

// function
function TCefv8ValueRef_GetArrayLength(AObj: ICefv8Value): Integer; extdecl;
begin
  {$define handleExceptionID := 21642}
  handleExceptionBegin
  Result := AObj.GetArrayLength();
  handleExceptionEnd
end;

// function
procedure TCefv8ValueRef_GetArrayBufferReleaseCallback(AObj: ICefv8Value; var Result: ICefv8ArrayBufferReleaseCallback); extdecl;
begin
  {$define handleExceptionID := 21643}
  handleExceptionBegin
  Result := AObj.GetArrayBufferReleaseCallback();
  handleExceptionEnd
end;

// function
function TCefv8ValueRef_NeuterArrayBuffer(AObj: ICefv8Value): LongBool; extdecl;
begin
  {$define handleExceptionID := 21644}
  handleExceptionBegin
  Result := AObj.NeuterArrayBuffer();
  handleExceptionEnd
end;

// function
procedure TCefv8ValueRef_GetFunctionName(AObj: ICefv8Value;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 21645}
  handleExceptionBegin
  StringBufferCreate(string(AObj.GetFunctionName()), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
procedure TCefv8ValueRef_GetFunctionHandler(AObj: ICefv8Value; var Result: ICefv8Handler); extdecl;
begin
  {$define handleExceptionID := 21646}
  handleExceptionBegin
  Result := AObj.GetFunctionHandler();
  handleExceptionEnd
end;

// function
procedure TCefv8ValueRef_ExecuteFunction(AObj: ICefv8Value; const obj: ICefv8Value; const arguments: TCefv8ValueArray; argumentsCount: Integer; var Result: ICefv8Value); extdecl;
var
  Temparguments: TCefv8ValueArray = nil;
  TempargumentsIdx: Integer;
begin
  {$define handleExceptionID := 21647}
  handleExceptionBegin
  SetLength(Temparguments, argumentsCount);
  for TempargumentsIdx := 0 to argumentsCount - 1 do
  begin
    Temparguments[TempargumentsIdx] := arguments[TempargumentsIdx]
  end;
  Result := AObj.ExecuteFunction(obj, Temparguments);
  SetLength(Temparguments, 0);
  handleExceptionEnd
end;

// function
procedure TCefv8ValueRef_ExecuteFunctionWithContext(AObj: ICefv8Value; const context: ICefv8Context; const obj: ICefv8Value; const arguments: TCefv8ValueArray; argumentsCount: Integer; var Result: ICefv8Value); extdecl;
var
  Temparguments: TCefv8ValueArray = nil;
  TempargumentsIdx: Integer;
begin
  {$define handleExceptionID := 21648}
  handleExceptionBegin
  SetLength(Temparguments, argumentsCount);
  for TempargumentsIdx := 0 to argumentsCount - 1 do
  begin
    Temparguments[TempargumentsIdx] := arguments[TempargumentsIdx]
  end;
  Result := AObj.ExecuteFunctionWithContext(context, obj, Temparguments);
  SetLength(Temparguments, 0);
  handleExceptionEnd
end;

// function
function TCefv8ValueRef_ResolvePromise(AObj: ICefv8Value; const arg: ICefv8Value): LongBool; extdecl;
begin
  {$define handleExceptionID := 21649}
  handleExceptionBegin
  Result := AObj.ResolvePromise(arg);
  handleExceptionEnd
end;

// function
function TCefv8ValueRef_RejectPromise(AObj: ICefv8Value; const errorMsg: PChar): LongBool; extdecl;
begin
  {$define handleExceptionID := 21650}
  handleExceptionBegin
  Result := AObj.RejectPromise(PCharToUStr(errorMsg));
  handleExceptionEnd
end;

// function static
procedure TCefv8ValueRef_UnWrap(data: Pointer; var Result: ICefv8Value); extdecl;
begin
  Result := TCefv8ValueRef.UnWrap(data);
end;

// function static
procedure TCefv8ValueRef_NewUndefined(var Result: ICefv8Value); extdecl;
begin
  Result := TCefv8ValueRef.NewUndefined();
end;

// function static
procedure TCefv8ValueRef_NewNull(var Result: ICefv8Value); extdecl;
begin
  Result := TCefv8ValueRef.NewNull();
end;

// function static
procedure TCefv8ValueRef_NewBool(value: LongBool; var Result: ICefv8Value); extdecl;
begin
  Result := TCefv8ValueRef.NewBool(value);
end;

// function static
procedure TCefv8ValueRef_NewInt(value: Integer; var Result: ICefv8Value); extdecl;
begin
  Result := TCefv8ValueRef.NewInt(value);
end;

// function static
procedure TCefv8ValueRef_NewUInt(value: Cardinal; var Result: ICefv8Value); extdecl;
begin
  Result := TCefv8ValueRef.NewUInt(value);
end;

// function static
procedure TCefv8ValueRef_NewDouble(var value: Double; var Result: ICefv8Value); extdecl;
begin
  Result := TCefv8ValueRef.NewDouble(value);
end;

// function static
procedure TCefv8ValueRef_NewDate(var value: Double; var Result: ICefv8Value); extdecl;
begin
  Result := TCefv8ValueRef.NewDate(value);
end;

// function static
procedure TCefv8ValueRef_NewString(const str: PChar; var Result: ICefv8Value); extdecl;
begin
  Result := TCefv8ValueRef.NewString(str);
end;

// function static
procedure TCefv8ValueRef_NewObject(const Accessor: ICefV8Accessor; const Interceptor: ICefV8Interceptor; var Result: ICefv8Value); extdecl;
begin
  Result := TCefv8ValueRef.NewObject(Accessor, Interceptor);
end;

// function static
procedure TCefv8ValueRef_NewArray(len: Integer; var Result: ICefv8Value); extdecl;
begin
  Result := TCefv8ValueRef.NewArray(len);
end;

// function static
procedure TCefv8ValueRef_NewArrayBuffer(buffer: Pointer; length: NativeUInt; const callback: ICefv8ArrayBufferReleaseCallback; var Result: ICefv8Value); extdecl;
begin
  Result := TCefv8ValueRef.NewArrayBuffer(buffer, length, callback);
end;

// function static
procedure TCefv8ValueRef_NewFunction(const name: PChar; const handler: ICefv8Handler; var Result: ICefv8Value); extdecl;
begin
  Result := TCefv8ValueRef.NewFunction(name, handler);
end;

// function static
procedure TCefv8ValueRef_NewPromise(var Result: ICefv8Value); extdecl;
begin
  Result := TCefv8ValueRef.NewPromise();
end;

exports
  TCefv8ValueRef_Create,
  TCefv8ValueRef_IsValid,
  TCefv8ValueRef_IsUndefined,
  TCefv8ValueRef_IsNull,
  TCefv8ValueRef_IsBool,
  TCefv8ValueRef_IsInt,
  TCefv8ValueRef_IsUInt,
  TCefv8ValueRef_IsDouble,
  TCefv8ValueRef_IsDate,
  TCefv8ValueRef_IsString,
  TCefv8ValueRef_IsObject,
  TCefv8ValueRef_IsArray,
  TCefv8ValueRef_IsArrayBuffer,
  TCefv8ValueRef_IsFunction,
  TCefv8ValueRef_IsPromise,
  TCefv8ValueRef_IsSame,
  TCefv8ValueRef_GetBoolValue,
  TCefv8ValueRef_GetIntValue,
  TCefv8ValueRef_GetUIntValue,
  TCefv8ValueRef_GetDoubleValue,
  TCefv8ValueRef_GetDateValue,
  TCefv8ValueRef_GetStringValue,
  TCefv8ValueRef_IsUserCreated,
  TCefv8ValueRef_HasException,
  TCefv8ValueRef_GetException,
  TCefv8ValueRef_ClearException,
  TCefv8ValueRef_WillRethrowExceptions,
  TCefv8ValueRef_SetRethrowExceptions,
  TCefv8ValueRef_HasValueByKey,
  TCefv8ValueRef_HasValueByIndex,
  TCefv8ValueRef_DeleteValueByKey,
  TCefv8ValueRef_DeleteValueByIndex,
  TCefv8ValueRef_GetValueByKey,
  TCefv8ValueRef_GetValueByIndex,
  TCefv8ValueRef_SetValueByKey,
  TCefv8ValueRef_SetValueByIndex,
  TCefv8ValueRef_SetValueByAccessor,
  TCefv8ValueRef_GetKeys,
  TCefv8ValueRef_SetUserData,
  TCefv8ValueRef_GetUserData,
  TCefv8ValueRef_GetExternallyAllocatedMemory,
  TCefv8ValueRef_AdjustExternallyAllocatedMemory,
  TCefv8ValueRef_GetArrayLength,
  TCefv8ValueRef_GetArrayBufferReleaseCallback,
  TCefv8ValueRef_NeuterArrayBuffer,
  TCefv8ValueRef_GetFunctionName,
  TCefv8ValueRef_GetFunctionHandler,
  TCefv8ValueRef_ExecuteFunction,
  TCefv8ValueRef_ExecuteFunctionWithContext,
  TCefv8ValueRef_ResolvePromise,
  TCefv8ValueRef_RejectPromise,
  TCefv8ValueRef_UnWrap,
  TCefv8ValueRef_NewUndefined,
  TCefv8ValueRef_NewNull,
  TCefv8ValueRef_NewBool,
  TCefv8ValueRef_NewInt,
  TCefv8ValueRef_NewUInt,
  TCefv8ValueRef_NewDouble,
  TCefv8ValueRef_NewDate,
  TCefv8ValueRef_NewString,
  TCefv8ValueRef_NewObject,
  TCefv8ValueRef_NewArray,
  TCefv8ValueRef_NewArrayBuffer,
  TCefv8ValueRef_NewFunction,
  TCefv8ValueRef_NewPromise;