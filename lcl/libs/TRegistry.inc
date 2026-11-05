// constructor
function TRegistry_Create(): TRegistry; extdecl;
begin
  {$define handleExceptionID := 16000}
  handleExceptionBegin
  Result := TRegistry.Create();
  handleExceptionEnd
end;

// constructor
function TRegistry_CreateWithLongword(aaccess: longword): TRegistry; extdecl;
begin
  {$define handleExceptionID := 16001}
  handleExceptionBegin
  Result := TRegistry.Create(aaccess);
  handleExceptionEnd
end;

// function
function TRegistry_CreateKey(AObj: TRegistry; const Key: PChar): LongBool; extdecl;
begin
  {$define handleExceptionID := 16002}
  handleExceptionBegin
  Result := AObj.CreateKey(PCharToUStr(Key));
  handleExceptionEnd
end;

// function
function TRegistry_DeleteKey(AObj: TRegistry; const Key: PChar): LongBool; extdecl;
begin
  {$define handleExceptionID := 16003}
  handleExceptionBegin
  Result := AObj.DeleteKey(PCharToUStr(Key));
  handleExceptionEnd
end;

// function
function TRegistry_DeleteValue(AObj: TRegistry; const Name: PChar): LongBool; extdecl;
begin
  {$define handleExceptionID := 16004}
  handleExceptionBegin
  Result := AObj.DeleteValue(PCharToUStr(Name));
  handleExceptionEnd
end;

// function
function TRegistry_GetDataInfo(AObj: TRegistry; const ValueName: PChar; var Value: TRegDataInfoPtr): LongBool; extdecl;
var
  OutValue: TRegDataInfo;
begin
  {$define handleExceptionID := 16005}
  handleExceptionBegin
  Result := AObj.GetDataInfo(PCharToUStr(ValueName), OutValue);
  Value := TRegDataInfoToGo(OutValue);
  handleExceptionEnd
end;

// function
function TRegistry_GetDataSize(AObj: TRegistry; const ValueName: PChar): Integer; extdecl;
begin
  {$define handleExceptionID := 16006}
  handleExceptionBegin
  Result := AObj.GetDataSize(PCharToUStr(ValueName));
  handleExceptionEnd
end;

// function
function TRegistry_GetDataType(AObj: TRegistry; const ValueName: PChar): TRegDataType; extdecl;
begin
  {$define handleExceptionID := 16007}
  handleExceptionBegin
  Result := AObj.GetDataType(PCharToUStr(ValueName));
  handleExceptionEnd
end;

// function
function TRegistry_GetKeyInfo(AObj: TRegistry; var Value: TRegKeyInfoPtr): LongBool; extdecl;
var
  OutValue: TRegKeyInfo;
begin
  {$define handleExceptionID := 16008}
  handleExceptionBegin
  Result := AObj.GetKeyInfo(OutValue);
  Value := TRegKeyInfoToGo(OutValue);
  handleExceptionEnd
end;

// function
function TRegistry_HasSubKeys(AObj: TRegistry): LongBool; extdecl;
begin
  {$define handleExceptionID := 16009}
  handleExceptionBegin
  Result := AObj.HasSubKeys();
  handleExceptionEnd
end;

// function
function TRegistry_KeyExists(AObj: TRegistry; const Key: PChar): LongBool; extdecl;
begin
  {$define handleExceptionID := 16010}
  handleExceptionBegin
  Result := AObj.KeyExists(PCharToUStr(Key));
  handleExceptionEnd
end;

// function
function TRegistry_LoadKey(AObj: TRegistry; const Key: PChar; const FileName: PChar): LongBool; extdecl;
begin
  {$define handleExceptionID := 16011}
  handleExceptionBegin
  Result := AObj.LoadKey(PCharToUStr(Key), PCharToUStr(FileName));
  handleExceptionEnd
end;

// function
function TRegistry_OpenKey(AObj: TRegistry; const Key: PChar; CanCreate: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 16012}
  handleExceptionBegin
  Result := AObj.OpenKey(PCharToUStr(Key), CanCreate);
  handleExceptionEnd
end;

