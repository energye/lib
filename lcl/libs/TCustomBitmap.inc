// constructor
function TCustomBitmap_Create(): TCustomBitmap; extdecl;
begin
  {$define handleExceptionID := 10800}
  handleExceptionBegin
  Result := TCustomBitmap.Create();
  handleExceptionEnd
end;

// function
function TCustomBitmap_ReleaseHandle(AObj: TCustomBitmap): HBITMAP; extdecl;
begin
  {$define handleExceptionID := 10801}
  handleExceptionBegin
  Result := AObj.ReleaseHandle();
  handleExceptionEnd
end;

// procedure
procedure TCustomBitmap_SetSize(AObj: TCustomBitmap; AWidth: integer; AHeight: integer); extdecl;
begin
  {$define handleExceptionID := 10802}
  handleExceptionBegin
  AObj.SetSize(AWidth, AHeight);
  handleExceptionEnd
end;

// property
function TCustomBitmap_Handle(ASet: LongBool; AObj: TCustomBitmap; AValue: HBITMAP): HBITMAP; extdecl;
begin
  {$define handleExceptionID := 10803}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Handle := AValue
  end else
    Result := AObj.Handle;
  handleExceptionEnd
end;

// property
function TCustomBitmap_HandleType(ASet: LongBool; AObj: TCustomBitmap; AValue: TBitmapHandleType): TBitmapHandleType; extdecl;
begin
  {$define handleExceptionID := 10804}
  handleExceptionBegin
  if ASet then
  begin
    AObj.HandleType := AValue
  end else
    Result := AObj.HandleType;
  handleExceptionEnd
end;

// property
function TCustomBitmap_Monochrome(ASet: LongBool; AObj: TCustomBitmap; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 10805}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Monochrome := AValue
  end else
    Result := AObj.Monochrome;
  handleExceptionEnd
end;

exports
  TCustomBitmap_Create,
  TCustomBitmap_ReleaseHandle,
  TCustomBitmap_SetSize,
  TCustomBitmap_Handle,
  TCustomBitmap_HandleType,
  TCustomBitmap_Monochrome;