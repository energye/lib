
//constructor
function Registry_Create(): TRegistry; extdecl;
begin
  handleExceptionBegin
  Result := TRegistry.Create();
  handleExceptionEnd
end;

//constructor
function Registry_Create1(aaccess: longword): TRegistry; extdecl;
begin
  handleExceptionBegin
  Result := TRegistry.Create(aaccess);
  handleExceptionEnd
end;

//property
function Registry_Access(AIsSet: LongBool; AObj: TRegistry; AValue: LongWord): LongWord; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Access := AValue;
  end else
    Result := AObj.Access;
  handleExceptionEnd
end;

//property
function Registry_CurrentKey(AObj: TRegistry): HKEY; extdecl;
begin
  handleExceptionBegin
  Result := AObj.CurrentKey;
  handleExceptionEnd
end;

//property
function Registry_CurrentPath(AObj: TRegistry): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.CurrentPath);
  handleExceptionEnd
end;

//property
function Registry_LazyWrite(AIsSet: LongBool; AObj: TRegistry; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.LazyWrite := AValue;
  end else
    Result := AObj.LazyWrite;
  handleExceptionEnd
end;

//property
function Registry_RootKey(AIsSet: LongBool; AObj: TRegistry; AValue: HKEY): HKEY; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.RootKey := AValue;
  end else
    Result := AObj.RootKey;
  handleExceptionEnd
end;

//property
function Registry_StringSizeIncludesNull(AObj: TRegistry): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.StringSizeIncludesNull;
  handleExceptionEnd
end;

//property
function Registry_LastError(AObj: TRegistry): LongInt; extdecl;
begin
  handleExceptionBegin
  Result := AObj.LastError;
  handleExceptionEnd
end;

//property
function Registry_LastErrorMsg(AObj: TRegistry): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.LastErrorMsg);
  handleExceptionEnd
end;

//function
function Registry_CreateKey(AObj: TRegistry; const Key: PChar): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.CreateKey(Key);
  handleExceptionEnd
end;

//function
function Registry_DeleteKey(AObj: TRegistry; const Key: PChar): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.DeleteKey(Key);
  handleExceptionEnd
end;

//function
function Registry_DeleteValue(AObj: TRegistry; const Name: PChar): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.DeleteValue(Name);
  handleExceptionEnd
end;

//function
function Registry_GetDataInfo(AObj: TRegistry; const ValueName: PChar; out OutValue: TRegDataInfo): LongBool; extdecl;
var
  RetOutValue: TRegDataInfo;
begin
  handleExceptionBegin
  RetOutValue := OutValue;
  Result := AObj.GetDataInfo(ValueName, RetOutValue);
  OutValue := RetOutValue;
  handleExceptionEnd
end;

//function
function Registry_GetDataSize(AObj: TRegistry; const ValueName: PChar): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetDataSize(ValueName);
  handleExceptionEnd
end;

//function
function Registry_GetDataType(AObj: TRegistry; const ValueName: PChar): TRegDataType; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetDataType(ValueName);
  handleExceptionEnd
end;

//function
function Registry_GetKeyInfo(AObj: TRegistry; out OutValue: TRegKeyInfo): LongBool; extdecl;
var
  RetOutValue: TRegKeyInfo;
begin
  handleExceptionBegin
  RetOutValue := OutValue;
  Result := AObj.GetKeyInfo(RetOutValue);
  OutValue := RetOutValue;
  handleExceptionEnd
end;

//function
function Registry_HasSubKeys(AObj: TRegistry): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.HasSubKeys();
  handleExceptionEnd
end;

//function
function Registry_KeyExists(AObj: TRegistry; const Key: PChar): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.KeyExists(Key);
  handleExceptionEnd
end;

//function
function Registry_LoadKey(AObj: TRegistry; const Key, FileName: PChar): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.LoadKey(Key, FileName);
  handleExceptionEnd
end;

