
//constructor
function FPCustomFont_Create(): TFPCustomFont; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TFPCustomFont.Create();
  handleExceptionEnd
end;

//property
function FPCustomFont_Name(AIsSet: LongBool; AObj: TFPCustomFont; AValue: PChar): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='Name'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Name := AValue;
  end else
    Result := ToPChar(AObj.Name);
  handleExceptionEnd
end;

//property
function FPCustomFont_Size(AIsSet: LongBool; AObj: TFPCustomFont; AValue: integer): integer; extdecl;
begin
  {$define handleExceptionFuncName :='Size'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Size := AValue;
  end else
    Result := AObj.Size;
  handleExceptionEnd
end;

//property
function FPCustomFont_Bold(AIsSet: LongBool; AObj: TFPCustomFont; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='Bold'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Bold := AValue;
  end else
    Result := AObj.Bold;
  handleExceptionEnd
end;

//property
function FPCustomFont_Italic(AIsSet: LongBool; AObj: TFPCustomFont; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='Italic'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Italic := AValue;
  end else
    Result := AObj.Italic;
  handleExceptionEnd
end;

//property
function FPCustomFont_Underline(AIsSet: LongBool; AObj: TFPCustomFont; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='Underline'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Underline := AValue;
  end else
    Result := AObj.Underline;
  handleExceptionEnd
end;

//property
function FPCustomFont_StrikeThrough(AIsSet: LongBool; AObj: TFPCustomFont; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='StrikeThrough'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.StrikeThrough := AValue;
  end else
    Result := AObj.StrikeThrough;
  handleExceptionEnd
end;

//property
function FPCustomFont_Orientation(AIsSet: LongBool; AObj: TFPCustomFont; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='Orientation'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Orientation := AValue;
  end else
    Result := AObj.Orientation;
  handleExceptionEnd
end;

//function
function FPCustomFont_CopyFont(AObj: TFPCustomFont): TFPCustomFont; extdecl;
begin
  {$define handleExceptionFuncName :='CopyFont'}
  handleExceptionBegin
  Result := AObj.CopyFont();
  handleExceptionEnd
end;

//function
function FPCustomFont_GetTextHeight(AObj: TFPCustomFont; text: PChar): integer; extdecl;
begin
  {$define handleExceptionFuncName :='GetTextHeight'}
  handleExceptionBegin
  Result := AObj.GetTextHeight(text);
  handleExceptionEnd
end;

//function
function FPCustomFont_GetTextWidth(AObj: TFPCustomFont; text: PChar): integer; extdecl;
begin
  {$define handleExceptionFuncName :='GetTextWidth'}
  handleExceptionBegin
  Result := AObj.GetTextWidth(text);
  handleExceptionEnd
end;

//function
function FPCustomFont_Class(): TClass; extdecl;
begin
  Result := TFPCustomFont;
end;

//procedure
procedure FPCustomFont_GetTextSize(AObj: TFPCustomFont; text: PChar; var w, h: integer); extdecl;
var
  Retw: integer;
  Reth: integer;
begin
  {$define handleExceptionFuncName :='GetTextSize'}
  handleExceptionBegin
  Retw := w;
  Reth := h;
  AObj.GetTextSize(text, Retw, Reth);
  w := Retw;
  h := Reth;
  handleExceptionEnd
end;


exports
  FPCustomFont_Create,
  FPCustomFont_Name,
  FPCustomFont_Size,
  FPCustomFont_Bold,
  FPCustomFont_Italic,
  FPCustomFont_Underline,
  FPCustomFont_StrikeThrough,
  FPCustomFont_Orientation,
  FPCustomFont_CopyFont,
  FPCustomFont_GetTextHeight,
  FPCustomFont_GetTextWidth,
  FPCustomFont_Class,
  FPCustomFont_GetTextSize;