// function
function TRegistry_OpenKeyReadOnly(AObj: TRegistry; const Key: PChar): LongBool; extdecl;
begin
  {$define handleExceptionID := 16013}
  handleExceptionBegin
  Result := AObj.OpenKeyReadOnly(PCharToUStr(Key));
  handleExceptionEnd
end;

// function
function TRegistry_ReadCurrency(AObj: TRegistry; const Name: PChar): Currency; extdecl;
begin
  {$define handleExceptionID := 16014}
  handleExceptionBegin
  Result := AObj.ReadCurrency(PCharToUStr(Name));
  handleExceptionEnd
end;

// function
function TRegistry_ReadBinaryData(AObj: TRegistry; const Name: PChar; var Buffer: Pointer; BufSize: Integer): Integer; extdecl;
var
  OutBuffer: PPointer;
begin
  {$define handleExceptionID := 16015}
  handleExceptionBegin
  OutBuffer := Buffer;
  Result := AObj.ReadBinaryData(PCharToUStr(Name), OutBuffer^, BufSize);
  Buffer := OutBuffer;
  handleExceptionEnd
end;

// function
function TRegistry_ReadBool(AObj: TRegistry; const Name: PChar): LongBool; extdecl;
begin
  {$define handleExceptionID := 16016}
  handleExceptionBegin
  Result := AObj.ReadBool(PCharToUStr(Name));
  handleExceptionEnd
end;

// function
procedure TRegistry_ReadDate(AObj: TRegistry; const Name: PChar; var Result: Double); extdecl;
begin
  {$define handleExceptionID := 16017}
  handleExceptionBegin
  Result := AObj.ReadDate(PCharToUStr(Name));
  handleExceptionEnd
end;

// function
procedure TRegistry_ReadDateTime(AObj: TRegistry; const Name: PChar; var Result: Double); extdecl;
begin
  {$define handleExceptionID := 16018}
  handleExceptionBegin
  Result := AObj.ReadDateTime(PCharToUStr(Name));
  handleExceptionEnd
end;

// function
procedure TRegistry_ReadFloat(AObj: TRegistry; const Name: PChar; var Result: Double); extdecl;
begin
  {$define handleExceptionID := 16019}
  handleExceptionBegin
  Result := AObj.ReadFloat(PCharToUStr(Name));
  handleExceptionEnd
end;

// function
function TRegistry_ReadInteger(AObj: TRegistry; const Name: PChar): Integer; extdecl;
begin
  {$define handleExceptionID := 16020}
  handleExceptionBegin
  Result := AObj.ReadInteger(PCharToUStr(Name));
  handleExceptionEnd
end;

// function
procedure TRegistry_ReadInt64(AObj: TRegistry; const Name: PChar; var Result: Int64); extdecl;
begin
  {$define handleExceptionID := 16021}
  handleExceptionBegin
  Result := AObj.ReadInt64(PCharToUStr(Name));
  handleExceptionEnd
end;

