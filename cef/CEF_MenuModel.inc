
//function
procedure CefMenuModel_UnWrap(data: Pointer; var Result: ICefMenuModel); extdecl;
begin
  Result := TCefMenuModelRef.UnWrap(data);
end;

//function
procedure CefMenuModel_New(const delegate: ICefMenuModelDelegate; var Result: ICefMenuModel); extdecl;
begin
  Result := TCefMenuModelRef.New(delegate);
end;

//function
function CefMenuModel_IsSubMenu(AObj: ICefMenuModel): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='IsSubMenu'}
  handleExceptionBegin
  Result := AObj.IsSubMenu();
  handleExceptionEnd
end;

//function
function CefMenuModel_Clear(AObj: ICefMenuModel): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='Clear'}
  handleExceptionBegin
  Result := AObj.Clear();
  handleExceptionEnd
end;

//function
function CefMenuModel_GetCount(AObj: ICefMenuModel): NativeUInt; extdecl;
begin
  {$define handleExceptionFuncName :='GetCount'}
  handleExceptionBegin
  Result := AObj.GetCount();
  handleExceptionEnd
end;

//function
function CefMenuModel_AddSeparator(AObj: ICefMenuModel): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='AddSeparator'}
  handleExceptionBegin
  Result := AObj.AddSeparator();
  handleExceptionEnd
end;

//function
function CefMenuModel_AddItem(AObj: ICefMenuModel; commandId: Integer; const text: PChar): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='AddItem'}
  handleExceptionBegin
  Result := AObj.AddItem(commandId, text);
  handleExceptionEnd
end;

//function
function CefMenuModel_AddCheckItem(AObj: ICefMenuModel; commandId: Integer; const text: PChar): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='AddCheckItem'}
  handleExceptionBegin
  Result := AObj.AddCheckItem(commandId, text);
  handleExceptionEnd
end;

//function
function CefMenuModel_AddRadioItem(AObj: ICefMenuModel; commandId: Integer; const text: PChar; groupId: Integer): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='AddRadioItem'}
  handleExceptionBegin
  Result := AObj.AddRadioItem(commandId, text, groupId);
  handleExceptionEnd
end;

//function
procedure CefMenuModel_AddSubMenu(AObj: ICefMenuModel; commandId: Integer; const text: PChar; var Result: ICefMenuModel); extdecl;
begin
  {$define handleExceptionFuncName :='AddSubMenu'}
  handleExceptionBegin
  Result := AObj.AddSubMenu(commandId, text);
  handleExceptionEnd
end;

//function
function CefMenuModel_InsertSeparatorAt(AObj: ICefMenuModel; index: NativeUInt): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='InsertSeparatorAt'}
  handleExceptionBegin
  Result := AObj.InsertSeparatorAt(index);
  handleExceptionEnd
end;

//function
function CefMenuModel_InsertItemAt(AObj: ICefMenuModel; index: NativeUInt; commandId: Integer; const text: PChar): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='InsertItemAt'}
  handleExceptionBegin
  Result := AObj.InsertItemAt(index, commandId, text);
  handleExceptionEnd
end;

//function
function CefMenuModel_InsertCheckItemAt(AObj: ICefMenuModel; index: NativeUInt; commandId: Integer; const text: PChar): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='InsertCheckItemAt'}
  handleExceptionBegin
  Result := AObj.InsertCheckItemAt(index, commandId, text);
  handleExceptionEnd
end;

//function
function CefMenuModel_InsertRadioItemAt(AObj: ICefMenuModel; index: NativeUInt; commandId: Integer; const text: PChar; groupId: Integer): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='InsertRadioItemAt'}
  handleExceptionBegin
  Result := AObj.InsertRadioItemAt(index, commandId, text, groupId);
  handleExceptionEnd
end;

//function
procedure CefMenuModel_InsertSubMenuAt(AObj: ICefMenuModel; index: NativeUInt; commandId: Integer; const text: PChar; var Result: ICefMenuModel); extdecl;
begin
  {$define handleExceptionFuncName :='InsertSubMenuAt'}
  handleExceptionBegin
  Result := AObj.InsertSubMenuAt(index, commandId, text);
  handleExceptionEnd
