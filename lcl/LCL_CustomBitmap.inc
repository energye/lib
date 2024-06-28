
//constructor
function CustomBitmap_Create(): TCustomBitmap; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TCustomBitmap.Create();
  handleExceptionEnd
end;

//property
function CustomBitmap_Handle(AIsSet: LongBool; AObj: TCustomBitmap; AValue: HBITMAP): HBITMAP; extdecl;
begin
  {$define handleExceptionFuncName :='Handle'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Handle := AValue;
  end else
    Result := AObj.Handle;
  handleExceptionEnd
end;

//property
function CustomBitmap_HandleType(AIsSet: LongBool; AObj: TCustomBitmap; AValue: TBitmapHandleType): TBitmapHandleType; extdecl;
begin
  {$define handleExceptionFuncName :='HandleType'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.HandleType := AValue;
  end else
    Result := AObj.HandleType;
  handleExceptionEnd
end;

//property
function CustomBitmap_Monochrome(AIsSet: LongBool; AObj: TCustomBitmap; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='Monochrome'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Monochrome := AValue;
  end else
    Result := AObj.Monochrome;
  handleExceptionEnd
end;

//function
function CustomBitmap_ReleaseHandle(AObj: TCustomBitmap): HBITMAP; extdecl;
begin
  {$define handleExceptionFuncName :='ReleaseHandle'}
  handleExceptionBegin
  Result := AObj.ReleaseHandle();
  handleExceptionEnd
end;

//function
function CustomBitmap_Class(): TClass; extdecl;
begin
  Result := TCustomBitmap;
end;

//procedure
procedure CustomBitmap_SetSize(AObj: TCustomBitmap; AWidth, AHeight: integer); extdecl;
begin
  {$define handleExceptionFuncName :='SetSize'}
  handleExceptionBegin
  AObj.SetSize(AWidth, AHeight);
  handleExceptionEnd
end;


exports
  CustomBitmap_Create,
  CustomBitmap_Handle,
  CustomBitmap_HandleType,
  CustomBitmap_Monochrome,
  CustomBitmap_ReleaseHandle,
  CustomBitmap_Class,
  CustomBitmap_SetSize;