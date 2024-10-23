
//constructor
function WkCookieDate_Create(aDate: PSoupDate): TWkCookieDate; extdecl;
begin
  handleExceptionBegin
  Result := TWkCookieDate.Create(aDate);
  handleExceptionEnd
end;

//function
function WkCookieDate_NewCustomCookieDate(aYear,  aMonth,  aDay,  aHour,  aMinute,  aSecond: LongInt): TWkCookieDate; extdecl;
begin
  Result := TWkCookieDate.NewCustomCookieDate(aYear,  aMonth,  aDay,  aHour,  aMinute,  aSecond);
end;

//function
function WkCookieDate_NewCookieDate(): TWkCookieDate; extdecl;
begin
  Result := TWkCookieDate.NewCookieDate();
end;

//function
function WkCookieDate_Data(AObj: TWkCookieDate): PSoupDate; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Data();
  handleExceptionEnd
end;

//function
function WkCookieDate_Year(AObj: TWkCookieDate): LongInt; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Year();
  handleExceptionEnd
end;

//function
function WkCookieDate_Month(AObj: TWkCookieDate): LongInt; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Month();
  handleExceptionEnd
end;

//function
function WkCookieDate_Day(AObj: TWkCookieDate): LongInt; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Day();
  handleExceptionEnd
end;

//function
function WkCookieDate_Hour(AObj: TWkCookieDate): LongInt; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Hour();
  handleExceptionEnd
end;

//function
function WkCookieDate_Minute(AObj: TWkCookieDate): LongInt; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Minute();
  handleExceptionEnd
end;

//function
function WkCookieDate_Second(AObj: TWkCookieDate): LongInt; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Second();
  handleExceptionEnd
end;

//function
function WkCookieDate_Utc(AObj: TWkCookieDate): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Utc();
  handleExceptionEnd
end;

//function
function WkCookieDate_Offset(AObj: TWkCookieDate): LongInt; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Offset();
  handleExceptionEnd
end;

//function
function WkCookieDate_ToStringTime(AObj: TWkCookieDate; format: TSoupDateFormat): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.ToStringTime(format));
  handleExceptionEnd
end;

//function
procedure WkCookieDate_ToLongTime(AObj: TWkCookieDate; var Result: int64); extdecl;
begin
  handleExceptionBegin
  Result := AObj.ToLongTime();
  handleExceptionEnd
end;


exports
  WkCookieDate_Create,
  WkCookieDate_NewCustomCookieDate,
  WkCookieDate_NewCookieDate,
  WkCookieDate_Data,
  WkCookieDate_Year,
  WkCookieDate_Month,
  WkCookieDate_Day,
  WkCookieDate_Hour,
  WkCookieDate_Minute,
  WkCookieDate_Second,
  WkCookieDate_Utc,
  WkCookieDate_Offset,
  WkCookieDate_ToStringTime,
  WkCookieDate_ToLongTime;