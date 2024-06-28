
//constructor
function IniFile_Create(const AFileName: PChar; AOptions: TIniFileoptions): TIniFile; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TIniFile.Create(AFileName, AOptions);
  handleExceptionEnd
end;

//constructor
function IniFile_Create1(AStream: TStream; AOptions: TIniFileoptions): TIniFile; extdecl;
begin
  {$define handleExceptionFuncName :='Create1'}
  handleExceptionBegin
  Result := TIniFile.Create(AStream, AOptions);
  handleExceptionEnd
end;

//property
function IniFile_Stream(AObj: TIniFile): TStream; extdecl;
begin
  {$define handleExceptionFuncName :='Stream'}
  handleExceptionBegin
  Result := AObj.Stream;
  handleExceptionEnd
end;

//property
function IniFile_CacheUpdates(AIsSet: LongBool; AObj: TIniFile; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='CacheUpdates'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.CacheUpdates := AValue;
  end else
    Result := AObj.CacheUpdates;
  handleExceptionEnd
end;

//property
function IniFile_WriteBOM(AIsSet: LongBool; AObj: TIniFile; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='WriteBOM'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.WriteBOM := AValue;
  end else
    Result := AObj.WriteBOM;
  handleExceptionEnd
end;

//function
function IniFile_Class(): TClass; extdecl;
begin
  Result := TIniFile;
end;

//procedure
procedure IniFile_ReadSectionRaw(AObj: TIniFile; const Section: PChar; Strings: TStrings); extdecl;
begin
  {$define handleExceptionFuncName :='ReadSectionRaw'}
  handleExceptionBegin
  AObj.ReadSectionRaw(Section, Strings);
  handleExceptionEnd
end;


exports
  IniFile_Create,
  IniFile_Create1,
  IniFile_Stream,
  IniFile_CacheUpdates,
  IniFile_WriteBOM,
  IniFile_Class,
  IniFile_ReadSectionRaw;