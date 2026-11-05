// constructor
function TClipboard_Create(): TClipboard; extdecl;
begin
  {$define handleExceptionID := 16100}
  handleExceptionBegin
  Result := TClipboard.Create();
  handleExceptionEnd
end;

// constructor
function TClipboard_CreateWithClipboardType(AClipboardType: TClipboardType): TClipboard; extdecl;
begin
  {$define handleExceptionID := 16101}
  handleExceptionBegin
  Result := TClipboard.Create(AClipboardType);
  handleExceptionEnd
end;

// function
function TClipboard_AddFormatWithClipboardFormatStream(AObj: TClipboard; FormatID: TClipboardFormat; Stream: TStream): LongBool; extdecl;
begin
  {$define handleExceptionID := 16102}
  handleExceptionBegin
  Result := AObj.AddFormat(FormatID, Stream);
  handleExceptionEnd
end;

// function
function TClipboard_AddFormatWithCFormatPointerInt(AObj: TClipboard; FormatID: TClipboardFormat; var Buffer: Pointer; Size: Integer): LongBool; extdecl;
var
  OutBuffer: PPointer;
begin
  {$define handleExceptionID := 16103}
  handleExceptionBegin
  OutBuffer := Buffer;
  Result := AObj.AddFormat(FormatID, OutBuffer^, Size);
  Buffer := OutBuffer;
  handleExceptionEnd
end;

// function
function TClipboard_FindPictureFormatID(AObj: TClipboard): TClipboardFormat; extdecl;
begin
  {$define handleExceptionID := 16104}
  handleExceptionBegin
  Result := AObj.FindPictureFormatID();
  handleExceptionEnd
end;

// function
function TClipboard_FindFormatID(AObj: TClipboard; const FormatName: PChar): TClipboardFormat; extdecl;
begin
  {$define handleExceptionID := 16105}
  handleExceptionBegin
  Result := AObj.FindFormatID(FormatName);
  handleExceptionEnd
end;

