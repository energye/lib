// constructor
function TCustomAction_Create(AOwner: TComponent): TCustomAction; extdecl;
begin
  {$define handleExceptionID := 15500}
  handleExceptionBegin
  Result := TCustomAction.Create(AOwner);
  handleExceptionEnd
end;

// function
function TCustomAction_DoHint(AObj: TCustomAction; var HintStr: PChar): LongBool; extdecl;
var
  OutHintStr: string;
begin
  {$define handleExceptionID := 15501}
  handleExceptionBegin
  OutHintStr := HintStr;
  Result := AObj.DoHint(OutHintStr);
  HintStr := ToPChar(OutHintStr);
  handleExceptionEnd
end;

// property
function TCustomAction_AutoCheck(ASet: LongBool; AObj: TCustomAction; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 15502}
  handleExceptionBegin
  if ASet then
  begin
    AObj.AutoCheck := AValue
  end else
    Result := AObj.AutoCheck;
  handleExceptionEnd
end;

// property
procedure TCustomAction_Caption(ASet: LongBool; AObj: TCustomAction; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 15503}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Caption := AValue
  end else
    StringBufferCreate(AObj.Caption, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TCustomAction_Checked(ASet: LongBool; AObj: TCustomAction; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 15504}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Checked := AValue
  end else
    Result := AObj.Checked;
  handleExceptionEnd
end;

// property
function TCustomAction_Grayed(ASet: LongBool; AObj: TCustomAction; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 15505}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Grayed := AValue
  end else
    Result := AObj.Grayed;
  handleExceptionEnd
end;

// property
function TCustomAction_DisableIfNoHandler(ASet: LongBool; AObj: TCustomAction; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 15506}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DisableIfNoHandler := AValue
  end else
    Result := AObj.DisableIfNoHandler;
  handleExceptionEnd
end;

// property
function TCustomAction_Enabled(ASet: LongBool; AObj: TCustomAction; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 15507}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Enabled := AValue
  end else
    Result := AObj.Enabled;
  handleExceptionEnd
end;

// property
function TCustomAction_GroupIndex(ASet: LongBool; AObj: TCustomAction; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 15508}
  handleExceptionBegin
  if ASet then
  begin
    AObj.GroupIndex := AValue
  end else
    Result := AObj.GroupIndex;
  handleExceptionEnd
end;

// property
function TCustomAction_HelpContext(ASet: LongBool; AObj: TCustomAction; AValue: THelpContext): THelpContext; extdecl;
begin
  {$define handleExceptionID := 15509}
  handleExceptionBegin
  if ASet then
  begin
    AObj.HelpContext := AValue
  end else
    Result := AObj.HelpContext;
  handleExceptionEnd
end;

// property
procedure TCustomAction_HelpKeyword(ASet: LongBool; AObj: TCustomAction; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 15510}
  handleExceptionBegin
  if ASet then
  begin
    AObj.HelpKeyword := AValue
  end else
    StringBufferCreate(AObj.HelpKeyword, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TCustomAction_HelpType(ASet: LongBool; AObj: TCustomAction; AValue: THelpType): THelpType; extdecl;
begin
  {$define handleExceptionID := 15511}
  handleExceptionBegin
  if ASet then
  begin
    AObj.HelpType := AValue
  end else
    Result := AObj.HelpType;
  handleExceptionEnd
end;

// property
procedure TCustomAction_Hint(ASet: LongBool; AObj: TCustomAction; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 15512}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Hint := AValue
  end else
    StringBufferCreate(AObj.Hint, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TCustomAction_ImageIndex(ASet: LongBool; AObj: TCustomAction; AValue: TImageIndex): TImageIndex; extdecl;
begin
  {$define handleExceptionID := 15513}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ImageIndex := AValue
  end else
    Result := AObj.ImageIndex;
  handleExceptionEnd
end;

// property
function TCustomAction_SecondaryShortCuts(ASet: LongBool; AObj: TCustomAction; AValue: TShortCutList): TShortCutList; extdecl;
begin
  {$define handleExceptionID := 15514}
  handleExceptionBegin
  if ASet then
  begin
    AObj.SecondaryShortCuts := AValue
  end else
    Result := AObj.SecondaryShortCuts;
  handleExceptionEnd
end;

// property
function TCustomAction_ShortCut(ASet: LongBool; AObj: TCustomAction; AValue: TShortCut): TShortCut; extdecl;
begin
  {$define handleExceptionID := 15515}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ShortCut := AValue
  end else
    Result := AObj.ShortCut;
  handleExceptionEnd
end;

// property
function TCustomAction_Visible(ASet: LongBool; AObj: TCustomAction; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 15516}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Visible := AValue
  end else
    Result := AObj.Visible;
  handleExceptionEnd
end;

// event
procedure TCustomAction_OnHint(AObj: TCustomAction; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTHintEvent}
  {$DEFINE EventName := OnHint}
  LCLEventMethodCode
end;

function TCustomAction_TClass(): TClass; extdecl;
begin
  Result := TCustomAction;
end;

exports
  TCustomAction_Create,
  TCustomAction_DoHint,
  TCustomAction_AutoCheck,
  TCustomAction_Caption,
  TCustomAction_Checked,
  TCustomAction_Grayed,
  TCustomAction_DisableIfNoHandler,
  TCustomAction_Enabled,
  TCustomAction_GroupIndex,
  TCustomAction_HelpContext,
  TCustomAction_HelpKeyword,
  TCustomAction_HelpType,
  TCustomAction_Hint,
  TCustomAction_ImageIndex,
  TCustomAction_SecondaryShortCuts,
  TCustomAction_ShortCut,
  TCustomAction_Visible,
  TCustomAction_OnHint,
  TCustomAction_TClass;