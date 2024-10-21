
//function
procedure CefV8Value_UnWrap(data: Pointer; var Result: ICefv8Value); extdecl;
begin
  Result := TCefv8ValueRef.UnWrap(data);
end;

//function
procedure CefV8Value_NewUndefined(var Result: ICefv8Value); extdecl;
begin
  Result := TCefv8ValueRef.NewUndefined();
end;

//function
procedure CefV8Value_NewNull(var Result: ICefv8Value); extdecl;
begin
  Result := TCefv8ValueRef.NewNull();
end;

//function
procedure CefV8Value_NewBool(value: LongBool; var Result: ICefv8Value); extdecl;
begin
  Result := TCefv8ValueRef.NewBool(value);
end;

//function
procedure CefV8Value_NewInt(value: Integer; var Result: ICefv8Value); extdecl;
begin
  Result := TCefv8ValueRef.NewInt(value);
end;

//function
procedure CefV8Value_NewUInt(value: uint32; var Result: ICefv8Value); extdecl;
begin
  Result := TCefv8ValueRef.NewUInt(value);
end;

//function
procedure CefV8Value_NewDouble(var value: Double; var Result: ICefv8Value); extdecl;
begin
  Result := TCefv8ValueRef.NewDouble(value);
end;

//function
procedure CefV8Value_NewDate(var value: TDateTime; var Result: ICefv8Value); extdecl;
begin
  Result := TCefv8ValueRef.NewDate(value);
end;

//function
procedure CefV8Value_NewString(const str: PChar; var Result: ICefv8Value); extdecl;
begin
  Result := TCefv8ValueRef.NewString(str);
end;

//function
procedure CefV8Value_NewObject(const accessor: ICefV8Accessor; const interceptor: ICefV8Interceptor; var Result: ICefv8Value); extdecl;
begin
  Result := TCefv8ValueRef.NewObject(accessor, interceptor);
end;

//function
procedure CefV8Value_NewArray(len: Integer; var Result: ICefv8Value); extdecl;
begin
  Result := TCefv8ValueRef.NewArray(len);
end;

//function
procedure CefV8Value_NewArrayBuffer(buffer: Pointer; length: NativeUInt; const callback: ICefv8ArrayBufferReleaseCallback; var Result: ICefv8Value); extdecl;
begin
  Result := TCefv8ValueRef.NewArrayBuffer(buffer, length, callback);
end;

//function
procedure CefV8Value_NewFunction(const name: PChar; const handler: ICefv8Handler; var Result: ICefv8Value); extdecl;
begin
  Result := TCefv8ValueRef.NewFunction(name, handler);
end;

//function
procedure CefV8Value_NewPromise(var Result: ICefv8Value); extdecl;
begin
  Result := TCefv8ValueRef.NewPromise();
end;

//function
function CefV8Value_IsValid(AObj: ICefV8Value): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='IsValid'}
  handleExceptionBegin
  Result := AObj.IsValid();
  handleExceptionEnd
end;

//function
function CefV8Value_IsUndefined(AObj: ICefV8Value): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='IsUndefined'}
  handleExceptionBegin
  Result := AObj.IsUndefined();
  handleExceptionEnd
end;

//function
function CefV8Value_IsNull(AObj: ICefV8Value): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='IsNull'}
  handleExceptionBegin
  Result := AObj.IsNull();
  handleExceptionEnd
end;

//function
function CefV8Value_IsBool(AObj: ICefV8Value): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='IsBool'}
  handleExceptionBegin
  Result := AObj.IsBool();
  handleExceptionEnd
end;

//function
function CefV8Value_IsInt(AObj: ICefV8Value): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='IsInt'}
  handleExceptionBegin
  Result := AObj.IsInt();
  handleExceptionEnd
end;

//function
function CefV8Value_IsUInt(AObj: ICefV8Value): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='IsUInt'}
  handleExceptionBegin
  Result := AObj.IsUInt();
  handleExceptionEnd
end;

//function
function CefV8Value_IsDouble(AObj: ICefV8Value): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='IsDouble'}
  handleExceptionBegin
  Result := AObj.IsDouble();
  handleExceptionEnd
end;

//function
function CefV8Value_IsDate(AObj: ICefV8Value): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='IsDate'}
  handleExceptionBegin
  Result := AObj.IsDate();
  handleExceptionEnd
