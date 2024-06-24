
//constructor
function Brush_Create(): TBrush; extdecl;
begin
  handleExceptionBegin
  Result := TBrush.Create();
  handleExceptionEnd
end;

//property
function Brush_Bitmap(AIsSet: LongBool; AObj: TBrush; AValue: TCustomBitmap): TCustomBitmap; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Bitmap := AValue;
  end else
    Result := AObj.Bitmap;
  handleExceptionEnd
end;

//property
function Brush_Color(AIsSet: LongBool; AObj: TBrush; AValue: TColor): TColor; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Color := AValue;
  end else
    Result := AObj.Color;
  handleExceptionEnd
end;

//function
function Brush_EqualsBrush(AObj: TBrush; ABrush: TBrush): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.EqualsBrush(ABrush);
  handleExceptionEnd
end;

//function
function Brush_Class(): TClass; extdecl;
begin
  Result := TBrush;
end;


exports
  Brush_Create,
  Brush_Bitmap,
  Brush_Color,
  Brush_EqualsBrush,
  Brush_Class;