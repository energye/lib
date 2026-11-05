// constructor
function TSynHighlighterAttributes_Create(): TSynHighlighterAttributes; extdecl;
begin
  {$define handleExceptionID := 35800}
  handleExceptionBegin
  Result := TSynHighlighterAttributes.Create();
  handleExceptionEnd
end;

// constructor
function TSynHighlighterAttributes_CreateWithStrX2(aCaption: PChar; aStoredName: PChar): TSynHighlighterAttributes; extdecl;
begin
  {$define handleExceptionID := 35801}
  handleExceptionBegin
  Result := TSynHighlighterAttributes.Create(aCaption, aStoredName);
  handleExceptionEnd
end;

// function
function TSynHighlighterAttributes_IsEnabled(AObj: TSynHighlighterAttributes): LongBool; extdecl;
begin
  {$define handleExceptionID := 35802}
  handleExceptionBegin
  Result := AObj.IsEnabled();
  handleExceptionEnd
end;

// function
function TSynHighlighterAttributes_LoadFromBorlandRegistry(AObj: TSynHighlighterAttributes; rootKey: HKEY; attrKey: PChar; attrName: PChar; oldStyle: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 35803}
  handleExceptionBegin
  Result := AObj.LoadFromBorlandRegistry(rootKey, attrKey, attrName, oldStyle);
  handleExceptionEnd
end;

// function
function TSynHighlighterAttributes_LoadFromRegistry(AObj: TSynHighlighterAttributes; Reg: TRegistry): LongBool; extdecl;
begin
  {$define handleExceptionID := 35804}
  handleExceptionBegin
  Result := AObj.LoadFromRegistry(Reg);
  handleExceptionEnd
end;

// function
function TSynHighlighterAttributes_SaveToRegistry(AObj: TSynHighlighterAttributes; Reg: TRegistry): LongBool; extdecl;
begin
  {$define handleExceptionID := 35805}
  handleExceptionBegin
  Result := AObj.SaveToRegistry(Reg);
  handleExceptionEnd
end;

// function
function TSynHighlighterAttributes_LoadFromFile(AObj: TSynHighlighterAttributes; Ini: TIniFile): LongBool; extdecl;
begin
  {$define handleExceptionID := 35806}
  handleExceptionBegin
  Result := AObj.LoadFromFile(Ini);
  handleExceptionEnd
end;

// function
function TSynHighlighterAttributes_SaveToFile(AObj: TSynHighlighterAttributes; Ini: TIniFile): LongBool; extdecl;
begin
  {$define handleExceptionID := 35807}
  handleExceptionBegin
  Result := AObj.SaveToFile(Ini);
  handleExceptionEnd
end;

// procedure
procedure TSynHighlighterAttributes_InternalSaveDefaultValues(AObj: TSynHighlighterAttributes); extdecl;
begin
  {$define handleExceptionID := 35808}
  handleExceptionBegin
  AObj.InternalSaveDefaultValues();
  handleExceptionEnd
end;

// property
function TSynHighlighterAttributes_IntegerStyle(ASet: LongBool; AObj: TSynHighlighterAttributes; AValue: integer): integer; extdecl;
begin
  {$define handleExceptionID := 35809}
  handleExceptionBegin
  if ASet then
  begin
    AObj.IntegerStyle := AValue
  end else
    Result := AObj.IntegerStyle;
  handleExceptionEnd
end;

// property
function TSynHighlighterAttributes_IntegerStyleMask(ASet: LongBool; AObj: TSynHighlighterAttributes; AValue: integer): integer; extdecl;
begin
  {$define handleExceptionID := 35810}
  handleExceptionBegin
  if ASet then
  begin
    AObj.IntegerStyleMask := AValue
  end else
    Result := AObj.IntegerStyleMask;
  handleExceptionEnd
end;

// property
procedure TSynHighlighterAttributes_Name(AObj: TSynHighlighterAttributes; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 35811}
  handleExceptionBegin
  StringBufferCreate(AObj.Name, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TSynHighlighterAttributes_Caption(AObj: TSynHighlighterAttributes): PChar; extdecl;
begin
  {$define handleExceptionID := 35812}
  handleExceptionBegin
  Result := ToPChar(AObj.Caption);
  handleExceptionEnd
end;

// property
procedure TSynHighlighterAttributes_StoredName(ASet: LongBool; AObj: TSynHighlighterAttributes; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 35813}
  handleExceptionBegin
  if ASet then
  begin
    AObj.StoredName := AValue
  end else
    StringBufferCreate(AObj.StoredName, AStrData, AStrSize);
  handleExceptionEnd
end;

// event
procedure TSynHighlighterAttributes_OnChange(AObj: TSynHighlighterAttributes; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnChange}
  LCLEventMethodCode
end;

exports
  TSynHighlighterAttributes_Create,
  TSynHighlighterAttributes_CreateWithStrX2,
  TSynHighlighterAttributes_IsEnabled,
  TSynHighlighterAttributes_LoadFromBorlandRegistry,
  TSynHighlighterAttributes_LoadFromRegistry,
  TSynHighlighterAttributes_SaveToRegistry,
  TSynHighlighterAttributes_LoadFromFile,
  TSynHighlighterAttributes_SaveToFile,
  TSynHighlighterAttributes_InternalSaveDefaultValues,
  TSynHighlighterAttributes_IntegerStyle,
  TSynHighlighterAttributes_IntegerStyleMask,
  TSynHighlighterAttributes_Name,
  TSynHighlighterAttributes_Caption,
  TSynHighlighterAttributes_StoredName,
  TSynHighlighterAttributes_OnChange;