
//function
function CEFJson_ReadValue(const aDictionary: ICefDictionaryValue; const aKey: PChar; var aValue: ICefValue): LongBool; extdecl;
var
  RetaValue: ICefValue;
begin
  RetaValue := aValue;
  Result := TCEFJson.ReadValue(aDictionary, aKey, RetaValue);
  aValue := RetaValue;
end;

//function
function CEFJson_ReadBoolean(const aDictionary: ICefDictionaryValue; const aKey: PChar; var aValue: LongBool): LongBool; extdecl;
var
  RetaValue: boolean;
begin
  RetaValue := aValue;
  Result := TCEFJson.ReadBoolean(aDictionary, aKey, RetaValue);
  aValue := LongBool(RetaValue);
end;

//function
function CEFJson_ReadInteger(const aDictionary: ICefDictionaryValue; const aKey: PChar; var aValue: integer): LongBool; extdecl;
var
  RetaValue: integer;
begin
  RetaValue := aValue;
  Result := TCEFJson.ReadInteger(aDictionary, aKey, RetaValue);
  aValue := RetaValue;
end;

//function
function CEFJson_ReadDouble(const aDictionary: ICefDictionaryValue; const aKey: PChar; var aValue: double): LongBool; extdecl;
var
  RetaValue: double;
begin
  RetaValue := aValue;
  Result := TCEFJson.ReadDouble(aDictionary, aKey, RetaValue);
  aValue := RetaValue;
end;

//function
function CEFJson_ReadString(const aDictionary: ICefDictionaryValue; const aKey: PChar; var aValue: PChar): LongBool; extdecl;
var
  RetaValue: UnicodeString;
begin
  RetaValue := aValue;
  Result := TCEFJson.ReadString(aDictionary, aKey, RetaValue);
  aValue := ToPChar(RetaValue);
end;

//function
function CEFJson_ReadBinary(const aDictionary: ICefDictionaryValue; const aKey: PChar; var aValue: ICefBinaryValue): LongBool; extdecl;
var
  RetaValue: ICefBinaryValue;
begin
  RetaValue := aValue;
  Result := TCEFJson.ReadBinary(aDictionary, aKey, RetaValue);
  aValue := RetaValue;
end;

//function
function CEFJson_ReadDictionary(const aDictionary: ICefDictionaryValue; const aKey: PChar; var aValue: ICefDictionaryValue): LongBool; extdecl;
var
  RetaValue: ICefDictionaryValue;
begin
  RetaValue := aValue;
  Result := TCEFJson.ReadDictionary(aDictionary, aKey, RetaValue);
  aValue := RetaValue;
end;

//function
function CEFJson_ReadList(const aDictionary: ICefDictionaryValue; const aKey: PChar; var aValue: ICefListValue): LongBool; extdecl;
var
  RetaValue: ICefListValue;
begin
  RetaValue := aValue;
  Result := TCEFJson.ReadList(aDictionary, aKey, RetaValue);
  aValue := RetaValue;
end;

//function
procedure CEFJson_Parse(const jsonString: PChar; options: TCefJsonParserOptions; var Result: ICefValue); extdecl;
begin
  Result := TCEFJson.Parse(jsonString, options);
end;

//function
procedure CEFJson_Parse1(const json: Pointer; jsonsize: NativeUInt; options: TCefJsonParserOptions; var Result: ICefValue); extdecl;
begin
  Result := TCEFJson.Parse(json, jsonsize, options);
end;

//function
procedure CEFJson_ParseAndReturnError(const jsonString: PChar; options: TCefJsonParserOptions; out outErrorMsgOut: PChar; var Result: ICefValue); extdecl;
var
  RetoutErrorMsgOut: UnicodeString;
begin
  RetoutErrorMsgOut := outErrorMsgOut;
  Result := TCEFJson.ParseAndReturnError(jsonString, options, RetoutErrorMsgOut);
  outErrorMsgOut := ToPChar(RetoutErrorMsgOut);
end;

//function
function CEFJson_Write(const node: ICefValue; options: TCefJsonWriterOptions): PChar; extdecl;
begin
  Result := ToPChar(TCEFJson.Write(node, options));
end;

//function
function CEFJson_Write1(const node: ICefDictionaryValue; options: TCefJsonWriterOptions): PChar; extdecl;
begin
  Result := ToPChar(TCEFJson.Write(node, options));
end;

//function
function CEFJson_Write2(const node: ICefValue; var aRsltStrings: TStringList): LongBool; extdecl;
var
  RetaRsltStrings: TStringList;
begin
  RetaRsltStrings := aRsltStrings;
  Result := TCEFJson.Write(node, RetaRsltStrings);
  aRsltStrings := RetaRsltStrings;
end;

//function
function CEFJson_Write3(const node: ICefDictionaryValue; var aRsltStrings: TStringList): LongBool; extdecl;
var
  RetaRsltStrings: TStringList;
begin
  RetaRsltStrings := aRsltStrings;
  Result := TCEFJson.Write(node, RetaRsltStrings);
  aRsltStrings := RetaRsltStrings;
end;

//function
function CEFJson_SaveToFile(const node: ICefValue; const aFileName: PChar): LongBool; extdecl;
begin
  Result := TCEFJson.SaveToFile(node, aFileName);
end;

//function
function CEFJson_SaveToFile1(const node: ICefDictionaryValue; const aFileName: PChar): LongBool; extdecl;
begin
  Result := TCEFJson.SaveToFile(node, aFileName);
end;

//function
function CEFJson_LoadFromFile(const aFileName: PChar; var aRsltNode: ICefValue; options: TCefJsonParserOptions): LongBool; extdecl;
var
  RetaRsltNode: ICefValue;
begin
  RetaRsltNode := aRsltNode;
  Result := TCEFJson.LoadFromFile(aFileName, RetaRsltNode, options);
  aRsltNode := RetaRsltNode;
end;


exports
  CEFJson_ReadValue,
  CEFJson_ReadBoolean,
  CEFJson_ReadInteger,
  CEFJson_ReadDouble,
  CEFJson_ReadString,
  CEFJson_ReadBinary,
  CEFJson_ReadDictionary,
  CEFJson_ReadList,
  CEFJson_Parse,
  CEFJson_Parse1,
  CEFJson_ParseAndReturnError,
  CEFJson_Write,
  CEFJson_Write1,
  CEFJson_Write2,
  CEFJson_Write3,
  CEFJson_SaveToFile,
  CEFJson_SaveToFile1,
  CEFJson_LoadFromFile;