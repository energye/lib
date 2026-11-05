// constructor
function TCEFFileDialogInfo_Create(): TCEFFileDialogInfo; extdecl;
begin
  {$define handleExceptionID := 10300}
  handleExceptionBegin
  Result := TCEFFileDialogInfo.Create();
  handleExceptionEnd
end;

// procedure
procedure TCEFFileDialogInfo_Clear(AObj: TCEFFileDialogInfo); extdecl;
begin
  {$define handleExceptionID := 10301}
  handleExceptionBegin
  AObj.Clear();
  handleExceptionEnd
end;

// property
function TCEFFileDialogInfo_Mode(ASet: LongBool; AObj: TCEFFileDialogInfo; AValue: Cardinal): Cardinal; extdecl;
begin
  {$define handleExceptionID := 10302}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Mode := AValue
  end else
    Result := AObj.Mode;
  handleExceptionEnd
end;

// property
procedure TCEFFileDialogInfo_Title(ASet: LongBool; AObj: TCEFFileDialogInfo; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 10303}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Title := AValue
  end else
    StringBufferCreate(AObj.Title, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TCEFFileDialogInfo_DefaultFilePath(ASet: LongBool; AObj: TCEFFileDialogInfo; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 10304}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DefaultFilePath := AValue
  end else
    StringBufferCreate(AObj.DefaultFilePath, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TCEFFileDialogInfo_AcceptFilters(AObj: TCEFFileDialogInfo; AValue: TStrings); extdecl;
begin
  {$define handleExceptionID := 10305}
  handleExceptionBegin
  AObj.AcceptFilters := AValue;
  handleExceptionEnd
end;

// property
procedure TCEFFileDialogInfo_AcceptExtensions(AObj: TCEFFileDialogInfo; AValue: TStrings); extdecl;
begin
  {$define handleExceptionID := 10306}
  handleExceptionBegin
  AObj.AcceptExtensions := AValue;
  handleExceptionEnd
end;

// property
procedure TCEFFileDialogInfo_AcceptDescriptions(AObj: TCEFFileDialogInfo; AValue: TStrings); extdecl;
begin
  {$define handleExceptionID := 10307}
  handleExceptionBegin
  AObj.AcceptDescriptions := AValue;
  handleExceptionEnd
end;

// property
procedure TCEFFileDialogInfo_Callback(ASet: LongBool; AObj: TCEFFileDialogInfo; AValue: ICefFileDialogCallback; var Result: ICefFileDialogCallback); extdecl;
begin
  {$define handleExceptionID := 10308}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Callback := AValue
  end else
    Result := AObj.Callback;
  handleExceptionEnd
end;

// property
procedure TCEFFileDialogInfo_DialogFilter(AObj: TCEFFileDialogInfo; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 10309}
  handleExceptionBegin
  StringBufferCreate(AObj.DialogFilter, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TCEFFileDialogInfo_DialogType(AObj: TCEFFileDialogInfo): TCEFDialogType; extdecl;
begin
  {$define handleExceptionID := 10310}
  handleExceptionBegin
  Result := AObj.DialogType;
  handleExceptionEnd
end;

// property
procedure TCEFFileDialogInfo_DefaultAudioFileDesc(ASet: LongBool; AObj: TCEFFileDialogInfo; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 10311}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DefaultAudioFileDesc := AValue
  end else
    StringBufferCreate(AObj.DefaultAudioFileDesc, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TCEFFileDialogInfo_DefaultVideoFileDesc(ASet: LongBool; AObj: TCEFFileDialogInfo; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 10312}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DefaultVideoFileDesc := AValue
  end else
    StringBufferCreate(AObj.DefaultVideoFileDesc, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TCEFFileDialogInfo_DefaultTextFileDesc(ASet: LongBool; AObj: TCEFFileDialogInfo; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 10313}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DefaultTextFileDesc := AValue
  end else
    StringBufferCreate(AObj.DefaultTextFileDesc, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TCEFFileDialogInfo_DefaultImageFileDesc(ASet: LongBool; AObj: TCEFFileDialogInfo; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 10314}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DefaultImageFileDesc := AValue
  end else
    StringBufferCreate(AObj.DefaultImageFileDesc, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TCEFFileDialogInfo_DefaultAllFileDesc(ASet: LongBool; AObj: TCEFFileDialogInfo; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 10315}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DefaultAllFileDesc := AValue
  end else
    StringBufferCreate(AObj.DefaultAllFileDesc, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TCEFFileDialogInfo_DefaultUnknownFileDesc(ASet: LongBool; AObj: TCEFFileDialogInfo; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 10316}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DefaultUnknownFileDesc := AValue
  end else
    StringBufferCreate(AObj.DefaultUnknownFileDesc, AStrData, AStrSize);
  handleExceptionEnd
end;

exports
  TCEFFileDialogInfo_Create,
  TCEFFileDialogInfo_Clear,
  TCEFFileDialogInfo_Mode,
  TCEFFileDialogInfo_Title,
  TCEFFileDialogInfo_DefaultFilePath,
  TCEFFileDialogInfo_AcceptFilters,
  TCEFFileDialogInfo_AcceptExtensions,
  TCEFFileDialogInfo_AcceptDescriptions,
  TCEFFileDialogInfo_Callback,
  TCEFFileDialogInfo_DialogFilter,
  TCEFFileDialogInfo_DialogType,
  TCEFFileDialogInfo_DefaultAudioFileDesc,
  TCEFFileDialogInfo_DefaultVideoFileDesc,
  TCEFFileDialogInfo_DefaultTextFileDesc,
  TCEFFileDialogInfo_DefaultImageFileDesc,
  TCEFFileDialogInfo_DefaultAllFileDesc,
  TCEFFileDialogInfo_DefaultUnknownFileDesc;