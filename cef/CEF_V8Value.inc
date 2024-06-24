
//function
procedure Cefv8Value_UnWrap(data: Pointer; var Result: ICefv8Value); extdecl;
begin
  Result := TCefv8ValueRef.UnWrap(data);
end;

//function
procedure Cefv8Value_NewUndefined(var Result: ICefv8Value); extdecl;
begin
  Result := TCefv8ValueRef.NewUndefined();
end;

//function
procedure Cefv8Value_NewNull(var Result: ICefv8Value); extdecl;
begin
  Result := TCefv8ValueRef.NewNull();
end;

//function
procedure Cefv8Value_NewBool(value: LongBool; var Result: ICefv8Value); extdecl;
begin
  Result := TCefv8ValueRef.NewBool(value);
end;

//function
procedure Cefv8Value_NewInt(value: Integer; var Result: ICefv8Value); extdecl;
begin
  Result := TCefv8ValueRef.NewInt(value);
end;

//function
procedure Cefv8Value_NewUInt(value: uint32; var Result: ICefv8Value); extdecl;
begin
  Result := TCefv8ValueRef.NewUInt(value);
end;

//function
procedure Cefv8Value_NewDouble(var value: Double; var Result: ICefv8Value); extdecl;
begin
  Result := TCefv8ValueRef.NewDouble(value);
end;

//function
procedure Cefv8Value_NewDate(var value: TDateTime; var Result: ICefv8Value); extdecl;
begin
  Result := TCefv8ValueRef.NewDate(value);
end;

//function
procedure Cefv8Value_NewString(const str: PChar; var Result: ICefv8Value); extdecl;
begin
  Result := TCefv8ValueRef.NewString(str);
end;

//function
procedure Cefv8Value_NewObject(const accessor: ICefV8Accessor; const interceptor: ICefV8Interceptor; var Result: ICefv8Value); extdecl;
begin
  Result := TCefv8ValueRef.NewObject(accessor, interceptor);
end;

//function
procedure Cefv8Value_NewArray(len: Integer; var Result: ICefv8Value); extdecl;
begin
  Result := TCefv8ValueRef.NewArray(len);
end;

//function
procedure Cefv8Value_NewArrayBuffer(buffer: Pointer; length: NativeUInt; const callback: ICefv8ArrayBufferReleaseCallback; var Result: ICefv8Value); extdecl;
begin
  Result := TCefv8ValueRef.NewArrayBuffer(buffer, length, callback);
end;

//function
procedure Cefv8Value_NewFunction(const name: PChar; const handler: TV8Handler; var Result: ICefv8Value); extdecl;
begin
  Result := TCefv8ValueRef.NewFunction(name, handler);
end;

//function
procedure Cefv8Value_NewPromise(var Result: ICefv8Value); extdecl;
begin
  Result := TCefv8ValueRef.NewPromise();
end;

//function
function Cefv8Value_IsValid(AObj: ICefv8Value): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IsValid();
  handleExceptionEnd
end;

//function
function Cefv8Value_IsUndefined(AObj: ICefv8Value): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IsUndefined();
  handleExceptionEnd
end;

//function
function Cefv8Value_IsNull(AObj: ICefv8Value): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IsNull();
  handleExceptionEnd
end;

//function
function Cefv8Value_IsBool(AObj: ICefv8Value): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IsBool();
  handleExceptionEnd
end;

//function
function Cefv8Value_IsInt(AObj: ICefv8Value): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IsInt();
  handleExceptionEnd
end;

//function
function Cefv8Value_IsUInt(AObj: ICefv8Value): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IsUInt();
  handleExceptionEnd
end;

//function
function Cefv8Value_IsDouble(AObj: ICefv8Value): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IsDouble();
  handleExceptionEnd
end;

//function
function Cefv8Value_IsDate(AObj: ICefv8Value): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IsDate();
  handleExceptionEnd
end;

//function
function Cefv8Value_IsString(AObj: ICefv8Value): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IsString();
  handleExceptionEnd
end;

//function
function Cefv8Value_IsObject(AObj: ICefv8Value): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IsObject();
  handleExceptionEnd
end;

//function
function Cefv8Value_IsArray(AObj: ICefv8Value): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IsArray();
  handleExceptionEnd
end;

//function
function Cefv8Value_IsArrayBuffer(AObj: ICefv8Value): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IsArrayBuffer();
  handleExceptionEnd
end;

//function
function Cefv8Value_IsFunction(AObj: ICefv8Value): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IsFunction();
  handleExceptionEnd
end;

//function
function Cefv8Value_IsPromise(AObj: ICefv8Value): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IsPromise();
  handleExceptionEnd
end;

