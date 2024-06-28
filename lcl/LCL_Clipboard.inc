
//constructor
function Clipboard_Create(): TClipboard; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TClipboard.Create();
  handleExceptionEnd
end;

//constructor
function Clipboard_Create1(AClipboardType: TClipboardType): TClipboard; extdecl;
begin
  {$define handleExceptionFuncName :='Create1'}
  handleExceptionBegin
  Result := TClipboard.Create(AClipboardType);
  handleExceptionEnd
end;

//property
function Clipboard_AsText(AIsSet: LongBool; AObj: TClipboard; AValue: PChar): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='AsText'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.AsText := AValue;
  end else
    Result := ToPChar(AObj.AsText);
  handleExceptionEnd
end;

//property
function Clipboard_ClipboardType(AObj: TClipboard): TClipboardType; extdecl;
begin
  {$define handleExceptionFuncName :='ClipboardType'}
  handleExceptionBegin
  Result := AObj.ClipboardType;
  handleExceptionEnd
end;

//property
function Clipboard_FormatCount(AObj: TClipboard): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='FormatCount'}
  handleExceptionBegin
  Result := AObj.FormatCount;
  handleExceptionEnd
end;

//property
function Clipboard_Formats(AObj: TClipboard; Index: Integer): TClipboardFormat; extdecl;
begin
  {$define handleExceptionFuncName :='Formats'}
  handleExceptionBegin
  Result := AObj.Formats[Index];
  handleExceptionEnd
end;

//function
function Clipboard_AddFormat(AObj: TClipboard; FormatID: TClipboardFormat; Stream: TStream): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='AddFormat'}
  handleExceptionBegin
  Result := AObj.AddFormat(FormatID, Stream);
  handleExceptionEnd
end;

//function
function Clipboard_AddFormat1(AObj: TClipboard; FormatID: TClipboardFormat; var Buffer: Pointer; Size: Integer): LongBool; extdecl;
var
  RetBuffer: Pointer;
begin
  {$define handleExceptionFuncName :='AddFormat1'}
  handleExceptionBegin
  RetBuffer := Buffer;
  Result := AObj.AddFormat(FormatID, RetBuffer, Size);
  Buffer := RetBuffer;
  handleExceptionEnd
end;

//function
function Clipboard_FindPictureFormatID(AObj: TClipboard): TClipboardFormat; extdecl;
begin
  {$define handleExceptionFuncName :='FindPictureFormatID'}
  handleExceptionBegin
  Result := AObj.FindPictureFormatID();
  handleExceptionEnd
end;

//function
function Clipboard_FindFormatID(AObj: TClipboard; const FormatName: PChar): TClipboardFormat; extdecl;
begin
  {$define handleExceptionFuncName :='FindFormatID'}
  handleExceptionBegin
  Result := AObj.FindFormatID(FormatName);
  handleExceptionEnd
end;

//function
function Clipboard_GetAsHtml(AObj: TClipboard; ExtractFragmentOnly: LongBool): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='GetAsHtml'}
  handleExceptionBegin
  Result := ToPChar(AObj.GetAsHtml(ExtractFragmentOnly));
  handleExceptionEnd
end;

//function
function Clipboard_GetComponent(AObj: TClipboard; Owner, Parent: TComponent): TComponent; extdecl;
begin
  {$define handleExceptionFuncName :='GetComponent'}
  handleExceptionBegin
  Result := AObj.GetComponent(Owner, Parent);
  handleExceptionEnd
end;

//function
function Clipboard_GetFormat(AObj: TClipboard; FormatID: TClipboardFormat; Stream: TStream): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='GetFormat'}
  handleExceptionBegin
  Result := AObj.GetFormat(FormatID, Stream);
  handleExceptionEnd
end;

//function
function Clipboard_GetTextBuf(AObj: TClipboard; Buffer: PChar; BufSize: Integer): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='GetTextBuf'}
  handleExceptionBegin
  Result := AObj.GetTextBuf(Buffer, BufSize);
  handleExceptionEnd
end;

//function
function Clipboard_HasFormat(AObj: TClipboard; FormatID: TClipboardFormat): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='HasFormat'}
  handleExceptionBegin
  Result := AObj.HasFormat(FormatID);
  handleExceptionEnd
end;

//function
function Clipboard_HasFormatName(AObj: TClipboard; const FormatName: PChar): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='HasFormatName'}
  handleExceptionBegin
  Result := AObj.HasFormatName(FormatName);
  handleExceptionEnd
end;