end;

//function
function CefMenuModel_Remove(AObj: ICefMenuModel; commandId: Integer): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='Remove'}
  handleExceptionBegin
  Result := AObj.Remove(commandId);
  handleExceptionEnd
end;

//function
function CefMenuModel_RemoveAt(AObj: ICefMenuModel; index: NativeUInt): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='RemoveAt'}
  handleExceptionBegin
  Result := AObj.RemoveAt(index);
  handleExceptionEnd
end;

//function
function CefMenuModel_GetIndexOf(AObj: ICefMenuModel; commandId: Integer): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='GetIndexOf'}
  handleExceptionBegin
  Result := AObj.GetIndexOf(commandId);
  handleExceptionEnd
end;

//function
function CefMenuModel_GetCommandIdAt(AObj: ICefMenuModel; index: NativeUInt): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='GetCommandIdAt'}
  handleExceptionBegin
  Result := AObj.GetCommandIdAt(index);
  handleExceptionEnd
end;

//function
function CefMenuModel_SetCommandIdAt(AObj: ICefMenuModel; index: NativeUInt; commandId: Integer): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='SetCommandIdAt'}
  handleExceptionBegin
  Result := AObj.SetCommandIdAt(index, commandId);
  handleExceptionEnd
end;

//function
function CefMenuModel_GetLabel(AObj: ICefMenuModel; commandId: Integer): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='GetLabel'}
  handleExceptionBegin
  Result := ToPChar(AObj.GetLabel(commandId));
  handleExceptionEnd
end;

//function
function CefMenuModel_GetLabelAt(AObj: ICefMenuModel; index: NativeUInt): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='GetLabelAt'}
  handleExceptionBegin
  Result := ToPChar(AObj.GetLabelAt(index));
  handleExceptionEnd
end;

//function
function CefMenuModel_SetLabel(AObj: ICefMenuModel; commandId: Integer; const text: PChar): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='SetLabel'}
  handleExceptionBegin
  Result := AObj.SetLabel(commandId, text);
  handleExceptionEnd
end;

//function
function CefMenuModel_SetLabelAt(AObj: ICefMenuModel; index: NativeUInt; const text: PChar): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='SetLabelAt'}
  handleExceptionBegin
  Result := AObj.SetLabelAt(index, text);
  handleExceptionEnd
end;

//function
function CefMenuModel_GetType(AObj: ICefMenuModel; commandId: Integer): TCefMenuItemType; extdecl;
begin
  {$define handleExceptionFuncName :='GetType'}
  handleExceptionBegin
  Result := AObj.GetType(commandId);
  handleExceptionEnd
end;

//function
function CefMenuModel_GetTypeAt(AObj: ICefMenuModel; index: NativeUInt): TCefMenuItemType; extdecl;
begin
  {$define handleExceptionFuncName :='GetTypeAt'}
  handleExceptionBegin
  Result := AObj.GetTypeAt(index);
  handleExceptionEnd
end;

//function
function CefMenuModel_GetGroupId(AObj: ICefMenuModel; commandId: Integer): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='GetGroupId'}
  handleExceptionBegin
  Result := AObj.GetGroupId(commandId);
  handleExceptionEnd
end;

//function
function CefMenuModel_GetGroupIdAt(AObj: ICefMenuModel; index: NativeUInt): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='GetGroupIdAt'}
  handleExceptionBegin
  Result := AObj.GetGroupIdAt(index);
  handleExceptionEnd
end;

//function
function CefMenuModel_SetGroupId(AObj: ICefMenuModel; commandId,  groupId: Integer): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='SetGroupId'}
  handleExceptionBegin
  Result := AObj.SetGroupId(commandId,  groupId);
  handleExceptionEnd
end;

//function
function CefMenuModel_SetGroupIdAt(AObj: ICefMenuModel; index: NativeUInt; groupId: Integer): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='SetGroupIdAt'}
  handleExceptionBegin
  Result := AObj.SetGroupIdAt(index, groupId);
  handleExceptionEnd
end;

//function
procedure CefMenuModel_GetSubMenu(AObj: ICefMenuModel; commandId: Integer; var Result: ICefMenuModel); extdecl;
begin
  {$define handleExceptionFuncName :='GetSubMenu'}
  handleExceptionBegin
  Result := AObj.GetSubMenu(commandId);
  handleExceptionEnd