end;

//function
function CefV8Value_IsString(AObj: ICefV8Value): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='IsString'}
  handleExceptionBegin
  Result := AObj.IsString();
  handleExceptionEnd
end;

//function
function CefV8Value_IsObject(AObj: ICefV8Value): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='IsObject'}
  handleExceptionBegin
  Result := AObj.IsObject();
  handleExceptionEnd
end;

//function
function CefV8Value_IsArray(AObj: ICefV8Value): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='IsArray'}
  handleExceptionBegin
  Result := AObj.IsArray();
  handleExceptionEnd
end;

//function
function CefV8Value_IsArrayBuffer(AObj: ICefV8Value): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='IsArrayBuffer'}
  handleExceptionBegin
  Result := AObj.IsArrayBuffer();
  handleExceptionEnd
end;

//function
function CefV8Value_IsFunction(AObj: ICefV8Value): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='IsFunction'}
  handleExceptionBegin
  Result := AObj.IsFunction();
  handleExceptionEnd
end;

//function
function CefV8Value_IsPromise(AObj: ICefV8Value): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='IsPromise'}
  handleExceptionBegin
  Result := AObj.IsPromise();
  handleExceptionEnd
end;

//function
function CefV8Value_IsSame(AObj: ICefV8Value; const that: ICefv8Value): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='IsSame'}
  handleExceptionBegin
  Result := AObj.IsSame(that);
  handleExceptionEnd
end;

//function
function CefV8Value_GetBoolValue(AObj: ICefV8Value): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='GetBoolValue'}
  handleExceptionBegin
  Result := AObj.GetBoolValue();
  handleExceptionEnd
end;

//function
function CefV8Value_GetIntValue(AObj: ICefV8Value): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='GetIntValue'}
  handleExceptionBegin
  Result := AObj.GetIntValue();
  handleExceptionEnd
end;

//function
function CefV8Value_GetUIntValue(AObj: ICefV8Value): uint32; extdecl;
begin
  {$define handleExceptionFuncName :='GetUIntValue'}
  handleExceptionBegin
  Result := AObj.GetUIntValue();
  handleExceptionEnd
end;

//function
procedure CefV8Value_GetDoubleValue(AObj: ICefV8Value; var Result: Double); extdecl;
begin
  {$define handleExceptionFuncName :='GetDoubleValue'}
  handleExceptionBegin
  Result := AObj.GetDoubleValue();
  handleExceptionEnd
end;

//function
procedure CefV8Value_GetDateValue(AObj: ICefV8Value; var Result: TDateTime); extdecl;
begin
  {$define handleExceptionFuncName :='GetDateValue'}
  handleExceptionBegin
  Result := AObj.GetDateValue();
  handleExceptionEnd
end;

//function
procedure CefV8Value_GetStringValue(AObj: ICefV8Value; const RetValue: TString); extdecl;
begin
  {$define handleExceptionFuncName :='GetStringValue'}
  handleExceptionBegin
  RetValue.SetValue(AObj.GetStringValue());
  handleExceptionEnd
end;

//function
function CefV8Value_IsUserCreated(AObj: ICefV8Value): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='IsUserCreated'}
  handleExceptionBegin
  Result := AObj.IsUserCreated();
  handleExceptionEnd
end;

//function
function CefV8Value_HasException(AObj: ICefV8Value): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='HasException'}
  handleExceptionBegin
  Result := AObj.HasException();
  handleExceptionEnd
end;

//function
procedure CefV8Value_GetException(AObj: ICefV8Value; var Result: ICefV8Exception); extdecl;
begin
  {$define handleExceptionFuncName :='GetException'}
  handleExceptionBegin
  Result := AObj.GetException();
  handleExceptionEnd
end;

//function
function CefV8Value_ClearException(AObj: ICefV8Value): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='ClearException'}
  handleExceptionBegin
  Result := AObj.ClearException();
  handleExceptionEnd
end;

//function
function CefV8Value_WillRethrowExceptions(AObj: ICefV8Value): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='WillRethrowExceptions'}
  handleExceptionBegin
  Result := AObj.WillRethrowExceptions();
  handleExceptionEnd
end;

//function
function CefV8Value_SetRethrowExceptions(AObj: ICefV8Value; rethrow: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='SetRethrowExceptions'}
  handleExceptionBegin
  Result := AObj.SetRethrowExceptions(rethrow);
  handleExceptionEnd