//function
function Clipboard_HasPictureFormat(AObj: TClipboard): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='HasPictureFormat'}
  handleExceptionBegin
  Result := AObj.HasPictureFormat();
  handleExceptionEnd
end;

//function
function Clipboard_SetComponent(AObj: TClipboard; Component: TComponent): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='SetComponent'}
  handleExceptionBegin
  Result := AObj.SetComponent(Component);
  handleExceptionEnd
end;

//function
function Clipboard_SetComponentAsText(AObj: TClipboard; Component: TComponent): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='SetComponentAsText'}
  handleExceptionBegin
  Result := AObj.SetComponentAsText(Component);
  handleExceptionEnd
end;

//function
function Clipboard_SetFormat(AObj: TClipboard; FormatID: TClipboardFormat; Stream: TStream): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='SetFormat'}
  handleExceptionBegin
  Result := AObj.SetFormat(FormatID, Stream);
  handleExceptionEnd
end;

//function
function Clipboard_Class(): TClass; extdecl;
begin
  Result := TClipboard;
end;

//procedure
procedure Clipboard_AssignTo(AObj: TClipboard; Dest: TPersistent); extdecl;
begin
  {$define handleExceptionFuncName :='AssignTo'}
  handleExceptionBegin
  AObj.AssignTo(Dest);
  handleExceptionEnd
end;

//procedure
procedure Clipboard_Clear(AObj: TClipboard); extdecl;
begin
  {$define handleExceptionFuncName :='Clear'}
  handleExceptionBegin
  AObj.Clear();
  handleExceptionEnd
end;

//procedure
procedure Clipboard_Close(AObj: TClipboard); extdecl;
begin
  {$define handleExceptionFuncName :='Close'}
  handleExceptionBegin
  AObj.Close();
  handleExceptionEnd
end;

//procedure
procedure Clipboard_SupportedFormats(AObj: TClipboard; List: TStrings); extdecl;
begin
  {$define handleExceptionFuncName :='SupportedFormats'}
  handleExceptionBegin
  AObj.SupportedFormats(List);
  handleExceptionEnd
end;

//procedure
procedure Clipboard_Open(AObj: TClipboard); extdecl;
begin
  {$define handleExceptionFuncName :='Open'}
  handleExceptionBegin
  AObj.Open();
  handleExceptionEnd
end;

//procedure
procedure Clipboard_SetAsHtml(AObj: TClipboard; Html: PChar); extdecl;
begin
  {$define handleExceptionFuncName :='SetAsHtml'}
  handleExceptionBegin
  AObj.SetAsHtml(Html);
  handleExceptionEnd
end;

//procedure
procedure Clipboard_SetAsHtml1(AObj: TClipboard; Html: PChar; const PlainText: PChar); extdecl;
begin
  {$define handleExceptionFuncName :='SetAsHtml1'}
  handleExceptionBegin
  AObj.SetAsHtml(Html, PlainText);
  handleExceptionEnd
end;

//procedure
procedure Clipboard_SetTextBuf(AObj: TClipboard; Buffer: PChar); extdecl;
begin
  {$define handleExceptionFuncName :='SetTextBuf'}
  handleExceptionBegin
  AObj.SetTextBuf(Buffer);
  handleExceptionEnd
end;

//property event
procedure Clipboard_SetOnRequest(AObj: TClipboard; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTClipboardRequestEvent}
  {$DEFINE EventName := OnRequest}
  EventMethodCode
end;


exports
  Clipboard_Create,
  Clipboard_Create1,
  Clipboard_AsText,
  Clipboard_ClipboardType,
  Clipboard_FormatCount,
  Clipboard_Formats,
  Clipboard_AddFormat,
  Clipboard_AddFormat1,
  Clipboard_FindPictureFormatID,
  Clipboard_FindFormatID,
  Clipboard_GetAsHtml,
  Clipboard_GetComponent,
  Clipboard_GetFormat,
  Clipboard_GetTextBuf,
  Clipboard_HasFormat,
  Clipboard_HasFormatName,
  Clipboard_HasPictureFormat,
  Clipboard_SetComponent,
  Clipboard_SetComponentAsText,
  Clipboard_SetFormat,
  Clipboard_Class,
  Clipboard_AssignTo,
  Clipboard_Clear,
  Clipboard_Close,
  Clipboard_SupportedFormats,
  Clipboard_Open,
  Clipboard_SetAsHtml,
  Clipboard_SetAsHtml1,
  Clipboard_SetTextBuf,
  Clipboard_SetOnRequest;