// constructor
function TCefContextMenuParamsRef_Create(data: Pointer; out IntfContextMenuParams: ICefContextMenuParams): TCefContextMenuParamsRef; extdecl;
begin
  {$define handleExceptionID := 17700}
  handleExceptionBegin
  Result := TCefContextMenuParamsRef.Create(data);
  IntfContextMenuParams := Result as ICefContextMenuParams;
  handleExceptionEnd
end;

// function
function TCefContextMenuParamsRef_GetXCoord(AObj: ICefContextMenuParams): Integer; extdecl;
begin
  {$define handleExceptionID := 17701}
  handleExceptionBegin
  Result := AObj.GetXCoord();
  handleExceptionEnd
end;

// function
function TCefContextMenuParamsRef_GetYCoord(AObj: ICefContextMenuParams): Integer; extdecl;
begin
  {$define handleExceptionID := 17702}
  handleExceptionBegin
  Result := AObj.GetYCoord();
  handleExceptionEnd
end;

// function
function TCefContextMenuParamsRef_GetTypeFlags(AObj: ICefContextMenuParams): TCefContextMenuTypeFlags; extdecl;
begin
  {$define handleExceptionID := 17703}
  handleExceptionBegin
  Result := AObj.GetTypeFlags();
  handleExceptionEnd
end;

// function
procedure TCefContextMenuParamsRef_GetLinkUrl(AObj: ICefContextMenuParams;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 17704}
  handleExceptionBegin
  StringBufferCreate(string(AObj.GetLinkUrl()), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
procedure TCefContextMenuParamsRef_GetUnfilteredLinkUrl(AObj: ICefContextMenuParams;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 17705}
  handleExceptionBegin
  StringBufferCreate(string(AObj.GetUnfilteredLinkUrl()), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
procedure TCefContextMenuParamsRef_GetSourceUrl(AObj: ICefContextMenuParams;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 17706}
  handleExceptionBegin
  StringBufferCreate(string(AObj.GetSourceUrl()), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
function TCefContextMenuParamsRef_HasImageContents(AObj: ICefContextMenuParams): LongBool; extdecl;
begin
  {$define handleExceptionID := 17707}
  handleExceptionBegin
  Result := AObj.HasImageContents();
  handleExceptionEnd
end;

// function
procedure TCefContextMenuParamsRef_GetTitleText(AObj: ICefContextMenuParams;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 17708}
  handleExceptionBegin
  StringBufferCreate(string(AObj.GetTitleText()), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
procedure TCefContextMenuParamsRef_GetPageUrl(AObj: ICefContextMenuParams;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 17709}
  handleExceptionBegin
  StringBufferCreate(string(AObj.GetPageUrl()), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
procedure TCefContextMenuParamsRef_GetFrameUrl(AObj: ICefContextMenuParams;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 17710}
  handleExceptionBegin
  StringBufferCreate(string(AObj.GetFrameUrl()), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
procedure TCefContextMenuParamsRef_GetFrameCharset(AObj: ICefContextMenuParams;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 17711}
  handleExceptionBegin
  StringBufferCreate(string(AObj.GetFrameCharset()), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
function TCefContextMenuParamsRef_GetMediaType(AObj: ICefContextMenuParams): TCefContextMenuMediaType; extdecl;
begin
  {$define handleExceptionID := 17712}
  handleExceptionBegin
  Result := AObj.GetMediaType();
  handleExceptionEnd
end;

// function
function TCefContextMenuParamsRef_GetMediaStateFlags(AObj: ICefContextMenuParams): TCefContextMenuMediaStateFlags; extdecl;
begin
  {$define handleExceptionID := 17713}
  handleExceptionBegin
  Result := AObj.GetMediaStateFlags();
  handleExceptionEnd
end;

// function
procedure TCefContextMenuParamsRef_GetSelectionText(AObj: ICefContextMenuParams;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 17714}
  handleExceptionBegin
  StringBufferCreate(string(AObj.GetSelectionText()), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
procedure TCefContextMenuParamsRef_GetMisspelledWord(AObj: ICefContextMenuParams;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 17715}
  handleExceptionBegin
  StringBufferCreate(string(AObj.GetMisspelledWord()), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
function TCefContextMenuParamsRef_GetDictionarySuggestions(AObj: ICefContextMenuParams; const suggestions: TStringList): LongBool; extdecl;
begin
  {$define handleExceptionID := 17716}
  handleExceptionBegin
  Result := AObj.GetDictionarySuggestions(suggestions);
  handleExceptionEnd
end;

// function
function TCefContextMenuParamsRef_IsEditable(AObj: ICefContextMenuParams): LongBool; extdecl;
begin
  {$define handleExceptionID := 17717}
  handleExceptionBegin
  Result := AObj.IsEditable();
  handleExceptionEnd
end;

// function
function TCefContextMenuParamsRef_IsSpellCheckEnabled(AObj: ICefContextMenuParams): LongBool; extdecl;
begin
  {$define handleExceptionID := 17718}
  handleExceptionBegin
  Result := AObj.IsSpellCheckEnabled();
  handleExceptionEnd
end;

// function
function TCefContextMenuParamsRef_GetEditStateFlags(AObj: ICefContextMenuParams): TCefContextMenuEditStateFlags; extdecl;
begin
  {$define handleExceptionID := 17719}
  handleExceptionBegin
  Result := AObj.GetEditStateFlags();
  handleExceptionEnd
end;

// function
function TCefContextMenuParamsRef_IsCustomMenu(AObj: ICefContextMenuParams): LongBool; extdecl;
begin
  {$define handleExceptionID := 17720}
  handleExceptionBegin
  Result := AObj.IsCustomMenu();
  handleExceptionEnd
end;

// function static
procedure TCefContextMenuParamsRef_UnWrap(data: Pointer; var Result: ICefContextMenuParams); extdecl;
begin
  Result := TCefContextMenuParamsRef.UnWrap(data);
end;

exports
  TCefContextMenuParamsRef_Create,
  TCefContextMenuParamsRef_GetXCoord,
  TCefContextMenuParamsRef_GetYCoord,
  TCefContextMenuParamsRef_GetTypeFlags,
  TCefContextMenuParamsRef_GetLinkUrl,
  TCefContextMenuParamsRef_GetUnfilteredLinkUrl,
  TCefContextMenuParamsRef_GetSourceUrl,
  TCefContextMenuParamsRef_HasImageContents,
  TCefContextMenuParamsRef_GetTitleText,
  TCefContextMenuParamsRef_GetPageUrl,
  TCefContextMenuParamsRef_GetFrameUrl,
  TCefContextMenuParamsRef_GetFrameCharset,
  TCefContextMenuParamsRef_GetMediaType,
  TCefContextMenuParamsRef_GetMediaStateFlags,
  TCefContextMenuParamsRef_GetSelectionText,
  TCefContextMenuParamsRef_GetMisspelledWord,
  TCefContextMenuParamsRef_GetDictionarySuggestions,
  TCefContextMenuParamsRef_IsEditable,
  TCefContextMenuParamsRef_IsSpellCheckEnabled,
  TCefContextMenuParamsRef_GetEditStateFlags,
  TCefContextMenuParamsRef_IsCustomMenu,
  TCefContextMenuParamsRef_UnWrap;