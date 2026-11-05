// constructor
function TCefMenuModelRef_Create(data: Pointer; out IntfMenuModel: ICefMenuModel): TCefMenuModelRef; extdecl;
begin
  {$define handleExceptionID := 19100}
  handleExceptionBegin
  Result := TCefMenuModelRef.Create(data);
  IntfMenuModel := Result as ICefMenuModel;
  handleExceptionEnd
end;

// function
function TCefMenuModelRef_IsSubMenu(AObj: ICefMenuModel): LongBool; extdecl;
begin
  {$define handleExceptionID := 19101}
  handleExceptionBegin
  Result := AObj.IsSubMenu();
  handleExceptionEnd
end;

// function
function TCefMenuModelRef_Clear(AObj: ICefMenuModel): LongBool; extdecl;
begin
  {$define handleExceptionID := 19102}
  handleExceptionBegin
  Result := AObj.Clear();
  handleExceptionEnd
end;

// function
function TCefMenuModelRef_GetCount(AObj: ICefMenuModel): NativeUInt; extdecl;
begin
  {$define handleExceptionID := 19103}
  handleExceptionBegin
  Result := AObj.GetCount();
  handleExceptionEnd
end;

// function
function TCefMenuModelRef_AddSeparator(AObj: ICefMenuModel): LongBool; extdecl;
begin
  {$define handleExceptionID := 19104}
  handleExceptionBegin
  Result := AObj.AddSeparator();
  handleExceptionEnd
end;

// function
function TCefMenuModelRef_AddItem(AObj: ICefMenuModel; commandId: Integer; const text: PChar): LongBool; extdecl;
begin
  {$define handleExceptionID := 19105}
  handleExceptionBegin
  Result := AObj.AddItem(commandId, PCharToUStr(text));
  handleExceptionEnd
end;

// function
function TCefMenuModelRef_AddCheckItem(AObj: ICefMenuModel; commandId: Integer; const text: PChar): LongBool; extdecl;
begin
  {$define handleExceptionID := 19106}
  handleExceptionBegin
  Result := AObj.AddCheckItem(commandId, PCharToUStr(text));
  handleExceptionEnd
end;

// function
function TCefMenuModelRef_AddRadioItem(AObj: ICefMenuModel; commandId: Integer; const text: PChar; groupId: Integer): LongBool; extdecl;
begin
  {$define handleExceptionID := 19107}
  handleExceptionBegin
  Result := AObj.AddRadioItem(commandId, PCharToUStr(text), groupId);
  handleExceptionEnd
end;

// function
procedure TCefMenuModelRef_AddSubMenu(AObj: ICefMenuModel; commandId: Integer; const text: PChar; var Result: ICefMenuModel); extdecl;
begin
  {$define handleExceptionID := 19108}
  handleExceptionBegin
  Result := AObj.AddSubMenu(commandId, PCharToUStr(text));
  handleExceptionEnd
end;

// function
function TCefMenuModelRef_InsertSeparatorAt(AObj: ICefMenuModel; index: NativeUInt): LongBool; extdecl;
begin
  {$define handleExceptionID := 19109}
  handleExceptionBegin
  Result := AObj.InsertSeparatorAt(index);
  handleExceptionEnd
end;

// function
function TCefMenuModelRef_InsertItemAt(AObj: ICefMenuModel; index: NativeUInt; commandId: Integer; const text: PChar): LongBool; extdecl;
begin
  {$define handleExceptionID := 19110}
  handleExceptionBegin
  Result := AObj.InsertItemAt(index, commandId, PCharToUStr(text));
  handleExceptionEnd
end;

// function
function TCefMenuModelRef_InsertCheckItemAt(AObj: ICefMenuModel; index: NativeUInt; commandId: Integer; const text: PChar): LongBool; extdecl;
begin
  {$define handleExceptionID := 19111}
  handleExceptionBegin
  Result := AObj.InsertCheckItemAt(index, commandId, PCharToUStr(text));
  handleExceptionEnd
end;

// function
function TCefMenuModelRef_InsertRadioItemAt(AObj: ICefMenuModel; index: NativeUInt; commandId: Integer; const text: PChar; groupId: Integer): LongBool; extdecl;
begin
  {$define handleExceptionID := 19112}
  handleExceptionBegin
  Result := AObj.InsertRadioItemAt(index, commandId, PCharToUStr(text), groupId);
  handleExceptionEnd
end;

