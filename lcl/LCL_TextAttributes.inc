
//constructor
function TextAttributes_Create(AOwner: TRichMemo; AType: TAttributeType): TTextAttributes; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TTextAttributes.Create(AOwner, AType);
  handleExceptionEnd
end;

//property
function TextAttributes_Name(AIsSet: LongBool; AObj: TTextAttributes; AValue: PChar): PChar; extdecl;
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
function TextAttributes_Pitch(AIsSet: LongBool; AObj: TTextAttributes; AValue: TFontPitch): TFontPitch; extdecl;
begin
  {$define handleExceptionFuncName :='Pitch'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Pitch := AValue;
  end else
    Result := AObj.Pitch;
  handleExceptionEnd
end;

//property
function TextAttributes_Charset(AIsSet: LongBool; AObj: TTextAttributes; AValue: TFontCharset): TFontCharset; extdecl;
begin
  {$define handleExceptionFuncName :='Charset'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Charset := AValue;
  end else
    Result := AObj.Charset;
  handleExceptionEnd
end;

//property
function TextAttributes_Color(AIsSet: LongBool; AObj: TTextAttributes; AValue: TColor): TColor; extdecl;
begin
  {$define handleExceptionFuncName :='Color'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Color := AValue;
  end else
    Result := AObj.Color;
  handleExceptionEnd
end;

//property
function TextAttributes_Size(AIsSet: LongBool; AObj: TTextAttributes; AValue: Integer): Integer; extdecl;
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
function TextAttributes_Style(AIsSet: LongBool; AObj: TTextAttributes; AValue: TFontStyles): TFontStyles; extdecl;
begin
  {$define handleExceptionFuncName :='Style'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Style := AValue;
  end else
    Result := AObj.Style;
  handleExceptionEnd
end;

//property
function TextAttributes_Height(AIsSet: LongBool; AObj: TTextAttributes; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='Height'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Height := AValue;
  end else
    Result := AObj.Height;
  handleExceptionEnd
end;

//function
function TextAttributes_Class(): TClass; extdecl;
begin
  Result := TTextAttributes;
end;


exports
  TextAttributes_Create,
  TextAttributes_Name,
  TextAttributes_Pitch,
  TextAttributes_Charset,
  TextAttributes_Color,
  TextAttributes_Size,
  TextAttributes_Style,
  TextAttributes_Height,
  TextAttributes_Class;