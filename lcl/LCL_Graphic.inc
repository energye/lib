
//property
function Graphic_Empty(AObj: TGraphic): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='Empty'}
  handleExceptionBegin
  Result := AObj.Empty;
  handleExceptionEnd
end;

//property
function Graphic_Height(AIsSet: LongBool; AObj: TGraphic; AValue: Integer): Integer; extdecl;
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

//property
function Graphic_Modified(AIsSet: LongBool; AObj: TGraphic; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='Modified'}
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
  {$define handleExceptionFuncName :='MimeType'}
  handleExceptionBegin
  Result := ToPChar(AObj.MimeType);
  handleExceptionEnd
end;

//property
function Graphic_Palette(AIsSet: LongBool; AObj: TGraphic; AValue: HPALETTE): HPALETTE; extdecl;
begin
  {$define handleExceptionFuncName :='Palette'}
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
  {$define handleExceptionFuncName :='PaletteModified'}
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
  {$define handleExceptionFuncName :='Transparent'}
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
  {$define handleExceptionFuncName :='Width'}
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
  {$define handleExceptionFuncName :='LazarusResourceTypeValid'}
  handleExceptionBegin
  Result := AObj.LazarusResourceTypeValid(AResourceType);
  handleExceptionEnd
end;

//function
function Graphic_GetResourceType(AObj: TGraphic): TResourceType; extdecl;
begin
  {$define handleExceptionFuncName :='GetResourceType'}
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
  {$define handleExceptionFuncName :='Clear'}
  handleExceptionBegin
  AObj.Clear();
  handleExceptionEnd
end;

//procedure
procedure Graphic_LoadFromFile(AObj: TGraphic; const Filename: PChar); extdecl;
begin
  {$define handleExceptionFuncName :='LoadFromFile'}
  handleExceptionBegin
  AObj.LoadFromFile(Filename);
  handleExceptionEnd
end;

//procedure
procedure Graphic_LoadFromStream(AObj: TGraphic; Stream: TStream); extdecl;
begin
  {$define handleExceptionFuncName :='LoadFromStream'}
  handleExceptionBegin
  AObj.LoadFromStream(Stream);
  handleExceptionEnd
end;

//procedure
procedure Graphic_LoadFromMimeStream(AObj: TGraphic; AStream: TStream; const AMimeType: PChar); extdecl;
begin
  {$define handleExceptionFuncName :='LoadFromMimeStream'}
  handleExceptionBegin
  AObj.LoadFromMimeStream(AStream, AMimeType);
  handleExceptionEnd
end;

//procedure
procedure Graphic_LoadFromLazarusResource(AObj: TGraphic; const ResName: PChar); extdecl;
begin
  {$define handleExceptionFuncName :='LoadFromLazarusResource'}
  handleExceptionBegin
  AObj.LoadFromLazarusResource(ResName);
  handleExceptionEnd
end;

//procedure
procedure Graphic_LoadFromResourceName(AObj: TGraphic; Instance: THandle; const ResName: PChar); extdecl;
begin
  {$define handleExceptionFuncName :='LoadFromResourceName'}
  handleExceptionBegin
  AObj.LoadFromResourceName(Instance, ResName);
  handleExceptionEnd
end;

//procedure
procedure Graphic_LoadFromResourceID(AObj: TGraphic; Instance: THandle; ResID: NativeInt); extdecl;
begin
  {$define handleExceptionFuncName :='LoadFromResourceID'}
  handleExceptionBegin
  AObj.LoadFromResourceID(Instance, ResID);
  handleExceptionEnd
end;

//procedure
procedure Graphic_LoadFromClipboardFormat(AObj: TGraphic; FormatID: TClipboardFormat); extdecl;
begin
  {$define handleExceptionFuncName :='LoadFromClipboardFormat'}
  handleExceptionBegin
  AObj.LoadFromClipboardFormat(FormatID);
  handleExceptionEnd
end;

//procedure
procedure Graphic_LoadFromClipboardFormatID(AObj: TGraphic; ClipboardType: TClipboardType; FormatID: TClipboardFormat); extdecl;
begin
  {$define handleExceptionFuncName :='LoadFromClipboardFormatID'}
  handleExceptionBegin
  AObj.LoadFromClipboardFormatID(ClipboardType, FormatID);
  handleExceptionEnd
end;

//procedure
procedure Graphic_SaveToFile(AObj: TGraphic; const Filename: PChar); extdecl;
begin
  {$define handleExceptionFuncName :='SaveToFile'}
  handleExceptionBegin
  AObj.SaveToFile(Filename);
  handleExceptionEnd
end;

//procedure
procedure Graphic_SaveToStream(AObj: TGraphic; Stream: TStream); extdecl;
begin
  {$define handleExceptionFuncName :='SaveToStream'}
  handleExceptionBegin
  AObj.SaveToStream(Stream);
  handleExceptionEnd
end;

//procedure
procedure Graphic_SaveToClipboardFormat(AObj: TGraphic; FormatID: TClipboardFormat); extdecl;
begin
  {$define handleExceptionFuncName :='SaveToClipboardFormat'}
  handleExceptionBegin
  AObj.SaveToClipboardFormat(FormatID);
  handleExceptionEnd
end;

//procedure
procedure Graphic_SaveToClipboardFormatID(AObj: TGraphic; ClipboardType: TClipboardType; FormatID: TClipboardFormat); extdecl;
begin
  {$define handleExceptionFuncName :='SaveToClipboardFormatID'}
  handleExceptionBegin
  AObj.SaveToClipboardFormatID(ClipboardType, FormatID);
  handleExceptionEnd
end;

//procedure
procedure Graphic_GetSupportedSourceMimeTypes(AObj: TGraphic; List: TStrings); extdecl;
begin
  {$define handleExceptionFuncName :='GetSupportedSourceMimeTypes'}
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