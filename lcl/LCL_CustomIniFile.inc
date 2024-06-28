
//property
function CustomIniFile_FileName(AObj: TCustomIniFile): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='FileName'}
  handleExceptionBegin
  Result := ToPChar(AObj.FileName);
  handleExceptionEnd
end;

//property
function CustomIniFile_Options(AIsSet: LongBool; AObj: TCustomIniFile; AValue: TIniFileOptions): TIniFileOptions; extdecl;
begin
  {$define handleExceptionFuncName :='Options'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Options := AValue;
  end else
    Result := AObj.Options;
  handleExceptionEnd
end;

//property
function CustomIniFile_BoolTrueStrings(AIsSet: LongBool; AObj: TCustomIniFile; AValue: TStringArray): TStringArray; extdecl;
begin
  {$define handleExceptionFuncName :='BoolTrueStrings'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.BoolTrueStrings := AValue;
  end else
    Result := AObj.BoolTrueStrings;
  handleExceptionEnd
end;

//property
function CustomIniFile_BoolFalseStrings(AIsSet: LongBool; AObj: TCustomIniFile; AValue: TStringArray): TStringArray; extdecl;
begin
  {$define handleExceptionFuncName :='BoolFalseStrings'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.BoolFalseStrings := AValue;
  end else
    Result := AObj.BoolFalseStrings;
  handleExceptionEnd
end;

//property
function CustomIniFile_OwnsEncoding(AObj: TCustomIniFile): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='OwnsEncoding'}
  handleExceptionBegin
  Result := AObj.OwnsEncoding;
  handleExceptionEnd
end;

//function
function CustomIniFile_SectionExists(AObj: TCustomIniFile; const Section: PChar): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='SectionExists'}
  handleExceptionBegin
  Result := AObj.SectionExists(Section);
  handleExceptionEnd
end;

//function
function CustomIniFile_ReadString(AObj: TCustomIniFile; const Section, Ident, Default: PChar): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='ReadString'}
  handleExceptionBegin
  Result := ToPChar(AObj.ReadString(Section, Ident, Default));
  handleExceptionEnd
end;

//function
function CustomIniFile_ReadInteger(AObj: TCustomIniFile; const Section, Ident: PChar; Default: LongInt): LongInt; extdecl;
begin
  {$define handleExceptionFuncName :='ReadInteger'}
  handleExceptionBegin
  Result := AObj.ReadInteger(Section, Ident, Default);
  handleExceptionEnd
end;

//function
procedure CustomIniFile_ReadInt64(AObj: TCustomIniFile; const Section, Ident: PChar; var Default: Int64; var Result: Int64); extdecl;
begin
  {$define handleExceptionFuncName :='ReadInt64'}
  handleExceptionBegin
  Result := AObj.ReadInt64(Section, Ident, Default);
  handleExceptionEnd
end;

//function
function CustomIniFile_ReadBool(AObj: TCustomIniFile; const Section, Ident: PChar; Default: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='ReadBool'}
  handleExceptionBegin
  Result := AObj.ReadBool(Section, Ident, Default);
  handleExceptionEnd
end;

//function
function CustomIniFile_ReadDate(AObj: TCustomIniFile; const Section, Ident: PChar; Default: TDateTime): TDateTime; extdecl;
begin
  {$define handleExceptionFuncName :='ReadDate'}
  handleExceptionBegin
  Result := AObj.ReadDate(Section, Ident, Default);
  handleExceptionEnd
end;

//function
function CustomIniFile_ReadDateTime(AObj: TCustomIniFile; const Section, Ident: PChar; Default: TDateTime): TDateTime; extdecl;
begin
  {$define handleExceptionFuncName :='ReadDateTime'}
  handleExceptionBegin
  Result := AObj.ReadDateTime(Section, Ident, Default);
  handleExceptionEnd
end;

