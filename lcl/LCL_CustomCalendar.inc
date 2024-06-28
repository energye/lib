
//constructor
function CustomCalendar_Create(AOwner: TComponent): TCustomCalendar; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TCustomCalendar.Create(AOwner);
  handleExceptionEnd
end;

//property
function CustomCalendar_Date(AIsSet: LongBool; AObj: TCustomCalendar; AValue: PChar): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='Date'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Date := AValue;
  end else
    Result := ToPChar(AObj.Date);
  handleExceptionEnd
end;

//property
function CustomCalendar_DateTime(AIsSet: LongBool; AObj: TCustomCalendar; AValue: TDateTime): TDateTime; extdecl;
begin
  {$define handleExceptionFuncName :='DateTime'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DateTime := AValue;
  end else
    Result := AObj.DateTime;
  handleExceptionEnd
end;

//property
function CustomCalendar_DisplaySettings(AIsSet: LongBool; AObj: TCustomCalendar; AValue: TDisplaySettings): TDisplaySettings; extdecl;
begin
  {$define handleExceptionFuncName :='DisplaySettings'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DisplaySettings := AValue;
  end else
    Result := AObj.DisplaySettings;
  handleExceptionEnd
end;

//property
function CustomCalendar_FirstDayOfWeek(AIsSet: LongBool; AObj: TCustomCalendar; AValue: TCalDayOfWeek): TCalDayOfWeek; extdecl;
begin
  {$define handleExceptionFuncName :='FirstDayOfWeek'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.FirstDayOfWeek := AValue;
  end else
    Result := AObj.FirstDayOfWeek;
  handleExceptionEnd
end;

//property
function CustomCalendar_MaxDate(AIsSet: LongBool; AObj: TCustomCalendar; AValue: TDateTime): TDateTime; extdecl;
begin
  {$define handleExceptionFuncName :='MaxDate'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.MaxDate := AValue;
  end else
    Result := AObj.MaxDate;
  handleExceptionEnd
end;

//property
function CustomCalendar_MinDate(AIsSet: LongBool; AObj: TCustomCalendar; AValue: TDateTime): TDateTime; extdecl;
begin
  {$define handleExceptionFuncName :='MinDate'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.MinDate := AValue;
  end else
    Result := AObj.MinDate;
  handleExceptionEnd
end;

//function
function CustomCalendar_HitTest(AObj: TCustomCalendar; var APoint: TPoint): TCalendarPart; extdecl;
begin
  {$define handleExceptionFuncName :='HitTest'}
  handleExceptionBegin
  Result := AObj.HitTest(APoint);
  handleExceptionEnd
end;

//function
function CustomCalendar_GetCalendarView(AObj: TCustomCalendar): TCalendarView; extdecl;
begin
  {$define handleExceptionFuncName :='GetCalendarView'}
  handleExceptionBegin
  Result := AObj.GetCalendarView();
  handleExceptionEnd
end;

//function
function CustomCalendar_Class(): TClass; extdecl;
begin
  Result := TCustomCalendar;
end;

//property event
procedure CustomCalendar_SetOnChange(AObj: TCustomCalendar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnChange}
  EventMethodCode
end;

//property event
procedure CustomCalendar_SetOnDayChanged(AObj: TCustomCalendar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnDayChanged}
  EventMethodCode
end;

//property event
procedure CustomCalendar_SetOnMonthChanged(AObj: TCustomCalendar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMonthChanged}
  EventMethodCode
end;

//property event
procedure CustomCalendar_SetOnYearChanged(AObj: TCustomCalendar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnYearChanged}
  EventMethodCode
end;


exports
  CustomCalendar_Create,
  CustomCalendar_Date,
  CustomCalendar_DateTime,
  CustomCalendar_DisplaySettings,
  CustomCalendar_FirstDayOfWeek,
  CustomCalendar_MaxDate,
  CustomCalendar_MinDate,
  CustomCalendar_HitTest,
  CustomCalendar_GetCalendarView,
  CustomCalendar_Class,
  CustomCalendar_SetOnChange,
  CustomCalendar_SetOnDayChanged,
  CustomCalendar_SetOnMonthChanged,
  CustomCalendar_SetOnYearChanged;