end;

//function
function CefV8Value_HasValueByKey(AObj: ICefV8Value; const key: PChar): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='HasValueByKey'}
  handleExceptionBegin
  Result := AObj.HasValueByKey(key);
  handleExceptionEnd
end;

//function
function CefV8Value_HasValueByIndex(AObj: ICefV8Value; index: Integer): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='HasValueByIndex'}
  handleExceptionBegin
  Result := AObj.HasValueByIndex(index);
  handleExceptionEnd
end;

//function
function CefV8Value_DeleteValueByKey(AObj: ICefV8Value; const key: PChar): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='DeleteValueByKey'}
  handleExceptionBegin
  Result := AObj.DeleteValueByKey(key);
  handleExceptionEnd
end;

//function
function CefV8Value_DeleteValueByIndex(AObj: ICefV8Value; index: Integer): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='DeleteValueByIndex'}
  handleExceptionBegin
  Result := AObj.DeleteValueByIndex(index);
  handleExceptionEnd
end;

//function
procedure CefV8Value_GetValueByKey(AObj: ICefV8Value; const key: PChar; var Result: ICefv8Value); extdecl;
begin
  {$define handleExceptionFuncName :='GetValueByKey'}
  handleExceptionBegin
  Result := AObj.GetValueByKey(key);
  handleExceptionEnd
end;

//function
procedure CefV8Value_GetValueByIndex(AObj: ICefV8Value; index: Integer; var Result: ICefv8Value); extdecl;
begin
  {$define handleExceptionFuncName :='GetValueByIndex'}
  handleExceptionBegin
  Result := AObj.GetValueByIndex(index);
  handleExceptionEnd
end;

//function
function CefV8Value_SetValueByKey(AObj: ICefV8Value; const key: PChar; const value: ICefv8Value; attribute: TCefV8PropertyAttributes): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='SetValueByKey'}
  handleExceptionBegin
  Result := AObj.SetValueByKey(key, value, attribute);
  handleExceptionEnd
end;

//function
function CefV8Value_SetValueByIndex(AObj: ICefV8Value; index: Integer; const value: ICefv8Value): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='SetValueByIndex'}
  handleExceptionBegin
  Result := AObj.SetValueByIndex(index, value);
  handleExceptionEnd
end;

//function
function CefV8Value_SetValueByAccessor(AObj: ICefV8Value; const key: PChar; settings: TCefV8AccessControls; attribute: TCefV8PropertyAttributes): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='SetValueByAccessor'}
  handleExceptionBegin
  Result := AObj.SetValueByAccessor(key, settings, attribute);
  handleExceptionEnd
end;

//function
function CefV8Value_GetKeys(AObj: ICefV8Value; const keys: TStrings): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='GetKeys'}
  handleExceptionBegin
  Result := AObj.GetKeys(keys);
  handleExceptionEnd
end;

//function
function CefV8Value_SetUserData(AObj: ICefV8Value; const data: ICefv8Value): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='SetUserData'}
  handleExceptionBegin
  Result := AObj.SetUserData(data);
  handleExceptionEnd
end;

//function
procedure CefV8Value_GetUserData(AObj: ICefV8Value; var Result: ICefv8Value); extdecl;
begin
  {$define handleExceptionFuncName :='GetUserData'}
  handleExceptionBegin
  Result := AObj.GetUserData();
  handleExceptionEnd
end;

//function
function CefV8Value_GetExternallyAllocatedMemory(AObj: ICefV8Value): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='GetExternallyAllocatedMemory'}
  handleExceptionBegin
  Result := AObj.GetExternallyAllocatedMemory();
  handleExceptionEnd
end;

//function
function CefV8Value_AdjustExternallyAllocatedMemory(AObj: ICefV8Value; changeInBytes: Integer): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='AdjustExternallyAllocatedMemory'}
  handleExceptionBegin
  Result := AObj.AdjustExternallyAllocatedMemory(changeInBytes);
  handleExceptionEnd
end;

//function
function CefV8Value_GetArrayLength(AObj: ICefV8Value): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='GetArrayLength'}
  handleExceptionBegin
  Result := AObj.GetArrayLength();
  handleExceptionEnd
end;