end;

//function
procedure CefMenuModel_GetSubMenuAt(AObj: ICefMenuModel; index: NativeUInt; var Result: ICefMenuModel); extdecl;
begin
  {$define handleExceptionFuncName :='GetSubMenuAt'}
  handleExceptionBegin
  Result := AObj.GetSubMenuAt(index);
  handleExceptionEnd
end;

//function
function CefMenuModel_IsVisible(AObj: ICefMenuModel; commandId: Integer): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='IsVisible'}
  handleExceptionBegin
  Result := AObj.IsVisible(commandId);
  handleExceptionEnd
end;

//function
function CefMenuModel_IsVisibleAt(AObj: ICefMenuModel; index: NativeUInt): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='IsVisibleAt'}
  handleExceptionBegin
  Result := AObj.isVisibleAt(index);
  handleExceptionEnd
end;

//function
function CefMenuModel_SetVisible(AObj: ICefMenuModel; commandId: Integer; visible: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='SetVisible'}
  handleExceptionBegin
  Result := AObj.SetVisible(commandId, visible);
  handleExceptionEnd
end;

//function
function CefMenuModel_SetVisibleAt(AObj: ICefMenuModel; index: NativeUInt; visible: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='SetVisibleAt'}
  handleExceptionBegin
  Result := AObj.SetVisibleAt(index, visible);
  handleExceptionEnd
end;

//function
function CefMenuModel_IsEnabled(AObj: ICefMenuModel; commandId: Integer): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='IsEnabled'}
  handleExceptionBegin
  Result := AObj.IsEnabled(commandId);
  handleExceptionEnd
end;

//function
function CefMenuModel_IsEnabledAt(AObj: ICefMenuModel; index: NativeUInt): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='IsEnabledAt'}
  handleExceptionBegin
  Result := AObj.IsEnabledAt(index);
  handleExceptionEnd
end;

//function
function CefMenuModel_SetEnabled(AObj: ICefMenuModel; commandId: Integer; enabled: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='SetEnabled'}
  handleExceptionBegin
  Result := AObj.SetEnabled(commandId, enabled);
  handleExceptionEnd
end;

//function
function CefMenuModel_SetEnabledAt(AObj: ICefMenuModel; index: NativeUInt; enabled: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='SetEnabledAt'}
  handleExceptionBegin
  Result := AObj.SetEnabledAt(index, enabled);
  handleExceptionEnd
end;

//function
function CefMenuModel_IsChecked(AObj: ICefMenuModel; commandId: Integer): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='IsChecked'}
  handleExceptionBegin
  Result := AObj.IsChecked(commandId);
  handleExceptionEnd
end;

//function
function CefMenuModel_IsCheckedAt(AObj: ICefMenuModel; index: NativeUInt): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='IsCheckedAt'}
  handleExceptionBegin
  Result := AObj.IsCheckedAt(index);
  handleExceptionEnd
end;

//function
function CefMenuModel_SetChecked(AObj: ICefMenuModel; commandId: Integer; checked: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='SetChecked'}
  handleExceptionBegin
  Result := AObj.setChecked(commandId, checked);
  handleExceptionEnd
end;

//function
function CefMenuModel_SetCheckedAt(AObj: ICefMenuModel; index: NativeUInt; checked: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='SetCheckedAt'}
  handleExceptionBegin
  Result := AObj.setCheckedAt(index, checked);
  handleExceptionEnd
end;

//function
function CefMenuModel_HasAccelerator(AObj: ICefMenuModel; commandId: Integer): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='HasAccelerator'}
  handleExceptionBegin
  Result := AObj.HasAccelerator(commandId);
  handleExceptionEnd
end;

//function
function CefMenuModel_HasAcceleratorAt(AObj: ICefMenuModel; index: NativeUInt): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='HasAcceleratorAt'}
  handleExceptionBegin
  Result := AObj.HasAcceleratorAt(index);
  handleExceptionEnd
end;

