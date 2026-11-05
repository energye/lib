// constructor
function TCustomResponseFilter_Create(out IntfResponseFilter: ICefResponseFilter): TCustomResponseFilter; extdecl;
begin
  {$define handleExceptionID := 3600}
  handleExceptionBegin
  Result := TCustomResponseFilter.Create();
  IntfResponseFilter := Result as ICefResponseFilter;
  handleExceptionEnd
end;

// event
procedure TCustomResponseFilter_OnFilter(AObj: TCustomResponseFilter; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TCustomResponseFilter_TOnFilterEvent}
  {$DEFINE EventName := OnFilter}
  CEFEventMethodCode
end;

// event
procedure TCustomResponseFilter_OnInitFilter(AObj: TCustomResponseFilter; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TCustomResponseFilter_TOnInitFilterEvent}
  {$DEFINE EventName := OnInitFilter}
  CEFEventMethodCode
end;

exports
  TCustomResponseFilter_Create,
  TCustomResponseFilter_OnFilter,
  TCustomResponseFilter_OnInitFilter;