//function
procedure CustomIniFile_ReadFloat(AObj: TCustomIniFile; const Section, Ident: PChar; var Default: Double; var Result: Double); extdecl;
begin
  {$define handleExceptionFuncName :='ReadFloat'}
  handleExceptionBegin
  Result := AObj.ReadFloat(Section, Ident, Default);
  handleExceptionEnd
end;

//function
function CustomIniFile_ReadTime(AObj: TCustomIniFile; const Section, Ident: PChar; Default: TDateTime): TDateTime; extdecl;
begin
  {$define handleExceptionFuncName :='ReadTime'}
  handleExceptionBegin
  Result := AObj.ReadTime(Section, Ident, Default);
  handleExceptionEnd
end;

//function
function CustomIniFile_ReadBinaryStream(AObj: TCustomIniFile; const Section, Name: PChar; Value: TStream): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='ReadBinaryStream'}
  handleExceptionBegin
  Result := AObj.ReadBinaryStream(Section, Name, Value);
  handleExceptionEnd
end;

//function
function CustomIniFile_ValueExists(AObj: TCustomIniFile; const Section, Ident: PChar): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='ValueExists'}
  handleExceptionBegin
  Result := AObj.ValueExists(Section, Ident);
  handleExceptionEnd
end;

//function
function CustomIniFile_Class(): TClass; extdecl;
begin
  Result := TCustomIniFile;
end;

//procedure
procedure CustomIniFile_WriteString(AObj: TCustomIniFile; const Section, Ident, Value: PChar); extdecl;
begin
  {$define handleExceptionFuncName :='WriteString'}
  handleExceptionBegin
  AObj.WriteString(Section, Ident, Value);
  handleExceptionEnd
end;

//procedure
procedure CustomIniFile_WriteInteger(AObj: TCustomIniFile; const Section, Ident: PChar; Value: LongInt); extdecl;
begin
  {$define handleExceptionFuncName :='WriteInteger'}
  handleExceptionBegin
  AObj.WriteInteger(Section, Ident, Value);
  handleExceptionEnd
end;

//procedure
procedure CustomIniFile_WriteInt64(AObj: TCustomIniFile; const Section, Ident: PChar; var Value: Int64); extdecl;
begin
  {$define handleExceptionFuncName :='WriteInt64'}
  handleExceptionBegin
  AObj.WriteInt64(Section, Ident, Value);
  handleExceptionEnd
end;

//procedure
procedure CustomIniFile_WriteBool(AObj: TCustomIniFile; const Section, Ident: PChar; Value: LongBool); extdecl;
begin
  {$define handleExceptionFuncName :='WriteBool'}
  handleExceptionBegin
  AObj.WriteBool(Section, Ident, Value);
  handleExceptionEnd
end;

//procedure
procedure CustomIniFile_WriteDate(AObj: TCustomIniFile; const Section, Ident: PChar; Value: TDateTime); extdecl;
begin
  {$define handleExceptionFuncName :='WriteDate'}
  handleExceptionBegin
  AObj.WriteDate(Section, Ident, Value);
  handleExceptionEnd
end;

//procedure
procedure CustomIniFile_WriteDateTime(AObj: TCustomIniFile; const Section, Ident: PChar; Value: TDateTime); extdecl;
begin
  {$define handleExceptionFuncName :='WriteDateTime'}
  handleExceptionBegin
  AObj.WriteDateTime(Section, Ident, Value);
  handleExceptionEnd
end;

//procedure
procedure CustomIniFile_WriteFloat(AObj: TCustomIniFile; const Section, Ident: PChar; var Value: Double); extdecl;
begin
  {$define handleExceptionFuncName :='WriteFloat'}
  handleExceptionBegin
  AObj.WriteFloat(Section, Ident, Value);
  handleExceptionEnd
end;

//procedure
procedure CustomIniFile_WriteTime(AObj: TCustomIniFile; const Section, Ident: PChar; Value: TDateTime); extdecl;
begin
  {$define handleExceptionFuncName :='WriteTime'}
  handleExceptionBegin
  AObj.WriteTime(Section, Ident, Value);
  handleExceptionEnd
end;

