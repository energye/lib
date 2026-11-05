// constructor
function TCustomCalendar_Create(AOwner: TComponent): TCustomCalendar; extdecl;
begin
  {$define handleExceptionID := 9300}
  handleExceptionBegin
  Result := TCustomCalendar.Create(AOwner);
  handleExceptionEnd
end;

// function
function TCustomCalendar_HitTest(AObj: TCustomCalendar; var APoint: TPoint): TCalendarPart; extdecl;
begin
  {$define handleExceptionID := 9301}
  handleExceptionBegin
  Result := AObj.HitTest(APoint);
  handleExceptionEnd
end;

// function
function TCustomCalendar_GetCalendarView(AObj: TCustomCalendar): TCalendarView; extdecl;
begin
  {$define handleExceptionID := 9302}
  handleExceptionBegin
  Result := AObj.GetCalendarView();
  handleExceptionEnd
end;

// property
procedure TCustomCalendar_Date(ASet: LongBool; AObj: TCustomCalendar; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 9303}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Date := AValue
  end else
    StringBufferCreate(AObj.Date, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TCustomCalendar_DateTime(ASet: LongBool; AObj: TCustomCalendar; var AValue: Double; var Result: Double); extdecl;
begin
  {$define handleExceptionID := 9304}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DateTime := AValue
  end else
    Result := AObj.DateTime;
  handleExceptionEnd
end;

// property
function TCustomCalendar_DisplaySettings(ASet: LongBool; AObj: TCustomCalendar; AValue: TDisplaySettings): TDisplaySettings; extdecl;
begin
  {$define handleExceptionID := 9305}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DisplaySettings := AValue
  end else
    Result := AObj.DisplaySettings;
  handleExceptionEnd
end;

// property
function TCustomCalendar_FirstDayOfWeek(ASet: LongBool; AObj: TCustomCalendar; AValue: TCalDayOfWeek): TCalDayOfWeek; extdecl;
begin
  {$define handleExceptionID := 9306}
  handleExceptionBegin
  if ASet then
  begin
    AObj.FirstDayOfWeek := AValue
  end else
    Result := AObj.FirstDayOfWeek;
  handleExceptionEnd
end;

// property
procedure TCustomCalendar_MaxDate(ASet: LongBool; AObj: TCustomCalendar; var AValue: Double; var Result: Double); extdecl;
begin
  {$define handleExceptionID := 9307}
  handleExceptionBegin
  if ASet then
  begin
    AObj.MaxDate := AValue
  end else
    Result := AObj.MaxDate;
  handleExceptionEnd
end;

// property
procedure TCustomCalendar_MinDate(ASet: LongBool; AObj: TCustomCalendar; var AValue: Double; var Result: Double); extdecl;
begin
  {$define handleExceptionID := 9308}
  handleExceptionBegin
  if ASet then
  begin
    AObj.MinDate := AValue
  end else
    Result := AObj.MinDate;
  handleExceptionEnd
end;

// event
procedure TCustomCalendar_OnChange(AObj: TCustomCalendar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnChange}
  LCLEventMethodCode
end;

// event
procedure TCustomCalendar_OnDayChanged(AObj: TCustomCalendar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnDayChanged}
  LCLEventMethodCode
end;

// event
procedure TCustomCalendar_OnMonthChanged(AObj: TCustomCalendar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMonthChanged}
  LCLEventMethodCode
end;

// event
procedure TCustomCalendar_OnYearChanged(AObj: TCustomCalendar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnYearChanged}
  LCLEventMethodCode
end;

function TCustomCalendar_TClass(): TClass; extdecl;
begin
  Result := TCustomCalendar;
end;

exports
  TCustomCalendar_Create,
  TCustomCalendar_HitTest,
  TCustomCalendar_GetCalendarView,
  TCustomCalendar_Date,
  TCustomCalendar_DateTime,
  TCustomCalendar_DisplaySettings,
  TCustomCalendar_FirstDayOfWeek,
  TCustomCalendar_MaxDate,
  TCustomCalendar_MinDate,
  TCustomCalendar_OnChange,
  TCustomCalendar_OnDayChanged,
  TCustomCalendar_OnMonthChanged,
  TCustomCalendar_OnYearChanged,
  TCustomCalendar_TClass;