// constructor
function TCustomComboBox_Create(TheOwner: TComponent): TCustomComboBox; extdecl;
begin
  {$define handleExceptionID := 4200}
  handleExceptionBegin
  Result := TCustomComboBox.Create(TheOwner);
  handleExceptionEnd
end;

// function
function TCustomComboBox_MatchListItem(AObj: TCustomComboBox; const AValue: PChar): Integer; extdecl;
begin
  {$define handleExceptionID := 4201}
  handleExceptionBegin
  Result := AObj.MatchListItem(AValue);
  handleExceptionEnd
end;

// procedure
procedure TCustomComboBox_IntfGetItems(AObj: TCustomComboBox); extdecl;
begin
  {$define handleExceptionID := 4202}
  handleExceptionBegin
  AObj.IntfGetItems();
  handleExceptionEnd
end;

// procedure
procedure TCustomComboBox_AddItem(AObj: TCustomComboBox; const Item: PChar; AnObject: TObject); extdecl;
begin
  {$define handleExceptionID := 4203}
  handleExceptionBegin
  AObj.AddItem(Item, AnObject);
  handleExceptionEnd
end;

// procedure
procedure TCustomComboBox_AddHistoryItemWithStrIntBoolX2(AObj: TCustomComboBox; const Item: PChar; MaxHistoryCount: integer; SetAsText: LongBool; CaseSensitive: LongBool); extdecl;
begin
  {$define handleExceptionID := 4204}
  handleExceptionBegin
  AObj.AddHistoryItem(Item, MaxHistoryCount, SetAsText, CaseSensitive);
  handleExceptionEnd
end;

// procedure
procedure TCustomComboBox_AddHistoryItemWithStrObjectIntBoolX2(AObj: TCustomComboBox; const Item: PChar; AnObject: TObject; MaxHistoryCount: integer; SetAsText: LongBool; CaseSensitive: LongBool); extdecl;
begin
  {$define handleExceptionID := 4205}
  handleExceptionBegin
  AObj.AddHistoryItem(Item, AnObject, MaxHistoryCount, SetAsText, CaseSensitive);
  handleExceptionEnd
end;

// procedure
procedure TCustomComboBox_Clear(AObj: TCustomComboBox); extdecl;
begin
  {$define handleExceptionID := 4206}
  handleExceptionBegin
  AObj.Clear();
  handleExceptionEnd
end;

// procedure
procedure TCustomComboBox_ClearSelection(AObj: TCustomComboBox); extdecl;
begin
  {$define handleExceptionID := 4207}
  handleExceptionBegin
  AObj.ClearSelection();
  handleExceptionEnd
end;

// procedure
procedure TCustomComboBox_SelectAll(AObj: TCustomComboBox); extdecl;
begin
  {$define handleExceptionID := 4208}
  handleExceptionBegin
  AObj.SelectAll();
  handleExceptionEnd
end;

// property
function TCustomComboBox_CharCase(ASet: LongBool; AObj: TCustomComboBox; AValue: TEditCharCase): TEditCharCase; extdecl;
begin
  {$define handleExceptionID := 4209}
  handleExceptionBegin
  if ASet then
  begin
    AObj.CharCase := AValue
  end else
    Result := AObj.CharCase;
  handleExceptionEnd
end;

// property
function TCustomComboBox_DroppedDown(ASet: LongBool; AObj: TCustomComboBox; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 4210}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DroppedDown := AValue
  end else
    Result := AObj.DroppedDown;
  handleExceptionEnd
end;

// property
function TCustomComboBox_AutoComplete(ASet: LongBool; AObj: TCustomComboBox; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 4211}
  handleExceptionBegin
  if ASet then
  begin
    AObj.AutoComplete := AValue
  end else
    Result := AObj.AutoComplete;
  handleExceptionEnd
end;

// property
function TCustomComboBox_AutoCompleteText(ASet: LongBool; AObj: TCustomComboBox; AValue: TComboBoxAutoCompleteText): TComboBoxAutoCompleteText; extdecl;
begin
  {$define handleExceptionID := 4212}
  handleExceptionBegin
  if ASet then
  begin
    AObj.AutoCompleteText := AValue
  end else
    Result := AObj.AutoCompleteText;
  handleExceptionEnd
end;

// property
function TCustomComboBox_AutoDropDown(ASet: LongBool; AObj: TCustomComboBox; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 4213}
  handleExceptionBegin
  if ASet then
  begin
    AObj.AutoDropDown := AValue
  end else
    Result := AObj.AutoDropDown;
  handleExceptionEnd
end;

// property
function TCustomComboBox_AutoSelect(ASet: LongBool; AObj: TCustomComboBox; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 4214}
  handleExceptionBegin
  if ASet then
  begin
    AObj.AutoSelect := AValue
  end else
    Result := AObj.AutoSelect;
  handleExceptionEnd
end;

// property
function TCustomComboBox_AutoSelected(ASet: LongBool; AObj: TCustomComboBox; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 4215}
  handleExceptionBegin
  if ASet then
  begin
    AObj.AutoSelected := AValue
  end else
    Result := AObj.AutoSelected;
  handleExceptionEnd
end;