//function
procedure CefV8Value_GetArrayBufferReleaseCallback(AObj: ICefV8Value; var Result: ICefv8ArrayBufferReleaseCallback); extdecl;
begin
  {$define handleExceptionFuncName :='GetArrayBufferReleaseCallback'}
  handleExceptionBegin
  Result := AObj.GetArrayBufferReleaseCallback();
  handleExceptionEnd
end;

//function
function CefV8Value_NeuterArrayBuffer(AObj: ICefV8Value): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='NeuterArrayBuffer'}
  handleExceptionBegin
  Result := AObj.NeuterArrayBuffer();
  handleExceptionEnd
end;

//function
procedure CefV8Value_GetFunctionName(AObj: ICefV8Value; const RetValue: TString); extdecl;
begin
  {$define handleExceptionFuncName :='GetFunctionName'}
  handleExceptionBegin
  RetValue.SetValue(AObj.GetFunctionName());
  handleExceptionEnd
end;

//function
procedure CefV8Value_GetFunctionHandler(AObj: ICefV8Value; var Result: ICefv8Handler); extdecl;
begin
  {$define handleExceptionFuncName :='GetFunctionHandler'}
  handleExceptionBegin
  Result := AObj.GetFunctionHandler();
  handleExceptionEnd
end;

//function
function CefV8Value_ResolvePromise(AObj: ICefV8Value; const arg: ICefv8Value): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='ResolvePromise'}
  handleExceptionBegin
  Result := AObj.ResolvePromise(arg);
  handleExceptionEnd
end;

//function
function CefV8Value_RejectPromise(AObj: ICefV8Value; const errorMsg: PChar): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='RejectPromise'}
  handleExceptionBegin
  Result := AObj.RejectPromise(errorMsg);
  handleExceptionEnd
end;


exports
  CefV8Value_UnWrap,
  CefV8Value_NewUndefined,
  CefV8Value_NewNull,
  CefV8Value_NewBool,
  CefV8Value_NewInt,
  CefV8Value_NewUInt,
  CefV8Value_NewDouble,
  CefV8Value_NewDate,
  CefV8Value_NewString,
  CefV8Value_NewObject,
  CefV8Value_NewArray,
  CefV8Value_NewArrayBuffer,
  CefV8Value_NewFunction,
  CefV8Value_NewPromise,
  CefV8Value_IsValid,
  CefV8Value_IsUndefined,
  CefV8Value_IsNull,
  CefV8Value_IsBool,
  CefV8Value_IsInt,
  CefV8Value_IsUInt,
  CefV8Value_IsDouble,
  CefV8Value_IsDate,
  CefV8Value_IsString,
  CefV8Value_IsObject,
  CefV8Value_IsArray,
  CefV8Value_IsArrayBuffer,
  CefV8Value_IsFunction,
  CefV8Value_IsPromise,
  CefV8Value_IsSame,
  CefV8Value_GetBoolValue,
  CefV8Value_GetIntValue,
  CefV8Value_GetUIntValue,
  CefV8Value_GetDoubleValue,
  CefV8Value_GetDateValue,
  CefV8Value_GetStringValue,
  CefV8Value_IsUserCreated,
  CefV8Value_HasException,
  CefV8Value_GetException,
  CefV8Value_ClearException,
  CefV8Value_WillRethrowExceptions,
  CefV8Value_SetRethrowExceptions,
  CefV8Value_HasValueByKey,
  CefV8Value_HasValueByIndex,
  CefV8Value_DeleteValueByKey,
  CefV8Value_DeleteValueByIndex,
  CefV8Value_GetValueByKey,
  CefV8Value_GetValueByIndex,
  CefV8Value_SetValueByKey,
  CefV8Value_SetValueByIndex,
  CefV8Value_SetValueByAccessor,
  CefV8Value_GetKeys,
  CefV8Value_SetUserData,
  CefV8Value_GetUserData,
  CefV8Value_GetExternallyAllocatedMemory,
  CefV8Value_AdjustExternallyAllocatedMemory,
  CefV8Value_GetArrayLength,
  CefV8Value_GetArrayBufferReleaseCallback,
  CefV8Value_NeuterArrayBuffer,
  CefV8Value_GetFunctionName,
  CefV8Value_GetFunctionHandler,
  CefV8Value_ResolvePromise,
  CefV8Value_RejectPromise;