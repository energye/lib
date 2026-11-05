// constructor
function TCustomTaskDialog_Create(AOwner: TComponent): TCustomTaskDialog; extdecl;
begin
  {$define handleExceptionID := 20500}
  handleExceptionBegin
  Result := TCustomTaskDialog.Create(AOwner);
  handleExceptionEnd
end;

// function
function TCustomTaskDialog_ButtonIDToModalResult(AObj: TCustomTaskDialog; const AButtonID: Integer): TModalResult; extdecl;
begin
  {$define handleExceptionID := 20501}
  handleExceptionBegin
  Result := AObj.ButtonIDToModalResult(AButtonID);
  handleExceptionEnd
end;

// function
function TCustomTaskDialog_ExecuteToBool(AObj: TCustomTaskDialog): LongBool; extdecl;
begin
  {$define handleExceptionID := 20502}
  handleExceptionBegin
  Result := AObj.Execute();
  handleExceptionEnd
end;

// function
function TCustomTaskDialog_ExecuteWithHWND(AObj: TCustomTaskDialog; ParentWnd: HWND): LongBool; extdecl;
begin
  {$define handleExceptionID := 20503}
  handleExceptionBegin
  Result := AObj.Execute(ParentWnd);
  handleExceptionEnd
end;

// property
function TCustomTaskDialog_Button(ASet: LongBool; AObj: TCustomTaskDialog; AValue: TTaskDialogButtonItem): TTaskDialogButtonItem; extdecl;
begin
  {$define handleExceptionID := 20504}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Button := AValue
  end else
    Result := AObj.Button;
  handleExceptionEnd
end;

// property
function TCustomTaskDialog_Buttons(ASet: LongBool; AObj: TCustomTaskDialog; AValue: TTaskDialogButtons): TTaskDialogButtons; extdecl;
begin
  {$define handleExceptionID := 20505}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Buttons := AValue
  end else
    Result := AObj.Buttons;
  handleExceptionEnd
end;

