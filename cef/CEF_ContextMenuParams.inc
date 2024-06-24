
//function
procedure CefContextMenuParams_UnWrap(data: Pointer; var Result: ICefContextMenuParams); extdecl;
begin
  Result := TCefContextMenuParamsRef.UnWrap(data);
end;

//function
function CefContextMenuParams_GetXCoord(AObj: ICefContextMenuParams): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetXCoord();
  handleExceptionEnd
end;

//function
function CefContextMenuParams_GetYCoord(AObj: ICefContextMenuParams): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetYCoord();
  handleExceptionEnd
end;

//function
function CefContextMenuParams_GetTypeFlags(AObj: ICefContextMenuParams): TCefContextMenuTypeFlags; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetTypeFlags();
  handleExceptionEnd
end;

//function
function CefContextMenuParams_GetLinkUrl(AObj: ICefContextMenuParams): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.GetLinkUrl());
  handleExceptionEnd
end;

//function
function CefContextMenuParams_GetUnfilteredLinkUrl(AObj: ICefContextMenuParams): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.GetUnfilteredLinkUrl());
  handleExceptionEnd
end;

//function
function CefContextMenuParams_GetSourceUrl(AObj: ICefContextMenuParams): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.GetSourceUrl());
  handleExceptionEnd
end;

//function
function CefContextMenuParams_HasImageContents(AObj: ICefContextMenuParams): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.HasImageContents();
  handleExceptionEnd
end;

//function
function CefContextMenuParams_GetTitleText(AObj: ICefContextMenuParams): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.GetTitleText());
  handleExceptionEnd
end;

//function
function CefContextMenuParams_GetPageUrl(AObj: ICefContextMenuParams): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.GetPageUrl());
  handleExceptionEnd
end;

//function
function CefContextMenuParams_GetFrameUrl(AObj: ICefContextMenuParams): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.GetFrameUrl());
  handleExceptionEnd
end;

//function
function CefContextMenuParams_GetFrameCharset(AObj: ICefContextMenuParams): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.GetFrameCharset());
  handleExceptionEnd
end;

//function
function CefContextMenuParams_GetMediaType(AObj: ICefContextMenuParams): TCefContextMenuMediaType; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetMediaType();
  handleExceptionEnd
end;

//function
function CefContextMenuParams_GetMediaStateFlags(AObj: ICefContextMenuParams): TCefContextMenuMediaStateFlags; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetMediaStateFlags();
  handleExceptionEnd
end;

//function
function CefContextMenuParams_GetSelectionText(AObj: ICefContextMenuParams): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.GetSelectionText());
  handleExceptionEnd
end;

//function
function CefContextMenuParams_GetMisspelledWord(AObj: ICefContextMenuParams): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.GetMisspelledWord());
  handleExceptionEnd
end;

//function
function CefContextMenuParams_GetDictionarySuggestions(AObj: ICefContextMenuParams; const suggestions: TStringList): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetDictionarySuggestions(suggestions);
  handleExceptionEnd
end;

//function
function CefContextMenuParams_IsEditable(AObj: ICefContextMenuParams): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IsEditable();
  handleExceptionEnd
end;

//function
function CefContextMenuParams_IsSpellCheckEnabled(AObj: ICefContextMenuParams): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IsSpellCheckEnabled();
  handleExceptionEnd
end;

//function
function CefContextMenuParams_GetEditStateFlags(AObj: ICefContextMenuParams): TCefContextMenuEditStateFlags; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetEditStateFlags();
  handleExceptionEnd
end;

//function
function CefContextMenuParams_IsCustomMenu(AObj: ICefContextMenuParams): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IsCustomMenu();
  handleExceptionEnd
end;


exports
  CefContextMenuParams_UnWrap,
  CefContextMenuParams_GetXCoord,
  CefContextMenuParams_GetYCoord,
  CefContextMenuParams_GetTypeFlags,
  CefContextMenuParams_GetLinkUrl,
  CefContextMenuParams_GetUnfilteredLinkUrl,
  CefContextMenuParams_GetSourceUrl,
  CefContextMenuParams_HasImageContents,
  CefContextMenuParams_GetTitleText,
  CefContextMenuParams_GetPageUrl,
  CefContextMenuParams_GetFrameUrl,
  CefContextMenuParams_GetFrameCharset,
  CefContextMenuParams_GetMediaType,
  CefContextMenuParams_GetMediaStateFlags,
  CefContextMenuParams_GetSelectionText,
  CefContextMenuParams_GetMisspelledWord,
  CefContextMenuParams_GetDictionarySuggestions,
  CefContextMenuParams_IsEditable,
  CefContextMenuParams_IsSpellCheckEnabled,
  CefContextMenuParams_GetEditStateFlags,
  CefContextMenuParams_IsCustomMenu;