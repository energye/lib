
//constructor
function CustomTaskDialog_Create(AOwner: TComponent): TCustomTaskDialog; extdecl;
begin
  handleExceptionBegin
  Result := TCustomTaskDialog.Create(AOwner);
  handleExceptionEnd
end;

//property
function CustomTaskDialog_Button(AIsSet: LongBool; AObj: TCustomTaskDialog; AValue: TTaskDialogButtonItem): TTaskDialogButtonItem; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Button := AValue;
  end else
    Result := AObj.Button;
  handleExceptionEnd
end;

//property
function CustomTaskDialog_Buttons(AIsSet: LongBool; AObj: TCustomTaskDialog; AValue: TTaskDialogButtons): TTaskDialogButtons; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Buttons := AValue;
  end else
    Result := AObj.Buttons;
  handleExceptionEnd
end;

//property
function CustomTaskDialog_Caption(AIsSet: LongBool; AObj: TCustomTaskDialog; AValue: PChar): PChar; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Caption := AValue;
  end else
    Result := ToPChar(AObj.Caption);
  handleExceptionEnd
end;

//property
function CustomTaskDialog_CommonButtons(AIsSet: LongBool; AObj: TCustomTaskDialog; AValue: TTaskDialogCommonButtons): TTaskDialogCommonButtons; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.CommonButtons := AValue;
  end else
    Result := AObj.CommonButtons;
  handleExceptionEnd
end;

//property
function CustomTaskDialog_DefaultButton(AIsSet: LongBool; AObj: TCustomTaskDialog; AValue: TTaskDialogCommonButton): TTaskDialogCommonButton; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DefaultButton := AValue;
  end else
    Result := AObj.DefaultButton;
  handleExceptionEnd
end;

//property
function CustomTaskDialog_ExpandButtonCaption(AIsSet: LongBool; AObj: TCustomTaskDialog; AValue: PChar): PChar; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ExpandButtonCaption := AValue;
  end else
    Result := ToPChar(AObj.ExpandButtonCaption);
  handleExceptionEnd
end;

//property
function CustomTaskDialog_ExpandedText(AIsSet: LongBool; AObj: TCustomTaskDialog; AValue: PChar): PChar; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ExpandedText := AValue;
  end else
    Result := ToPChar(AObj.ExpandedText);
  handleExceptionEnd
end;

//property
function CustomTaskDialog_Flags(AIsSet: LongBool; AObj: TCustomTaskDialog; AValue: TTaskDialogFlags): TTaskDialogFlags; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Flags := AValue;
  end else
    Result := AObj.Flags;
  handleExceptionEnd
end;

//property
function CustomTaskDialog_FooterIcon(AIsSet: LongBool; AObj: TCustomTaskDialog; AValue: TTaskDialogIcon): TTaskDialogIcon; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.FooterIcon := AValue;
  end else
    Result := AObj.FooterIcon;
  handleExceptionEnd
end;

//property
function CustomTaskDialog_FooterText(AIsSet: LongBool; AObj: TCustomTaskDialog; AValue: PChar): PChar; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.FooterText := AValue;
  end else
    Result := ToPChar(AObj.FooterText);
  handleExceptionEnd
end;

//property
function CustomTaskDialog_MainIcon(AIsSet: LongBool; AObj: TCustomTaskDialog; AValue: TTaskDialogIcon): TTaskDialogIcon; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.MainIcon := AValue;
  end else
    Result := AObj.MainIcon;
  handleExceptionEnd
end;

//property
function CustomTaskDialog_ModalResult(AIsSet: LongBool; AObj: TCustomTaskDialog; AValue: TModalResult): TModalResult; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ModalResult := AValue;
  end else
    Result := AObj.ModalResult;
  handleExceptionEnd
end;

//property
function CustomTaskDialog_RadioButton(AObj: TCustomTaskDialog): TTaskDialogRadioButtonItem; extdecl;
begin
  handleExceptionBegin
  Result := AObj.RadioButton;
  handleExceptionEnd
end;

//property
function CustomTaskDialog_RadioButtons(AIsSet: LongBool; AObj: TCustomTaskDialog; AValue: TTaskDialogButtons): TTaskDialogButtons; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.RadioButtons := AValue;
  end else
    Result := AObj.RadioButtons;
  handleExceptionEnd
end;

//property
function CustomTaskDialog_Text(AIsSet: LongBool; AObj: TCustomTaskDialog; AValue: PChar): PChar; extdecl;
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
function CustomTaskDialog_Title(AIsSet: LongBool; AObj: TCustomTaskDialog; AValue: PChar): PChar; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Title := AValue;
  end else
    Result := ToPChar(AObj.Title);
  handleExceptionEnd
end;

//property
function CustomTaskDialog_VerificationText(AIsSet: LongBool; AObj: TCustomTaskDialog; AValue: PChar): PChar; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.VerificationText := AValue;
  end else
    Result := ToPChar(AObj.VerificationText);
  handleExceptionEnd
end;

//property
function CustomTaskDialog_Width(AIsSet: LongBool; AObj: TCustomTaskDialog; AValue: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Width := AValue;
  end else
    Result := AObj.Width;
  handleExceptionEnd
end;

//function
function CustomTaskDialog_Execute(AObj: TCustomTaskDialog): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Execute();
  handleExceptionEnd
end;

//function
function CustomTaskDialog_Execute1(AObj: TCustomTaskDialog; ParentWnd: HWND): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Execute(ParentWnd);
  handleExceptionEnd
end;

//function
function CustomTaskDialog_Class(): TClass; extdecl;
begin
  Result := TCustomTaskDialog;
end;

//property event
procedure CustomTaskDialog_SetOnButtonClicked(AObj: TCustomTaskDialog; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTTaskDlgClickEvent}
  {$DEFINE EventName := OnButtonClicked}
  EventMethodCode
end;


exports
  CustomTaskDialog_Create,
  CustomTaskDialog_Button,
  CustomTaskDialog_Buttons,
  CustomTaskDialog_Caption,
  CustomTaskDialog_CommonButtons,
  CustomTaskDialog_DefaultButton,
  CustomTaskDialog_ExpandButtonCaption,
  CustomTaskDialog_ExpandedText,
  CustomTaskDialog_Flags,
  CustomTaskDialog_FooterIcon,
  CustomTaskDialog_FooterText,
  CustomTaskDialog_MainIcon,
  CustomTaskDialog_ModalResult,
  CustomTaskDialog_RadioButton,
  CustomTaskDialog_RadioButtons,
  CustomTaskDialog_Text,
  CustomTaskDialog_Title,
  CustomTaskDialog_VerificationText,
  CustomTaskDialog_Width,
  CustomTaskDialog_Execute,
  CustomTaskDialog_Execute1,
  CustomTaskDialog_Class,
  CustomTaskDialog_SetOnButtonClicked;