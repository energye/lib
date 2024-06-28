
//function
procedure CefDragData_UnWrap(data: Pointer; var Result: ICefDragData); extdecl;
begin
  Result := TCefDragDataRef.UnWrap(data);
end;

//function
procedure CefDragData_New(var Result: ICefDragData); extdecl;
begin
  Result := TCefDragDataRef.New();
end;

//function
procedure CefDragData_Clone(AObj: ICefDragData; var Result: ICefDragData); extdecl;
begin
  {$define handleExceptionFuncName :='Clone'}
  handleExceptionBegin
  Result := AObj.Clone();
  handleExceptionEnd
end;

//function
function CefDragData_IsReadOnly(AObj: ICefDragData): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='IsReadOnly'}
  handleExceptionBegin
  Result := AObj.IsReadOnly();
  handleExceptionEnd
end;

//function
function CefDragData_IsLink(AObj: ICefDragData): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='IsLink'}
  handleExceptionBegin
  Result := AObj.IsLink();
  handleExceptionEnd
end;

//function
function CefDragData_IsFragment(AObj: ICefDragData): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='IsFragment'}
  handleExceptionBegin
  Result := AObj.IsFragment();
  handleExceptionEnd
end;

//function
function CefDragData_IsFile(AObj: ICefDragData): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='IsFile'}
  handleExceptionBegin
  Result := AObj.IsFile();
  handleExceptionEnd
end;

//function
function CefDragData_GetLinkUrl(AObj: ICefDragData): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='GetLinkUrl'}
  handleExceptionBegin
  Result := ToPChar(AObj.GetLinkUrl());
  handleExceptionEnd
end;

//function
function CefDragData_GetLinkTitle(AObj: ICefDragData): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='GetLinkTitle'}
  handleExceptionBegin
  Result := ToPChar(AObj.GetLinkTitle());
  handleExceptionEnd
end;

//function
function CefDragData_GetLinkMetadata(AObj: ICefDragData): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='GetLinkMetadata'}
  handleExceptionBegin
  Result := ToPChar(AObj.GetLinkMetadata());
  handleExceptionEnd
end;

//function
function CefDragData_GetFragmentText(AObj: ICefDragData): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='GetFragmentText'}
  handleExceptionBegin
  Result := ToPChar(AObj.GetFragmentText());
  handleExceptionEnd
end;

//function
function CefDragData_GetFragmentHtml(AObj: ICefDragData): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='GetFragmentHtml'}
  handleExceptionBegin
  Result := ToPChar(AObj.GetFragmentHtml());
  handleExceptionEnd
end;

//function
function CefDragData_GetFragmentBaseUrl(AObj: ICefDragData): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='GetFragmentBaseUrl'}
  handleExceptionBegin
  Result := ToPChar(AObj.GetFragmentBaseUrl());
  handleExceptionEnd
end;

//function
function CefDragData_GetFileName(AObj: ICefDragData): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='GetFileName'}
  handleExceptionBegin
  Result := ToPChar(AObj.GetFileName());
  handleExceptionEnd
end;

//function
function CefDragData_GetFileContents(AObj: ICefDragData; const writer: ICefStreamWriter): NativeUInt; extdecl;
begin
  {$define handleExceptionFuncName :='GetFileContents'}
  handleExceptionBegin
  Result := AObj.GetFileContents(writer);
  handleExceptionEnd
end;

//function
function CefDragData_GetFileNames(AObj: ICefDragData; var names: TStrings): Integer; extdecl;
var
  Retnames: TStrings;
begin
  {$define handleExceptionFuncName :='GetFileNames'}
  handleExceptionBegin
  Retnames := names;
  Result := AObj.GetFileNames(Retnames);
  names := Retnames;
  handleExceptionEnd
end;

//function
function CefDragData_GetFilePaths(AObj: ICefDragData; var paths: TStrings): Integer; extdecl;
var
  Retpaths: TStrings;
begin
  {$define handleExceptionFuncName :='GetFilePaths'}
  handleExceptionBegin
  Retpaths := paths;
  Result := AObj.GetFilePaths(Retpaths);
  paths := Retpaths;
  handleExceptionEnd
end;

//function
procedure CefDragData_GetImage(AObj: ICefDragData; var Result: ICefImage); extdecl;
begin
  {$define handleExceptionFuncName :='GetImage'}
  handleExceptionBegin
  Result := AObj.GetImage();
  handleExceptionEnd