//function
function Registry_OpenKey(AObj: TRegistry; const Key: PChar; CanCreate: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.OpenKey(Key, CanCreate);
  handleExceptionEnd
end;

//function
function Registry_OpenKeyReadOnly(AObj: TRegistry; const Key: PChar): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.OpenKeyReadOnly(Key);
  handleExceptionEnd
end;

//function
function Registry_ReadCurrency(AObj: TRegistry; const Name: PChar): Currency; extdecl;
begin
  handleExceptionBegin
  Result := AObj.ReadCurrency(Name);
  handleExceptionEnd
end;

//function
function Registry_ReadBinaryData(AObj: TRegistry; const Name: PChar; var Buffer: Pointer; BufSize: Integer): Integer; extdecl;
var
  RetBuffer: Pointer;
begin
  handleExceptionBegin
  RetBuffer := Buffer;
  Result := AObj.ReadBinaryData(Name, RetBuffer, BufSize);
  Buffer := RetBuffer;
  handleExceptionEnd
end;

//function
function Registry_ReadBool(AObj: TRegistry; const Name: PChar): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.ReadBool(Name);
  handleExceptionEnd
end;

//function
function Registry_ReadDate(AObj: TRegistry; const Name: PChar): TDateTime; extdecl;
begin
  handleExceptionBegin
  Result := AObj.ReadDate(Name);
  handleExceptionEnd
end;

//function
function Registry_ReadDateTime(AObj: TRegistry; const Name: PChar): TDateTime; extdecl;
begin
  handleExceptionBegin
  Result := AObj.ReadDateTime(Name);
  handleExceptionEnd
end;

//function
procedure Registry_ReadFloat(AObj: TRegistry; const Name: PChar; var Result: Double); extdecl;
begin
  handleExceptionBegin
  Result := AObj.ReadFloat(Name);
  handleExceptionEnd
end;

//function
function Registry_ReadInteger(AObj: TRegistry; const Name: PChar): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.ReadInteger(Name);
  handleExceptionEnd
end;

//function
procedure Registry_ReadInt64(AObj: TRegistry; const Name: PChar; var Result: Int64); extdecl;
begin
  handleExceptionBegin
  Result := AObj.ReadInt64(Name);
  handleExceptionEnd
end;

//function
function Registry_ReadString(AObj: TRegistry; const Name: PChar): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.ReadString(Name));
  handleExceptionEnd
end;

//function
function Registry_ReadStringArray(AObj: TRegistry; const Name: PChar): TStringArray; extdecl;
begin
  handleExceptionBegin
  Result := AObj.ReadStringArray(Name);
  handleExceptionEnd
end;

//function
function Registry_ReadTime(AObj: TRegistry; const Name: PChar): TDateTime; extdecl;
begin
  handleExceptionBegin
  Result := AObj.ReadTime(Name);
  handleExceptionEnd
end;

//function
function Registry_RegistryConnect(AObj: TRegistry; const UNCName: PChar): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.RegistryConnect(UNCName);
  handleExceptionEnd
end;

//function
function Registry_ReplaceKey(AObj: TRegistry; const Key, FileName, BackUpFileName: PChar): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.ReplaceKey(Key, FileName, BackUpFileName);
  handleExceptionEnd
end;

//function
function Registry_RestoreKey(AObj: TRegistry; const Key, FileName: PChar): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.RestoreKey(Key, FileName);
  handleExceptionEnd
end;

//function
function Registry_SaveKey(AObj: TRegistry; const Key, FileName: PChar): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.SaveKey(Key, FileName);
  handleExceptionEnd
end;

//function
function Registry_UnLoadKey(AObj: TRegistry; const Key: PChar): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.UnLoadKey(Key);
  handleExceptionEnd
end;

//function
function Registry_ValueExists(AObj: TRegistry; const Name: PChar): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.ValueExists(Name);
  handleExceptionEnd
end;

//function
function Registry_GetKeyNames(AObj: TRegistry): Pointer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetKeyNames();
  handleExceptionEnd
end;

//function
function Registry_GetValueNames(AObj: TRegistry): Pointer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetValueNames();
  handleExceptionEnd
end;

//function
function Registry_Class(): TClass; extdecl;
begin
  Result := TRegistry;
end;

//procedure
procedure Registry_ReadStringList(AObj: TRegistry; const Name: PChar; AList: TStrings); extdecl;
begin
  handleExceptionBegin
  AObj.ReadStringList(Name, AList);
  handleExceptionEnd
end;

//procedure
procedure Registry_CloseKey(AObj: TRegistry); extdecl;
begin
  handleExceptionBegin
  AObj.CloseKey();
  handleExceptionEnd
end;

//procedure
procedure Registry_CloseKey1(AObj: TRegistry; key: HKEY); extdecl;
begin
  handleExceptionBegin
  AObj.CloseKey(key);
  handleExceptionEnd
end;

//procedure
procedure Registry_GetKeyNames1(AObj: TRegistry; Strings: TStrings); extdecl;
begin
  handleExceptionBegin
  AObj.GetKeyNames(Strings);
  handleExceptionEnd
end;

//procedure
procedure Registry_GetValueNames1(AObj: TRegistry; Strings: TStrings); extdecl;
begin
  handleExceptionBegin
  AObj.GetValueNames(Strings);
  handleExceptionEnd
end;