//function
function Cefv8Value_IsSame(AObj: ICefv8Value; const that: ICefv8Value): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IsSame(that);
  handleExceptionEnd
end;

//function
function Cefv8Value_GetBoolValue(AObj: ICefv8Value): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetBoolValue();
  handleExceptionEnd
end;

//function
function Cefv8Value_GetIntValue(AObj: ICefv8Value): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetIntValue();
  handleExceptionEnd
end;

//function
function Cefv8Value_GetUIntValue(AObj: ICefv8Value): uint32; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetUIntValue();
  handleExceptionEnd
end;

//function
procedure Cefv8Value_GetDoubleValue(AObj: ICefv8Value; var Result: Double); extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetDoubleValue();
  handleExceptionEnd
end;

//function
procedure Cefv8Value_GetDateValue(AObj: ICefv8Value; var Result: TDateTime); extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetDateValue();
  handleExceptionEnd
end;

//function
function Cefv8Value_GetStringValue(AObj: ICefv8Value): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.GetStringValue());
  handleExceptionEnd
end;

//function
function Cefv8Value_IsUserCreated(AObj: ICefv8Value): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IsUserCreated();
  handleExceptionEnd
end;

//function
function Cefv8Value_HasException(AObj: ICefv8Value): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.HasException();
  handleExceptionEnd
end;

//function
procedure Cefv8Value_GetException(AObj: ICefv8Value; var Result: ICefV8Exception); extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetException();
  handleExceptionEnd
end;

//function
function Cefv8Value_ClearException(AObj: ICefv8Value): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.ClearException();
  handleExceptionEnd
end;

//function
function Cefv8Value_WillRethrowExceptions(AObj: ICefv8Value): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.WillRethrowExceptions();
  handleExceptionEnd
end;