//procedure
procedure CustomIniFile_WriteBinaryStream(AObj: TCustomIniFile; const Section, Name: PChar; Value: TStream); extdecl;
begin
  {$define handleExceptionFuncName :='WriteBinaryStream'}
  handleExceptionBegin
  AObj.WriteBinaryStream(Section, Name, Value);
  handleExceptionEnd
end;

//procedure
procedure CustomIniFile_ReadSection(AObj: TCustomIniFile; const Section: PChar; Strings: TStrings); extdecl;
begin
  {$define handleExceptionFuncName :='ReadSection'}
  handleExceptionBegin
  AObj.ReadSection(Section, Strings);
  handleExceptionEnd
end;

//procedure
procedure CustomIniFile_ReadSections(AObj: TCustomIniFile; Strings: TStrings); extdecl;
begin
  {$define handleExceptionFuncName :='ReadSections'}
  handleExceptionBegin
  AObj.ReadSections(Strings);
  handleExceptionEnd
end;

//procedure
procedure CustomIniFile_ReadSectionValues(AObj: TCustomIniFile; const Section: PChar; Strings: TStrings; Options: TSectionValuesOptions); extdecl;
begin
  {$define handleExceptionFuncName :='ReadSectionValues'}
  handleExceptionBegin
  AObj.ReadSectionValues(Section, Strings, Options);
  handleExceptionEnd
end;

//procedure
procedure CustomIniFile_ReadSectionValues1(AObj: TCustomIniFile; const Section: PChar; Strings: TStrings); extdecl;
begin
  {$define handleExceptionFuncName :='ReadSectionValues1'}
  handleExceptionBegin
  AObj.ReadSectionValues(Section, Strings);
  handleExceptionEnd
end;

//procedure
procedure CustomIniFile_EraseSection(AObj: TCustomIniFile; const Section: PChar); extdecl;
begin
  {$define handleExceptionFuncName :='EraseSection'}
  handleExceptionBegin
  AObj.EraseSection(Section);
  handleExceptionEnd
end;

//procedure
procedure CustomIniFile_DeleteKey(AObj: TCustomIniFile; const Section, Ident: PChar); extdecl;
begin
  {$define handleExceptionFuncName :='DeleteKey'}
  handleExceptionBegin
  AObj.DeleteKey(Section, Ident);
  handleExceptionEnd
end;

//procedure
procedure CustomIniFile_UpdateFile(AObj: TCustomIniFile); extdecl;
begin
  {$define handleExceptionFuncName :='UpdateFile'}
  handleExceptionBegin
  AObj.UpdateFile();
  handleExceptionEnd
end;


exports
  CustomIniFile_FileName,
  CustomIniFile_Options,
  CustomIniFile_BoolTrueStrings,
  CustomIniFile_BoolFalseStrings,
  CustomIniFile_OwnsEncoding,
  CustomIniFile_SectionExists,
  CustomIniFile_ReadString,
  CustomIniFile_ReadInteger,
  CustomIniFile_ReadInt64,
  CustomIniFile_ReadBool,
  CustomIniFile_ReadDate,
  CustomIniFile_ReadDateTime,
  CustomIniFile_ReadFloat,
  CustomIniFile_ReadTime,
  CustomIniFile_ReadBinaryStream,
  CustomIniFile_ValueExists,
  CustomIniFile_Class,
  CustomIniFile_WriteString,
  CustomIniFile_WriteInteger,
  CustomIniFile_WriteInt64,
  CustomIniFile_WriteBool,
  CustomIniFile_WriteDate,
  CustomIniFile_WriteDateTime,
  CustomIniFile_WriteFloat,
  CustomIniFile_WriteTime,
  CustomIniFile_WriteBinaryStream,
  CustomIniFile_ReadSection,
  CustomIniFile_ReadSections,
  CustomIniFile_ReadSectionValues,
  CustomIniFile_ReadSectionValues1,
  CustomIniFile_EraseSection,
  CustomIniFile_DeleteKey,
  CustomIniFile_UpdateFile;