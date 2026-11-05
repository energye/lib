// constructor
function TCustomDateTimePicker_Create(AOwner: TComponent): TCustomDateTimePicker; extdecl;
begin
  {$define handleExceptionID := 8900}
  handleExceptionBegin
  Result := TCustomDateTimePicker.Create(AOwner);
  handleExceptionEnd
end;

// function
function TCustomDateTimePicker_DateIsNull(AObj: TCustomDateTimePicker): LongBool; extdecl;
begin
  {$define handleExceptionID := 8901}
  handleExceptionBegin
  Result := AObj.DateIsNull();
  handleExceptionEnd
end;

// procedure
procedure TCustomDateTimePicker_SelectDate(AObj: TCustomDateTimePicker); extdecl;
begin
  {$define handleExceptionID := 8902}
  handleExceptionBegin
  AObj.SelectDate();
  handleExceptionEnd
end;

// procedure
procedure TCustomDateTimePicker_SelectTime(AObj: TCustomDateTimePicker); extdecl;
begin
  {$define handleExceptionID := 8903}
  handleExceptionBegin
  AObj.SelectTime();
  handleExceptionEnd
end;

// procedure
procedure TCustomDateTimePicker_SendExternalKey(AObj: TCustomDateTimePicker; const aKey: Char); extdecl;
begin
  {$define handleExceptionID := 8904}
  handleExceptionBegin
  AObj.SendExternalKey(aKey);
  handleExceptionEnd
end;

// procedure
procedure TCustomDateTimePicker_SendExternalKeyCode(AObj: TCustomDateTimePicker; const Key: Word); extdecl;
begin
  {$define handleExceptionID := 8905}
  handleExceptionBegin
  AObj.SendExternalKeyCode(Key);
  handleExceptionEnd
end;

// procedure
procedure TCustomDateTimePicker_Paint(AObj: TCustomDateTimePicker); extdecl;
begin
  {$define handleExceptionID := 8906}
  handleExceptionBegin
  AObj.Paint();
  handleExceptionEnd
end;

function TCustomDateTimePicker_TClass(): TClass; extdecl;
begin
  Result := TCustomDateTimePicker;
end;

exports
  TCustomDateTimePicker_Create,
  TCustomDateTimePicker_DateIsNull,
  TCustomDateTimePicker_SelectDate,
  TCustomDateTimePicker_SelectTime,
  TCustomDateTimePicker_SendExternalKey,
  TCustomDateTimePicker_SendExternalKeyCode,
  TCustomDateTimePicker_Paint,
  TCustomDateTimePicker_TClass;