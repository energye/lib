// constructor manually create
function TCEFJson_Create(): TCEFJson; extdecl;
begin
  {$define handleExceptionID := 9800}
  handleExceptionBegin
  Result := TCEFJson.Create();
  handleExceptionEnd
end;

// function static
function TCEFJson_ReadValue(const aDictionary: ICefDictionaryValue; const aKey: PChar; var aValue: ICefValue): LongBool; extdecl;
var
  OutaValue: ICefValue = nil;
begin
  Result := TCEFJson.ReadValue(aDictionary, aKey, OutaValue);
  aValue := OutaValue;
end;

// function static
function TCEFJson_ReadBoolean(const aDictionary: ICefDictionaryValue; const aKey: PChar; var aValue: LongBool): LongBool; extdecl;
var
  OutaValue: boolean;
begin
  OutaValue := aValue;
  Result := TCEFJson.ReadBoolean(aDictionary, aKey, OutaValue);
  aValue := OutaValue;
end;

// function static
function TCEFJson_ReadInteger(const aDictionary: ICefDictionaryValue; const aKey: PChar; var aValue: integer): LongBool; extdecl;
var
  OutaValue: integer;
begin
  OutaValue := aValue;
  Result := TCEFJson.ReadInteger(aDictionary, aKey, OutaValue);
  aValue := OutaValue;
end;

// function static
function TCEFJson_ReadDouble(const aDictionary: ICefDictionaryValue; const aKey: PChar; var aValue: double): LongBool; extdecl;
var
  OutaValue: double;
begin
  OutaValue := aValue;
  Result := TCEFJson.ReadDouble(aDictionary, aKey, OutaValue);
  aValue := OutaValue;
end;

// function static
function TCEFJson_ReadString(const aDictionary: ICefDictionaryValue; const aKey: PChar; var aValue: PChar): LongBool; extdecl;
var
  OutaValue: ustring;
begin
  OutaValue := aValue;
  Result := TCEFJson.ReadString(aDictionary, aKey, OutaValue);
  aValue := ToPChar(OutaValue);
end;

// function static
function TCEFJson_ReadBinary(const aDictionary: ICefDictionaryValue; const aKey: PChar; var aValue: ICefBinaryValue): LongBool; extdecl;
var
  OutaValue: ICefBinaryValue = nil;
begin
  Result := TCEFJson.ReadBinary(aDictionary, aKey, OutaValue);
  aValue := OutaValue;
end;

// function static
function TCEFJson_ReadDictionary(const aDictionary: ICefDictionaryValue; const aKey: PChar; var aValue: ICefDictionaryValue): LongBool; extdecl;
var
  OutaValue: ICefDictionaryValue = nil;
begin
  Result := TCEFJson.ReadDictionary(aDictionary, aKey, OutaValue);
  aValue := OutaValue;
end;

// function static
function TCEFJson_ReadList(const aDictionary: ICefDictionaryValue; const aKey: PChar; var aValue: ICefListValue): LongBool; extdecl;
var
  OutaValue: ICefListValue = nil;
begin
  Result := TCEFJson.ReadList(aDictionary, aKey, OutaValue);
  aValue := OutaValue;
end;

// function static
procedure TCEFJson_ParseWithStrJsonParserOptions(const jsonString: PChar; options: TCefJsonParserOptions; var Result: ICefValue); extdecl;
begin
  Result := TCEFJson.Parse(jsonString, options);
end;

// function static
procedure TCEFJson_ParseWithPointerNUIntJPOptions(const json: Pointer; json_size: NativeUInt; options: TCefJsonParserOptions; var Result: ICefValue); extdecl;
begin
  Result := TCEFJson.Parse(json, json_size, options);
end;

// function static
procedure TCEFJson_ParseAndReturnError(const jsonString: PChar; options: TCefJsonParserOptions; var errorMsgOut: PChar; var Result: ICefValue); extdecl;
var
  OuterrorMsgOut: ustring;
begin
  Result := TCEFJson.ParseAndReturnError(jsonString, options, OuterrorMsgOut);
  errorMsgOut := ToPChar(OuterrorMsgOut);
end;

// function static
function TCEFJson_WriteWithValueJsonWriterOptions(const node: ICefValue; options: TCefJsonWriterOptions): PChar; extdecl;
begin
  Result := ToPChar(TCEFJson.Write(node, options));
end;

// function static
function TCEFJson_WriteWithDictionaryValueJsonWriterOptions(const node: ICefDictionaryValue; options: TCefJsonWriterOptions): PChar; extdecl;
begin
  Result := ToPChar(TCEFJson.Write(node, options));
end;

// function static
function TCEFJson_WriteWithValueStringList(const node: ICefValue; var aRsltStrings: TStringList): LongBool; extdecl;
var
  OutaRsltStrings: TStringList;
begin
  OutaRsltStrings := aRsltStrings;
  Result := TCEFJson.Write(node, OutaRsltStrings);
  aRsltStrings := OutaRsltStrings;
end;

// function static
function TCEFJson_WriteWithDictionaryValueStringList(const node: ICefDictionaryValue; var aRsltStrings: TStringList): LongBool; extdecl;
var
  OutaRsltStrings: TStringList;
begin
  OutaRsltStrings := aRsltStrings;
  Result := TCEFJson.Write(node, OutaRsltStrings);
  aRsltStrings := OutaRsltStrings;
end;

// function static
function TCEFJson_SaveToFileWithValueStr(const node: ICefValue; const aFileName: PChar): LongBool; extdecl;
begin
  Result := TCEFJson.SaveToFile(node, aFileName);
end;

// function static
function TCEFJson_SaveToFileWithDictionaryValueStr(const node: ICefDictionaryValue; const aFileName: PChar): LongBool; extdecl;
begin
  Result := TCEFJson.SaveToFile(node, aFileName);
end;

// function static
function TCEFJson_LoadFromFile(const aFileName: PChar; var aRsltNode: ICefValue; options: TCefJsonParserOptions): LongBool; extdecl;
var
  OutaRsltNode: ICefValue = nil;
begin
  Result := TCEFJson.LoadFromFile(aFileName, OutaRsltNode, options);
  aRsltNode := OutaRsltNode;
end;

exports
  TCEFJson_Create,
  TCEFJson_ReadValue,
  TCEFJson_ReadBoolean,
  TCEFJson_ReadInteger,
  TCEFJson_ReadDouble,
  TCEFJson_ReadString,
  TCEFJson_ReadBinary,
  TCEFJson_ReadDictionary,
  TCEFJson_ReadList,
  TCEFJson_ParseWithStrJsonParserOptions,
  TCEFJson_ParseWithPointerNUIntJPOptions,
  TCEFJson_ParseAndReturnError,
  TCEFJson_WriteWithValueJsonWriterOptions,
  TCEFJson_WriteWithDictionaryValueJsonWriterOptions,
  TCEFJson_WriteWithValueStringList,
  TCEFJson_WriteWithDictionaryValueStringList,
  TCEFJson_SaveToFileWithValueStr,
  TCEFJson_SaveToFileWithDictionaryValueStr,
  TCEFJson_LoadFromFile;