//function
function CefMenuModel_SetAccelerator(AObj: ICefMenuModel; commandId,  keyCode: Integer; shiftPressed,  ctrlPressed,  altPressed: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='SetAccelerator'}
  handleExceptionBegin
  Result := AObj.SetAccelerator(commandId,  keyCode, shiftPressed,  ctrlPressed,  altPressed);
  handleExceptionEnd
end;

//function
function CefMenuModel_SetAcceleratorAt(AObj: ICefMenuModel; index: NativeUInt; keyCode: Integer; shiftPressed,  ctrlPressed,  altPressed: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='SetAcceleratorAt'}
  handleExceptionBegin
  Result := AObj.SetAcceleratorAt(index, keyCode, shiftPressed,  ctrlPressed,  altPressed);
  handleExceptionEnd
end;

//function
function CefMenuModel_RemoveAccelerator(AObj: ICefMenuModel; commandId: Integer): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='RemoveAccelerator'}
  handleExceptionBegin
  Result := AObj.RemoveAccelerator(commandId);
  handleExceptionEnd
end;

//function
function CefMenuModel_RemoveAcceleratorAt(AObj: ICefMenuModel; index: NativeUInt): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='RemoveAcceleratorAt'}
  handleExceptionBegin
  Result := AObj.RemoveAcceleratorAt(index);
  handleExceptionEnd
end;

//function
function CefMenuModel_GetAccelerator(AObj: ICefMenuModel; commandId: Integer; out outKeyCode: Integer; out outShiftPressed,  outCtrlPressed,  outLtPressed: LongBool): LongBool; extdecl;
var
  RetoutKeyCode: Integer;
  RetoutShiftPressed: boolean;
  RetoutCtrlPressed: boolean;
  RetoutLtPressed: boolean;
begin
  {$define handleExceptionFuncName :='GetAccelerator'}
  handleExceptionBegin
  RetoutKeyCode := outKeyCode;
  RetoutShiftPressed := outShiftPressed;
  RetoutCtrlPressed := outCtrlPressed;
  RetoutLtPressed := outLtPressed;
  Result := AObj.GetAccelerator(commandId, RetoutKeyCode, RetoutShiftPressed, RetoutCtrlPressed, RetoutLtPressed);
  outKeyCode := RetoutKeyCode;
  outShiftPressed := LongBool(RetoutShiftPressed);
  outCtrlPressed := LongBool(RetoutCtrlPressed);
  outLtPressed := LongBool(RetoutLtPressed);
  handleExceptionEnd
end;

//function
function CefMenuModel_GetAcceleratorAt(AObj: ICefMenuModel; index: NativeUInt; out outKeyCode: Integer; out outShiftPressed,  outCtrlPressed,  outLtPressed: LongBool): LongBool; extdecl;
var
  RetoutKeyCode: Integer;
  RetoutShiftPressed: boolean;
  RetoutCtrlPressed: boolean;
  RetoutLtPressed: boolean;
begin
  {$define handleExceptionFuncName :='GetAcceleratorAt'}
  handleExceptionBegin
  RetoutKeyCode := outKeyCode;
  RetoutShiftPressed := outShiftPressed;
  RetoutCtrlPressed := outCtrlPressed;
  RetoutLtPressed := outLtPressed;
  Result := AObj.GetAcceleratorAt(index, RetoutKeyCode, RetoutShiftPressed, RetoutCtrlPressed, RetoutLtPressed);
  outKeyCode := RetoutKeyCode;
  outShiftPressed := LongBool(RetoutShiftPressed);
  outCtrlPressed := LongBool(RetoutCtrlPressed);
  outLtPressed := LongBool(RetoutLtPressed);
  handleExceptionEnd
end;

//function
function CefMenuModel_SetColor(AObj: ICefMenuModel; commandId: Integer; colorType: TCefMenuColorType; color: TCefColor): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='SetColor'}
  handleExceptionBegin
  Result := AObj.SetColor(commandId, colorType, color);
  handleExceptionEnd
end;

//function
function CefMenuModel_SetColorAt(AObj: ICefMenuModel; index: Integer; colorType: TCefMenuColorType; color: TCefColor): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='SetColorAt'}
  handleExceptionBegin
  Result := AObj.SetColorAt(index, colorType, color);
  handleExceptionEnd
