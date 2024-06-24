
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
  handleExceptionBegin
  Result := AObj.Clone();
  handleExceptionEnd
end;

//function
function CefDragData_IsReadOnly(AObj: ICefDragData): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IsReadOnly();
  handleExceptionEnd
end;

//function
function CefDragData_IsLink(AObj: ICefDragData): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IsLink();
  handleExceptionEnd
end;

//function
function CefDragData_IsFragment(AObj: ICefDragData): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IsFragment();
  handleExceptionEnd
end;

//function
function CefDragData_IsFile(AObj: ICefDragData): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IsFile();
  handleExceptionEnd
end;

//function
function CefDragData_GetLinkUrl(AObj: ICefDragData): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.GetLinkUrl());
  handleExceptionEnd
end;

//function
function CefDragData_GetLinkTitle(AObj: ICefDragData): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.GetLinkTitle());
  handleExceptionEnd
end;

//function
function CefDragData_GetLinkMetadata(AObj: ICefDragData): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.GetLinkMetadata());
  handleExceptionEnd
end;

//function
function CefDragData_GetFragmentText(AObj: ICefDragData): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.GetFragmentText());
  handleExceptionEnd
end;

//function
function CefDragData_GetFragmentHtml(AObj: ICefDragData): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.GetFragmentHtml());
  handleExceptionEnd
end;

//function
function CefDragData_GetFragmentBaseUrl(AObj: ICefDragData): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.GetFragmentBaseUrl());
  handleExceptionEnd
end;

//function
function CefDragData_GetFileName(AObj: ICefDragData): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.GetFileName());
  handleExceptionEnd
end;

//function
function CefDragData_GetFileContents(AObj: ICefDragData; const writer: ICefStreamWriter): NativeUInt; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetFileContents(writer);
  handleExceptionEnd
end;

//function
function CefDragData_GetFileNames(AObj: ICefDragData; var names: TStrings): Integer; extdecl;
var
  Retnames: TStrings;
begin
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
  handleExceptionBegin
  Retpaths := paths;
  Result := AObj.GetFilePaths(Retpaths);
  paths := Retpaths;
  handleExceptionEnd
end;

//function
procedure CefDragData_GetImage(AObj: ICefDragData; var Result: ICefImage); extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetImage();
  handleExceptionEnd
end;

//function
procedure CefDragData_GetImageHotspot(AObj: ICefDragData; var Result: TCefPoint); extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetImageHotspot();
  handleExceptionEnd
end;

//function
function CefDragData_HasImage(AObj: ICefDragData): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.HasImage();
  handleExceptionEnd
end;

//procedure
procedure CefDragData_SetLinkUrl(AObj: ICefDragData; const url: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.SetLinkUrl(url);
  handleExceptionEnd
end;

//procedure
procedure CefDragData_SetLinkTitle(AObj: ICefDragData; const title: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.SetLinkTitle(title);
  handleExceptionEnd
end;

//procedure
procedure CefDragData_SetLinkMetadata(AObj: ICefDragData; const data: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.SetLinkMetadata(data);
  handleExceptionEnd
end;

//procedure
procedure CefDragData_SetFragmentText(AObj: ICefDragData; const text: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.SetFragmentText(text);
  handleExceptionEnd
end;

//procedure
procedure CefDragData_SetFragmentHtml(AObj: ICefDragData; const html: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.SetFragmentHtml(html);
  handleExceptionEnd
end;

//procedure
procedure CefDragData_SetFragmentBaseUrl(AObj: ICefDragData; const baseUrl: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.SetFragmentBaseUrl(baseUrl);
  handleExceptionEnd
end;

//procedure
procedure CefDragData_ResetFileContents(AObj: ICefDragData); extdecl;
begin
  handleExceptionBegin
  AObj.ResetFileContents();
  handleExceptionEnd
end;

//procedure
procedure CefDragData_AddFile(AObj: ICefDragData; const path,  displayName: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.AddFile(path,  displayName);
  handleExceptionEnd
end;

//procedure
procedure CefDragData_ClearFilenames(AObj: ICefDragData); extdecl;
begin
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