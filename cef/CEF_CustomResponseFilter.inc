
//constructor
function CustomResponseFilter_Create(): TCustomResponseFilter; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TCustomResponseFilter.Create();
  handleExceptionEnd
end;

//procedure
procedure CustomResponseFilter_AsInterface(AObj: TCustomResponseFilter; var Result: ICefResponseFilter); extdecl;
begin
  Result := AObj as ICefResponseFilter;
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
  CustomResponseFilter_AsInterface,
  CustomResponseFilter_SetOnFilter,
  CustomResponseFilter_SetOnInitFilter;