// property
function TCustomComboBox_ArrowKeysTraverseList(ASet: LongBool; AObj: TCustomComboBox; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 4216}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ArrowKeysTraverseList := AValue
  end else
    Result := AObj.ArrowKeysTraverseList;
  handleExceptionEnd
end;

// property
function TCustomComboBox_Canvas(AObj: TCustomComboBox): TCanvas; extdecl;
begin
  {$define handleExceptionID := 4217}
  handleExceptionBegin
  Result := AObj.Canvas;
  handleExceptionEnd
end;

// property
function TCustomComboBox_DropDownCount(ASet: LongBool; AObj: TCustomComboBox; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 4218}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DropDownCount := AValue
  end else
    Result := AObj.DropDownCount;
  handleExceptionEnd
end;

// property
function TCustomComboBox_EmulatedTextHintStatus(AObj: TCustomComboBox): TEmulatedTextHintStatus; extdecl;
begin
  {$define handleExceptionID := 4219}
  handleExceptionBegin
  Result := AObj.EmulatedTextHintStatus;
  handleExceptionEnd
end;

// property
function TCustomComboBox_Items(ASet: LongBool; AObj: TCustomComboBox; AValue: TStrings): TStrings; extdecl;
begin
  {$define handleExceptionID := 4220}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Items := AValue
  end else
    Result := AObj.Items;
  handleExceptionEnd
end;

// property
function TCustomComboBox_ItemIndex(ASet: LongBool; AObj: TCustomComboBox; AValue: integer): integer; extdecl;
begin
  {$define handleExceptionID := 4221}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ItemIndex := AValue
  end else
    Result := AObj.ItemIndex;
  handleExceptionEnd
end;

// property
function TCustomComboBox_ReadOnly(ASet: LongBool; AObj: TCustomComboBox; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 4222}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ReadOnly := AValue
  end else
    Result := AObj.ReadOnly;
  handleExceptionEnd
end;

// property
function TCustomComboBox_SelLength(ASet: LongBool; AObj: TCustomComboBox; AValue: integer): integer; extdecl;
begin
  {$define handleExceptionID := 4223}
  handleExceptionBegin
  if ASet then
  begin
    AObj.SelLength := AValue
  end else
    Result := AObj.SelLength;
  handleExceptionEnd
end;

// property
function TCustomComboBox_SelStart(ASet: LongBool; AObj: TCustomComboBox; AValue: integer): integer; extdecl;
begin
  {$define handleExceptionID := 4224}
  handleExceptionBegin
  if ASet then
  begin
    AObj.SelStart := AValue
  end else
    Result := AObj.SelStart;
  handleExceptionEnd
end;

// property
procedure TCustomComboBox_SelText(ASet: LongBool; AObj: TCustomComboBox; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 4225}
  handleExceptionBegin
  if ASet then
  begin
    AObj.SelText := AValue
  end else
    StringBufferCreate(AObj.SelText, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TCustomComboBox_Style(ASet: LongBool; AObj: TCustomComboBox; AValue: TComboBoxStyle): TComboBoxStyle; extdecl;
begin
  {$define handleExceptionID := 4226}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Style := AValue
  end else
    Result := AObj.Style;
  handleExceptionEnd
end;

// property
procedure TCustomComboBox_Text(ASet: LongBool; AObj: TCustomComboBox; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 4227}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Text := AValue
  end else
    StringBufferCreate(AObj.Text, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TCustomComboBox_TextHint(ASet: LongBool; AObj: TCustomComboBox; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 4228}
  handleExceptionBegin
  if ASet then
  begin
    AObj.TextHint := AValue
  end else
    StringBufferCreate(AObj.TextHint, AStrData, AStrSize);
  handleExceptionEnd
end;

function TCustomComboBox_TClass(): TClass; extdecl;
begin
  Result := TCustomComboBox;
end;

exports
  TCustomComboBox_Create,
  TCustomComboBox_MatchListItem,
  TCustomComboBox_IntfGetItems,
  TCustomComboBox_AddItem,
  TCustomComboBox_AddHistoryItemWithStrIntBoolX2,
  TCustomComboBox_AddHistoryItemWithStrObjectIntBoolX2,
  TCustomComboBox_Clear,
  TCustomComboBox_ClearSelection,
  TCustomComboBox_SelectAll,
  TCustomComboBox_CharCase,
  TCustomComboBox_DroppedDown,
  TCustomComboBox_AutoComplete,
  TCustomComboBox_AutoCompleteText,
  TCustomComboBox_AutoDropDown,
  TCustomComboBox_AutoSelect,
  TCustomComboBox_AutoSelected,
  TCustomComboBox_ArrowKeysTraverseList,
  TCustomComboBox_Canvas,
  TCustomComboBox_DropDownCount,
  TCustomComboBox_EmulatedTextHintStatus,
  TCustomComboBox_Items,
  TCustomComboBox_ItemIndex,
  TCustomComboBox_ReadOnly,
  TCustomComboBox_SelLength,
  TCustomComboBox_SelStart,
  TCustomComboBox_SelText,
  TCustomComboBox_Style,
  TCustomComboBox_Text,
  TCustomComboBox_TextHint,
  TCustomComboBox_TClass;