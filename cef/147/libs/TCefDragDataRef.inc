// constructor
function TCefDragDataRef_Create(data: Pointer; out IntfDragData: ICefDragData): TCefDragDataRef; extdecl;
begin
  {$define handleExceptionID := 19300}
  handleExceptionBegin
  Result := TCefDragDataRef.Create(data);
  IntfDragData := Result as ICefDragData;
  handleExceptionEnd
end;

// function
procedure TCefDragDataRef_Clone(AObj: ICefDragData; var Result: ICefDragData); extdecl;
begin
  {$define handleExceptionID := 19301}
  handleExceptionBegin
  Result := AObj.Clone();
  handleExceptionEnd
end;

// function
function TCefDragDataRef_IsReadOnly(AObj: ICefDragData): LongBool; extdecl;
begin
  {$define handleExceptionID := 19302}
  handleExceptionBegin
  Result := AObj.IsReadOnly();
  handleExceptionEnd
end;

// function
function TCefDragDataRef_IsLink(AObj: ICefDragData): LongBool; extdecl;
begin
  {$define handleExceptionID := 19303}
  handleExceptionBegin
  Result := AObj.IsLink();
  handleExceptionEnd
end;

// function
function TCefDragDataRef_IsFragment(AObj: ICefDragData): LongBool; extdecl;
begin
  {$define handleExceptionID := 19304}
  handleExceptionBegin
  Result := AObj.IsFragment();
  handleExceptionEnd
end;

// function
function TCefDragDataRef_IsFile(AObj: ICefDragData): LongBool; extdecl;
begin
  {$define handleExceptionID := 19305}
  handleExceptionBegin
  Result := AObj.IsFile();
  handleExceptionEnd
end;

