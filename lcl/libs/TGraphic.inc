// function
function TGraphic_LazarusResourceTypeValid(AObj: TGraphic; const AResourceType: PChar): LongBool; extdecl;
begin
  {$define handleExceptionID := 10400}
  handleExceptionBegin
  Result := AObj.LazarusResourceTypeValid(AResourceType);
  handleExceptionEnd
end;

// function
function TGraphic_GetResourceType(AObj: TGraphic): TResourceType; extdecl;
begin
  {$define handleExceptionID := 10401}
  handleExceptionBegin
  Result := AObj.GetResourceType();
  handleExceptionEnd
end;

// function static
function TGraphic_GetFileExtensions(): PChar; extdecl;
begin
  Result := ToPChar(TGraphic.GetFileExtensions());
end;

// function static
function TGraphic_IsStreamFormatSupported(Stream: TStream): LongBool; extdecl;
begin
  Result := TGraphic.IsStreamFormatSupported(Stream);
end;

// procedure
procedure TGraphic_Clear(AObj: TGraphic); extdecl;
begin
  {$define handleExceptionID := 10402}
  handleExceptionBegin
  AObj.Clear();
  handleExceptionEnd
end;

// procedure
procedure TGraphic_LoadFromFile(AObj: TGraphic; const Filename: PChar); extdecl;
begin
  {$define handleExceptionID := 10403}
  handleExceptionBegin
  AObj.LoadFromFile(Filename);
  handleExceptionEnd
end;

// procedure
procedure TGraphic_LoadFromStreamWithStream(AObj: TGraphic; Stream: TStream); extdecl;
begin
  {$define handleExceptionID := 10404}
  handleExceptionBegin
  AObj.LoadFromStream(Stream);
  handleExceptionEnd
end;

// procedure
procedure TGraphic_LoadFromMimeStream(AObj: TGraphic; AStream: TStream; const AMimeType: PChar); extdecl;
begin
  {$define handleExceptionID := 10405}
  handleExceptionBegin
  AObj.LoadFromMimeStream(AStream, AMimeType);
  handleExceptionEnd
end;

// procedure
procedure TGraphic_LoadFromLazarusResource(AObj: TGraphic; const ResName: PChar); extdecl;
begin
  {$define handleExceptionID := 10406}
  handleExceptionBegin
  AObj.LoadFromLazarusResource(ResName);
  handleExceptionEnd
end;

// procedure
procedure TGraphic_LoadFromResourceName(AObj: TGraphic; Instance: TLCLHandle; const ResName: PChar); extdecl;
begin
  {$define handleExceptionID := 10407}
  handleExceptionBegin
  AObj.LoadFromResourceName(Instance, ResName);
  handleExceptionEnd
end;

// procedure
procedure TGraphic_LoadFromResourceID(AObj: TGraphic; Instance: TLCLHandle; ResID: PtrInt); extdecl;
begin
  {$define handleExceptionID := 10408}
  handleExceptionBegin
  AObj.LoadFromResourceID(Instance, ResID);
  handleExceptionEnd
end;

// procedure
procedure TGraphic_LoadFromClipboardFormat(AObj: TGraphic; FormatID: TClipboardFormat); extdecl;
begin
  {$define handleExceptionID := 10409}
  handleExceptionBegin
  AObj.LoadFromClipboardFormat(FormatID);
  handleExceptionEnd
end;

// procedure
procedure TGraphic_LoadFromClipboardFormatID(AObj: TGraphic; ClipboardType: TClipboardType; FormatID: TClipboardFormat); extdecl;
begin
  {$define handleExceptionID := 10410}
  handleExceptionBegin
  AObj.LoadFromClipboardFormatID(ClipboardType, FormatID);
  handleExceptionEnd
end;

// procedure
procedure TGraphic_SaveToFile(AObj: TGraphic; const Filename: PChar); extdecl;
begin
  {$define handleExceptionID := 10411}
  handleExceptionBegin
  AObj.SaveToFile(Filename);
  handleExceptionEnd
end;

// procedure
procedure TGraphic_SaveToStream(AObj: TGraphic; Stream: TStream); extdecl;
begin
  {$define handleExceptionID := 10412}
  handleExceptionBegin
  AObj.SaveToStream(Stream);
  handleExceptionEnd
