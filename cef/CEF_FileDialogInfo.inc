
//constructor
function CEFFileDialogInfo_Create(): TCEFFileDialogInfo; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TCEFFileDialogInfo.Create();
  handleExceptionEnd
end;

//property
function CEFFileDialogInfo_Mode(AIsSet: LongBool; AObj: TCEFFileDialogInfo; AValue: uint32): uint32; extdecl;
begin
  {$define handleExceptionFuncName :='Mode'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Mode := AValue;
  end else
    Result := AObj.Mode;
  handleExceptionEnd
end;

//property
function CEFFileDialogInfo_Title(AIsSet: LongBool; AObj: TCEFFileDialogInfo; AValue: PChar): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='Title'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Title := AValue;
  end else
    Result := ToPChar(AObj.Title);
  handleExceptionEnd
end;

//property
function CEFFileDialogInfo_DefaultFilePath(AIsSet: LongBool; AObj: TCEFFileDialogInfo; AValue: PChar): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='DefaultFilePath'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DefaultFilePath := AValue;
  end else
    Result := ToPChar(AObj.DefaultFilePath);
  handleExceptionEnd
end;

//property
procedure CEFFileDialogInfo_AcceptFilters(AObj: TCEFFileDialogInfo; AValue: TStrings); extdecl;
begin
  {$define handleExceptionFuncName :='AcceptFilters'}
  handleExceptionBegin
  AObj.AcceptFilters := AValue;
  handleExceptionEnd
end;

//property
function CEFFileDialogInfo_SelectedAcceptFilter(AIsSet: LongBool; AObj: TCEFFileDialogInfo; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='SelectedAcceptFilter'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.SelectedAcceptFilter := AValue;
  end else
    Result := AObj.SelectedAcceptFilter;
  handleExceptionEnd
end;

//property
procedure CEFFileDialogInfo_Callback(AIsSet: LongBool; AObj: TCEFFileDialogInfo; AValue: ICefFileDialogCallback; var Result: ICefFileDialogCallback); extdecl;
begin
  {$define handleExceptionFuncName :='Callback'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Callback := AValue;
  end else
    Result := AObj.Callback;
  handleExceptionEnd
end;

//property
function CEFFileDialogInfo_OverwritePrompt(AObj: TCEFFileDialogInfo): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='OverwritePrompt'}
  handleExceptionBegin
  Result := AObj.OverwritePrompt;
  handleExceptionEnd
end;

//property
function CEFFileDialogInfo_HideReadonly(AObj: TCEFFileDialogInfo): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='HideReadonly'}
  handleExceptionBegin
  Result := AObj.HideReadonly;
  handleExceptionEnd
end;

//property
function CEFFileDialogInfo_DialogFilter(AObj: TCEFFileDialogInfo): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='DialogFilter'}
  handleExceptionBegin
  Result := ToPChar(AObj.DialogFilter);
  handleExceptionEnd
end;

//property
function CEFFileDialogInfo_DialogType(AObj: TCEFFileDialogInfo): TCEFDialogType; extdecl;
begin
  {$define handleExceptionFuncName :='DialogType'}
  handleExceptionBegin
  Result := AObj.DialogType;
  handleExceptionEnd
end;

//property
function CEFFileDialogInfo_DefaultAudioFileDesc(AIsSet: LongBool; AObj: TCEFFileDialogInfo; AValue: PChar): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='DefaultAudioFileDesc'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DefaultAudioFileDesc := AValue;
  end else
    Result := ToPChar(AObj.DefaultAudioFileDesc);
  handleExceptionEnd
end;

//property
function CEFFileDialogInfo_DefaultVideoFileDesc(AIsSet: LongBool; AObj: TCEFFileDialogInfo; AValue: PChar): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='DefaultVideoFileDesc'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DefaultVideoFileDesc := AValue;
  end else
    Result := ToPChar(AObj.DefaultVideoFileDesc);
  handleExceptionEnd
end;

//property
function CEFFileDialogInfo_DefaultTextFileDesc(AIsSet: LongBool; AObj: TCEFFileDialogInfo; AValue: PChar): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='DefaultTextFileDesc'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DefaultTextFileDesc := AValue;
  end else
    Result := ToPChar(AObj.DefaultTextFileDesc);
  handleExceptionEnd
end;

//property
function CEFFileDialogInfo_DefaultImageFileDesc(AIsSet: LongBool; AObj: TCEFFileDialogInfo; AValue: PChar): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='DefaultImageFileDesc'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DefaultImageFileDesc := AValue;
  end else
    Result := ToPChar(AObj.DefaultImageFileDesc);
  handleExceptionEnd
end;

//property
function CEFFileDialogInfo_DefaultAllFileDesc(AIsSet: LongBool; AObj: TCEFFileDialogInfo; AValue: PChar): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='DefaultAllFileDesc'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DefaultAllFileDesc := AValue;
  end else
    Result := ToPChar(AObj.DefaultAllFileDesc);
  handleExceptionEnd
end;

//property
function CEFFileDialogInfo_DefaultUnknownFileDesc(AIsSet: LongBool; AObj: TCEFFileDialogInfo; AValue: PChar): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='DefaultUnknownFileDesc'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DefaultUnknownFileDesc := AValue;
  end else
    Result := ToPChar(AObj.DefaultUnknownFileDesc);
  handleExceptionEnd
end;

//procedure
procedure CEFFileDialogInfo_Clear(AObj: TCEFFileDialogInfo); extdecl;
begin
  {$define handleExceptionFuncName :='Clear'}
  handleExceptionBegin
  AObj.Clear();
  handleExceptionEnd
end;


exports
  CEFFileDialogInfo_Create,
  CEFFileDialogInfo_Mode,
  CEFFileDialogInfo_Title,
  CEFFileDialogInfo_DefaultFilePath,
  CEFFileDialogInfo_AcceptFilters,
  CEFFileDialogInfo_SelectedAcceptFilter,
  CEFFileDialogInfo_Callback,
  CEFFileDialogInfo_OverwritePrompt,
  CEFFileDialogInfo_HideReadonly,
  CEFFileDialogInfo_DialogFilter,
  CEFFileDialogInfo_DialogType,
  CEFFileDialogInfo_DefaultAudioFileDesc,
  CEFFileDialogInfo_DefaultVideoFileDesc,
  CEFFileDialogInfo_DefaultTextFileDesc,
  CEFFileDialogInfo_DefaultImageFileDesc,
  CEFFileDialogInfo_DefaultAllFileDesc,
  CEFFileDialogInfo_DefaultUnknownFileDesc,
  CEFFileDialogInfo_Clear;