//function
function Cefv8Value_SetRethrowExceptions(AObj: ICefv8Value; rethrow: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.SetRethrowExceptions(rethrow);
  handleExceptionEnd
end;

//function
function Cefv8Value_HasValueByKey(AObj: ICefv8Value; const key: PChar): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.HasValueByKey(key);
  handleExceptionEnd
end;

//function
function Cefv8Value_HasValueByIndex(AObj: ICefv8Value; index: Integer): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.HasValueByIndex(index);
  handleExceptionEnd
end;

//function
function Cefv8Value_DeleteValueByKey(AObj: ICefv8Value; const key: PChar): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.DeleteValueByKey(key);
  handleExceptionEnd
end;

//function
function Cefv8Value_DeleteValueByIndex(AObj: ICefv8Value; index: Integer): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.DeleteValueByIndex(index);
  handleExceptionEnd
end;

//function
procedure Cefv8Value_GetValueByKey(AObj: ICefv8Value; const key: PChar; var Result: ICefv8Value); extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetValueByKey(key);
  handleExceptionEnd
end;

//function
procedure Cefv8Value_GetValueByIndex(AObj: ICefv8Value; index: Integer; var Result: ICefv8Value); extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetValueByIndex(index);
  handleExceptionEnd
end;

//function
function Cefv8Value_SetValueByKey(AObj: ICefv8Value; const key: PChar; const value: ICefv8Value; attribute: TCefV8PropertyAttributes): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.SetValueByKey(key, value, attribute);
  handleExceptionEnd
end;

//function
function Cefv8Value_SetValueByIndex(AObj: ICefv8Value; index: Integer; const value: ICefv8Value): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.SetValueByIndex(index, value);
  handleExceptionEnd
end;

//function
function Cefv8Value_SetValueByAccessor(AObj: ICefv8Value; const key: PChar; settings: TCefV8AccessControls; attribute: TCefV8PropertyAttributes): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.SetValueByAccessor(key, settings, attribute);
  handleExceptionEnd
end;

//function
function Cefv8Value_GetKeys(AObj: ICefv8Value; const keys: TStrings): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetKeys(keys);
  handleExceptionEnd
end;

//function
function Cefv8Value_SetUserData(AObj: ICefv8Value; const data: ICefv8Value): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.SetUserData(data);
  handleExceptionEnd
end;

//function
procedure Cefv8Value_GetUserData(AObj: ICefv8Value; var Result: ICefv8Value); extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetUserData();
  handleExceptionEnd
end;

//function
function Cefv8Value_GetExternallyAllocatedMemory(AObj: ICefv8Value): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetExternallyAllocatedMemory();
  handleExceptionEnd
end;

//function
function Cefv8Value_AdjustExternallyAllocatedMemory(AObj: ICefv8Value; changeInBytes: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.AdjustExternallyAllocatedMemory(changeInBytes);
  handleExceptionEnd
end;

//function
function Cefv8Value_GetArrayLength(AObj: ICefv8Value): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetArrayLength();
  handleExceptionEnd
end;

//function
procedure Cefv8Value_GetArrayBufferReleaseCallback(AObj: ICefv8Value; var Result: ICefv8ArrayBufferReleaseCallback); extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetArrayBufferReleaseCallback();
  handleExceptionEnd
end;

//function
function Cefv8Value_NeuterArrayBuffer(AObj: ICefv8Value): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.NeuterArrayBuffer();
  handleExceptionEnd
end;

//function
function Cefv8Value_GetFunctionName(AObj: ICefv8Value): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.GetFunctionName());
  handleExceptionEnd
end;

//function
procedure Cefv8Value_GetFunctionHandler(AObj: ICefv8Value; var Result: ICefv8Handler); extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetFunctionHandler();
  handleExceptionEnd
end;

//function
procedure Cefv8Value_ExecuteFunction(AObj: ICefv8Value; const obj: ICefv8Value; const arguments: TCefv8ValueArray; var Result: ICefv8Value); extdecl;
begin
  handleExceptionBegin
  Result := AObj.ExecuteFunction(obj, arguments);
  handleExceptionEnd
end;

//function
procedure Cefv8Value_ExecuteFunctionWithContext(AObj: ICefv8Value; const context: ICefv8Context; const obj: ICefv8Value; const arguments: TCefv8ValueArray; var Result: ICefv8Value); extdecl;
begin
  handleExceptionBegin
  Result := AObj.ExecuteFunctionWithContext(context, obj, arguments);
  handleExceptionEnd
end;

//function
function Cefv8Value_ResolvePromise(AObj: ICefv8Value; const arg: ICefv8Value): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.ResolvePromise(arg);
  handleExceptionEnd
end;

//function
function Cefv8Value_RejectPromise(AObj: ICefv8Value; const errorMsg: PChar): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.RejectPromise(errorMsg);
  handleExceptionEnd
end;


exports
  Cefv8Value_UnWrap,
  Cefv8Value_NewUndefined,
  Cefv8Value_NewNull,
  Cefv8Value_NewBool,
  Cefv8Value_NewInt,
  Cefv8Value_NewUInt,
  Cefv8Value_NewDouble,
  Cefv8Value_NewDate,
  Cefv8Value_NewString,
  Cefv8Value_NewObject,
  Cefv8Value_NewArray,
  Cefv8Value_NewArrayBuffer,
  Cefv8Value_NewFunction,
  Cefv8Value_NewPromise,
  Cefv8Value_IsValid,
  Cefv8Value_IsUndefined,
  Cefv8Value_IsNull,
  Cefv8Value_IsBool,
  Cefv8Value_IsInt,
  Cefv8Value_IsUInt,
  Cefv8Value_IsDouble,
  Cefv8Value_IsDate,
  Cefv8Value_IsString,
  Cefv8Value_IsObject,
  Cefv8Value_IsArray,
  Cefv8Value_IsArrayBuffer,
  Cefv8Value_IsFunction,
  Cefv8Value_IsPromise,
  Cefv8Value_IsSame,
  Cefv8Value_GetBoolValue,
  Cefv8Value_GetIntValue,
  Cefv8Value_GetUIntValue,
  Cefv8Value_GetDoubleValue,
  Cefv8Value_GetDateValue,
  Cefv8Value_GetStringValue,
  Cefv8Value_IsUserCreated,
  Cefv8Value_HasException,
  Cefv8Value_GetException,
  Cefv8Value_ClearException,
  Cefv8Value_WillRethrowExceptions,
  Cefv8Value_SetRethrowExceptions,
  Cefv8Value_HasValueByKey,
  Cefv8Value_HasValueByIndex,
  Cefv8Value_DeleteValueByKey,
  Cefv8Value_DeleteValueByIndex,
  Cefv8Value_GetValueByKey,
  Cefv8Value_GetValueByIndex,
  Cefv8Value_SetValueByKey,
  Cefv8Value_SetValueByIndex,
  Cefv8Value_SetValueByAccessor,
  Cefv8Value_GetKeys,
  Cefv8Value_SetUserData,
  Cefv8Value_GetUserData,
  Cefv8Value_GetExternallyAllocatedMemory,
  Cefv8Value_AdjustExternallyAllocatedMemory,
  Cefv8Value_GetArrayLength,
  Cefv8Value_GetArrayBufferReleaseCallback,
  Cefv8Value_NeuterArrayBuffer,
  Cefv8Value_GetFunctionName,
  Cefv8Value_GetFunctionHandler,
  Cefv8Value_ExecuteFunction,
  Cefv8Value_ExecuteFunctionWithContext,
  Cefv8Value_ResolvePromise,
  Cefv8Value_RejectPromise;
