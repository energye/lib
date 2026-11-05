// function
function TFPCustomImage_LoadFromFileWithStr(AObj: TFPCustomImage; const filename: PChar): LongBool; extdecl;
begin
  {$define handleExceptionID := 25100}
  handleExceptionBegin
  Result := AObj.LoadFromFile(filename);
  handleExceptionEnd
end;

// function
function TFPCustomImage_SaveToFileWithStr(AObj: TFPCustomImage; const filename: PChar): LongBool; extdecl;
begin
  {$define handleExceptionID := 25101}
  handleExceptionBegin
  Result := AObj.SaveToFile(filename);
  handleExceptionEnd
end;

// function
function TFPCustomImage_ExtraCount(AObj: TFPCustomImage): integer; extdecl;
begin
  {$define handleExceptionID := 25102}
  handleExceptionBegin
  Result := AObj.ExtraCount();
  handleExceptionEnd
end;

// procedure
procedure TFPCustomImage_LoadFromStreamWithStreamFPCustomImageReader(AObj: TFPCustomImage; Str: TStream; Handler: TFPCustomImageReader); extdecl;
begin
  {$define handleExceptionID := 25103}
  handleExceptionBegin
  AObj.LoadFromStream(Str, Handler);
  handleExceptionEnd
end;

// procedure
procedure TFPCustomImage_LoadFromStreamWithStream(AObj: TFPCustomImage; Str: TStream); extdecl;
begin
  {$define handleExceptionID := 25104}
  handleExceptionBegin
  AObj.LoadFromStream(Str);
  handleExceptionEnd
end;

// procedure
procedure TFPCustomImage_LoadFromFileWithStrFPCustomImageReader(AObj: TFPCustomImage; const filename: PChar; Handler: TFPCustomImageReader); extdecl;
begin
  {$define handleExceptionID := 25105}
  handleExceptionBegin
  AObj.LoadFromFile(filename, Handler);
  handleExceptionEnd
end;

// procedure
procedure TFPCustomImage_SaveToStream(AObj: TFPCustomImage; Str: TStream; Handler: TFPCustomImageWriter); extdecl;
begin
  {$define handleExceptionID := 25106}
  handleExceptionBegin
  AObj.SaveToStream(Str, Handler);
  handleExceptionEnd
end;

// procedure
procedure TFPCustomImage_SaveToFileWithStrFPCustomImageWriter(AObj: TFPCustomImage; const filename: PChar; Handler: TFPCustomImageWriter); extdecl;
begin
  {$define handleExceptionID := 25107}
  handleExceptionBegin
  AObj.SaveToFile(filename, Handler);
  handleExceptionEnd
end;

// procedure
procedure TFPCustomImage_SetSize(AObj: TFPCustomImage; AWidth: integer; AHeight: integer); extdecl;
begin
  {$define handleExceptionID := 25108}
  handleExceptionBegin
  AObj.SetSize(AWidth, AHeight);
  handleExceptionEnd
end;

// procedure
procedure TFPCustomImage_RemoveExtra(AObj: TFPCustomImage; const key: PChar); extdecl;
begin
  {$define handleExceptionID := 25109}
  handleExceptionBegin
  AObj.RemoveExtra(key);
  handleExceptionEnd
end;

// property
function TFPCustomImage_Height(ASet: LongBool; AObj: TFPCustomImage; AValue: integer): integer; extdecl;
begin
  {$define handleExceptionID := 25110}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Height := AValue
  end else
    Result := AObj.Height;
  handleExceptionEnd
end;

// property
function TFPCustomImage_Width(ASet: LongBool; AObj: TFPCustomImage; AValue: integer): integer; extdecl;
begin
  {$define handleExceptionID := 25111}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Width := AValue
  end else
    Result := AObj.Width;
  handleExceptionEnd
end;

// property
procedure TFPCustomImage_Colors(ASet: LongBool; AObj: TFPCustomImage; x: integer; y: integer; var AValue: TFPColorPtr; var Result: TFPColorPtr); extdecl;
begin
  {$define handleExceptionID := 25112}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Colors[x, y] := TFPColorToPas(AValue)
  end else
    Result := TFPColorToGo(AObj.Colors[x, y]);
  handleExceptionEnd
end;

// property
function TFPCustomImage_UsePalette(ASet: LongBool; AObj: TFPCustomImage; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 25113}
  handleExceptionBegin
  if ASet then
  begin
    AObj.UsePalette := AValue
  end else
    Result := AObj.UsePalette;
  handleExceptionEnd
end;

// property
function TFPCustomImage_Palette(AObj: TFPCustomImage): TFPPalette; extdecl;
begin
  {$define handleExceptionID := 25114}
  handleExceptionBegin
  Result := AObj.Palette;
  handleExceptionEnd
end;

// property
function TFPCustomImage_Pixels(ASet: LongBool; AObj: TFPCustomImage; x: integer; y: integer; AValue: integer): integer; extdecl;
begin
  {$define handleExceptionID := 25115}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Pixels[x, y] := AValue
  end else
    Result := AObj.Pixels[x, y];
  handleExceptionEnd
end;

// property
procedure TFPCustomImage_Extra(ASet: LongBool; AObj: TFPCustomImage; const key: PChar; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 25116}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Extra[key] := AValue
  end else
    StringBufferCreate(AObj.Extra[key], AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TFPCustomImage_ExtraValue(ASet: LongBool; AObj: TFPCustomImage; index: integer; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 25117}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ExtraValue[index] := AValue
  end else
    StringBufferCreate(AObj.ExtraValue[index], AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TFPCustomImage_ExtraKey(ASet: LongBool; AObj: TFPCustomImage; index: integer; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 25118}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ExtraKey[index] := AValue
  end else
    StringBufferCreate(AObj.ExtraKey[index], AStrData, AStrSize);
  handleExceptionEnd
end;

// event
procedure TFPCustomImage_OnProgress(AObj: TFPCustomImage; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTFPImgProgressEvent}
  {$DEFINE EventName := OnProgress}
  LCLEventMethodCode
end;

exports
  TFPCustomImage_LoadFromFileWithStr,
  TFPCustomImage_SaveToFileWithStr,
  TFPCustomImage_ExtraCount,
  TFPCustomImage_LoadFromStreamWithStreamFPCustomImageReader,
  TFPCustomImage_LoadFromStreamWithStream,
  TFPCustomImage_LoadFromFileWithStrFPCustomImageReader,
  TFPCustomImage_SaveToStream,
  TFPCustomImage_SaveToFileWithStrFPCustomImageWriter,
  TFPCustomImage_SetSize,
  TFPCustomImage_RemoveExtra,
  TFPCustomImage_Height,
  TFPCustomImage_Width,
  TFPCustomImage_Colors,
  TFPCustomImage_UsePalette,
  TFPCustomImage_Palette,
  TFPCustomImage_Pixels,
  TFPCustomImage_Extra,
  TFPCustomImage_ExtraValue,
  TFPCustomImage_ExtraKey,
  TFPCustomImage_OnProgress;