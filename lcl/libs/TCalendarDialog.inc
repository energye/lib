// constructor
function TCalendarDialog_Create(AOwner: TComponent): TCalendarDialog; extdecl;
begin
  {$define handleExceptionID := 7900}
  handleExceptionBegin
  Result := TCalendarDialog.Create(AOwner);
  handleExceptionEnd
end;

// property
procedure TCalendarDialog_Date(ASet: LongBool; AObj: TCalendarDialog; var AValue: Double; var Result: Double); extdecl;
begin
  {$define handleExceptionID := 7901}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Date := AValue
  end else
    Result := AObj.Date;
  handleExceptionEnd
end;

// property
function TCalendarDialog_DisplaySettings(ASet: LongBool; AObj: TCalendarDialog; AValue: TDisplaySettings): TDisplaySettings; extdecl;
begin
  {$define handleExceptionID := 7902}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DisplaySettings := AValue
  end else
    Result := AObj.DisplaySettings;
  handleExceptionEnd
end;

// property
function TCalendarDialog_FirstDayOfWeek(ASet: LongBool; AObj: TCalendarDialog; AValue: TCalDayOfWeek): TCalDayOfWeek; extdecl;
begin
  {$define handleExceptionID := 7903}
  handleExceptionBegin
  if ASet then
  begin
    AObj.FirstDayOfWeek := AValue
  end else
    Result := AObj.FirstDayOfWeek;
  handleExceptionEnd
end;

// property
procedure TCalendarDialog_OKCaption(ASet: LongBool; AObj: TCalendarDialog; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 7904}
  handleExceptionBegin
  if ASet then
  begin
    AObj.OKCaption := AValue
  end else
    StringBufferCreate(AObj.OKCaption, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TCalendarDialog_CancelCaption(ASet: LongBool; AObj: TCalendarDialog; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 7905}
  handleExceptionBegin
  if ASet then
  begin
    AObj.CancelCaption := AValue
  end else
    StringBufferCreate(AObj.CancelCaption, AStrData, AStrSize);
  handleExceptionEnd
end;

// event
procedure TCalendarDialog_OnDayChanged(AObj: TCalendarDialog; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnDayChanged}
  LCLEventMethodCode
end;

// event
procedure TCalendarDialog_OnMonthChanged(AObj: TCalendarDialog; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMonthChanged}
  LCLEventMethodCode
end;

// event
procedure TCalendarDialog_OnYearChanged(AObj: TCalendarDialog; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnYearChanged}
  LCLEventMethodCode
end;

// event
procedure TCalendarDialog_OnChange(AObj: TCalendarDialog; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnChange}
  LCLEventMethodCode
end;

function TCalendarDialog_TClass(): TClass; extdecl;
begin
  Result := TCalendarDialog;
end;

exports
  TCalendarDialog_Create,
  TCalendarDialog_Date,
  TCalendarDialog_DisplaySettings,
  TCalendarDialog_FirstDayOfWeek,
  TCalendarDialog_OKCaption,
  TCalendarDialog_CancelCaption,
  TCalendarDialog_OnDayChanged,
  TCalendarDialog_OnMonthChanged,
  TCalendarDialog_OnYearChanged,
  TCalendarDialog_OnChange,
  TCalendarDialog_TClass;