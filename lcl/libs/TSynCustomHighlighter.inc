// function static
function TSynCustomHighlighter_GetCapabilities(): TSynHighlighterCapabilities; extdecl;
begin
  Result := TSynCustomHighlighter.GetCapabilities();
end;

// function static
function TSynCustomHighlighter_GetLanguageName(): PChar; extdecl;
begin
  Result := ToPChar(TSynCustomHighlighter.GetLanguageName());
end;

// function
function TSynCustomHighlighter_AddSpecialAttribute(AObj: TSynCustomHighlighter; const aCaption: PChar; const aStoredName: PChar): TSynHighlighterAttributes; extdecl;
begin
  {$define handleExceptionID := 37000}
  handleExceptionBegin
  Result := AObj.AddSpecialAttribute(aCaption, aStoredName);
  handleExceptionEnd
end;

// function
function TSynCustomHighlighter_GetEol(AObj: TSynCustomHighlighter): LongBool; extdecl;
begin
  {$define handleExceptionID := 37001}
  handleExceptionBegin
  Result := AObj.GetEol();
  handleExceptionEnd
end;

// function
function TSynCustomHighlighter_GetRange(AObj: TSynCustomHighlighter): Pointer; extdecl;
begin
  {$define handleExceptionID := 37002}
  handleExceptionBegin
  Result := AObj.GetRange();
  handleExceptionEnd
end;

