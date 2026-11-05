// constructor
function TWkCookieDate_Create(aDate: PWkDateTime): TWkCookieDate; extdecl;
begin
  {$define handleExceptionID := 2200}
  handleExceptionBegin
  Result := TWkCookieDate.Create(aDate);
  handleExceptionEnd
end;

// function
function TWkCookieDate_Data(AObj: TWkCookieDate): PWkDateTime; extdecl;
begin
  {$define handleExceptionID := 2201}
  handleExceptionBegin
  Result := AObj.Data();
  handleExceptionEnd
end;

// function
function TWkCookieDate_Year(AObj: TWkCookieDate): Integer; extdecl;
begin
  {$define handleExceptionID := 2202}
  handleExceptionBegin
  Result := AObj.Year();
  handleExceptionEnd
end;

// function
function TWkCookieDate_Month(AObj: TWkCookieDate): Integer; extdecl;
begin
  {$define handleExceptionID := 2203}
  handleExceptionBegin
  Result := AObj.Month();
  handleExceptionEnd
end;

// function
function TWkCookieDate_Day(AObj: TWkCookieDate): Integer; extdecl;
begin
  {$define handleExceptionID := 2204}
  handleExceptionBegin
  Result := AObj.Day();
  handleExceptionEnd
end;

// function
function TWkCookieDate_Hour(AObj: TWkCookieDate): Integer; extdecl;
begin
  {$define handleExceptionID := 2205}
  handleExceptionBegin
  Result := AObj.Hour();
  handleExceptionEnd
end;

// function
function TWkCookieDate_Minute(AObj: TWkCookieDate): Integer; extdecl;
begin
  {$define handleExceptionID := 2206}
  handleExceptionBegin
  Result := AObj.Minute();
  handleExceptionEnd
end;

// function
function TWkCookieDate_Second(AObj: TWkCookieDate): Integer; extdecl;
begin
  {$define handleExceptionID := 2207}
  handleExceptionBegin
  Result := AObj.Second();
  handleExceptionEnd
end;

// function
function TWkCookieDate_Utc(AObj: TWkCookieDate): LongBool; extdecl;
begin
  {$define handleExceptionID := 2208}
  handleExceptionBegin
  Result := AObj.Utc();
  handleExceptionEnd
end;

// function
function TWkCookieDate_Offset(AObj: TWkCookieDate): Integer; extdecl;
begin
  {$define handleExceptionID := 2209}
  handleExceptionBegin
  Result := AObj.Offset();
  handleExceptionEnd
end;

// function
procedure TWkCookieDate_ToStringTime(AObj: TWkCookieDate; format: TSoupDateFormat;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 2210}
  handleExceptionBegin
  StringBufferCreate(AObj.ToStringTime(format), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
procedure TWkCookieDate_ToLongTime(AObj: TWkCookieDate; var Result: int64); extdecl;
begin
  {$define handleExceptionID := 2211}
  handleExceptionBegin
  Result := AObj.ToLongTime();
  handleExceptionEnd
end;

// function static
function TWkCookieDate_NewCustomCookieDate(aYear: Integer; aMonth: Integer; aDay: Integer; aHour: Integer; aMinute: Integer; aSecond: Integer): TWkCookieDate; extdecl;
begin
  Result := TWkCookieDate.NewCustomCookieDate(aYear, aMonth, aDay, aHour, aMinute, aSecond);
end;

// function static
function TWkCookieDate_NewCookieDate(): TWkCookieDate; extdecl;
begin
  Result := TWkCookieDate.NewCookieDate();
end;

exports
  TWkCookieDate_Create,
  TWkCookieDate_Data,
  TWkCookieDate_Year,
  TWkCookieDate_Month,
  TWkCookieDate_Day,
  TWkCookieDate_Hour,
  TWkCookieDate_Minute,
  TWkCookieDate_Second,
  TWkCookieDate_Utc,
  TWkCookieDate_Offset,
  TWkCookieDate_ToStringTime,
  TWkCookieDate_ToLongTime,
  TWkCookieDate_NewCustomCookieDate,
  TWkCookieDate_NewCookieDate;