// property
procedure TCustomTaskDialog_Caption(ASet: LongBool; AObj: TCustomTaskDialog; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 20506}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Caption := AValue
  end else
    StringBufferCreate(AObj.Caption, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TCustomTaskDialog_CustomFooterIcon(ASet: LongBool; AObj: TCustomTaskDialog; AValue: TIcon): TIcon; extdecl;
begin
  {$define handleExceptionID := 20507}
  handleExceptionBegin
  if ASet then
  begin
    AObj.CustomFooterIcon := AValue
  end else
    Result := AObj.CustomFooterIcon;
  handleExceptionEnd
end;

// property
function TCustomTaskDialog_CustomMainIcon(ASet: LongBool; AObj: TCustomTaskDialog; AValue: TIcon): TIcon; extdecl;
begin
  {$define handleExceptionID := 20508}
  handleExceptionBegin
  if ASet then
  begin
    AObj.CustomMainIcon := AValue
  end else
    Result := AObj.CustomMainIcon;
  handleExceptionEnd
end;

// property
function TCustomTaskDialog_CommonButtons(ASet: LongBool; AObj: TCustomTaskDialog; AValue: TTaskDialogCommonButtons): TTaskDialogCommonButtons; extdecl;
begin
  {$define handleExceptionID := 20509}
  handleExceptionBegin
  if ASet then
  begin
    AObj.CommonButtons := AValue
  end else
    Result := AObj.CommonButtons;
  handleExceptionEnd
end;

// property
procedure TCustomTaskDialog_CollapseButtonCaption(ASet: LongBool; AObj: TCustomTaskDialog; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 20510}
  handleExceptionBegin
  if ASet then
  begin
    AObj.CollapseButtonCaption := AValue
  end else
    StringBufferCreate(AObj.CollapseButtonCaption, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TCustomTaskDialog_DefaultButton(ASet: LongBool; AObj: TCustomTaskDialog; AValue: TTaskDialogCommonButton): TTaskDialogCommonButton; extdecl;
begin
  {$define handleExceptionID := 20511}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DefaultButton := AValue
  end else
    Result := AObj.DefaultButton;
  handleExceptionEnd
end;

// property
procedure TCustomTaskDialog_ExpandButtonCaption(ASet: LongBool; AObj: TCustomTaskDialog; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 20512}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ExpandButtonCaption := AValue
  end else
    StringBufferCreate(AObj.ExpandButtonCaption, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TCustomTaskDialog_ExpandedText(ASet: LongBool; AObj: TCustomTaskDialog; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 20513}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ExpandedText := AValue
  end else
    StringBufferCreate(AObj.ExpandedText, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TCustomTaskDialog_Flags(ASet: LongBool; AObj: TCustomTaskDialog; AValue: TTaskDialogFlags): TTaskDialogFlags; extdecl;
begin
  {$define handleExceptionID := 20514}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Flags := AValue
  end else
    Result := AObj.Flags;
  handleExceptionEnd
end;

// property
function TCustomTaskDialog_FooterIcon(ASet: LongBool; AObj: TCustomTaskDialog; AValue: Dialogs.TTaskDialogIcon): Dialogs.TTaskDialogIcon; extdecl;
begin
  {$define handleExceptionID := 20515}
  handleExceptionBegin
  if ASet then
  begin
    AObj.FooterIcon := AValue
  end else
    Result := AObj.FooterIcon;
  handleExceptionEnd
end;

// property
procedure TCustomTaskDialog_FooterText(ASet: LongBool; AObj: TCustomTaskDialog; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 20516}
  handleExceptionBegin
  if ASet then
  begin
    AObj.FooterText := AValue
  end else
    StringBufferCreate(AObj.FooterText, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TCustomTaskDialog_MainIcon(ASet: LongBool; AObj: TCustomTaskDialog; AValue: Dialogs.TTaskDialogIcon): Dialogs.TTaskDialogIcon; extdecl;
begin
  {$define handleExceptionID := 20517}
  handleExceptionBegin
  if ASet then
  begin
    AObj.MainIcon := AValue
  end else
    Result := AObj.MainIcon;
  handleExceptionEnd
end;

// property
function TCustomTaskDialog_Handle(AObj: TCustomTaskDialog): THandle; extdecl;
begin
  {$define handleExceptionID := 20518}
  handleExceptionBegin
  Result := AObj.Handle;
  handleExceptionEnd
end;

// property
function TCustomTaskDialog_ModalResult(ASet: LongBool; AObj: TCustomTaskDialog; AValue: TModalResult): TModalResult; extdecl;
begin
  {$define handleExceptionID := 20519}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ModalResult := AValue
  end else
    Result := AObj.ModalResult;
  handleExceptionEnd
end;

// property
function TCustomTaskDialog_ProgressBar(ASet: LongBool; AObj: TCustomTaskDialog; AValue: TTaskDialogProgressBar): TTaskDialogProgressBar; extdecl;
begin
  {$define handleExceptionID := 20520}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ProgressBar := AValue
  end else
    Result := AObj.ProgressBar;
  handleExceptionEnd
end;

// property
function TCustomTaskDialog_QueryChoices(ASet: LongBool; AObj: TCustomTaskDialog; AValue: TStrings): TStrings; extdecl;
begin
  {$define handleExceptionID := 20521}
  handleExceptionBegin
  if ASet then
  begin
    AObj.QueryChoices := AValue
  end else
    Result := AObj.QueryChoices;
  handleExceptionEnd
end;

// property
function TCustomTaskDialog_QueryItemIndex(ASet: LongBool; AObj: TCustomTaskDialog; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 20522}
  handleExceptionBegin
  if ASet then
  begin
    AObj.QueryItemIndex := AValue
  end else
    Result := AObj.QueryItemIndex;
  handleExceptionEnd
end;

// property
procedure TCustomTaskDialog_QueryResult(ASet: LongBool; AObj: TCustomTaskDialog; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 20523}
  handleExceptionBegin
  if ASet then
  begin
    AObj.QueryResult := AValue
  end else
    StringBufferCreate(AObj.QueryResult, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TCustomTaskDialog_RadioButton(AObj: TCustomTaskDialog): TTaskDialogRadioButtonItem; extdecl;
begin
  {$define handleExceptionID := 20524}
  handleExceptionBegin
  Result := AObj.RadioButton;
  handleExceptionEnd
end;

// property
function TCustomTaskDialog_RadioButtons(ASet: LongBool; AObj: TCustomTaskDialog; AValue: TTaskDialogButtons): TTaskDialogButtons; extdecl;
begin
  {$define handleExceptionID := 20525}
  handleExceptionBegin
  if ASet then
  begin
    AObj.RadioButtons := AValue
  end else
    Result := AObj.RadioButtons;
  handleExceptionEnd
end;

// property
procedure TCustomTaskDialog_SimpleQuery(ASet: LongBool; AObj: TCustomTaskDialog; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 20526}
  handleExceptionBegin
  if ASet then
  begin
    AObj.SimpleQuery := AValue
  end else
    StringBufferCreate(AObj.SimpleQuery, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TCustomTaskDialog_SimpleQueryPasswordChar(ASet: LongBool; AObj: TCustomTaskDialog; AValue: Char): Char; extdecl;
begin
  {$define handleExceptionID := 20527}
  handleExceptionBegin
  if ASet then
  begin
    AObj.SimpleQueryPasswordChar := AValue
  end else
    Result := AObj.SimpleQueryPasswordChar;
  handleExceptionEnd
end;

// property
procedure TCustomTaskDialog_Text(ASet: LongBool; AObj: TCustomTaskDialog; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 20528}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Text := AValue
  end else
    StringBufferCreate(AObj.Text, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TCustomTaskDialog_Title(ASet: LongBool; AObj: TCustomTaskDialog; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 20529}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Title := AValue
  end else
    StringBufferCreate(AObj.Title, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TCustomTaskDialog_VerificationText(ASet: LongBool; AObj: TCustomTaskDialog; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 20530}
  handleExceptionBegin
  if ASet then
  begin
    AObj.VerificationText := AValue
  end else
    StringBufferCreate(AObj.VerificationText, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TCustomTaskDialog_Width(ASet: LongBool; AObj: TCustomTaskDialog; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 20531}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Width := AValue
  end else
    Result := AObj.Width;
  handleExceptionEnd
end;

// property
procedure TCustomTaskDialog_URL(AObj: TCustomTaskDialog; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 20532}
  handleExceptionBegin
  StringBufferCreate(AObj.URL, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TCustomTaskDialog_Expanded(AObj: TCustomTaskDialog): LongBool; extdecl;
begin
  {$define handleExceptionID := 20533}
  handleExceptionBegin
  Result := AObj.Expanded;
  handleExceptionEnd
end;

// event
procedure TCustomTaskDialog_OnButtonClicked(AObj: TCustomTaskDialog; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTTaskDlgClickEvent}
  {$DEFINE EventName := OnButtonClicked}
  LCLEventMethodCode
end;

// event
procedure TCustomTaskDialog_OnDialogConstructed(AObj: TCustomTaskDialog; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnDialogConstructed}
  LCLEventMethodCode
end;

// event
procedure TCustomTaskDialog_OnDialogCreated(AObj: TCustomTaskDialog; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnDialogCreated}
  LCLEventMethodCode
end;

// event
procedure TCustomTaskDialog_OnDialogDestroyed(AObj: TCustomTaskDialog; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnDialogDestroyed}
  LCLEventMethodCode
end;

// event
procedure TCustomTaskDialog_OnVerificationClicked(AObj: TCustomTaskDialog; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnVerificationClicked}
  LCLEventMethodCode
end;

// event
procedure TCustomTaskDialog_OnExpanded(AObj: TCustomTaskDialog; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnExpanded}
  LCLEventMethodCode
end;

// event
procedure TCustomTaskDialog_OnTimer(AObj: TCustomTaskDialog; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTTaskDlgTimerEvent}
  {$DEFINE EventName := OnTimer}
  LCLEventMethodCode
end;

// event
procedure TCustomTaskDialog_OnRadioButtonClicked(AObj: TCustomTaskDialog; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnRadioButtonClicked}
  LCLEventMethodCode
end;

// event
procedure TCustomTaskDialog_OnHyperlinkClicked(AObj: TCustomTaskDialog; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnHyperlinkClicked}
  LCLEventMethodCode
end;

// event
procedure TCustomTaskDialog_OnNavigated(AObj: TCustomTaskDialog; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnNavigated}
  LCLEventMethodCode
end;

// event
procedure TCustomTaskDialog_OnHelp(AObj: TCustomTaskDialog; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnHelp}
  LCLEventMethodCode
end;

function TCustomTaskDialog_TClass(): TClass; extdecl;
begin
  Result := TCustomTaskDialog;
end;

exports
  TCustomTaskDialog_Create,
  TCustomTaskDialog_ButtonIDToModalResult,
  TCustomTaskDialog_ExecuteToBool,
  TCustomTaskDialog_ExecuteWithHWND,
  TCustomTaskDialog_Button,
  TCustomTaskDialog_Buttons,
  TCustomTaskDialog_Caption,
  TCustomTaskDialog_CustomFooterIcon,
  TCustomTaskDialog_CustomMainIcon,
  TCustomTaskDialog_CommonButtons,
  TCustomTaskDialog_CollapseButtonCaption,
  TCustomTaskDialog_DefaultButton,
  TCustomTaskDialog_ExpandButtonCaption,
  TCustomTaskDialog_ExpandedText,
  TCustomTaskDialog_Flags,
  TCustomTaskDialog_FooterIcon,
  TCustomTaskDialog_FooterText,
  TCustomTaskDialog_MainIcon,
  TCustomTaskDialog_Handle,
  TCustomTaskDialog_ModalResult,
  TCustomTaskDialog_ProgressBar,
  TCustomTaskDialog_QueryChoices,
  TCustomTaskDialog_QueryItemIndex,
  TCustomTaskDialog_QueryResult,
  TCustomTaskDialog_RadioButton,
  TCustomTaskDialog_RadioButtons,
  TCustomTaskDialog_SimpleQuery,
  TCustomTaskDialog_SimpleQueryPasswordChar,
  TCustomTaskDialog_Text,
  TCustomTaskDialog_Title,
  TCustomTaskDialog_VerificationText,
  TCustomTaskDialog_Width,
  TCustomTaskDialog_URL,
  TCustomTaskDialog_Expanded,
  TCustomTaskDialog_OnButtonClicked,
  TCustomTaskDialog_OnDialogConstructed,
  TCustomTaskDialog_OnDialogCreated,
  TCustomTaskDialog_OnDialogDestroyed,
  TCustomTaskDialog_OnVerificationClicked,
  TCustomTaskDialog_OnExpanded,
  TCustomTaskDialog_OnTimer,
  TCustomTaskDialog_OnRadioButtonClicked,
  TCustomTaskDialog_OnHyperlinkClicked,
  TCustomTaskDialog_OnNavigated,
  TCustomTaskDialog_OnHelp,
  TCustomTaskDialog_TClass;