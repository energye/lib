
//property
function FPCustomImage_Height(AIsSet: LongBool; AObj: TFPCustomImage; AValue: integer): integer; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Height := AValue;
  end else
    Result := AObj.Height;
  handleExceptionEnd
end;

//property
function FPCustomImage_Width(AIsSet: LongBool; AObj: TFPCustomImage; AValue: integer): integer; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Width := AValue;
  end else
    Result := AObj.Width;
  handleExceptionEnd
end;

//property
function FPCustomImage_Colors(AIsSet: LongBool; AObj: TFPCustomImage; x, y: integer; AValue: TFPColor): TFPColor; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Colors[x, y] := AValue;
  end else
    Result := AObj.Colors[x, y];
  handleExceptionEnd
end;

//property
function FPCustomImage_UsePalette(AIsSet: LongBool; AObj: TFPCustomImage; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.UsePalette := AValue;
  end else
    Result := AObj.UsePalette;
  handleExceptionEnd
end;

//property
function FPCustomImage_Palette(AObj: TFPCustomImage): TFPPalette; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Palette;
  handleExceptionEnd
end;

//property
function FPCustomImage_Pixels(AIsSet: LongBool; AObj: TFPCustomImage; x, y: integer; AValue: integer): integer; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Pixels[x, y] := AValue;
  end else
    Result := AObj.Pixels[x, y];
  handleExceptionEnd
end;

//property
function FPCustomImage_Extra(AIsSet: LongBool; AObj: TFPCustomImage; const key: PChar; AValue: PChar): PChar; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Extra[key] := AValue;
  end else
    Result := ToPChar(AObj.Extra[key]);
  handleExceptionEnd
end;

//property
function FPCustomImage_ExtraValue(AIsSet: LongBool; AObj: TFPCustomImage; index: integer; AValue: PChar): PChar; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ExtraValue[index] := AValue;
  end else
    Result := ToPChar(AObj.ExtraValue[index]);
  handleExceptionEnd
end;

//property
function FPCustomImage_ExtraKey(AIsSet: LongBool; AObj: TFPCustomImage; index: integer; AValue: PChar): PChar; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ExtraKey[index] := AValue;
  end else
    Result := ToPChar(AObj.ExtraKey[index]);
  handleExceptionEnd
end;

//function
function FPCustomImage_LoadFromFile(AObj: TFPCustomImage; const filename: PChar): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.LoadFromFile(filename);
  handleExceptionEnd
end;

//function
function FPCustomImage_SaveToFile(AObj: TFPCustomImage; const filename: PChar): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.SaveToFile(filename);
  handleExceptionEnd
end;

//function
function FPCustomImage_ExtraCount(AObj: TFPCustomImage): integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.ExtraCount();
  handleExceptionEnd
end;

//function
function FPCustomImage_Class(): TClass; extdecl;
begin
  Result := TFPCustomImage;
end;

//procedure
procedure FPCustomImage_LoadFromStream(AObj: TFPCustomImage; Str: TStream; Handler: TFPCustomImageReader); extdecl;
begin
  handleExceptionBegin
  AObj.LoadFromStream(Str, Handler);
  handleExceptionEnd
end;

//procedure
procedure FPCustomImage_LoadFromStream1(AObj: TFPCustomImage; Str: TStream); extdecl;
begin
  handleExceptionBegin
  AObj.LoadFromStream(Str);
  handleExceptionEnd
end;

//procedure
procedure FPCustomImage_LoadFromFile1(AObj: TFPCustomImage; const filename: PChar; Handler: TFPCustomImageReader); extdecl;
begin
  handleExceptionBegin
  AObj.LoadFromFile(filename, Handler);
  handleExceptionEnd
end;

//procedure
procedure FPCustomImage_SaveToStream(AObj: TFPCustomImage; Str: TStream; Handler: TFPCustomImageWriter); extdecl;
begin
  handleExceptionBegin
  AObj.SaveToStream(Str, Handler);
  handleExceptionEnd
end;

//procedure
procedure FPCustomImage_SaveToFile1(AObj: TFPCustomImage; const filename: PChar; Handler: TFPCustomImageWriter); extdecl;
begin
  handleExceptionBegin
  AObj.SaveToFile(filename, Handler);
  handleExceptionEnd
end;

//procedure
procedure FPCustomImage_SetSize(AObj: TFPCustomImage; AWidth, AHeight: integer); extdecl;
begin
  handleExceptionBegin
  AObj.SetSize(AWidth, AHeight);
  handleExceptionEnd
end;

//procedure
procedure FPCustomImage_RemoveExtra(AObj: TFPCustomImage; const key: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.RemoveExtra(key);
  handleExceptionEnd
end;

//property event
procedure FPCustomImage_SetOnProgress(AObj: TFPCustomImage; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTFPImgProgressEvent}
  {$DEFINE EventName := OnProgress}
  EventMethodCode
end;


exports
  FPCustomImage_Height,
  FPCustomImage_Width,
  FPCustomImage_Colors,
  FPCustomImage_UsePalette,
  FPCustomImage_Palette,
  FPCustomImage_Pixels,
  FPCustomImage_Extra,
  FPCustomImage_ExtraValue,
  FPCustomImage_ExtraKey,
  FPCustomImage_LoadFromFile,
  FPCustomImage_SaveToFile,
  FPCustomImage_ExtraCount,
  FPCustomImage_Class,
  FPCustomImage_LoadFromStream,
  FPCustomImage_LoadFromStream1,
  FPCustomImage_LoadFromFile1,
  FPCustomImage_SaveToStream,
  FPCustomImage_SaveToFile1,
  FPCustomImage_SetSize,
  FPCustomImage_RemoveExtra,
  FPCustomImage_SetOnProgress;