//procedure
procedure Registry_MoveKey(AObj: TRegistry; const OldName, NewName: PChar; Delete: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.MoveKey(OldName, NewName, Delete);
  handleExceptionEnd
end;

//procedure
procedure Registry_RenameValue(AObj: TRegistry; const OldName, NewName: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.RenameValue(OldName, NewName);
  handleExceptionEnd
end;

//procedure
procedure Registry_WriteCurrency(AObj: TRegistry; const Name: PChar; Value: Currency); extdecl;
begin
  handleExceptionBegin
  AObj.WriteCurrency(Name, Value);
  handleExceptionEnd
end;

//procedure
procedure Registry_WriteBinaryData(AObj: TRegistry; const Name: PChar; const Buffer: Pointer; BufSize: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.WriteBinaryData(Name, Buffer^, BufSize);
  handleExceptionEnd
end;

//procedure
procedure Registry_WriteBool(AObj: TRegistry; const Name: PChar; Value: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.WriteBool(Name, Value);
  handleExceptionEnd
end;

//procedure
procedure Registry_WriteDate(AObj: TRegistry; const Name: PChar; Value: TDateTime); extdecl;
begin
  handleExceptionBegin
  AObj.WriteDate(Name, Value);
  handleExceptionEnd
end;

//procedure
procedure Registry_WriteDateTime(AObj: TRegistry; const Name: PChar; Value: TDateTime); extdecl;
begin
  handleExceptionBegin
  AObj.WriteDateTime(Name, Value);
  handleExceptionEnd
end;

//procedure
procedure Registry_WriteFloat(AObj: TRegistry; const Name: PChar; var Value: Double); extdecl;
begin
  handleExceptionBegin
  AObj.WriteFloat(Name, Value);
  handleExceptionEnd
end;

//procedure
procedure Registry_WriteInteger(AObj: TRegistry; const Name: PChar; Value: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.WriteInteger(Name, Value);
  handleExceptionEnd
end;

//procedure
procedure Registry_WriteInt64(AObj: TRegistry; const Name: PChar; var Value: Int64); extdecl;
begin
  handleExceptionBegin
  AObj.WriteInt64(Name, Value);
  handleExceptionEnd
end;

//procedure
procedure Registry_WriteString(AObj: TRegistry; const Name, Value: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.WriteString(Name, Value);
  handleExceptionEnd
end;

//procedure
procedure Registry_WriteExpandString(AObj: TRegistry; const Name, Value: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.WriteExpandString(Name, Value);
  handleExceptionEnd
end;

//procedure
procedure Registry_WriteStringArray(AObj: TRegistry; const Name: PChar; const Arr: TStringArray); extdecl;
begin
  handleExceptionBegin
  AObj.WriteStringArray(Name, Arr);
  handleExceptionEnd
end;

//procedure
procedure Registry_WriteTime(AObj: TRegistry; const Name: PChar; Value: TDateTime); extdecl;
begin
  handleExceptionBegin
  AObj.WriteTime(Name, Value);
  handleExceptionEnd
end;


exports
  Registry_Create,
  Registry_Create1,
  Registry_Access,
  Registry_CurrentKey,
  Registry_CurrentPath,
  Registry_LazyWrite,
  Registry_RootKey,
  Registry_StringSizeIncludesNull,
  Registry_LastError,
  Registry_LastErrorMsg,
  Registry_CreateKey,
  Registry_DeleteKey,
  Registry_DeleteValue,
  Registry_GetDataInfo,
  Registry_GetDataSize,
  Registry_GetDataType,
  Registry_GetKeyInfo,
  Registry_HasSubKeys,
  Registry_KeyExists,
  Registry_LoadKey,
  Registry_OpenKey,
  Registry_OpenKeyReadOnly,
  Registry_ReadCurrency,
  Registry_ReadBinaryData,
  Registry_ReadBool,
  Registry_ReadDate,
  Registry_ReadDateTime,
  Registry_ReadFloat,
  Registry_ReadInteger,
  Registry_ReadInt64,
  Registry_ReadString,
  Registry_ReadStringArray,
  Registry_ReadTime,
  Registry_RegistryConnect,
  Registry_ReplaceKey,
  Registry_RestoreKey,
  Registry_SaveKey,
  Registry_UnLoadKey,
  Registry_ValueExists,
  Registry_GetKeyNames,
  Registry_GetValueNames,
  Registry_Class,
  Registry_ReadStringList,
  Registry_CloseKey,
  Registry_CloseKey1,
  Registry_GetKeyNames1,
  Registry_GetValueNames1,
  Registry_MoveKey,
  Registry_RenameValue,
  Registry_WriteCurrency,
  Registry_WriteBinaryData,
  Registry_WriteBool,
  Registry_WriteDate,
  Registry_WriteDateTime,
  Registry_WriteFloat,
  Registry_WriteInteger,
  Registry_WriteInt64,
  Registry_WriteString,
  Registry_WriteExpandString,
  Registry_WriteStringArray,
  Registry_WriteTime;