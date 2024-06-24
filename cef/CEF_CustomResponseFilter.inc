
//constructor
function CustomResponseFilter_Create(): TCustomResponseFilter; extdecl;
begin
  handleExceptionBegin
  Result := TCustomResponseFilter.Create();
  handleExceptionEnd
end;

//property event
procedure CustomResponseFilter_SetOnFilter(AObj: TCustomResponseFilter; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := CustomResponseFilter_OnFilter}
  {$DEFINE EventName := OnFilter}
  CEFEventMethodCode
end;

//property event
procedure CustomResponseFilter_SetOnInitFilter(AObj: TCustomResponseFilter; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := CustomResponseFilter_OnInitFilter}
  {$DEFINE EventName := OnInitFilter}
  CEFEventMethodCode
end;


exports
  CustomResponseFilter_Create,
  CustomResponseFilter_SetOnFilter,
  CustomResponseFilter_SetOnInitFilter;