// function
procedure TClipboard_GetAsHtml(AObj: TClipboard; ExtractFragmentOnly: LongBool;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 16106}
  handleExceptionBegin
  StringBufferCreate(AObj.GetAsHtml(ExtractFragmentOnly), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
function TClipboard_GetComponentWithComponentX2(AObj: TClipboard; Owner: TComponent; Parent: TComponent): TComponent; extdecl;
begin
  {$define handleExceptionID := 16107}
  handleExceptionBegin
  Result := AObj.GetComponent(Owner, Parent);
  handleExceptionEnd
end;

// function
function TClipboard_GetFormat(AObj: TClipboard; FormatID: TClipboardFormat; Stream: TStream): LongBool; extdecl;
begin
  {$define handleExceptionID := 16108}
  handleExceptionBegin
  Result := AObj.GetFormat(FormatID, Stream);
  handleExceptionEnd
end;

// function
function TClipboard_GetTextBuf(AObj: TClipboard; Buffer: PChar; BufSize: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 16109}
  handleExceptionBegin
  Result := AObj.GetTextBuf(Buffer, BufSize);
  handleExceptionEnd
end;

// function
function TClipboard_HasFormat(AObj: TClipboard; FormatID: TClipboardFormat): LongBool; extdecl;
begin
  {$define handleExceptionID := 16110}
  handleExceptionBegin
  Result := AObj.HasFormat(FormatID);
  handleExceptionEnd
end;

// function
function TClipboard_HasFormatName(AObj: TClipboard; const FormatName: PChar): LongBool; extdecl;
begin
  {$define handleExceptionID := 16111}
  handleExceptionBegin
  Result := AObj.HasFormatName(FormatName);
  handleExceptionEnd
end;

// function
function TClipboard_HasPictureFormat(AObj: TClipboard): LongBool; extdecl;
begin
  {$define handleExceptionID := 16112}
  handleExceptionBegin
  Result := AObj.HasPictureFormat();
  handleExceptionEnd
end;

// function
function TClipboard_SetComponent(AObj: TClipboard; Component: TComponent): LongBool; extdecl;
begin
  {$define handleExceptionID := 16113}
  handleExceptionBegin
  Result := AObj.SetComponent(Component);
  handleExceptionEnd
end;

// function
function TClipboard_SetComponentAsText(AObj: TClipboard; Component: TComponent): LongBool; extdecl;
begin
  {$define handleExceptionID := 16114}
  handleExceptionBegin
  Result := AObj.SetComponentAsText(Component);
  handleExceptionEnd
end;

// function
function TClipboard_SetFormat(AObj: TClipboard; FormatID: TClipboardFormat; Stream: TStream): LongBool; extdecl;
begin
  {$define handleExceptionID := 16115}
  handleExceptionBegin
  Result := AObj.SetFormat(FormatID, Stream);
  handleExceptionEnd
end;

// function
function TClipboard_SetSupportedFormats(AObj: TClipboard; AFormatCount: integer; FormatList: PClipboardFormat): LongBool; extdecl;
begin
  {$define handleExceptionID := 16116}
  handleExceptionBegin
  Result := AObj.SetSupportedFormats(AFormatCount, FormatList);
  handleExceptionEnd
end;

// procedure
procedure TClipboard_AssignTo(AObj: TClipboard; Dest: TPersistent); extdecl;
begin
  {$define handleExceptionID := 16117}
  handleExceptionBegin
  AObj.AssignTo(Dest);
  handleExceptionEnd
end;

// procedure
procedure TClipboard_Clear(AObj: TClipboard); extdecl;
begin
  {$define handleExceptionID := 16118}
  handleExceptionBegin
  AObj.Clear();
  handleExceptionEnd
end;

// procedure
procedure TClipboard_Close(AObj: TClipboard); extdecl;
begin
  {$define handleExceptionID := 16119}
  handleExceptionBegin
  AObj.Close();
  handleExceptionEnd
end;

// procedure
procedure TClipboard_SupportedFormatsWithStrings(AObj: TClipboard; List: TStrings); extdecl;
begin
  {$define handleExceptionID := 16120}
  handleExceptionBegin
  AObj.SupportedFormats(List);
  handleExceptionEnd
end;

// procedure
procedure TClipboard_SupportedFormatsWithIntPClipboardFormat(AObj: TClipboard; var AFormatCount: integer; var FormatList: PClipboardFormat); extdecl;
var
  OutAFormatCount: integer;
  OutFormatList: PClipboardFormat;
begin
  {$define handleExceptionID := 16121}
  handleExceptionBegin
  OutAFormatCount := AFormatCount;
  OutFormatList := FormatList;
  AObj.SupportedFormats(OutAFormatCount, OutFormatList);
  AFormatCount := OutAFormatCount;
  FormatList := OutFormatList;
  handleExceptionEnd
end;

// procedure
procedure TClipboard_Open(AObj: TClipboard); extdecl;
begin
  {$define handleExceptionID := 16122}
  handleExceptionBegin
  AObj.Open();
  handleExceptionEnd
end;

// procedure
procedure TClipboard_SetAsHtmlWithStr(AObj: TClipboard; Html: PChar); extdecl;
begin
  {$define handleExceptionID := 16123}
  handleExceptionBegin
  AObj.SetAsHtml(Html);
  handleExceptionEnd
end;

// procedure
procedure TClipboard_SetAsHtmlWithStrX2(AObj: TClipboard; Html: PChar; const PlainText: PChar); extdecl;
begin
  {$define handleExceptionID := 16124}
  handleExceptionBegin
  AObj.SetAsHtml(Html, PlainText);
  handleExceptionEnd
end;

// procedure
procedure TClipboard_SetTextBuf(AObj: TClipboard; Buffer: PChar); extdecl;
begin
  {$define handleExceptionID := 16125}
  handleExceptionBegin
  AObj.SetTextBuf(Buffer);
  handleExceptionEnd
end;

// property
procedure TClipboard_AsText(ASet: LongBool; AObj: TClipboard; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 16126}
  handleExceptionBegin
  if ASet then
  begin
    AObj.AsText := AValue
  end else
    StringBufferCreate(AObj.AsText, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TClipboard_ClipboardType(AObj: TClipboard): TClipboardType; extdecl;
begin
  {$define handleExceptionID := 16127}
  handleExceptionBegin
  Result := AObj.ClipboardType;
  handleExceptionEnd
end;

// property
function TClipboard_FormatCount(AObj: TClipboard): Integer; extdecl;
begin
  {$define handleExceptionID := 16128}
  handleExceptionBegin
  Result := AObj.FormatCount;
  handleExceptionEnd
end;

// property
function TClipboard_Formats(AObj: TClipboard; Index: Integer): TClipboardFormat; extdecl;
begin
  {$define handleExceptionID := 16129}
  handleExceptionBegin
  Result := AObj.Formats[Index];
  handleExceptionEnd
end;

// event
procedure TClipboard_OnRequest(AObj: TClipboard; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTClipboardRequestEvent}
  {$DEFINE EventName := OnRequest}
  LCLEventMethodCode
end;

exports
  TClipboard_Create,
  TClipboard_CreateWithClipboardType,
  TClipboard_AddFormatWithClipboardFormatStream,
  TClipboard_AddFormatWithCFormatPointerInt,
  TClipboard_FindPictureFormatID,
  TClipboard_FindFormatID,
  TClipboard_GetAsHtml,
  TClipboard_GetComponentWithComponentX2,
  TClipboard_GetFormat,
  TClipboard_GetTextBuf,
  TClipboard_HasFormat,
  TClipboard_HasFormatName,
  TClipboard_HasPictureFormat,
  TClipboard_SetComponent,
  TClipboard_SetComponentAsText,
  TClipboard_SetFormat,
  TClipboard_SetSupportedFormats,
  TClipboard_AssignTo,
  TClipboard_Clear,
  TClipboard_Close,
  TClipboard_SupportedFormatsWithStrings,
  TClipboard_SupportedFormatsWithIntPClipboardFormat,
  TClipboard_Open,
  TClipboard_SetAsHtmlWithStr,
  TClipboard_SetAsHtmlWithStrX2,
  TClipboard_SetTextBuf,
  TClipboard_AsText,
  TClipboard_ClipboardType,
  TClipboard_FormatCount,
  TClipboard_Formats,
  TClipboard_OnRequest;