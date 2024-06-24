
//constructor
function CustomBitmap_Create(): TCustomBitmap; extdecl;
begin
  handleExceptionBegin
  Result := TCustomBitmap.Create();
  handleExceptionEnd
end;

//property
function CustomBitmap_Handle(AIsSet: LongBool; AObj: TCustomBitmap; AValue: HBITMAP): HBITMAP; extdecl;
begin
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