end;

// procedure
procedure TGraphic_SaveToClipboardFormat(AObj: TGraphic; FormatID: TClipboardFormat); extdecl;
begin
  {$define handleExceptionID := 10413}
  handleExceptionBegin
  AObj.SaveToClipboardFormat(FormatID);
  handleExceptionEnd
end;

// procedure
procedure TGraphic_SaveToClipboardFormatID(AObj: TGraphic; ClipboardType: TClipboardType; FormatID: TClipboardFormat); extdecl;
begin
  {$define handleExceptionID := 10414}
  handleExceptionBegin
  AObj.SaveToClipboardFormatID(ClipboardType, FormatID);
  handleExceptionEnd
end;

// procedure
procedure TGraphic_GetSupportedSourceMimeTypes(AObj: TGraphic; List: TStrings); extdecl;
begin
  {$define handleExceptionID := 10415}
  handleExceptionBegin
  AObj.GetSupportedSourceMimeTypes(List);
  handleExceptionEnd
end;

// property
function TGraphic_Empty(AObj: TGraphic): LongBool; extdecl;
begin
  {$define handleExceptionID := 10416}
  handleExceptionBegin
  Result := AObj.Empty;
  handleExceptionEnd
end;

// property
function TGraphic_Height(ASet: LongBool; AObj: TGraphic; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 10417}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Height := AValue
  end else
    Result := AObj.Height;
  handleExceptionEnd
end;

// property
function TGraphic_Modified(ASet: LongBool; AObj: TGraphic; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 10418}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Modified := AValue
  end else
    Result := AObj.Modified;
  handleExceptionEnd
end;

// property
procedure TGraphic_MimeType(AObj: TGraphic; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 10419}
  handleExceptionBegin
  StringBufferCreate(AObj.MimeType, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TGraphic_Palette(ASet: LongBool; AObj: TGraphic; AValue: HPALETTE): HPALETTE; extdecl;
begin
  {$define handleExceptionID := 10420}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Palette := AValue
  end else
    Result := AObj.Palette;
  handleExceptionEnd
end;

// property
function TGraphic_PaletteModified(ASet: LongBool; AObj: TGraphic; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 10421}
  handleExceptionBegin
  if ASet then
  begin
    AObj.PaletteModified := AValue
  end else
    Result := AObj.PaletteModified;
  handleExceptionEnd
end;

// property
function TGraphic_Transparent(ASet: LongBool; AObj: TGraphic; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 10422}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Transparent := AValue
  end else
    Result := AObj.Transparent;
  handleExceptionEnd
end;

// property
function TGraphic_Width(ASet: LongBool; AObj: TGraphic; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 10423}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Width := AValue
  end else
    Result := AObj.Width;
  handleExceptionEnd
end;

// event
procedure TGraphic_OnChange(AObj: TGraphic; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnChange}
  LCLEventMethodCode
end;

// event
procedure TGraphic_OnProgress(AObj: TGraphic; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTProgressEvent}
  {$DEFINE EventName := OnProgress}
  LCLEventMethodCode
end;

exports
  TGraphic_LazarusResourceTypeValid,
  TGraphic_GetResourceType,
  TGraphic_GetFileExtensions,
  TGraphic_IsStreamFormatSupported,
  TGraphic_Clear,
  TGraphic_LoadFromFile,
  TGraphic_LoadFromStreamWithStream,
  TGraphic_LoadFromMimeStream,
  TGraphic_LoadFromLazarusResource,
  TGraphic_LoadFromResourceName,
  TGraphic_LoadFromResourceID,
  TGraphic_LoadFromClipboardFormat,
  TGraphic_LoadFromClipboardFormatID,
  TGraphic_SaveToFile,
  TGraphic_SaveToStream,
  TGraphic_SaveToClipboardFormat,
  TGraphic_SaveToClipboardFormatID,
  TGraphic_GetSupportedSourceMimeTypes,
  TGraphic_Empty,
  TGraphic_Height,
  TGraphic_Modified,
  TGraphic_MimeType,
  TGraphic_Palette,
  TGraphic_PaletteModified,
  TGraphic_Transparent,
  TGraphic_Width,
  TGraphic_OnChange,
  TGraphic_OnProgress;