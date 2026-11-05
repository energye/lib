// function
function TCustomIniFile_SectionExists(AObj: TCustomIniFile; const Section: PChar): LongBool; extdecl;
begin
  {$define handleExceptionID := 15800}
  handleExceptionBegin
  Result := AObj.SectionExists(Section);
  handleExceptionEnd
end;

// function
procedure TCustomIniFile_ReadString(AObj: TCustomIniFile; const Section: PChar; const Ident: PChar; const Default: PChar;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 15801}
  handleExceptionBegin
  StringBufferCreate(AObj.ReadString(Section, Ident, Default), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
function TCustomIniFile_ReadInteger(AObj: TCustomIniFile; const Section: PChar; const Ident: PChar; Default: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 15802}
  handleExceptionBegin
  Result := AObj.ReadInteger(Section, Ident, Default);
  handleExceptionEnd
end;

// function
procedure TCustomIniFile_ReadInt64(AObj: TCustomIniFile; const Section: PChar; const Ident: PChar; var Default: Int64; var Result: Int64); extdecl;
begin
  {$define handleExceptionID := 15803}
  handleExceptionBegin
  Result := AObj.ReadInt64(Section, Ident, Default);
  handleExceptionEnd
end;

// function
function TCustomIniFile_ReadBool(AObj: TCustomIniFile; const Section: PChar; const Ident: PChar; Default: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 15804}
  handleExceptionBegin
  Result := AObj.ReadBool(Section, Ident, Default);
  handleExceptionEnd
end;

// function
procedure TCustomIniFile_ReadDate(AObj: TCustomIniFile; const Section: PChar; const Ident: PChar; var Default: Double; var Result: Double); extdecl;
begin
  {$define handleExceptionID := 15805}
  handleExceptionBegin
  Result := AObj.ReadDate(Section, Ident, Default);
  handleExceptionEnd
end;

// function
procedure TCustomIniFile_ReadDateTime(AObj: TCustomIniFile; const Section: PChar; const Ident: PChar; var Default: Double; var Result: Double); extdecl;
begin
  {$define handleExceptionID := 15806}
  handleExceptionBegin
  Result := AObj.ReadDateTime(Section, Ident, Default);
  handleExceptionEnd
end;

// function
procedure TCustomIniFile_ReadFloat(AObj: TCustomIniFile; const Section: PChar; const Ident: PChar; var Default: Double; var Result: Double); extdecl;
begin
  {$define handleExceptionID := 15807}
  handleExceptionBegin
  Result := AObj.ReadFloat(Section, Ident, Default);
  handleExceptionEnd
end;

// function
procedure TCustomIniFile_ReadTime(AObj: TCustomIniFile; const Section: PChar; const Ident: PChar; var Default: Double; var Result: Double); extdecl;
begin
  {$define handleExceptionID := 15808}
  handleExceptionBegin
  Result := AObj.ReadTime(Section, Ident, Default);
  handleExceptionEnd
end;

// function
function TCustomIniFile_ReadBinaryStream(AObj: TCustomIniFile; const Section: PChar; const Name: PChar; Value: TStream): Integer; extdecl;
begin
  {$define handleExceptionID := 15809}
  handleExceptionBegin
  Result := AObj.ReadBinaryStream(Section, Name, Value);
  handleExceptionEnd
end;

// function
function TCustomIniFile_ValueExists(AObj: TCustomIniFile; const Section: PChar; const Ident: PChar): LongBool; extdecl;
begin
  {$define handleExceptionID := 15810}
  handleExceptionBegin
  Result := AObj.ValueExists(Section, Ident);
  handleExceptionEnd
end;

// procedure
procedure TCustomIniFile_WriteString(AObj: TCustomIniFile; const Section: PChar; const Ident: PChar; const Value: PChar); extdecl;
begin
  {$define handleExceptionID := 15811}
  handleExceptionBegin
  AObj.WriteString(Section, Ident, Value);
  handleExceptionEnd
end;

// procedure
procedure TCustomIniFile_WriteInteger(AObj: TCustomIniFile; const Section: PChar; const Ident: PChar; Value: Integer); extdecl;
begin
  {$define handleExceptionID := 15812}
  handleExceptionBegin
  AObj.WriteInteger(Section, Ident, Value);
  handleExceptionEnd
end;

// procedure
procedure TCustomIniFile_WriteInt64(AObj: TCustomIniFile; const Section: PChar; const Ident: PChar; var Value: Int64); extdecl;
begin
  {$define handleExceptionID := 15813}
  handleExceptionBegin
  AObj.WriteInt64(Section, Ident, Value);
  handleExceptionEnd
end;

// procedure
procedure TCustomIniFile_WriteBool(AObj: TCustomIniFile; const Section: PChar; const Ident: PChar; Value: LongBool); extdecl;
begin
  {$define handleExceptionID := 15814}
  handleExceptionBegin
  AObj.WriteBool(Section, Ident, Value);
  handleExceptionEnd
end;

// procedure
procedure TCustomIniFile_WriteDate(AObj: TCustomIniFile; const Section: PChar; const Ident: PChar; var Value: Double); extdecl;
begin
  {$define handleExceptionID := 15815}
  handleExceptionBegin
  AObj.WriteDate(Section, Ident, Value);
  handleExceptionEnd
end;

// procedure
procedure TCustomIniFile_WriteDateTime(AObj: TCustomIniFile; const Section: PChar; const Ident: PChar; var Value: Double); extdecl;
begin
  {$define handleExceptionID := 15816}
  handleExceptionBegin
  AObj.WriteDateTime(Section, Ident, Value);
  handleExceptionEnd
end;

// procedure
procedure TCustomIniFile_WriteFloat(AObj: TCustomIniFile; const Section: PChar; const Ident: PChar; var Value: Double); extdecl;
begin
  {$define handleExceptionID := 15817}
  handleExceptionBegin
  AObj.WriteFloat(Section, Ident, Value);
  handleExceptionEnd
end;

// procedure
procedure TCustomIniFile_WriteTime(AObj: TCustomIniFile; const Section: PChar; const Ident: PChar; var Value: Double); extdecl;
begin
  {$define handleExceptionID := 15818}
  handleExceptionBegin
  AObj.WriteTime(Section, Ident, Value);
  handleExceptionEnd
end;

// procedure
procedure TCustomIniFile_WriteBinaryStream(AObj: TCustomIniFile; const Section: PChar; const Name: PChar; Value: TStream); extdecl;
begin
  {$define handleExceptionID := 15819}
  handleExceptionBegin
  AObj.WriteBinaryStream(Section, Name, Value);
  handleExceptionEnd
end;

// procedure
procedure TCustomIniFile_ReadSection(AObj: TCustomIniFile; const Section: PChar; Strings: TStrings); extdecl;
begin
  {$define handleExceptionID := 15820}
  handleExceptionBegin
  AObj.ReadSection(Section, Strings);
  handleExceptionEnd
end;

// procedure
procedure TCustomIniFile_ReadSections(AObj: TCustomIniFile; Strings: TStrings); extdecl;
begin
  {$define handleExceptionID := 15821}
  handleExceptionBegin
  AObj.ReadSections(Strings);
  handleExceptionEnd
end;

// procedure
procedure TCustomIniFile_ReadSectionValuesWithStrStringsSVOptions(AObj: TCustomIniFile; const Section: PChar; Strings: TStrings; Options: TSectionValuesOptions); extdecl;
begin
  {$define handleExceptionID := 15822}
  handleExceptionBegin
  AObj.ReadSectionValues(Section, Strings, Options);
  handleExceptionEnd
end;

// procedure
procedure TCustomIniFile_ReadSectionValuesWithStrStrings(AObj: TCustomIniFile; const Section: PChar; Strings: TStrings); extdecl;
begin
  {$define handleExceptionID := 15823}
  handleExceptionBegin
  AObj.ReadSectionValues(Section, Strings);
  handleExceptionEnd
end;

// procedure
procedure TCustomIniFile_EraseSection(AObj: TCustomIniFile; const Section: PChar); extdecl;
begin
  {$define handleExceptionID := 15824}
  handleExceptionBegin
  AObj.EraseSection(Section);
  handleExceptionEnd
end;

// procedure
procedure TCustomIniFile_DeleteKey(AObj: TCustomIniFile; const Section: PChar; const Ident: PChar); extdecl;
begin
  {$define handleExceptionID := 15825}
  handleExceptionBegin
  AObj.DeleteKey(Section, Ident);
  handleExceptionEnd
end;

// procedure
procedure TCustomIniFile_UpdateFile(AObj: TCustomIniFile); extdecl;
begin
  {$define handleExceptionID := 15826}
  handleExceptionBegin
  AObj.UpdateFile();
  handleExceptionEnd
end;

// property
procedure TCustomIniFile_FileName(AObj: TCustomIniFile; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 15827}
  handleExceptionBegin
  StringBufferCreate(AObj.FileName, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TCustomIniFile_Options(ASet: LongBool; AObj: TCustomIniFile; AValue: TIniFileOptions): TIniFileOptions; extdecl;
begin
  {$define handleExceptionID := 15828}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Options := AValue
  end else
    Result := AObj.Options;
  handleExceptionEnd
end;

// property
function TCustomIniFile_BoolTrueStrings(ASet: LongBool; AObj: TCustomIniFile; AValue: TStringArrayWrap): TStringArrayWrap; extdecl;
begin
  {$define handleExceptionID := 15829}
  handleExceptionBegin
  if ASet then
  begin
    AObj.BoolTrueStrings := AValue.StringArrayData()^
  end else
    Result := TStringArrayWrap.Create(AObj.BoolTrueStrings);
  handleExceptionEnd
end;

// property
function TCustomIniFile_BoolFalseStrings(ASet: LongBool; AObj: TCustomIniFile; AValue: TStringArrayWrap): TStringArrayWrap; extdecl;
begin
  {$define handleExceptionID := 15830}
  handleExceptionBegin
  if ASet then
  begin
    AObj.BoolFalseStrings := AValue.StringArrayData()^
  end else
    Result := TStringArrayWrap.Create(AObj.BoolFalseStrings);
  handleExceptionEnd
end;

// property
function TCustomIniFile_OwnsEncoding(AObj: TCustomIniFile): LongBool; extdecl;
begin
  {$define handleExceptionID := 15831}
  handleExceptionBegin
  Result := AObj.OwnsEncoding;
  handleExceptionEnd
end;

exports
  TCustomIniFile_SectionExists,
  TCustomIniFile_ReadString,
  TCustomIniFile_ReadInteger,
  TCustomIniFile_ReadInt64,
  TCustomIniFile_ReadBool,
  TCustomIniFile_ReadDate,
  TCustomIniFile_ReadDateTime,
  TCustomIniFile_ReadFloat,
  TCustomIniFile_ReadTime,
  TCustomIniFile_ReadBinaryStream,
  TCustomIniFile_ValueExists,
  TCustomIniFile_WriteString,
  TCustomIniFile_WriteInteger,
  TCustomIniFile_WriteInt64,
  TCustomIniFile_WriteBool,
  TCustomIniFile_WriteDate,
  TCustomIniFile_WriteDateTime,
  TCustomIniFile_WriteFloat,
  TCustomIniFile_WriteTime,
  TCustomIniFile_WriteBinaryStream,
  TCustomIniFile_ReadSection,
  TCustomIniFile_ReadSections,
  TCustomIniFile_ReadSectionValuesWithStrStringsSVOptions,
  TCustomIniFile_ReadSectionValuesWithStrStrings,
  TCustomIniFile_EraseSection,
  TCustomIniFile_DeleteKey,
  TCustomIniFile_UpdateFile,
  TCustomIniFile_FileName,
  TCustomIniFile_Options,
  TCustomIniFile_BoolTrueStrings,
  TCustomIniFile_BoolFalseStrings,
  TCustomIniFile_OwnsEncoding;