// function
procedure TRegistry_ReadString(AObj: TRegistry; const Name: PChar;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 16022}
  handleExceptionBegin
  StringBufferCreate(string(AObj.ReadString(PCharToUStr(Name))), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
function TRegistry_ReadStringArray(AObj: TRegistry; const Name: PChar): TStringArrayWrap; extdecl;
begin
  {$define handleExceptionID := 16023}
  handleExceptionBegin
  Result := TStringArrayWrap.Create(AObj.ReadStringArray(Name));
  handleExceptionEnd
end;

// function
procedure TRegistry_ReadTime(AObj: TRegistry; const Name: PChar; var Result: Double); extdecl;
begin
  {$define handleExceptionID := 16024}
  handleExceptionBegin
  Result := AObj.ReadTime(PCharToUStr(Name));
  handleExceptionEnd
end;

// function
function TRegistry_RegistryConnect(AObj: TRegistry; const UNCName: PChar): LongBool; extdecl;
begin
  {$define handleExceptionID := 16025}
  handleExceptionBegin
  Result := AObj.RegistryConnect(PCharToUStr(UNCName));
  handleExceptionEnd
end;

// function
function TRegistry_ReplaceKey(AObj: TRegistry; const Key: PChar; const FileName: PChar; const BackUpFileName: PChar): LongBool; extdecl;
begin
  {$define handleExceptionID := 16026}
  handleExceptionBegin
  Result := AObj.ReplaceKey(PCharToUStr(Key), PCharToUStr(FileName), PCharToUStr(BackUpFileName));
  handleExceptionEnd
end;

// function
function TRegistry_RestoreKey(AObj: TRegistry; const Key: PChar; const FileName: PChar): LongBool; extdecl;
begin
  {$define handleExceptionID := 16027}
  handleExceptionBegin
  Result := AObj.RestoreKey(PCharToUStr(Key), PCharToUStr(FileName));
  handleExceptionEnd
end;

// function
function TRegistry_SaveKey(AObj: TRegistry; const Key: PChar; const FileName: PChar): LongBool; extdecl;
begin
  {$define handleExceptionID := 16028}
  handleExceptionBegin
  Result := AObj.SaveKey(PCharToUStr(Key), PCharToUStr(FileName));
  handleExceptionEnd
end;

// function
function TRegistry_UnLoadKey(AObj: TRegistry; const Key: PChar): LongBool; extdecl;
begin
  {$define handleExceptionID := 16029}
  handleExceptionBegin
  Result := AObj.UnLoadKey(PCharToUStr(Key));
  handleExceptionEnd
end;

// function
function TRegistry_ValueExists(AObj: TRegistry; const Name: PChar): LongBool; extdecl;
begin
  {$define handleExceptionID := 16030}
  handleExceptionBegin
  Result := AObj.ValueExists(PCharToUStr(Name));
  handleExceptionEnd
end;

// procedure
procedure TRegistry_ReadStringListWithUStringStringsBool(AObj: TRegistry; const Name: PChar; AList: TStrings; ForceUtf8: LongBool); extdecl;
begin
  {$define handleExceptionID := 16031}
  handleExceptionBegin
  AObj.ReadStringList(PCharToUStr(Name), AList, ForceUtf8);
  handleExceptionEnd
end;

// procedure
procedure TRegistry_ReadStringListWithStrStrings(AObj: TRegistry; const Name: PChar; AList: TStrings); extdecl;
begin
  {$define handleExceptionID := 16032}
  handleExceptionBegin
  AObj.ReadStringList(Name, AList);
  handleExceptionEnd
end;

// procedure
procedure TRegistry_CloseKey(AObj: TRegistry); extdecl;
begin
  {$define handleExceptionID := 16033}
  handleExceptionBegin
  AObj.CloseKey();
  handleExceptionEnd
end;

// procedure
procedure TRegistry_CloseKeyWithHKEY(AObj: TRegistry; key: HKEY); extdecl;
begin
  {$define handleExceptionID := 16034}
  handleExceptionBegin
  AObj.CloseKey(key);
  handleExceptionEnd
end;

// procedure
procedure TRegistry_GetKeyNames(AObj: TRegistry; Strings: TStrings); extdecl;
begin
  {$define handleExceptionID := 16035}
  handleExceptionBegin
  AObj.GetKeyNames(Strings);
  handleExceptionEnd
end;

// procedure
procedure TRegistry_GetValueNames(AObj: TRegistry; Strings: TStrings); extdecl;
begin
  {$define handleExceptionID := 16036}
  handleExceptionBegin
  AObj.GetValueNames(Strings);
  handleExceptionEnd
end;

// procedure
procedure TRegistry_MoveKey(AObj: TRegistry; const OldName: PChar; const NewName: PChar; Delete: LongBool); extdecl;
begin
  {$define handleExceptionID := 16037}
  handleExceptionBegin
  AObj.MoveKey(PCharToUStr(OldName), PCharToUStr(NewName), Delete);
  handleExceptionEnd
end;

// procedure
procedure TRegistry_RenameValue(AObj: TRegistry; const OldName: PChar; const NewName: PChar); extdecl;
begin
  {$define handleExceptionID := 16038}
  handleExceptionBegin
  AObj.RenameValue(PCharToUStr(OldName), PCharToUStr(NewName));
  handleExceptionEnd
end;

// procedure
procedure TRegistry_WriteCurrency(AObj: TRegistry; const Name: PChar; Value: Currency); extdecl;
begin
  {$define handleExceptionID := 16039}
  handleExceptionBegin
  AObj.WriteCurrency(PCharToUStr(Name), Value);
  handleExceptionEnd
end;

// procedure
procedure TRegistry_WriteBinaryData(AObj: TRegistry; const Name: PChar; const Buffer: Pointer; BufSize: Integer); extdecl;
begin
  {$define handleExceptionID := 16040}
  handleExceptionBegin
  AObj.WriteBinaryData(PCharToUStr(Name), Buffer^, BufSize);
  handleExceptionEnd
end;

// procedure
procedure TRegistry_WriteBool(AObj: TRegistry; const Name: PChar; Value: LongBool); extdecl;
begin
  {$define handleExceptionID := 16041}
  handleExceptionBegin
  AObj.WriteBool(PCharToUStr(Name), Value);
  handleExceptionEnd
end;

// procedure
procedure TRegistry_WriteDate(AObj: TRegistry; const Name: PChar; var Value: Double); extdecl;
begin
  {$define handleExceptionID := 16042}
  handleExceptionBegin
  AObj.WriteDate(PCharToUStr(Name), Value);
  handleExceptionEnd
end;

// procedure
procedure TRegistry_WriteDateTime(AObj: TRegistry; const Name: PChar; var Value: Double); extdecl;
begin
  {$define handleExceptionID := 16043}
  handleExceptionBegin
  AObj.WriteDateTime(PCharToUStr(Name), Value);
  handleExceptionEnd
end;

// procedure
procedure TRegistry_WriteFloat(AObj: TRegistry; const Name: PChar; var Value: Double); extdecl;
begin
  {$define handleExceptionID := 16044}
  handleExceptionBegin
  AObj.WriteFloat(PCharToUStr(Name), Value);
  handleExceptionEnd
end;

// procedure
procedure TRegistry_WriteInteger(AObj: TRegistry; const Name: PChar; Value: Integer); extdecl;
begin
  {$define handleExceptionID := 16045}
  handleExceptionBegin
  AObj.WriteInteger(PCharToUStr(Name), Value);
  handleExceptionEnd
end;

// procedure
procedure TRegistry_WriteInt64(AObj: TRegistry; const Name: PChar; var Value: Int64); extdecl;
begin
  {$define handleExceptionID := 16046}
  handleExceptionBegin
  AObj.WriteInt64(PCharToUStr(Name), Value);
  handleExceptionEnd
end;

// procedure
procedure TRegistry_WriteString(AObj: TRegistry; const Name: PChar; const Value: PChar); extdecl;
begin
  {$define handleExceptionID := 16047}
  handleExceptionBegin
  AObj.WriteString(PCharToUStr(Name), PCharToUStr(Value));
  handleExceptionEnd
end;

// procedure
procedure TRegistry_WriteExpandString(AObj: TRegistry; const Name: PChar; const Value: PChar); extdecl;
begin
  {$define handleExceptionID := 16048}
  handleExceptionBegin
  AObj.WriteExpandString(PCharToUStr(Name), PCharToUStr(Value));
  handleExceptionEnd
end;

// procedure
procedure TRegistry_WriteStringList(AObj: TRegistry; const Name: PChar; List: TStrings; IsUtf8: LongBool); extdecl;
begin
  {$define handleExceptionID := 16049}
  handleExceptionBegin
  AObj.WriteStringList(PCharToUStr(Name), List, IsUtf8);
  handleExceptionEnd
end;

// procedure
procedure TRegistry_WriteStringArray(AObj: TRegistry; const Name: PChar; const Arr: TStringArrayWrap); extdecl;
begin
  {$define handleExceptionID := 16050}
  handleExceptionBegin
  AObj.WriteStringArray(Name, Arr.StringArrayData()^);
  handleExceptionEnd
end;

// procedure
procedure TRegistry_WriteTime(AObj: TRegistry; const Name: PChar; var Value: Double); extdecl;
begin
  {$define handleExceptionID := 16051}
  handleExceptionBegin
  AObj.WriteTime(PCharToUStr(Name), Value);
  handleExceptionEnd
end;

// property
function TRegistry_Access(ASet: LongBool; AObj: TRegistry; AValue: LongWord): LongWord; extdecl;
begin
  {$define handleExceptionID := 16052}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Access := AValue
  end else
    Result := AObj.Access;
  handleExceptionEnd
end;

// property
function TRegistry_CurrentKey(AObj: TRegistry): HKEY; extdecl;
begin
  {$define handleExceptionID := 16053}
  handleExceptionBegin
  Result := AObj.CurrentKey;
  handleExceptionEnd
end;

// property
procedure TRegistry_CurrentPath(AObj: TRegistry; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 16054}
  handleExceptionBegin
  StringBufferCreate(AObj.CurrentPath, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TRegistry_LazyWrite(ASet: LongBool; AObj: TRegistry; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 16055}
  handleExceptionBegin
  if ASet then
  begin
    AObj.LazyWrite := AValue
  end else
    Result := AObj.LazyWrite;
  handleExceptionEnd
end;

// property
function TRegistry_RootKey(ASet: LongBool; AObj: TRegistry; AValue: HKEY): HKEY; extdecl;
begin
  {$define handleExceptionID := 16056}
  handleExceptionBegin
  if ASet then
  begin
    AObj.RootKey := AValue
  end else
    Result := AObj.RootKey;
  handleExceptionEnd
end;

// property
function TRegistry_StringSizeIncludesNull(AObj: TRegistry): LongBool; extdecl;
begin
  {$define handleExceptionID := 16057}
  handleExceptionBegin
  Result := AObj.StringSizeIncludesNull;
  handleExceptionEnd
end;

// property
function TRegistry_LastError(AObj: TRegistry): Integer; extdecl;
begin
  {$define handleExceptionID := 16058}
  handleExceptionBegin
  Result := AObj.LastError;
  handleExceptionEnd
end;

// property
procedure TRegistry_LastErrorMsg(AObj: TRegistry; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 16059}
  handleExceptionBegin
  StringBufferCreate(AObj.LastErrorMsg, AStrData, AStrSize);
  handleExceptionEnd
end;

exports
  TRegistry_Create,
  TRegistry_CreateWithLongword,
  TRegistry_CreateKey,
  TRegistry_DeleteKey,
  TRegistry_DeleteValue,
  TRegistry_GetDataInfo,
  TRegistry_GetDataSize,
  TRegistry_GetDataType,
  TRegistry_GetKeyInfo,
  TRegistry_HasSubKeys,
  TRegistry_KeyExists,
  TRegistry_LoadKey,
  TRegistry_OpenKey,
  TRegistry_OpenKeyReadOnly,
  TRegistry_ReadCurrency,
  TRegistry_ReadBinaryData,
  TRegistry_ReadBool,
  TRegistry_ReadDate,
  TRegistry_ReadDateTime,
  TRegistry_ReadFloat,
  TRegistry_ReadInteger,
  TRegistry_ReadInt64,
  TRegistry_ReadString,
  TRegistry_ReadStringArray,
  TRegistry_ReadTime,
  TRegistry_RegistryConnect,
  TRegistry_ReplaceKey,
  TRegistry_RestoreKey,
  TRegistry_SaveKey,
  TRegistry_UnLoadKey,
  TRegistry_ValueExists,
  TRegistry_ReadStringListWithUStringStringsBool,
  TRegistry_ReadStringListWithStrStrings,
  TRegistry_CloseKey,
  TRegistry_CloseKeyWithHKEY,
  TRegistry_GetKeyNames,
  TRegistry_GetValueNames,
  TRegistry_MoveKey,
  TRegistry_RenameValue,
  TRegistry_WriteCurrency,
  TRegistry_WriteBinaryData,
  TRegistry_WriteBool,
  TRegistry_WriteDate,
  TRegistry_WriteDateTime,
  TRegistry_WriteFloat,
  TRegistry_WriteInteger,
  TRegistry_WriteInt64,
  TRegistry_WriteString,
  TRegistry_WriteExpandString,
  TRegistry_WriteStringList,
  TRegistry_WriteStringArray,
  TRegistry_WriteTime,
  TRegistry_Access,
  TRegistry_CurrentKey,
  TRegistry_CurrentPath,
  TRegistry_LazyWrite,
  TRegistry_RootKey,
  TRegistry_StringSizeIncludesNull,
  TRegistry_LastError,
  TRegistry_LastErrorMsg;