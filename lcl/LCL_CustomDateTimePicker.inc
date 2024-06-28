
//constructor
function CustomDateTimePicker_Create(AOwner: TComponent): TCustomDateTimePicker; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TCustomDateTimePicker.Create(AOwner);
  handleExceptionEnd
end;

//function
function CustomDateTimePicker_DateIsNull(AObj: TCustomDateTimePicker): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='DateIsNull'}
  handleExceptionBegin
  Result := AObj.DateIsNull();
  handleExceptionEnd
end;

//function
function CustomDateTimePicker_Class(): TClass; extdecl;
begin
  Result := TCustomDateTimePicker;
end;

//procedure
procedure CustomDateTimePicker_SelectDate(AObj: TCustomDateTimePicker); extdecl;
begin
  {$define handleExceptionFuncName :='SelectDate'}
  handleExceptionBegin
  AObj.SelectDate();
  handleExceptionEnd
end;

//procedure
procedure CustomDateTimePicker_SelectTime(AObj: TCustomDateTimePicker); extdecl;
begin
  {$define handleExceptionFuncName :='SelectTime'}
  handleExceptionBegin
  AObj.SelectTime();
  handleExceptionEnd
end;

//procedure
procedure CustomDateTimePicker_SendExternalKey(AObj: TCustomDateTimePicker; const aKey: Char); extdecl;
begin
  {$define handleExceptionFuncName :='SendExternalKey'}
  handleExceptionBegin
  AObj.SendExternalKey(aKey);
  handleExceptionEnd
end;

//procedure
procedure CustomDateTimePicker_SendExternalKeyCode(AObj: TCustomDateTimePicker; const Key: Word); extdecl;
begin
  {$define handleExceptionFuncName :='SendExternalKeyCode'}
  handleExceptionBegin
  AObj.SendExternalKeyCode(Key);
  handleExceptionEnd
end;

//procedure
procedure CustomDateTimePicker_Paint(AObj: TCustomDateTimePicker); extdecl;
begin
  {$define handleExceptionFuncName :='Paint'}
  handleExceptionBegin
  AObj.Paint();
  handleExceptionEnd
end;


exports
  CustomDateTimePicker_Create,
  CustomDateTimePicker_DateIsNull,
  CustomDateTimePicker_Class,
  CustomDateTimePicker_SelectDate,
  CustomDateTimePicker_SelectTime,
  CustomDateTimePicker_SendExternalKey,
  CustomDateTimePicker_SendExternalKeyCode,
  CustomDateTimePicker_Paint;