// function
procedure TCefMenuModelRef_InsertSubMenuAt(AObj: ICefMenuModel; index: NativeUInt; commandId: Integer; const text: PChar; var Result: ICefMenuModel); extdecl;
begin
  {$define handleExceptionID := 19113}
  handleExceptionBegin
  Result := AObj.InsertSubMenuAt(index, commandId, PCharToUStr(text));
  handleExceptionEnd
end;

// function
function TCefMenuModelRef_Remove(AObj: ICefMenuModel; commandId: Integer): LongBool; extdecl;
begin
  {$define handleExceptionID := 19114}
  handleExceptionBegin
  Result := AObj.Remove(commandId);
  handleExceptionEnd
end;

// function
function TCefMenuModelRef_RemoveAt(AObj: ICefMenuModel; index: NativeUInt): LongBool; extdecl;
begin
  {$define handleExceptionID := 19115}
  handleExceptionBegin
  Result := AObj.RemoveAt(index);
  handleExceptionEnd
end;

// function
function TCefMenuModelRef_GetIndexOf(AObj: ICefMenuModel; commandId: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 19116}
  handleExceptionBegin
  Result := AObj.GetIndexOf(commandId);
  handleExceptionEnd
end;

// function
function TCefMenuModelRef_GetCommandIdAt(AObj: ICefMenuModel; index: NativeUInt): Integer; extdecl;
begin
  {$define handleExceptionID := 19117}
  handleExceptionBegin
  Result := AObj.GetCommandIdAt(index);
  handleExceptionEnd
end;

// function
function TCefMenuModelRef_SetCommandIdAt(AObj: ICefMenuModel; index: NativeUInt; commandId: Integer): LongBool; extdecl;
begin
  {$define handleExceptionID := 19118}
  handleExceptionBegin
  Result := AObj.SetCommandIdAt(index, commandId);
  handleExceptionEnd
end;