end;

//function
procedure CefDragData_GetImageHotspot(AObj: ICefDragData; var Result: TCefPoint); extdecl;
begin
  {$define handleExceptionFuncName :='GetImageHotspot'}
  handleExceptionBegin
  Result := AObj.GetImageHotspot();
  handleExceptionEnd
end;

//function
function CefDragData_HasImage(AObj: ICefDragData): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='HasImage'}
  handleExceptionBegin
  Result := AObj.HasImage();
  handleExceptionEnd
end;

//procedure
procedure CefDragData_SetLinkUrl(AObj: ICefDragData; const url: PChar); extdecl;
begin
  {$define handleExceptionFuncName :='SetLinkUrl'}
  handleExceptionBegin
  AObj.SetLinkUrl(url);
  handleExceptionEnd
end;

//procedure
procedure CefDragData_SetLinkTitle(AObj: ICefDragData; const title: PChar); extdecl;
begin
  {$define handleExceptionFuncName :='SetLinkTitle'}
  handleExceptionBegin
  AObj.SetLinkTitle(title);
  handleExceptionEnd
end;

//procedure
procedure CefDragData_SetLinkMetadata(AObj: ICefDragData; const data: PChar); extdecl;
begin
  {$define handleExceptionFuncName :='SetLinkMetadata'}
  handleExceptionBegin
  AObj.SetLinkMetadata(data);
  handleExceptionEnd
end;

//procedure
procedure CefDragData_SetFragmentText(AObj: ICefDragData; const text: PChar); extdecl;
begin
  {$define handleExceptionFuncName :='SetFragmentText'}
  handleExceptionBegin
  AObj.SetFragmentText(text);
  handleExceptionEnd
end;

//procedure
procedure CefDragData_SetFragmentHtml(AObj: ICefDragData; const html: PChar); extdecl;
begin
  {$define handleExceptionFuncName :='SetFragmentHtml'}
  handleExceptionBegin
  AObj.SetFragmentHtml(html);
  handleExceptionEnd
end;

//procedure
procedure CefDragData_SetFragmentBaseUrl(AObj: ICefDragData; const baseUrl: PChar); extdecl;
begin
  {$define handleExceptionFuncName :='SetFragmentBaseUrl'}
  handleExceptionBegin
  AObj.SetFragmentBaseUrl(baseUrl);
  handleExceptionEnd
end;

//procedure
procedure CefDragData_ResetFileContents(AObj: ICefDragData); extdecl;
begin
  {$define handleExceptionFuncName :='ResetFileContents'}
  handleExceptionBegin
  AObj.ResetFileContents();
  handleExceptionEnd
end;

//procedure
procedure CefDragData_AddFile(AObj: ICefDragData; const path,  displayName: PChar); extdecl;
begin
  {$define handleExceptionFuncName :='AddFile'}
  handleExceptionBegin
  AObj.AddFile(path,  displayName);
  handleExceptionEnd
end;

//procedure
procedure CefDragData_ClearFilenames(AObj: ICefDragData); extdecl;
begin
  {$define handleExceptionFuncName :='ClearFilenames'}
  handleExceptionBegin
  AObj.ClearFilenames();
  handleExceptionEnd
end;


exports
  CefDragData_UnWrap,
  CefDragData_New,
  CefDragData_Clone,
  CefDragData_IsReadOnly,
  CefDragData_IsLink,
  CefDragData_IsFragment,
  CefDragData_IsFile,
  CefDragData_GetLinkUrl,
  CefDragData_GetLinkTitle,
  CefDragData_GetLinkMetadata,
  CefDragData_GetFragmentText,
  CefDragData_GetFragmentHtml,
  CefDragData_GetFragmentBaseUrl,
  CefDragData_GetFileName,
  CefDragData_GetFileContents,
  CefDragData_GetFileNames,
  CefDragData_GetFilePaths,
  CefDragData_GetImage,
  CefDragData_GetImageHotspot,
  CefDragData_HasImage,
  CefDragData_SetLinkUrl,
  CefDragData_SetLinkTitle,
  CefDragData_SetLinkMetadata,
  CefDragData_SetFragmentText,
  CefDragData_SetFragmentHtml,
  CefDragData_SetFragmentBaseUrl,
  CefDragData_ResetFileContents,
  CefDragData_AddFile,
  CefDragData_ClearFilenames;