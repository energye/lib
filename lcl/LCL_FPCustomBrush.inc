
//constructor
function FPCustomBrush_Create(): TFPCustomBrush; extdecl;
begin
  handleExceptionBegin
  Result := TFPCustomBrush.Create();
  handleExceptionEnd
end;

//property
function FPCustomBrush_Style(AIsSet: LongBool; AObj: TFPCustomBrush; AValue: TFPBrushStyle): TFPBrushStyle; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Style := AValue;
  end else
    Result := AObj.Style;
  handleExceptionEnd
end;

//property
function FPCustomBrush_Image(AIsSet: LongBool; AObj: TFPCustomBrush; AValue: TFPCustomImage): TFPCustomImage; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Image := AValue;
  end else
    Result := AObj.Image;
  handleExceptionEnd
end;

//function
function FPCustomBrush_CopyBrush(AObj: TFPCustomBrush): TFPCustomBrush; extdecl;
begin
  handleExceptionBegin
  Result := AObj.CopyBrush();
  handleExceptionEnd
end;

//function
function FPCustomBrush_Class(): TClass; extdecl;
begin
  Result := TFPCustomBrush;
end;


exports
  FPCustomBrush_Create,
  FPCustomBrush_Style,
  FPCustomBrush_Image,
  FPCustomBrush_CopyBrush,
  FPCustomBrush_Class;