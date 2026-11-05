// constructor
function TIniFile_Create(const AFileName: PChar; AOptions: TIniFileoptions): TIniFile; extdecl;
begin
  {$define handleExceptionID := 15900}
  handleExceptionBegin
  Result := TIniFile.Create(AFileName, AOptions);
  handleExceptionEnd
end;

// constructor
function TIniFile_CreateWithStreamIniFileoptions(AStream: TStream; AOptions: TIniFileoptions): TIniFile; extdecl;
begin
  {$define handleExceptionID := 15901}
  handleExceptionBegin
  Result := TIniFile.Create(AStream, AOptions);
  handleExceptionEnd
end;

// constructor
function TIniFile_CreateWithStreamBool(AStream: TStream; AEscapeLineFeeds: LongBool): TIniFile; extdecl;
begin
  {$define handleExceptionID := 15902}
  handleExceptionBegin
  Result := TIniFile.Create(AStream, AEscapeLineFeeds);
  handleExceptionEnd
end;

// procedure
procedure TIniFile_ReadSectionRaw(AObj: TIniFile; const Section: PChar; Strings: TStrings); extdecl;
begin
  {$define handleExceptionID := 15903}
  handleExceptionBegin
  AObj.ReadSectionRaw(Section, Strings);
  handleExceptionEnd
end;

// property
function TIniFile_Stream(AObj: TIniFile): TStream; extdecl;
begin
  {$define handleExceptionID := 15904}
  handleExceptionBegin
  Result := AObj.Stream;
  handleExceptionEnd
end;

// property
function TIniFile_CacheUpdates(ASet: LongBool; AObj: TIniFile; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 15905}
  handleExceptionBegin
  if ASet then
  begin
    AObj.CacheUpdates := AValue
  end else
    Result := AObj.CacheUpdates;
  handleExceptionEnd
end;

// property
function TIniFile_WriteBOM(ASet: LongBool; AObj: TIniFile; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 15906}
  handleExceptionBegin
  if ASet then
  begin
    AObj.WriteBOM := AValue
  end else
    Result := AObj.WriteBOM;
  handleExceptionEnd
end;

exports
  TIniFile_Create,
  TIniFile_CreateWithStreamIniFileoptions,
  TIniFile_CreateWithStreamBool,
  TIniFile_ReadSectionRaw,
  TIniFile_Stream,
  TIniFile_CacheUpdates,
  TIniFile_WriteBOM;