
//constructor
function CustomComboBox_Create(TheOwner: TComponent): TCustomComboBox; extdecl;
begin
  handleExceptionBegin
  Result := TCustomComboBox.Create(TheOwner);
  handleExceptionEnd
end;

//property
function CustomComboBox_CharCase(AIsSet: LongBool; AObj: TCustomComboBox; AValue: TEditCharCase): TEditCharCase; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.CharCase := AValue;
  end else
    Result := AObj.CharCase;
  handleExceptionEnd
end;

//property
function CustomComboBox_DroppedDown(AIsSet: LongBool; AObj: TCustomComboBox; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DroppedDown := AValue;
  end else
    Result := AObj.DroppedDown;
  handleExceptionEnd
end;

//property
function CustomComboBox_AutoComplete(AIsSet: LongBool; AObj: TCustomComboBox; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.AutoComplete := AValue;
  end else
    Result := AObj.AutoComplete;
  handleExceptionEnd
end;

//property
function CustomComboBox_AutoCompleteText(AIsSet: LongBool; AObj: TCustomComboBox; AValue: TComboBoxAutoCompleteText): TComboBoxAutoCompleteText; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.AutoCompleteText := AValue;
  end else
    Result := AObj.AutoCompleteText;
  handleExceptionEnd
end;

//property
function CustomComboBox_AutoDropDown(AIsSet: LongBool; AObj: TCustomComboBox; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.AutoDropDown := AValue;
  end else
    Result := AObj.AutoDropDown;
  handleExceptionEnd
end;

//property
function CustomComboBox_AutoSelect(AIsSet: LongBool; AObj: TCustomComboBox; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.AutoSelect := AValue;
  end else
    Result := AObj.AutoSelect;
  handleExceptionEnd
end;

//property
function CustomComboBox_AutoSelected(AIsSet: LongBool; AObj: TCustomComboBox; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.AutoSelected := AValue;
  end else
    Result := AObj.AutoSelected;
  handleExceptionEnd
end;

//property
function CustomComboBox_ArrowKeysTraverseList(AIsSet: LongBool; AObj: TCustomComboBox; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ArrowKeysTraverseList := AValue;
  end else
    Result := AObj.ArrowKeysTraverseList;
  handleExceptionEnd
end;

//property
function CustomComboBox_Canvas(AObj: TCustomComboBox): TCanvas; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Canvas;
  handleExceptionEnd
end;

//property
function CustomComboBox_DropDownCount(AIsSet: LongBool; AObj: TCustomComboBox; AValue: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DropDownCount := AValue;
  end else
    Result := AObj.DropDownCount;
  handleExceptionEnd
end;

//property
function CustomComboBox_EmulatedTextHintStatus(AObj: TCustomComboBox): TEmulatedTextHintStatus; extdecl;
begin
  handleExceptionBegin
  Result := AObj.EmulatedTextHintStatus;
  handleExceptionEnd
end;

//property
function CustomComboBox_Items(AIsSet: LongBool; AObj: TCustomComboBox; AValue: TStrings): TStrings; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Items := AValue;
  end else
    Result := AObj.Items;
  handleExceptionEnd
end;

//property
function CustomComboBox_ItemIndex(AIsSet: LongBool; AObj: TCustomComboBox; AValue: integer): integer; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ItemIndex := AValue;
  end else
    Result := AObj.ItemIndex;
  handleExceptionEnd
end;

//property
function CustomComboBox_ReadOnly(AIsSet: LongBool; AObj: TCustomComboBox; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ReadOnly := AValue;
  end else
    Result := AObj.ReadOnly;
  handleExceptionEnd
end;

//property
function CustomComboBox_SelLength(AIsSet: LongBool; AObj: TCustomComboBox; AValue: integer): integer; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.SelLength := AValue;
  end else
    Result := AObj.SelLength;
  handleExceptionEnd
end;

//property
function CustomComboBox_SelStart(AIsSet: LongBool; AObj: TCustomComboBox; AValue: integer): integer; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.SelStart := AValue;
  end else
    Result := AObj.SelStart;
  handleExceptionEnd
end;

//property
function CustomComboBox_SelText(AIsSet: LongBool; AObj: TCustomComboBox; AValue: PChar): PChar; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.SelText := AValue;
  end else
    Result := ToPChar(AObj.SelText);
  handleExceptionEnd
end;

//property
function CustomComboBox_Style(AIsSet: LongBool; AObj: TCustomComboBox; AValue: TComboBoxStyle): TComboBoxStyle; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Style := AValue;
  end else
    Result := AObj.Style;
  handleExceptionEnd
end;

//property
function CustomComboBox_Text(AIsSet: LongBool; AObj: TCustomComboBox; AValue: PChar): PChar; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Text := AValue;
  end else
    Result := ToPChar(AObj.Text);
  handleExceptionEnd
end;

//property
function CustomComboBox_TextHint(AIsSet: LongBool; AObj: TCustomComboBox; AValue: PChar): PChar; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.TextHint := AValue;
  end else
    Result := ToPChar(AObj.TextHint);
  handleExceptionEnd
end;

//function
function CustomComboBox_MatchListItem(AObj: TCustomComboBox; const AValue: PChar): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.MatchListItem(AValue);
  handleExceptionEnd
end;

//function
function CustomComboBox_Class(): TClass; extdecl;
begin
  Result := TCustomComboBox;
end;

//procedure
procedure CustomComboBox_IntfGetItems(AObj: TCustomComboBox); extdecl;
begin
  handleExceptionBegin
  AObj.IntfGetItems();
  handleExceptionEnd
end;

//procedure
procedure CustomComboBox_AddItem(AObj: TCustomComboBox; const Item: PChar; AnObject: TObject); extdecl;
begin
  handleExceptionBegin
  AObj.AddItem(Item, AnObject);
  handleExceptionEnd
end;

//procedure
procedure CustomComboBox_AddHistoryItem(AObj: TCustomComboBox; const Item: PChar; MaxHistoryCount: integer; SetAsText, CaseSensitive: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.AddHistoryItem(Item, MaxHistoryCount, SetAsText, CaseSensitive);
  handleExceptionEnd
end;

//procedure
procedure CustomComboBox_AddHistoryItem1(AObj: TCustomComboBox; const Item: PChar; AnObject: TObject; MaxHistoryCount: integer; SetAsText, CaseSensitive: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.AddHistoryItem(Item, AnObject, MaxHistoryCount, SetAsText, CaseSensitive);
  handleExceptionEnd
end;

//procedure
procedure CustomComboBox_Clear(AObj: TCustomComboBox); extdecl;
begin
  handleExceptionBegin
  AObj.Clear();
  handleExceptionEnd
end;

//procedure
procedure CustomComboBox_ClearSelection(AObj: TCustomComboBox); extdecl;
begin
  handleExceptionBegin
  AObj.ClearSelection();
  handleExceptionEnd
end;

//procedure
procedure CustomComboBox_SelectAll(AObj: TCustomComboBox); extdecl;
begin
  handleExceptionBegin
  AObj.SelectAll();
  handleExceptionEnd
end;


exports
  CustomComboBox_Create,
  CustomComboBox_CharCase,
  CustomComboBox_DroppedDown,
  CustomComboBox_AutoComplete,
  CustomComboBox_AutoCompleteText,
  CustomComboBox_AutoDropDown,
  CustomComboBox_AutoSelect,
  CustomComboBox_AutoSelected,
  CustomComboBox_ArrowKeysTraverseList,
  CustomComboBox_Canvas,
  CustomComboBox_DropDownCount,
  CustomComboBox_EmulatedTextHintStatus,
  CustomComboBox_Items,
  CustomComboBox_ItemIndex,
  CustomComboBox_ReadOnly,
  CustomComboBox_SelLength,
  CustomComboBox_SelStart,
  CustomComboBox_SelText,
  CustomComboBox_Style,
  CustomComboBox_Text,
  CustomComboBox_TextHint,
  CustomComboBox_MatchListItem,
  CustomComboBox_Class,
  CustomComboBox_IntfGetItems,
  CustomComboBox_AddItem,
  CustomComboBox_AddHistoryItem,
  CustomComboBox_AddHistoryItem1,
  CustomComboBox_Clear,
  CustomComboBox_ClearSelection,
  CustomComboBox_SelectAll;