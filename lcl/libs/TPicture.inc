// constructor
function TPicture_Create(): TPicture; extdecl;
begin
  {$define handleExceptionID := 12100}
  handleExceptionBegin
  Result := TPicture.Create();
  handleExceptionEnd
end;

// function static
function TPicture_SupportsClipboardFormat(FormatID: TClipboardFormat): LongBool; extdecl;
begin
  Result := TPicture.SupportsClipboardFormat(FormatID);
end;

// function static
function TPicture_FindGraphicClassWithFileExt(const Ext: PChar; ExceptionOnNotFound: LongBool): TGraphicClass; extdecl;
begin
  Result := TPicture.FindGraphicClassWithFileExt(Ext, ExceptionOnNotFound);
end;

// procedure
procedure TPicture_Clear(AObj: TPicture); extdecl;
begin
  {$define handleExceptionID := 12101}
  handleExceptionBegin
  AObj.Clear();
  handleExceptionEnd
end;

// procedure
procedure TPicture_LoadFromClipboardFormat(AObj: TPicture; FormatID: TClipboardFormat); extdecl;
begin
  {$define handleExceptionID := 12102}
  handleExceptionBegin
  AObj.LoadFromClipboardFormat(FormatID);
  handleExceptionEnd
end;

// procedure
procedure TPicture_LoadFromClipboardFormatID(AObj: TPicture; ClipboardType: TClipboardType; FormatID: TClipboardFormat); extdecl;
begin
  {$define handleExceptionID := 12103}
  handleExceptionBegin
  AObj.LoadFromClipboardFormatID(ClipboardType, FormatID);
  handleExceptionEnd
end;

// procedure
procedure TPicture_LoadFromFile(AObj: TPicture; const Filename: PChar); extdecl;
begin
  {$define handleExceptionID := 12104}
  handleExceptionBegin
  AObj.LoadFromFile(Filename);
  handleExceptionEnd
end;

// procedure
procedure TPicture_LoadFromResourceNameWithLCLHandleStr(AObj: TPicture; Instance: TLCLHandle; const ResName: PChar); extdecl;
begin
  {$define handleExceptionID := 12105}
  handleExceptionBegin
  AObj.LoadFromResourceName(Instance, ResName);
  handleExceptionEnd
end;

// procedure
procedure TPicture_LoadFromResourceNameWithLCLHandleStrGClass(AObj: TPicture; Instance: TLCLHandle; const ResName: PChar; AClass: TGraphicClass); extdecl;
begin
  {$define handleExceptionID := 12106}
  handleExceptionBegin
  AObj.LoadFromResourceName(Instance, ResName, AClass);
  handleExceptionEnd
end;

// procedure
procedure TPicture_LoadFromLazarusResource(AObj: TPicture; const AName: PChar); extdecl;
begin
  {$define handleExceptionID := 12107}
  handleExceptionBegin
  AObj.LoadFromLazarusResource(AName);
  handleExceptionEnd
end;

// procedure
procedure TPicture_LoadFromStream(AObj: TPicture; Stream: TStream); extdecl;
begin
  {$define handleExceptionID := 12108}
  handleExceptionBegin
  AObj.LoadFromStream(Stream);
  handleExceptionEnd
end;

// procedure
procedure TPicture_LoadFromStreamWithFileExt(AObj: TPicture; Stream: TStream; const FileExt: PChar); extdecl;
begin
  {$define handleExceptionID := 12109}
  handleExceptionBegin
  AObj.LoadFromStreamWithFileExt(Stream, FileExt);
  handleExceptionEnd
end;

// procedure
procedure TPicture_SaveToClipboardFormat(AObj: TPicture; FormatID: TClipboardFormat); extdecl;
begin
  {$define handleExceptionID := 12110}
  handleExceptionBegin
  AObj.SaveToClipboardFormat(FormatID);
  handleExceptionEnd
end;

// procedure
procedure TPicture_SaveToFile(AObj: TPicture; const Filename: PChar; const FileExt: PChar); extdecl;
begin
  {$define handleExceptionID := 12111}
  handleExceptionBegin
  AObj.SaveToFile(Filename, FileExt);
  handleExceptionEnd
end;

// procedure
procedure TPicture_SaveToStream(AObj: TPicture; Stream: TStream); extdecl;
begin
  {$define handleExceptionID := 12112}
  handleExceptionBegin
  AObj.SaveToStream(Stream);
  handleExceptionEnd
end;

// procedure
procedure TPicture_SaveToStreamWithFileExt(AObj: TPicture; Stream: TStream; const FileExt: PChar); extdecl;
begin
  {$define handleExceptionID := 12113}
  handleExceptionBegin
  AObj.SaveToStreamWithFileExt(Stream, FileExt);
  handleExceptionEnd
end;

// procedure static
procedure TPicture_RegisterFileFormat(const AnExtension: PChar; const ADescription: PChar; AGraphicClass: TGraphicClass); extdecl;
begin
  TPicture.RegisterFileFormat(AnExtension, ADescription, AGraphicClass);
