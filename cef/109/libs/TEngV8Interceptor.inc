// constructor
function TEngV8Interceptor_Create(out IntfV8Interceptor: ICefV8Interceptor): TEngV8Interceptor; extdecl;
begin
  {$define handleExceptionID := 14400}
  handleExceptionBegin
  Result := TEngV8Interceptor.Create();
  IntfV8Interceptor := Result as ICefV8Interceptor;
  handleExceptionEnd
end;

// event
procedure TEngV8Interceptor_OnV8InterceptorGetByName(AObj: TEngV8Interceptor; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngV8Interceptor_TOnV8InterceptorGetByNameEvent}
  {$DEFINE EventName := OnV8InterceptorGetByName}
  CEFEventMethodCode
end;

// event
procedure TEngV8Interceptor_OnV8InterceptorGetByIndex(AObj: TEngV8Interceptor; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngV8Interceptor_TOnV8InterceptorGetByIndexEvent}
  {$DEFINE EventName := OnV8InterceptorGetByIndex}
  CEFEventMethodCode
end;

// event
procedure TEngV8Interceptor_OnV8InterceptorSetByName(AObj: TEngV8Interceptor; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngV8Interceptor_TOnV8InterceptorSetByNameEvent}
  {$DEFINE EventName := OnV8InterceptorSetByName}
  CEFEventMethodCode
end;

// event
procedure TEngV8Interceptor_OnV8InterceptorSetByIndex(AObj: TEngV8Interceptor; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngV8Interceptor_TOnV8InterceptorSetByIndexEvent}
  {$DEFINE EventName := OnV8InterceptorSetByIndex}
  CEFEventMethodCode
end;

exports
  TEngV8Interceptor_Create,
  TEngV8Interceptor_OnV8InterceptorGetByName,
  TEngV8Interceptor_OnV8InterceptorGetByIndex,
  TEngV8Interceptor_OnV8InterceptorSetByName,
  TEngV8Interceptor_OnV8InterceptorSetByIndex;