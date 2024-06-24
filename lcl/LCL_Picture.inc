
//constructor
function Picture_Create(): TPicture; extdecl;
begin
  handleExceptionBegin
  Result := TPicture.Create();
  handleExceptionEnd
end;

//property
function Picture_Bitmap(AIsSet: LongBool; AObj: TPicture; AValue: TBitmap): TBitmap; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Bitmap := AValue;
  end else
    Result := AObj.Bitmap;
  handleExceptionEnd
end;

//property
function Picture_Icon(AIsSet: LongBool; AObj: TPicture; AValue: TIcon): TIcon; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Icon := AValue;
  end else
    Result := AObj.Icon;
  handleExceptionEnd
end;

//property
function Picture_Jpeg(AIsSet: LongBool; AObj: TPicture; AValue: TJpegImage): TJpegImage; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Jpeg := AValue;
  end else
    Result := AObj.Jpeg;
  handleExceptionEnd
end;

//property
function Picture_Pixmap(AIsSet: LongBool; AObj: TPicture; AValue: TPixmap): TPixmap; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Pixmap := AValue;
  end else
    Result := AObj.Pixmap;
  handleExceptionEnd
end;

//property
function Picture_PNG(AIsSet: LongBool; AObj: TPicture; AValue: TPortableNetworkGraphic): TPortableNetworkGraphic; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.PNG := AValue;
  end else
    Result := AObj.PNG;
  handleExceptionEnd
end;

//property
function Picture_PNM(AIsSet: LongBool; AObj: TPicture; AValue: TPortableAnyMapGraphic): TPortableAnyMapGraphic; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.PNM := AValue;
  end else
    Result := AObj.PNM;
  handleExceptionEnd
end;

//property
function Picture_Graphic(AIsSet: LongBool; AObj: TPicture; AValue: TGraphic): TGraphic; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Graphic := AValue;
  end else
    Result := AObj.Graphic;
  handleExceptionEnd
end;

//property
function Picture_Height(AObj: TPicture): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Height;
  handleExceptionEnd
end;

//property
function Picture_Width(AObj: TPicture): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Width;
  handleExceptionEnd
end;

//function
function Picture_Class(): TClass; extdecl;
begin
  Result := TPicture;
end;

//procedure
procedure Picture_Clear(AObj: TPicture); extdecl;
begin
  handleExceptionBegin
  AObj.Clear();
  handleExceptionEnd
end;

//procedure
procedure Picture_LoadFromClipboardFormat(AObj: TPicture; FormatID: TClipboardFormat); extdecl;
begin
  handleExceptionBegin
  AObj.LoadFromClipboardFormat(FormatID);
  handleExceptionEnd
end;

//procedure
procedure Picture_LoadFromClipboardFormatID(AObj: TPicture; ClipboardType: TClipboardType; FormatID: TClipboardFormat); extdecl;
begin
  handleExceptionBegin
  AObj.LoadFromClipboardFormatID(ClipboardType, FormatID);
  handleExceptionEnd
end;

//procedure
procedure Picture_LoadFromFile(AObj: TPicture; const Filename: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.LoadFromFile(Filename);
  handleExceptionEnd
end;

//procedure
procedure Picture_LoadFromResourceName(AObj: TPicture; Instance: THandle; const ResName: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.LoadFromResourceName(Instance, ResName);
  handleExceptionEnd
end;

//procedure
procedure Picture_LoadFromResourceName1(AObj: TPicture; Instance: THandle; const ResName: PChar; AClass: TGraphicClass); extdecl;
begin
  handleExceptionBegin
  AObj.LoadFromResourceName(Instance, ResName, AClass);
  handleExceptionEnd
end;

//procedure
procedure Picture_LoadFromLazarusResource(AObj: TPicture; const AName: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.LoadFromLazarusResource(AName);
  handleExceptionEnd
end;

//procedure
procedure Picture_LoadFromStream(AObj: TPicture; Stream: TStream); extdecl;
begin
  handleExceptionBegin
  AObj.LoadFromStream(Stream);
  handleExceptionEnd
end;

//procedure
procedure Picture_LoadFromStreamWithFileExt(AObj: TPicture; Stream: TStream; const FileExt: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.LoadFromStreamWithFileExt(Stream, FileExt);
  handleExceptionEnd
end;

//procedure
procedure Picture_SaveToClipboardFormat(AObj: TPicture; FormatID: TClipboardFormat); extdecl;
begin
  handleExceptionBegin
  AObj.SaveToClipboardFormat(FormatID);
  handleExceptionEnd
end;

//procedure
procedure Picture_SaveToFile(AObj: TPicture; const Filename: PChar; const FileExt: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.SaveToFile(Filename, FileExt);
  handleExceptionEnd
end;

//procedure
procedure Picture_SaveToStream(AObj: TPicture; Stream: TStream); extdecl;
begin
  handleExceptionBegin
  AObj.SaveToStream(Stream);
  handleExceptionEnd
end;

//procedure
procedure Picture_SaveToStreamWithFileExt(AObj: TPicture; Stream: TStream; const FileExt: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.SaveToStreamWithFileExt(Stream, FileExt);
  handleExceptionEnd
end;

//property event
procedure Picture_SetOnChange(AObj: TPicture; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnChange}
  EventMethodCode
end;

//property event
procedure Picture_SetOnProgress(AObj: TPicture; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTProgressEvent}
  {$DEFINE EventName := OnProgress}
  EventMethodCode
end;


exports
  Picture_Create,
  Picture_Bitmap,
  Picture_Icon,
  Picture_Jpeg,
  Picture_Pixmap,
  Picture_PNG,
  Picture_PNM,
  Picture_Graphic,
  Picture_Height,
  Picture_Width,
  Picture_Class,
  Picture_Clear,
  Picture_LoadFromClipboardFormat,
  Picture_LoadFromClipboardFormatID,
  Picture_LoadFromFile,
  Picture_LoadFromResourceName,
  Picture_LoadFromResourceName1,
  Picture_LoadFromLazarusResource,
  Picture_LoadFromStream,
  Picture_LoadFromStreamWithFileExt,
  Picture_SaveToClipboardFormat,
  Picture_SaveToFile,
  Picture_SaveToStream,
  Picture_SaveToStreamWithFileExt,
  Picture_SetOnChange,
  Picture_SetOnProgress;