end;

//function
function CefMenuModel_GetColor(AObj: ICefMenuModel; commandId: Integer; colorType: TCefMenuColorType; out outColor: TCefColor): LongBool; extdecl;
var
  RetoutColor: TCefColor;
begin
  {$define handleExceptionFuncName :='GetColor'}
  handleExceptionBegin
  RetoutColor := outColor;
  Result := AObj.GetColor(commandId, colorType, RetoutColor);
  outColor := RetoutColor;
  handleExceptionEnd
end;

//function
function CefMenuModel_GetColorAt(AObj: ICefMenuModel; index: Integer; colorType: TCefMenuColorType; out outColor: TCefColor): LongBool; extdecl;
var
  RetoutColor: TCefColor;
begin
  {$define handleExceptionFuncName :='GetColorAt'}
  handleExceptionBegin
  RetoutColor := outColor;
  Result := AObj.GetColorAt(index, colorType, RetoutColor);
  outColor := RetoutColor;
  handleExceptionEnd
end;

//function
function CefMenuModel_SetFontList(AObj: ICefMenuModel; commandId: Integer; const fontList: PChar): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='SetFontList'}
  handleExceptionBegin
  Result := AObj.SetFontList(commandId, fontList);
  handleExceptionEnd
end;

//function
function CefMenuModel_SetFontListAt(AObj: ICefMenuModel; index: Integer; const fontList: PChar): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='SetFontListAt'}
  handleExceptionBegin
  Result := AObj.SetFontListAt(index, fontList);
  handleExceptionEnd
end;


exports
  CefMenuModel_UnWrap,
  CefMenuModel_New,
  CefMenuModel_IsSubMenu,
  CefMenuModel_Clear,
  CefMenuModel_GetCount,
  CefMenuModel_AddSeparator,
  CefMenuModel_AddItem,
  CefMenuModel_AddCheckItem,
  CefMenuModel_AddRadioItem,
  CefMenuModel_AddSubMenu,
  CefMenuModel_InsertSeparatorAt,
  CefMenuModel_InsertItemAt,
  CefMenuModel_InsertCheckItemAt,
  CefMenuModel_InsertRadioItemAt,
  CefMenuModel_InsertSubMenuAt,
  CefMenuModel_Remove,
  CefMenuModel_RemoveAt,
  CefMenuModel_GetIndexOf,
  CefMenuModel_GetCommandIdAt,
  CefMenuModel_SetCommandIdAt,
  CefMenuModel_GetLabel,
  CefMenuModel_GetLabelAt,
  CefMenuModel_SetLabel,
  CefMenuModel_SetLabelAt,
  CefMenuModel_GetType,
  CefMenuModel_GetTypeAt,
  CefMenuModel_GetGroupId,
  CefMenuModel_GetGroupIdAt,
  CefMenuModel_SetGroupId,
  CefMenuModel_SetGroupIdAt,
  CefMenuModel_GetSubMenu,
  CefMenuModel_GetSubMenuAt,
  CefMenuModel_IsVisible,
  CefMenuModel_IsVisibleAt,
  CefMenuModel_SetVisible,
  CefMenuModel_SetVisibleAt,
  CefMenuModel_IsEnabled,
  CefMenuModel_IsEnabledAt,
  CefMenuModel_SetEnabled,
  CefMenuModel_SetEnabledAt,
  CefMenuModel_IsChecked,
  CefMenuModel_IsCheckedAt,
  CefMenuModel_SetChecked,
  CefMenuModel_SetCheckedAt,
  CefMenuModel_HasAccelerator,
  CefMenuModel_HasAcceleratorAt,
  CefMenuModel_SetAccelerator,
  CefMenuModel_SetAcceleratorAt,
  CefMenuModel_RemoveAccelerator,
  CefMenuModel_RemoveAcceleratorAt,
  CefMenuModel_GetAccelerator,
  CefMenuModel_GetAcceleratorAt,
  CefMenuModel_SetColor,
  CefMenuModel_SetColorAt,
  CefMenuModel_GetColor,
  CefMenuModel_GetColorAt,
  CefMenuModel_SetFontList,
  CefMenuModel_SetFontListAt;