
//constructor
function CustomAction_Create(AOwner: TComponent): TCustomAction; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TCustomAction.Create(AOwner);
  handleExceptionEnd
end;

//property
function CustomAction_AutoCheck(AIsSet: LongBool; AObj: TCustomAction; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='AutoCheck'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.AutoCheck := AValue;
  end else
    Result := AObj.AutoCheck;
  handleExceptionEnd
end;

//property
function CustomAction_Caption(AIsSet: LongBool; AObj: TCustomAction; AValue: PChar): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='Caption'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Caption := AValue;
  end else
    Result := ToPChar(AObj.Caption);
  handleExceptionEnd
end;

//property
function CustomAction_Checked(AIsSet: LongBool; AObj: TCustomAction; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='Checked'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Checked := AValue;
  end else
    Result := AObj.Checked;
  handleExceptionEnd
end;

//property
function CustomAction_Grayed(AIsSet: LongBool; AObj: TCustomAction; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='Grayed'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Grayed := AValue;
  end else
    Result := AObj.Grayed;
  handleExceptionEnd
end;

//property
function CustomAction_DisableIfNoHandler(AIsSet: LongBool; AObj: TCustomAction; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='DisableIfNoHandler'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DisableIfNoHandler := AValue;
  end else
    Result := AObj.DisableIfNoHandler;
  handleExceptionEnd
end;

//property
function CustomAction_Enabled(AIsSet: LongBool; AObj: TCustomAction; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='Enabled'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Enabled := AValue;
  end else
    Result := AObj.Enabled;
  handleExceptionEnd
end;

//property
function CustomAction_GroupIndex(AIsSet: LongBool; AObj: TCustomAction; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='GroupIndex'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.GroupIndex := AValue;
  end else
    Result := AObj.GroupIndex;
  handleExceptionEnd
end;

//property
function CustomAction_HelpContext(AIsSet: LongBool; AObj: TCustomAction; AValue: THelpContext): THelpContext; extdecl;
begin
  {$define handleExceptionFuncName :='HelpContext'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.HelpContext := AValue;
  end else
    Result := AObj.HelpContext;
  handleExceptionEnd
end;

//property
function CustomAction_HelpKeyword(AIsSet: LongBool; AObj: TCustomAction; AValue: PChar): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='HelpKeyword'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.HelpKeyword := AValue;
  end else
    Result := ToPChar(AObj.HelpKeyword);
  handleExceptionEnd
end;

//property
function CustomAction_HelpType(AIsSet: LongBool; AObj: TCustomAction; AValue: THelpType): THelpType; extdecl;
begin
  {$define handleExceptionFuncName :='HelpType'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.HelpType := AValue;
  end else
    Result := AObj.HelpType;
  handleExceptionEnd
end;

//property
function CustomAction_Hint(AIsSet: LongBool; AObj: TCustomAction; AValue: PChar): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='Hint'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Hint := AValue;
  end else
    Result := ToPChar(AObj.Hint);
  handleExceptionEnd
end;

//property
function CustomAction_ImageIndex(AIsSet: LongBool; AObj: TCustomAction; AValue: TImageIndex): TImageIndex; extdecl;
begin
  {$define handleExceptionFuncName :='ImageIndex'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ImageIndex := AValue;
  end else
    Result := AObj.ImageIndex;
  handleExceptionEnd
end;

//property
function CustomAction_SecondaryShortCuts(AIsSet: LongBool; AObj: TCustomAction; AValue: TShortCutList): TShortCutList; extdecl;
begin
  {$define handleExceptionFuncName :='SecondaryShortCuts'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.SecondaryShortCuts := AValue;
  end else
    Result := AObj.SecondaryShortCuts;
  handleExceptionEnd
end;

//property
function CustomAction_ShortCut(AIsSet: LongBool; AObj: TCustomAction; AValue: TShortCut): TShortCut; extdecl;
begin
  {$define handleExceptionFuncName :='ShortCut'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ShortCut := AValue;
  end else
    Result := AObj.ShortCut;
  handleExceptionEnd
end;

//property
function CustomAction_Visible(AIsSet: LongBool; AObj: TCustomAction; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='Visible'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Visible := AValue;
  end else
    Result := AObj.Visible;
  handleExceptionEnd
end;

//function
function CustomAction_Class(): TClass; extdecl;
begin
  Result := TCustomAction;
end;

//property event
procedure CustomAction_SetOnHint(AObj: TCustomAction; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTHintEvent}
  {$DEFINE EventName := OnHint}
  EventMethodCode
end;


exports
  CustomAction_Create,
  CustomAction_AutoCheck,
  CustomAction_Caption,
  CustomAction_Checked,
  CustomAction_Grayed,
  CustomAction_DisableIfNoHandler,
  CustomAction_Enabled,
  CustomAction_GroupIndex,
  CustomAction_HelpContext,
  CustomAction_HelpKeyword,
  CustomAction_HelpType,
  CustomAction_Hint,
  CustomAction_ImageIndex,
  CustomAction_SecondaryShortCuts,
  CustomAction_ShortCut,
  CustomAction_Visible,
  CustomAction_Class,
  CustomAction_SetOnHint;