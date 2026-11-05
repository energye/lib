// constructor
function TFPCustomFont_Create(): TFPCustomFont; extdecl;
begin
  {$define handleExceptionID := 4900}
  handleExceptionBegin
  Result := TFPCustomFont.Create();
  handleExceptionEnd
end;

// function
function TFPCustomFont_CopyFont(AObj: TFPCustomFont): TFPCustomFont; extdecl;
begin
  {$define handleExceptionID := 4901}
  handleExceptionBegin
  Result := AObj.CopyFont();
  handleExceptionEnd
end;

// function
function TFPCustomFont_GetTextHeight(AObj: TFPCustomFont; text: PChar): integer; extdecl;
begin
  {$define handleExceptionID := 4902}
  handleExceptionBegin
  Result := AObj.GetTextHeight(text);
  handleExceptionEnd
end;

// function
function TFPCustomFont_GetTextWidth(AObj: TFPCustomFont; text: PChar): integer; extdecl;
begin
  {$define handleExceptionID := 4903}
  handleExceptionBegin
  Result := AObj.GetTextWidth(text);
  handleExceptionEnd
end;

// procedure
procedure TFPCustomFont_GetTextSize(AObj: TFPCustomFont; text: PChar; var w: integer; var h: integer); extdecl;
var
  Outw: integer;
  Outh: integer;
begin
  {$define handleExceptionID := 4904}
  handleExceptionBegin
  Outw := w;
  Outh := h;
  AObj.GetTextSize(text, Outw, Outh);
  w := Outw;
  h := Outh;
  handleExceptionEnd
end;

// property
procedure TFPCustomFont_Name(ASet: LongBool; AObj: TFPCustomFont; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 4905}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Name := AValue
  end else
    StringBufferCreate(AObj.Name, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TFPCustomFont_Size(ASet: LongBool; AObj: TFPCustomFont; AValue: integer): integer; extdecl;
begin
  {$define handleExceptionID := 4906}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Size := AValue
  end else
    Result := AObj.Size;
  handleExceptionEnd
end;

// property
function TFPCustomFont_Bold(ASet: LongBool; AObj: TFPCustomFont; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 4907}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Bold := AValue
  end else
    Result := AObj.Bold;
  handleExceptionEnd
end;

// property
function TFPCustomFont_Italic(ASet: LongBool; AObj: TFPCustomFont; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 4908}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Italic := AValue
  end else
    Result := AObj.Italic;
  handleExceptionEnd
end;

// property
function TFPCustomFont_Underline(ASet: LongBool; AObj: TFPCustomFont; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 4909}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Underline := AValue
  end else
    Result := AObj.Underline;
  handleExceptionEnd
end;

// property
function TFPCustomFont_StrikeThrough(ASet: LongBool; AObj: TFPCustomFont; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 4910}
  handleExceptionBegin
  if ASet then
  begin
    AObj.StrikeThrough := AValue
  end else
    Result := AObj.StrikeThrough;
  handleExceptionEnd
end;

// property
function TFPCustomFont_Orientation(ASet: LongBool; AObj: TFPCustomFont; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 4911}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Orientation := AValue
  end else
    Result := AObj.Orientation;
  handleExceptionEnd
end;

exports
  TFPCustomFont_Create,
  TFPCustomFont_CopyFont,
  TFPCustomFont_GetTextHeight,
  TFPCustomFont_GetTextWidth,
  TFPCustomFont_GetTextSize,
  TFPCustomFont_Name,
  TFPCustomFont_Size,
  TFPCustomFont_Bold,
  TFPCustomFont_Italic,
  TFPCustomFont_Underline,
  TFPCustomFont_StrikeThrough,
  TFPCustomFont_Orientation;