// constructor
function TEngV8Accessor_Create(out IntfV8Accessor: ICefV8Accessor): TEngV8Accessor; extdecl;
begin
  {$define handleExceptionID := 14700}
  handleExceptionBegin
  Result := TEngV8Accessor.Create();
  IntfV8Accessor := Result as ICefV8Accessor;
  handleExceptionEnd
end;

// event
procedure TEngV8Accessor_OnV8AccessorGet(AObj: TEngV8Accessor; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngV8Accessor_TOnV8AccessorGetEvent}
  {$DEFINE EventName := OnV8AccessorGet}
  CEFEventMethodCode
end;

// event
procedure TEngV8Accessor_OnV8AccessorSet_(AObj: TEngV8Accessor; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngV8Accessor_TOnV8AccessorSet_Event}
  {$DEFINE EventName := OnV8AccessorSet_}
  CEFEventMethodCode
end;

exports
  TEngV8Accessor_Create,
  TEngV8Accessor_OnV8AccessorGet,
  TEngV8Accessor_OnV8AccessorSet_;