end;

// procedure static
procedure TPicture_RegisterClipboardFormat(FormatID: TClipboardFormat; AGraphicClass: TGraphicClass); extdecl;
begin
  TPicture.RegisterClipboardFormat(FormatID, AGraphicClass);
end;

// procedure static
procedure TPicture_UnregisterGraphicClass(AClass: TGraphicClass); extdecl;
begin
  TPicture.UnregisterGraphicClass(AClass);
end;

// property
function TPicture_Bitmap(ASet: LongBool; AObj: TPicture; AValue: TBitmap): TBitmap; extdecl;
begin
  {$define handleExceptionID := 12114}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Bitmap := AValue
  end else
    Result := AObj.Bitmap;
  handleExceptionEnd
end;

// property
function TPicture_Icon(ASet: LongBool; AObj: TPicture; AValue: TIcon): TIcon; extdecl;
begin
  {$define handleExceptionID := 12115}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Icon := AValue
  end else
    Result := AObj.Icon;
  handleExceptionEnd
end;

{$IFNDEF DisableLCLJPEG}
// property
function TPicture_Jpeg(ASet: LongBool; AObj: TPicture; AValue: TJpegImage): TJpegImage; extdecl;
begin
  {$define handleExceptionID := 12116}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Jpeg := AValue
  end else
    Result := AObj.Jpeg;
  handleExceptionEnd
end;
{$ENDIF}

// property
function TPicture_Pixmap(ASet: LongBool; AObj: TPicture; AValue: TPixmap): TPixmap; extdecl;
begin
  {$define handleExceptionID := 12117}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Pixmap := AValue
  end else
    Result := AObj.Pixmap;
  handleExceptionEnd
end;

// property
function TPicture_PNG(ASet: LongBool; AObj: TPicture; AValue: TPortableNetworkGraphic): TPortableNetworkGraphic; extdecl;
begin
  {$define handleExceptionID := 12118}
  handleExceptionBegin
  if ASet then
  begin
    AObj.PNG := AValue
  end else
    Result := AObj.PNG;
  handleExceptionEnd
end;

{$IFNDEF DisableLCLPNM}
// property
function TPicture_PNM(ASet: LongBool; AObj: TPicture; AValue: TPortableAnyMapGraphic): TPortableAnyMapGraphic; extdecl;
begin
  {$define handleExceptionID := 12119}
  handleExceptionBegin
  if ASet then
  begin
    AObj.PNM := AValue
  end else
    Result := AObj.PNM;
  handleExceptionEnd
end;
{$ENDIF}

// property
function TPicture_Graphic(ASet: LongBool; AObj: TPicture; AValue: TGraphic): TGraphic; extdecl;
begin
  {$define handleExceptionID := 12120}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Graphic := AValue
  end else
    Result := AObj.Graphic;
  handleExceptionEnd
end;

// property
function TPicture_Height(AObj: TPicture): Integer; extdecl;
begin
  {$define handleExceptionID := 12121}
  handleExceptionBegin
  Result := AObj.Height;
  handleExceptionEnd
end;

// property
function TPicture_Width(AObj: TPicture): Integer; extdecl;
begin
  {$define handleExceptionID := 12122}
  handleExceptionBegin
  Result := AObj.Width;
  handleExceptionEnd
end;

// event
procedure TPicture_OnChange(AObj: TPicture; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnChange}
  LCLEventMethodCode
end;

// event
procedure TPicture_OnProgress(AObj: TPicture; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTProgressEvent}
  {$DEFINE EventName := OnProgress}
  LCLEventMethodCode
end;

exports
  TPicture_Create,
  TPicture_SupportsClipboardFormat,
  TPicture_FindGraphicClassWithFileExt,
  TPicture_Clear,
  TPicture_LoadFromClipboardFormat,
  TPicture_LoadFromClipboardFormatID,
  TPicture_LoadFromFile,
  TPicture_LoadFromResourceNameWithLCLHandleStr,
  TPicture_LoadFromResourceNameWithLCLHandleStrGClass,
  TPicture_LoadFromLazarusResource,
  TPicture_LoadFromStream,
  TPicture_LoadFromStreamWithFileExt,
  TPicture_SaveToClipboardFormat,
  TPicture_SaveToFile,
  TPicture_SaveToStream,
  TPicture_SaveToStreamWithFileExt,
  TPicture_RegisterFileFormat,
  TPicture_RegisterClipboardFormat,
  TPicture_UnregisterGraphicClass,
  TPicture_Bitmap,
  TPicture_Icon,
{$IFNDEF DisableLCLJPEG}
  TPicture_Jpeg,
{$ENDIF}
  TPicture_Pixmap,
  TPicture_PNG,
{$IFNDEF DisableLCLPNM}
  TPicture_PNM,
{$ENDIF}
  TPicture_Graphic,
  TPicture_Height,
  TPicture_Width,
  TPicture_OnChange,
  TPicture_OnProgress;