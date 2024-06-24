
//property
function Graphic_Empty(AObj: TGraphic): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Empty;
  handleExceptionEnd
end;

//property
function Graphic_Height(AIsSet: LongBool; AObj: TGraphic; AValue: Integer): Integer; extdecl;
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
function Graphic_Modified(AIsSet: LongBool; AObj: TGraphic; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Modified := AValue;
  end else
    Result := AObj.Modified;
  handleExceptionEnd
end;

//property
function Graphic_MimeType(AObj: TGraphic): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.MimeType);
  handleExceptionEnd
end;

//property
function Graphic_Palette(AIsSet: LongBool; AObj: TGraphic; AValue: HPALETTE): HPALETTE; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Palette := AValue;
  end else
    Result := AObj.Palette;
  handleExceptionEnd
end;

//property
function Graphic_PaletteModified(AIsSet: LongBool; AObj: TGraphic; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.PaletteModified := AValue;
  end else
    Result := AObj.PaletteModified;
  handleExceptionEnd
end;

//property
function Graphic_Transparent(AIsSet: LongBool; AObj: TGraphic; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Transparent := AValue;
  end else
    Result := AObj.Transparent;
  handleExceptionEnd
end;

//property
function Graphic_Width(AIsSet: LongBool; AObj: TGraphic; AValue: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Width := AValue;
  end else
    Result := AObj.Width;
  handleExceptionEnd
end;

//function
function Graphic_LazarusResourceTypeValid(AObj: TGraphic; const AResourceType: PChar): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.LazarusResourceTypeValid(AResourceType);
  handleExceptionEnd
end;

//function
function Graphic_GetResourceType(AObj: TGraphic): TResourceType; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetResourceType();
  handleExceptionEnd
end;

//function
function Graphic_Class(): TClass; extdecl;
begin
  Result := TGraphic;
end;

//procedure
procedure Graphic_Clear(AObj: TGraphic); extdecl;
begin
  handleExceptionBegin
  AObj.Clear();
  handleExceptionEnd
end;

//procedure
procedure Graphic_LoadFromFile(AObj: TGraphic; const Filename: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.LoadFromFile(Filename);
  handleExceptionEnd
end;

//procedure
procedure Graphic_LoadFromStream(AObj: TGraphic; Stream: TStream); extdecl;
begin
  handleExceptionBegin
  AObj.LoadFromStream(Stream);
  handleExceptionEnd
end;

//procedure
procedure Graphic_LoadFromMimeStream(AObj: TGraphic; AStream: TStream; const AMimeType: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.LoadFromMimeStream(AStream, AMimeType);
  handleExceptionEnd
end;

//procedure
procedure Graphic_LoadFromLazarusResource(AObj: TGraphic; const ResName: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.LoadFromLazarusResource(ResName);
  handleExceptionEnd
end;

//procedure
procedure Graphic_LoadFromResourceName(AObj: TGraphic; Instance: THandle; const ResName: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.LoadFromResourceName(Instance, ResName);
  handleExceptionEnd
end;

//procedure
procedure Graphic_LoadFromResourceID(AObj: TGraphic; Instance: THandle; ResID: NativeInt); extdecl;
begin
  handleExceptionBegin
  AObj.LoadFromResourceID(Instance, ResID);
  handleExceptionEnd
end;

//procedure
procedure Graphic_LoadFromClipboardFormat(AObj: TGraphic; FormatID: TClipboardFormat); extdecl;
begin
  handleExceptionBegin
  AObj.LoadFromClipboardFormat(FormatID);
  handleExceptionEnd
end;

//procedure
procedure Graphic_LoadFromClipboardFormatID(AObj: TGraphic; ClipboardType: TClipboardType; FormatID: TClipboardFormat); extdecl;
begin
  handleExceptionBegin
  AObj.LoadFromClipboardFormatID(ClipboardType, FormatID);
  handleExceptionEnd
end;

//procedure
procedure Graphic_SaveToFile(AObj: TGraphic; const Filename: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.SaveToFile(Filename);
  handleExceptionEnd
end;

//procedure
procedure Graphic_SaveToStream(AObj: TGraphic; Stream: TStream); extdecl;
begin
  handleExceptionBegin
  AObj.SaveToStream(Stream);
  handleExceptionEnd
end;

//procedure
procedure Graphic_SaveToClipboardFormat(AObj: TGraphic; FormatID: TClipboardFormat); extdecl;
begin
  handleExceptionBegin
  AObj.SaveToClipboardFormat(FormatID);
  handleExceptionEnd
end;

//procedure
procedure Graphic_SaveToClipboardFormatID(AObj: TGraphic; ClipboardType: TClipboardType; FormatID: TClipboardFormat); extdecl;
begin
  handleExceptionBegin
  AObj.SaveToClipboardFormatID(ClipboardType, FormatID);
  handleExceptionEnd
end;

//procedure
procedure Graphic_GetSupportedSourceMimeTypes(AObj: TGraphic; List: TStrings); extdecl;
begin
  handleExceptionBegin
  AObj.GetSupportedSourceMimeTypes(List);
  handleExceptionEnd
end;

//property event
procedure Graphic_SetOnChange(AObj: TGraphic; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnChange}
  EventMethodCode
end;

//property event
procedure Graphic_SetOnProgress(AObj: TGraphic; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTProgressEvent}
  {$DEFINE EventName := OnProgress}
  EventMethodCode
end;


exports
  Graphic_Empty,
  Graphic_Height,
  Graphic_Modified,
  Graphic_MimeType,
  Graphic_Palette,
  Graphic_PaletteModified,
  Graphic_Transparent,
  Graphic_Width,
  Graphic_LazarusResourceTypeValid,
  Graphic_GetResourceType,
  Graphic_Class,
  Graphic_Clear,
  Graphic_LoadFromFile,
  Graphic_LoadFromStream,
  Graphic_LoadFromMimeStream,
  Graphic_LoadFromLazarusResource,
  Graphic_LoadFromResourceName,
  Graphic_LoadFromResourceID,
  Graphic_LoadFromClipboardFormat,
  Graphic_LoadFromClipboardFormatID,
  Graphic_SaveToFile,
  Graphic_SaveToStream,
  Graphic_SaveToClipboardFormat,
  Graphic_SaveToClipboardFormatID,
  Graphic_GetSupportedSourceMimeTypes,
  Graphic_SetOnChange,
  Graphic_SetOnProgress;