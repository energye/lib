// constructor
function TEngResponseFilter_Create(out IntfResponseFilter: ICefResponseFilter): TEngResponseFilter; extdecl;
begin
  {$define handleExceptionID := 13400}
  handleExceptionBegin
  Result := TEngResponseFilter.Create();
  IntfResponseFilter := Result as ICefResponseFilter;
  handleExceptionEnd
end;

// event
procedure TEngResponseFilter_OnResponseFilterInitFilter(AObj: TEngResponseFilter; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngResponseFilter_TOnResponseFilterInitFilterEvent}
  {$DEFINE EventName := OnResponseFilterInitFilter}
  CEFEventMethodCode
end;

// event
procedure TEngResponseFilter_OnResponseFilterFilter(AObj: TEngResponseFilter; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngResponseFilter_TOnResponseFilterFilterEvent}
  {$DEFINE EventName := OnResponseFilterFilter}
  CEFEventMethodCode
end;

exports
  TEngResponseFilter_Create,
  TEngResponseFilter_OnResponseFilterInitFilter,
  TEngResponseFilter_OnResponseFilterFilter;