// function
procedure TCefMenuModelRef_GetLabel(AObj: ICefMenuModel; commandId: Integer;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 19119}
  handleExceptionBegin
  StringBufferCreate(string(AObj.GetLabel(commandId)), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
procedure TCefMenuModelRef_GetLabelAt(AObj: ICefMenuModel; index: NativeUInt;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 19120}
  handleExceptionBegin
  StringBufferCreate(string(AObj.GetLabelAt(index)), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
function TCefMenuModelRef_SetLabel(AObj: ICefMenuModel; commandId: Integer; const text: PChar): LongBool; extdecl;
begin
  {$define handleExceptionID := 19121}
  handleExceptionBegin
  Result := AObj.SetLabel(commandId, PCharToUStr(text));
  handleExceptionEnd
end;

// function
function TCefMenuModelRef_SetLabelAt(AObj: ICefMenuModel; index: NativeUInt; const text: PChar): LongBool; extdecl;
begin
  {$define handleExceptionID := 19122}
  handleExceptionBegin
  Result := AObj.SetLabelAt(index, PCharToUStr(text));
  handleExceptionEnd
end;

// function
function TCefMenuModelRef_GetType(AObj: ICefMenuModel; commandId: Integer): TCefMenuItemType; extdecl;
begin
  {$define handleExceptionID := 19123}
  handleExceptionBegin
  Result := AObj.GetType(commandId);
  handleExceptionEnd
end;

// function
function TCefMenuModelRef_GetTypeAt(AObj: ICefMenuModel; index: NativeUInt): TCefMenuItemType; extdecl;
begin
  {$define handleExceptionID := 19124}
  handleExceptionBegin
  Result := AObj.GetTypeAt(index);
  handleExceptionEnd
end;

// function
function TCefMenuModelRef_GetGroupId(AObj: ICefMenuModel; commandId: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 19125}
  handleExceptionBegin
  Result := AObj.GetGroupId(commandId);
  handleExceptionEnd
end;

// function
function TCefMenuModelRef_GetGroupIdAt(AObj: ICefMenuModel; index: NativeUInt): Integer; extdecl;
begin
  {$define handleExceptionID := 19126}
  handleExceptionBegin
  Result := AObj.GetGroupIdAt(index);
  handleExceptionEnd
end;

// function
function TCefMenuModelRef_SetGroupId(AObj: ICefMenuModel; commandId: Integer; groupId: Integer): LongBool; extdecl;
begin
  {$define handleExceptionID := 19127}
  handleExceptionBegin
  Result := AObj.SetGroupId(commandId, groupId);
  handleExceptionEnd
end;

// function
function TCefMenuModelRef_SetGroupIdAt(AObj: ICefMenuModel; index: NativeUInt; groupId: Integer): LongBool; extdecl;
begin
  {$define handleExceptionID := 19128}
  handleExceptionBegin
  Result := AObj.SetGroupIdAt(index, groupId);
  handleExceptionEnd
end;

// function
procedure TCefMenuModelRef_GetSubMenu(AObj: ICefMenuModel; commandId: Integer; var Result: ICefMenuModel); extdecl;
begin
  {$define handleExceptionID := 19129}
  handleExceptionBegin
  Result := AObj.GetSubMenu(commandId);
  handleExceptionEnd
end;

// function
procedure TCefMenuModelRef_GetSubMenuAt(AObj: ICefMenuModel; index: NativeUInt; var Result: ICefMenuModel); extdecl;
begin
  {$define handleExceptionID := 19130}
  handleExceptionBegin
  Result := AObj.GetSubMenuAt(index);
  handleExceptionEnd
end;

// function
function TCefMenuModelRef_IsVisible(AObj: ICefMenuModel; commandId: Integer): LongBool; extdecl;
begin
  {$define handleExceptionID := 19131}
  handleExceptionBegin
  Result := AObj.IsVisible(commandId);
  handleExceptionEnd
end;

// function
function TCefMenuModelRef_isVisibleAt(AObj: ICefMenuModel; index: NativeUInt): LongBool; extdecl;
begin
  {$define handleExceptionID := 19132}
  handleExceptionBegin
  Result := AObj.isVisibleAt(index);
  handleExceptionEnd
end;

// function
function TCefMenuModelRef_SetVisible(AObj: ICefMenuModel; commandId: Integer; visible: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 19133}
  handleExceptionBegin
  Result := AObj.SetVisible(commandId, visible);
  handleExceptionEnd
end;

// function
function TCefMenuModelRef_SetVisibleAt(AObj: ICefMenuModel; index: NativeUInt; visible: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 19134}
  handleExceptionBegin
  Result := AObj.SetVisibleAt(index, visible);
  handleExceptionEnd
end;

// function
function TCefMenuModelRef_IsEnabled(AObj: ICefMenuModel; commandId: Integer): LongBool; extdecl;
begin
  {$define handleExceptionID := 19135}
  handleExceptionBegin
  Result := AObj.IsEnabled(commandId);
  handleExceptionEnd
end;

// function
function TCefMenuModelRef_IsEnabledAt(AObj: ICefMenuModel; index: NativeUInt): LongBool; extdecl;
begin
  {$define handleExceptionID := 19136}
  handleExceptionBegin
  Result := AObj.IsEnabledAt(index);
  handleExceptionEnd
end;

// function
function TCefMenuModelRef_SetEnabled(AObj: ICefMenuModel; commandId: Integer; enabled: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 19137}
  handleExceptionBegin
  Result := AObj.SetEnabled(commandId, enabled);
  handleExceptionEnd
end;

// function
function TCefMenuModelRef_SetEnabledAt(AObj: ICefMenuModel; index: NativeUInt; enabled: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 19138}
  handleExceptionBegin
  Result := AObj.SetEnabledAt(index, enabled);
  handleExceptionEnd
end;

// function
function TCefMenuModelRef_IsChecked(AObj: ICefMenuModel; commandId: Integer): LongBool; extdecl;
begin
  {$define handleExceptionID := 19139}
  handleExceptionBegin
  Result := AObj.IsChecked(commandId);
  handleExceptionEnd
end;

// function
function TCefMenuModelRef_IsCheckedAt(AObj: ICefMenuModel; index: NativeUInt): LongBool; extdecl;
begin
  {$define handleExceptionID := 19140}
  handleExceptionBegin
  Result := AObj.IsCheckedAt(index);
  handleExceptionEnd
end;

// function
function TCefMenuModelRef_setChecked(AObj: ICefMenuModel; commandId: Integer; checked: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 19141}
  handleExceptionBegin
  Result := AObj.setChecked(commandId, checked);
  handleExceptionEnd
end;

// function
function TCefMenuModelRef_setCheckedAt(AObj: ICefMenuModel; index: NativeUInt; checked: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 19142}
  handleExceptionBegin
  Result := AObj.setCheckedAt(index, checked);
  handleExceptionEnd
end;

// function
function TCefMenuModelRef_HasAccelerator(AObj: ICefMenuModel; commandId: Integer): LongBool; extdecl;
begin
  {$define handleExceptionID := 19143}
  handleExceptionBegin
  Result := AObj.HasAccelerator(commandId);
  handleExceptionEnd
end;

// function
function TCefMenuModelRef_HasAcceleratorAt(AObj: ICefMenuModel; index: NativeUInt): LongBool; extdecl;
begin
  {$define handleExceptionID := 19144}
  handleExceptionBegin
  Result := AObj.HasAcceleratorAt(index);
  handleExceptionEnd
end;

// function
function TCefMenuModelRef_SetAccelerator(AObj: ICefMenuModel; commandId: Integer; keyCode: Integer; shiftPressed: LongBool; ctrlPressed: LongBool; altPressed: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 19145}
  handleExceptionBegin
  Result := AObj.SetAccelerator(commandId, keyCode, shiftPressed, ctrlPressed, altPressed);
  handleExceptionEnd
end;

// function
function TCefMenuModelRef_SetAcceleratorAt(AObj: ICefMenuModel; index: NativeUInt; keyCode: Integer; shiftPressed: LongBool; ctrlPressed: LongBool; altPressed: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 19146}
  handleExceptionBegin
  Result := AObj.SetAcceleratorAt(index, keyCode, shiftPressed, ctrlPressed, altPressed);
  handleExceptionEnd
end;

// function
function TCefMenuModelRef_RemoveAccelerator(AObj: ICefMenuModel; commandId: Integer): LongBool; extdecl;
begin
  {$define handleExceptionID := 19147}
  handleExceptionBegin
  Result := AObj.RemoveAccelerator(commandId);
  handleExceptionEnd
end;

// function
function TCefMenuModelRef_RemoveAcceleratorAt(AObj: ICefMenuModel; index: NativeUInt): LongBool; extdecl;
begin
  {$define handleExceptionID := 19148}
  handleExceptionBegin
  Result := AObj.RemoveAcceleratorAt(index);
  handleExceptionEnd
end;

// function
function TCefMenuModelRef_GetAccelerator(AObj: ICefMenuModel; commandId: Integer; var keyCode: Integer; var shiftPressed: LongBool; var ctrlPressed: LongBool; var altPressed: LongBool): LongBool; extdecl;
var
  OutkeyCode: Integer;
  OutshiftPressed: Boolean;
  OutctrlPressed: Boolean;
  OutaltPressed: Boolean;
begin
  {$define handleExceptionID := 19149}
  handleExceptionBegin
  Result := AObj.GetAccelerator(commandId, OutkeyCode, OutshiftPressed, OutctrlPressed, OutaltPressed);
  keyCode := OutkeyCode;
  shiftPressed := OutshiftPressed;
  ctrlPressed := OutctrlPressed;
  altPressed := OutaltPressed;
  handleExceptionEnd
end;

// function
function TCefMenuModelRef_GetAcceleratorAt(AObj: ICefMenuModel; index: NativeUInt; var keyCode: Integer; var shiftPressed: LongBool; var ctrlPressed: LongBool; var altPressed: LongBool): LongBool; extdecl;
var
  OutkeyCode: Integer;
  OutshiftPressed: Boolean;
  OutctrlPressed: Boolean;
  OutaltPressed: Boolean;
begin
  {$define handleExceptionID := 19150}
  handleExceptionBegin
  Result := AObj.GetAcceleratorAt(index, OutkeyCode, OutshiftPressed, OutctrlPressed, OutaltPressed);
  keyCode := OutkeyCode;
  shiftPressed := OutshiftPressed;
  ctrlPressed := OutctrlPressed;
  altPressed := OutaltPressed;
  handleExceptionEnd
end;

// function
function TCefMenuModelRef_SetColor(AObj: ICefMenuModel; commandId: Integer; colorType: TCefMenuColorType; color: TCefColor): LongBool; extdecl;
begin
  {$define handleExceptionID := 19151}
  handleExceptionBegin
  Result := AObj.SetColor(commandId, colorType, color);
  handleExceptionEnd
end;

// function
function TCefMenuModelRef_SetColorAt(AObj: ICefMenuModel; index: Integer; colorType: TCefMenuColorType; color: TCefColor): LongBool; extdecl;
begin
  {$define handleExceptionID := 19152}
  handleExceptionBegin
  Result := AObj.SetColorAt(index, colorType, color);
  handleExceptionEnd
end;

// function
function TCefMenuModelRef_GetColor(AObj: ICefMenuModel; commandId: Integer; colorType: TCefMenuColorType; var color: TCefColor): LongBool; extdecl;
var
  Outcolor: TCefColor;
begin
  {$define handleExceptionID := 19153}
  handleExceptionBegin
  Result := AObj.GetColor(commandId, colorType, Outcolor);
  color := Outcolor;
  handleExceptionEnd
end;

// function
function TCefMenuModelRef_GetColorAt(AObj: ICefMenuModel; index: Integer; colorType: TCefMenuColorType; var color: TCefColor): LongBool; extdecl;
var
  Outcolor: TCefColor;
begin
  {$define handleExceptionID := 19154}
  handleExceptionBegin
  Result := AObj.GetColorAt(index, colorType, Outcolor);
  color := Outcolor;
  handleExceptionEnd
end;

// function
function TCefMenuModelRef_SetFontList(AObj: ICefMenuModel; commandId: Integer; const fontList: PChar): LongBool; extdecl;
begin
  {$define handleExceptionID := 19155}
  handleExceptionBegin
  Result := AObj.SetFontList(commandId, PCharToUStr(fontList));
  handleExceptionEnd
end;

// function
function TCefMenuModelRef_SetFontListAt(AObj: ICefMenuModel; index: Integer; const fontList: PChar): LongBool; extdecl;
begin
  {$define handleExceptionID := 19156}
  handleExceptionBegin
  Result := AObj.SetFontListAt(index, PCharToUStr(fontList));
  handleExceptionEnd
end;

// function static
procedure TCefMenuModelRef_UnWrap(data: Pointer; var Result: ICefMenuModel); extdecl;
begin
  Result := TCefMenuModelRef.UnWrap(data);
end;

// function static
procedure TCefMenuModelRef_New(const delegate: ICefMenuModelDelegate; var Result: ICefMenuModel); extdecl;
begin
  Result := TCefMenuModelRef.New(delegate);
end;

exports
  TCefMenuModelRef_Create,
  TCefMenuModelRef_IsSubMenu,
  TCefMenuModelRef_Clear,
  TCefMenuModelRef_GetCount,
  TCefMenuModelRef_AddSeparator,
  TCefMenuModelRef_AddItem,
  TCefMenuModelRef_AddCheckItem,
  TCefMenuModelRef_AddRadioItem,
  TCefMenuModelRef_AddSubMenu,
  TCefMenuModelRef_InsertSeparatorAt,
  TCefMenuModelRef_InsertItemAt,
  TCefMenuModelRef_InsertCheckItemAt,
  TCefMenuModelRef_InsertRadioItemAt,
  TCefMenuModelRef_InsertSubMenuAt,
  TCefMenuModelRef_Remove,
  TCefMenuModelRef_RemoveAt,
  TCefMenuModelRef_GetIndexOf,
  TCefMenuModelRef_GetCommandIdAt,
  TCefMenuModelRef_SetCommandIdAt,
  TCefMenuModelRef_GetLabel,
  TCefMenuModelRef_GetLabelAt,
  TCefMenuModelRef_SetLabel,
  TCefMenuModelRef_SetLabelAt,
  TCefMenuModelRef_GetType,
  TCefMenuModelRef_GetTypeAt,
  TCefMenuModelRef_GetGroupId,
  TCefMenuModelRef_GetGroupIdAt,
  TCefMenuModelRef_SetGroupId,
  TCefMenuModelRef_SetGroupIdAt,
  TCefMenuModelRef_GetSubMenu,
  TCefMenuModelRef_GetSubMenuAt,
  TCefMenuModelRef_IsVisible,
  TCefMenuModelRef_isVisibleAt,
  TCefMenuModelRef_SetVisible,
  TCefMenuModelRef_SetVisibleAt,
  TCefMenuModelRef_IsEnabled,
  TCefMenuModelRef_IsEnabledAt,
  TCefMenuModelRef_SetEnabled,
  TCefMenuModelRef_SetEnabledAt,
  TCefMenuModelRef_IsChecked,
  TCefMenuModelRef_IsCheckedAt,
  TCefMenuModelRef_setChecked,
  TCefMenuModelRef_setCheckedAt,
  TCefMenuModelRef_HasAccelerator,
  TCefMenuModelRef_HasAcceleratorAt,
  TCefMenuModelRef_SetAccelerator,
  TCefMenuModelRef_SetAcceleratorAt,
  TCefMenuModelRef_RemoveAccelerator,
  TCefMenuModelRef_RemoveAcceleratorAt,
  TCefMenuModelRef_GetAccelerator,
  TCefMenuModelRef_GetAcceleratorAt,
  TCefMenuModelRef_SetColor,
  TCefMenuModelRef_SetColorAt,
  TCefMenuModelRef_GetColor,
  TCefMenuModelRef_GetColorAt,
  TCefMenuModelRef_SetFontList,
  TCefMenuModelRef_SetFontListAt,
  TCefMenuModelRef_UnWrap,
  TCefMenuModelRef_New;