// function
procedure TSynCustomHighlighter_GetToken(AObj: TSynCustomHighlighter;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 37003}
  handleExceptionBegin
  StringBufferCreate(AObj.GetToken(), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
function TSynCustomHighlighter_GetEndOfLineAttribute(AObj: TSynCustomHighlighter): TSynHighlighterAttributes; extdecl;
begin
  {$define handleExceptionID := 37004}
  handleExceptionBegin
  Result := AObj.GetEndOfLineAttribute();
  handleExceptionEnd
end;

// function
function TSynCustomHighlighter_GetTokenAttribute(AObj: TSynCustomHighlighter): TSynHighlighterAttributes; extdecl;
begin
  {$define handleExceptionID := 37005}
  handleExceptionBegin
  Result := AObj.GetTokenAttribute();
  handleExceptionEnd
end;

// function
function TSynCustomHighlighter_GetTokenKind(AObj: TSynCustomHighlighter): integer; extdecl;
begin
  {$define handleExceptionID := 37006}
  handleExceptionBegin
  Result := AObj.GetTokenKind();
  handleExceptionEnd
end;

// function
function TSynCustomHighlighter_GetTokenPos(AObj: TSynCustomHighlighter): Integer; extdecl;
begin
  {$define handleExceptionID := 37007}
  handleExceptionBegin
  Result := AObj.GetTokenPos();
  handleExceptionEnd
end;

// function
function TSynCustomHighlighter_GetTokenLen(AObj: TSynCustomHighlighter): Integer; extdecl;
begin
  {$define handleExceptionID := 37008}
  handleExceptionBegin
  Result := AObj.GetTokenLen();
  handleExceptionEnd
end;

// function
function TSynCustomHighlighter_IsKeyword(AObj: TSynCustomHighlighter; const AKeyword: PChar): LongBool; extdecl;
begin
  {$define handleExceptionID := 37009}
  handleExceptionBegin
  Result := AObj.IsKeyword(AKeyword);
  handleExceptionEnd
end;

// function
function TSynCustomHighlighter_IdleScanRanges(AObj: TSynCustomHighlighter): LongBool; extdecl;
begin
  {$define handleExceptionID := 37010}
  handleExceptionBegin
  Result := AObj.IdleScanRanges();
  handleExceptionEnd
end;

// function
function TSynCustomHighlighter_NeedScan(AObj: TSynCustomHighlighter): LongBool; extdecl;
begin
  {$define handleExceptionID := 37011}
  handleExceptionBegin
  Result := AObj.NeedScan();
  handleExceptionEnd
end;

// function
function TSynCustomHighlighter_UseUserSettings(AObj: TSynCustomHighlighter; settingIndex: integer): LongBool; extdecl;
begin
  {$define handleExceptionID := 37012}
  handleExceptionBegin
  Result := AObj.UseUserSettings(settingIndex);
  handleExceptionEnd
end;

// function
function TSynCustomHighlighter_LoadFromRegistry(AObj: TSynCustomHighlighter; RootKey: HKEY; Key: PChar): LongBool; extdecl;
begin
  {$define handleExceptionID := 37013}
  handleExceptionBegin
  Result := AObj.LoadFromRegistry(RootKey, Key);
  handleExceptionEnd
end;

// function
function TSynCustomHighlighter_SaveToRegistry(AObj: TSynCustomHighlighter; RootKey: HKEY; Key: PChar): LongBool; extdecl;
begin
  {$define handleExceptionID := 37014}
  handleExceptionBegin
  Result := AObj.SaveToRegistry(RootKey, Key);
  handleExceptionEnd
end;

// function
function TSynCustomHighlighter_LoadFromFile(AObj: TSynCustomHighlighter; AFileName: PChar): LongBool; extdecl;
begin
  {$define handleExceptionID := 37015}
  handleExceptionBegin
  Result := AObj.LoadFromFile(AFileName);
  handleExceptionEnd
end;

// function
function TSynCustomHighlighter_SaveToFile(AObj: TSynCustomHighlighter; AFileName: PChar): LongBool; extdecl;
begin
  {$define handleExceptionID := 37016}
  handleExceptionBegin
  Result := AObj.SaveToFile(AFileName);
  handleExceptionEnd
end;

// procedure
procedure TSynCustomHighlighter_DefHighlightChange(AObj: TSynCustomHighlighter; Sender: TObject); extdecl;
begin
  {$define handleExceptionID := 37017}
  handleExceptionBegin
  AObj.DefHighlightChange(Sender);
  handleExceptionEnd
end;

// procedure
procedure TSynCustomHighlighter_BeginUpdate(AObj: TSynCustomHighlighter); extdecl;
begin
  {$define handleExceptionID := 37018}
  handleExceptionBegin
  AObj.BeginUpdate();
  handleExceptionEnd
end;

// procedure
procedure TSynCustomHighlighter_EndUpdate(AObj: TSynCustomHighlighter); extdecl;
begin
  {$define handleExceptionID := 37019}
  handleExceptionBegin
  AObj.EndUpdate();
  handleExceptionEnd
end;

// procedure
procedure TSynCustomHighlighter_AttachToLines(AObj: TSynCustomHighlighter; Lines: TSynEditStringsBase); extdecl;
begin
  {$define handleExceptionID := 37020}
  handleExceptionBegin
  AObj.AttachToLines(Lines);
  handleExceptionEnd
end;

// procedure
procedure TSynCustomHighlighter_DetachFromLines(AObj: TSynCustomHighlighter; Lines: TSynEditStringsBase); extdecl;
begin
  {$define handleExceptionID := 37021}
  handleExceptionBegin
  AObj.DetachFromLines(Lines);
  handleExceptionEnd
end;

// procedure
procedure TSynCustomHighlighter_GetTokenEx(AObj: TSynCustomHighlighter; var TokenStart: PChar; var TokenLength: integer); extdecl;
var
  OutTokenStart: PChar;
  OutTokenLength: integer;
begin
  {$define handleExceptionID := 37022}
  handleExceptionBegin
  AObj.GetTokenEx(OutTokenStart, OutTokenLength);
  TokenStart := OutTokenStart;
  TokenLength := OutTokenLength;
  handleExceptionEnd
end;

// procedure
procedure TSynCustomHighlighter_Next(AObj: TSynCustomHighlighter); extdecl;
begin
  {$define handleExceptionID := 37023}
  handleExceptionBegin
  AObj.Next();
  handleExceptionEnd
end;

// procedure
procedure TSynCustomHighlighter_NextToEol(AObj: TSynCustomHighlighter); extdecl;
begin
  {$define handleExceptionID := 37024}
  handleExceptionBegin
  AObj.NextToEol();
  handleExceptionEnd
end;

// procedure
procedure TSynCustomHighlighter_StartAtLineIndex(AObj: TSynCustomHighlighter; LineNumber: Integer); extdecl;
begin
  {$define handleExceptionID := 37025}
  handleExceptionBegin
  AObj.StartAtLineIndex(LineNumber);
  handleExceptionEnd
end;

// procedure
procedure TSynCustomHighlighter_ContinueNextLine(AObj: TSynCustomHighlighter); extdecl;
begin
  {$define handleExceptionID := 37026}
  handleExceptionBegin
  AObj.ContinueNextLine();
  handleExceptionEnd
end;

// procedure
procedure TSynCustomHighlighter_ScanRanges(AObj: TSynCustomHighlighter); extdecl;
begin
  {$define handleExceptionID := 37027}
  handleExceptionBegin
  AObj.ScanRanges();
  handleExceptionEnd
end;

// procedure
procedure TSynCustomHighlighter_ScanAllRanges(AObj: TSynCustomHighlighter); extdecl;
begin
  {$define handleExceptionID := 37028}
  handleExceptionBegin
  AObj.ScanAllRanges();
  handleExceptionEnd
end;

// procedure
procedure TSynCustomHighlighter_SetRange(AObj: TSynCustomHighlighter; Value: Pointer); extdecl;
begin
  {$define handleExceptionID := 37029}
  handleExceptionBegin
  AObj.SetRange(Value);
  handleExceptionEnd
end;

// procedure
procedure TSynCustomHighlighter_ResetRange(AObj: TSynCustomHighlighter); extdecl;
begin
  {$define handleExceptionID := 37030}
  handleExceptionBegin
  AObj.ResetRange();
  handleExceptionEnd
end;

// procedure
procedure TSynCustomHighlighter_SetLine(AObj: TSynCustomHighlighter; const NewValue: PChar; LineNumber: Integer); extdecl;
begin
  {$define handleExceptionID := 37031}
  handleExceptionBegin
  AObj.SetLine(NewValue, LineNumber);
  handleExceptionEnd
end;

// procedure
procedure TSynCustomHighlighter_EnumUserSettings(AObj: TSynCustomHighlighter; Settings: TStrings); extdecl;
begin
  {$define handleExceptionID := 37032}
  handleExceptionBegin
  AObj.EnumUserSettings(Settings);
  handleExceptionEnd
end;

// property
function TSynCustomHighlighter_AttributeChangeNeedScan(AObj: TSynCustomHighlighter): LongBool; extdecl;
begin
  {$define handleExceptionID := 37033}
  handleExceptionBegin
  Result := AObj.AttributeChangeNeedScan;
  handleExceptionEnd
end;

// property
procedure TSynCustomHighlighter_DrawDivider(AObj: TSynCustomHighlighter; Index: integer; var Result: TSynDividerDrawConfigSettingPtr); extdecl;
begin
  {$define handleExceptionID := 37034}
  handleExceptionBegin
  Result := TSynDividerDrawConfigSettingToGo(AObj.DrawDivider[Index]);
  handleExceptionEnd
end;

// property
function TSynCustomHighlighter_CurrentLines(ASet: LongBool; AObj: TSynCustomHighlighter; AValue: TSynEditStringsBase): TSynEditStringsBase; extdecl;
begin
  {$define handleExceptionID := 37035}
  handleExceptionBegin
  if ASet then
  begin
    AObj.CurrentLines := AValue
  end else
    Result := AObj.CurrentLines;
  handleExceptionEnd
end;

// property
function TSynCustomHighlighter_LineIndex(AObj: TSynCustomHighlighter): Integer; extdecl;
begin
  {$define handleExceptionID := 37036}
  handleExceptionBegin
  Result := AObj.LineIndex;
  handleExceptionEnd
end;

// property
function TSynCustomHighlighter_IdentChars(AObj: TSynCustomHighlighter): TSynIdentChars; extdecl;
begin
  {$define handleExceptionID := 37037}
  handleExceptionBegin
  Result := AObj.IdentChars;
  handleExceptionEnd
end;

// property
function TSynCustomHighlighter_WordBreakChars(ASet: LongBool; AObj: TSynCustomHighlighter; AValue: TSynIdentChars): TSynIdentChars; extdecl;
begin
  {$define handleExceptionID := 37038}
  handleExceptionBegin
  if ASet then
  begin
    AObj.WordBreakChars := AValue
  end else
    Result := AObj.WordBreakChars;
  handleExceptionEnd
end;

// property
procedure TSynCustomHighlighter_LanguageName(AObj: TSynCustomHighlighter; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 37039}
  handleExceptionBegin
  StringBufferCreate(AObj.LanguageName, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TSynCustomHighlighter_AttrCount(AObj: TSynCustomHighlighter): integer; extdecl;
begin
  {$define handleExceptionID := 37040}
  handleExceptionBegin
  Result := AObj.AttrCount;
  handleExceptionEnd
end;

// property
function TSynCustomHighlighter_Attribute(AObj: TSynCustomHighlighter; idx: integer): TSynHighlighterAttributes; extdecl;
begin
  {$define handleExceptionID := 37041}
  handleExceptionBegin
  Result := AObj.Attribute[idx];
  handleExceptionEnd
end;

// property
function TSynCustomHighlighter_Capabilities(AObj: TSynCustomHighlighter): TSynHighlighterCapabilities; extdecl;
begin
  {$define handleExceptionID := 37042}
  handleExceptionBegin
  Result := AObj.Capabilities;
  handleExceptionEnd
end;

// property
procedure TSynCustomHighlighter_SampleSource(ASet: LongBool; AObj: TSynCustomHighlighter; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 37043}
  handleExceptionBegin
  if ASet then
  begin
    AObj.SampleSource := AValue
  end else
    StringBufferCreate(AObj.SampleSource, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TSynCustomHighlighter_DividerDrawConfig(AObj: TSynCustomHighlighter; Index: Integer): TSynDividerDrawConfig; extdecl;
begin
  {$define handleExceptionID := 37044}
  handleExceptionBegin
  Result := AObj.DividerDrawConfig[Index];
  handleExceptionEnd
end;

// property
function TSynCustomHighlighter_DividerDrawConfigCount(AObj: TSynCustomHighlighter): Integer; extdecl;
begin
  {$define handleExceptionID := 37045}
  handleExceptionBegin
  Result := AObj.DividerDrawConfigCount;
  handleExceptionEnd
end;

// property
procedure TSynCustomHighlighter_DefaultFilter(ASet: LongBool; AObj: TSynCustomHighlighter; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 37046}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DefaultFilter := AValue
  end else
    StringBufferCreate(AObj.DefaultFilter, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TSynCustomHighlighter_Enabled(ASet: LongBool; AObj: TSynCustomHighlighter; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 37047}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Enabled := AValue
  end else
    Result := AObj.Enabled;
  handleExceptionEnd
end;

exports
  TSynCustomHighlighter_GetCapabilities,
  TSynCustomHighlighter_GetLanguageName,
  TSynCustomHighlighter_AddSpecialAttribute,
  TSynCustomHighlighter_GetEol,
  TSynCustomHighlighter_GetRange,
  TSynCustomHighlighter_GetToken,
  TSynCustomHighlighter_GetEndOfLineAttribute,
  TSynCustomHighlighter_GetTokenAttribute,
  TSynCustomHighlighter_GetTokenKind,
  TSynCustomHighlighter_GetTokenPos,
  TSynCustomHighlighter_GetTokenLen,
  TSynCustomHighlighter_IsKeyword,
  TSynCustomHighlighter_IdleScanRanges,
  TSynCustomHighlighter_NeedScan,
  TSynCustomHighlighter_UseUserSettings,
  TSynCustomHighlighter_LoadFromRegistry,
  TSynCustomHighlighter_SaveToRegistry,
  TSynCustomHighlighter_LoadFromFile,
  TSynCustomHighlighter_SaveToFile,
  TSynCustomHighlighter_DefHighlightChange,
  TSynCustomHighlighter_BeginUpdate,
  TSynCustomHighlighter_EndUpdate,
  TSynCustomHighlighter_AttachToLines,
  TSynCustomHighlighter_DetachFromLines,
  TSynCustomHighlighter_GetTokenEx,
  TSynCustomHighlighter_Next,
  TSynCustomHighlighter_NextToEol,
  TSynCustomHighlighter_StartAtLineIndex,
  TSynCustomHighlighter_ContinueNextLine,
  TSynCustomHighlighter_ScanRanges,
  TSynCustomHighlighter_ScanAllRanges,
  TSynCustomHighlighter_SetRange,
  TSynCustomHighlighter_ResetRange,
  TSynCustomHighlighter_SetLine,
  TSynCustomHighlighter_EnumUserSettings,
  TSynCustomHighlighter_AttributeChangeNeedScan,
  TSynCustomHighlighter_DrawDivider,
  TSynCustomHighlighter_CurrentLines,
  TSynCustomHighlighter_LineIndex,
  TSynCustomHighlighter_IdentChars,
  TSynCustomHighlighter_WordBreakChars,
  TSynCustomHighlighter_LanguageName,
  TSynCustomHighlighter_AttrCount,
  TSynCustomHighlighter_Attribute,
  TSynCustomHighlighter_Capabilities,
  TSynCustomHighlighter_SampleSource,
  TSynCustomHighlighter_DividerDrawConfig,
  TSynCustomHighlighter_DividerDrawConfigCount,
  TSynCustomHighlighter_DefaultFilter,
  TSynCustomHighlighter_Enabled;