// function
procedure TCefDragDataRef_GetLinkUrl(AObj: ICefDragData;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 19306}
  handleExceptionBegin
  StringBufferCreate(string(AObj.GetLinkUrl()), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
procedure TCefDragDataRef_GetLinkTitle(AObj: ICefDragData;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 19307}
  handleExceptionBegin
  StringBufferCreate(string(AObj.GetLinkTitle()), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
procedure TCefDragDataRef_GetLinkMetadata(AObj: ICefDragData;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 19308}
  handleExceptionBegin
  StringBufferCreate(string(AObj.GetLinkMetadata()), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
procedure TCefDragDataRef_GetFragmentText(AObj: ICefDragData;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 19309}
  handleExceptionBegin
  StringBufferCreate(string(AObj.GetFragmentText()), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
procedure TCefDragDataRef_GetFragmentHtml(AObj: ICefDragData;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 19310}
  handleExceptionBegin
  StringBufferCreate(string(AObj.GetFragmentHtml()), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
procedure TCefDragDataRef_GetFragmentBaseUrl(AObj: ICefDragData;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 19311}
  handleExceptionBegin
  StringBufferCreate(string(AObj.GetFragmentBaseUrl()), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
procedure TCefDragDataRef_GetFileName(AObj: ICefDragData;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 19312}
  handleExceptionBegin
  StringBufferCreate(string(AObj.GetFileName()), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
function TCefDragDataRef_GetFileContents(AObj: ICefDragData; const writer: ICefStreamWriter): NativeUInt; extdecl;
begin
  {$define handleExceptionID := 19313}
  handleExceptionBegin
  Result := AObj.GetFileContents(writer);
  handleExceptionEnd
end;

// function
function TCefDragDataRef_GetFileNames(AObj: ICefDragData; var names: TStrings): Integer; extdecl;
var
  Outnames: TStrings;
begin
  {$define handleExceptionID := 19314}
  handleExceptionBegin
  Outnames := names;
  Result := AObj.GetFileNames(Outnames);
  names := Outnames;
  handleExceptionEnd
end;

// function
function TCefDragDataRef_GetFilePaths(AObj: ICefDragData; var paths: TStrings): Integer; extdecl;
var
  Outpaths: TStrings;
begin
  {$define handleExceptionID := 19315}
  handleExceptionBegin
  Outpaths := paths;
  Result := AObj.GetFilePaths(Outpaths);
  paths := Outpaths;
  handleExceptionEnd
end;

// function
procedure TCefDragDataRef_GetImage(AObj: ICefDragData; var Result: ICefImage); extdecl;
begin
  {$define handleExceptionID := 19316}
  handleExceptionBegin
  Result := AObj.GetImage();
  handleExceptionEnd
end;

// function
procedure TCefDragDataRef_GetImageHotspot(AObj: ICefDragData; var Result: TCefPoint); extdecl;
begin
  {$define handleExceptionID := 19317}
  handleExceptionBegin
  Result := AObj.GetImageHotspot();
  handleExceptionEnd
end;

// function
function TCefDragDataRef_HasImage(AObj: ICefDragData): LongBool; extdecl;
begin
  {$define handleExceptionID := 19318}
  handleExceptionBegin
  Result := AObj.HasImage();
  handleExceptionEnd
end;

// function static
procedure TCefDragDataRef_UnWrap(data: Pointer; var Result: ICefDragData); extdecl;
begin
  Result := TCefDragDataRef.UnWrap(data);
end;

// function static
procedure TCefDragDataRef_New(var Result: ICefDragData); extdecl;
begin
  Result := TCefDragDataRef.New();
end;

// procedure
procedure TCefDragDataRef_SetLinkUrl(AObj: ICefDragData; const url: PChar); extdecl;
begin
  {$define handleExceptionID := 19319}
  handleExceptionBegin
  AObj.SetLinkUrl(PCharToUStr(url));
  handleExceptionEnd
end;

// procedure
procedure TCefDragDataRef_SetLinkTitle(AObj: ICefDragData; const title: PChar); extdecl;
begin
  {$define handleExceptionID := 19320}
  handleExceptionBegin
  AObj.SetLinkTitle(PCharToUStr(title));
  handleExceptionEnd
end;

// procedure
procedure TCefDragDataRef_SetLinkMetadata(AObj: ICefDragData; const data: PChar); extdecl;
begin
  {$define handleExceptionID := 19321}
  handleExceptionBegin
  AObj.SetLinkMetadata(PCharToUStr(data));
  handleExceptionEnd
end;

// procedure
procedure TCefDragDataRef_SetFragmentText(AObj: ICefDragData; const text: PChar); extdecl;
begin
  {$define handleExceptionID := 19322}
  handleExceptionBegin
  AObj.SetFragmentText(PCharToUStr(text));
  handleExceptionEnd
end;

// procedure
procedure TCefDragDataRef_SetFragmentHtml(AObj: ICefDragData; const html: PChar); extdecl;
begin
  {$define handleExceptionID := 19323}
  handleExceptionBegin
  AObj.SetFragmentHtml(PCharToUStr(html));
  handleExceptionEnd
end;

// procedure
procedure TCefDragDataRef_SetFragmentBaseUrl(AObj: ICefDragData; const baseUrl: PChar); extdecl;
begin
  {$define handleExceptionID := 19324}
  handleExceptionBegin
  AObj.SetFragmentBaseUrl(PCharToUStr(baseUrl));
  handleExceptionEnd
end;

// procedure
procedure TCefDragDataRef_ResetFileContents(AObj: ICefDragData); extdecl;
begin
  {$define handleExceptionID := 19325}
  handleExceptionBegin
  AObj.ResetFileContents();
  handleExceptionEnd
end;

// procedure
procedure TCefDragDataRef_AddFile(AObj: ICefDragData; const path: PChar; const displayName: PChar); extdecl;
begin
  {$define handleExceptionID := 19326}
  handleExceptionBegin
  AObj.AddFile(PCharToUStr(path), PCharToUStr(displayName));
  handleExceptionEnd
end;

// procedure
procedure TCefDragDataRef_ClearFilenames(AObj: ICefDragData); extdecl;
begin
  {$define handleExceptionID := 19327}
  handleExceptionBegin
  AObj.ClearFilenames();
  handleExceptionEnd
end;

exports
  TCefDragDataRef_Create,
  TCefDragDataRef_Clone,
  TCefDragDataRef_IsReadOnly,
  TCefDragDataRef_IsLink,
  TCefDragDataRef_IsFragment,
  TCefDragDataRef_IsFile,
  TCefDragDataRef_GetLinkUrl,
  TCefDragDataRef_GetLinkTitle,
  TCefDragDataRef_GetLinkMetadata,
  TCefDragDataRef_GetFragmentText,
  TCefDragDataRef_GetFragmentHtml,
  TCefDragDataRef_GetFragmentBaseUrl,
  TCefDragDataRef_GetFileName,
  TCefDragDataRef_GetFileContents,
  TCefDragDataRef_GetFileNames,
  TCefDragDataRef_GetFilePaths,
  TCefDragDataRef_GetImage,
  TCefDragDataRef_GetImageHotspot,
  TCefDragDataRef_HasImage,
  TCefDragDataRef_UnWrap,
  TCefDragDataRef_New,
  TCefDragDataRef_SetLinkUrl,
  TCefDragDataRef_SetLinkTitle,
  TCefDragDataRef_SetLinkMetadata,
  TCefDragDataRef_SetFragmentText,
  TCefDragDataRef_SetFragmentHtml,
  TCefDragDataRef_SetFragmentBaseUrl,
  TCefDragDataRef_ResetFileContents,
  TCefDragDataRef_AddFile,
  TCefDragDataRef_ClearFilenames;