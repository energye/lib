// constructor
function TApplication_Create(AOwner: TComponent): TApplication; extdecl;
begin
  {$define handleExceptionID := 500}
  handleExceptionBegin
  Result := TApplication.Create(AOwner);
  handleExceptionEnd
end;

// function
function TApplication_GetControlAtMouse(AObj: TApplication): TControl; extdecl;
begin
  {$define handleExceptionID := 501}
  handleExceptionBegin
  Result := AObj.GetControlAtMouse();
  handleExceptionEnd
end;

// function
function TApplication_GetControlAtPos(AObj: TApplication; var P: TPoint): TControl; extdecl;
begin
  {$define handleExceptionID := 502}
  handleExceptionBegin
  Result := AObj.GetControlAtPos(P);
  handleExceptionEnd
end;

// function
function TApplication_BigIconHandle(AObj: TApplication): HIcon; extdecl;
begin
  {$define handleExceptionID := 503}
  handleExceptionBegin
  Result := AObj.BigIconHandle();
  handleExceptionEnd
end;

// function
function TApplication_SmallIconHandle(AObj: TApplication): HIcon; extdecl;
begin
  {$define handleExceptionID := 504}
  handleExceptionBegin
  Result := AObj.SmallIconHandle();
  handleExceptionEnd
end;

// function
function TApplication_HelpCommand(AObj: TApplication; Command: Word; Data: PtrInt): LongBool; extdecl;
begin
  {$define handleExceptionID := 505}
  handleExceptionBegin
  Result := AObj.HelpCommand(Command, Data);
  handleExceptionEnd
end;

// function
function TApplication_HelpContext(AObj: TApplication; Context: THelpContext): LongBool; extdecl;
begin
  {$define handleExceptionID := 506}
  handleExceptionBegin
  Result := AObj.HelpContext(Context);
  handleExceptionEnd
end;

// function
function TApplication_HelpKeyword(AObj: TApplication; const Keyword: PChar): LongBool; extdecl;
begin
  {$define handleExceptionID := 507}
  handleExceptionBegin
  Result := AObj.HelpKeyword(Keyword);
  handleExceptionEnd
end;

// function
function TApplication_HelpShowTableOfContents(AObj: TApplication): LongBool; extdecl;
begin
  {$define handleExceptionID := 508}
  handleExceptionBegin
  Result := AObj.HelpShowTableOfContents();
  handleExceptionEnd
end;

// function
function TApplication_IsWaiting(AObj: TApplication): LongBool; extdecl;
begin
  {$define handleExceptionID := 509}
  handleExceptionBegin
  Result := AObj.IsWaiting();
  handleExceptionEnd
end;

// function
function TApplication_MessageBox(AObj: TApplication; Text: PChar; Caption: PChar; Flags: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 510}
  handleExceptionBegin
  Result := AObj.MessageBox(Text, Caption, Flags);
  handleExceptionEnd
end;

// function
function TApplication_IsShortcut(AObj: TApplication; var Message: TLMKeyPtr): LongBool; extdecl;
var
  OutMessage: TLMKey;
begin
  {$define handleExceptionID := 511}
  handleExceptionBegin
  OutMessage := TLMKeyToPas(Message);
  Result := AObj.IsShortcut(OutMessage);
  Message := TLMKeyToGo(OutMessage);
  handleExceptionEnd
end;

// function
function TApplication_IsRightToLeft(AObj: TApplication): LongBool; extdecl;
begin
  {$define handleExceptionID := 512}
  handleExceptionBegin
  Result := AObj.IsRightToLeft();
  handleExceptionEnd
end;

// function
function TApplication_IsRTLLang(AObj: TApplication; const ALang: PChar): LongBool; extdecl;
begin
  {$define handleExceptionID := 513}
  handleExceptionBegin
  Result := AObj.IsRTLLang(ALang);
  handleExceptionEnd
end;

// function
function TApplication_Direction(AObj: TApplication; const ALang: PChar): TBiDiMode; extdecl;
begin
  {$define handleExceptionID := 514}
  handleExceptionBegin
  Result := AObj.Direction(ALang);
  handleExceptionEnd
end;

// procedure
procedure TApplication_ActivateHint(AObj: TApplication; var CursorPos: TPoint; CheckHintControlChange: LongBool); extdecl;
begin
  {$define handleExceptionID := 515}
  handleExceptionBegin
  AObj.ActivateHint(CursorPos, CheckHintControlChange);
  handleExceptionEnd
end;

// procedure
procedure TApplication_ControlDestroyed(AObj: TApplication; AControl: TControl); extdecl;
begin
  {$define handleExceptionID := 516}
  handleExceptionBegin
  AObj.ControlDestroyed(AControl);
  handleExceptionEnd
end;

// procedure
procedure TApplication_BringToFront(AObj: TApplication); extdecl;
begin
  {$define handleExceptionID := 517}
  handleExceptionBegin
  AObj.BringToFront();
  handleExceptionEnd
end;

// procedure
procedure TApplication_CreateForm(AObj: TApplication; InstanceClass: TComponentClass; var Reference: Pointer); extdecl;
var
  OutReference: PPointer;
begin
  {$define handleExceptionID := 518}
  handleExceptionBegin
  AObj.CreateForm(InstanceClass, OutReference);
  Reference := OutReference;
  handleExceptionEnd
end;

// procedure
procedure TApplication_UpdateMainForm(AObj: TApplication; AForm: TForm); extdecl;
begin
  {$define handleExceptionID := 519}
  handleExceptionBegin
  AObj.UpdateMainForm(AForm);
  handleExceptionEnd
end;

// procedure
procedure TApplication_RemoveAsyncCalls(AObj: TApplication; const AnObject: TObject); extdecl;
begin
  {$define handleExceptionID := 520}
  handleExceptionBegin
  AObj.RemoveAsyncCalls(AnObject);
  handleExceptionEnd
end;

// procedure
procedure TApplication_ReleaseComponent(AObj: TApplication; AComponent: TComponent); extdecl;
begin
  {$define handleExceptionID := 521}
  handleExceptionBegin
  AObj.ReleaseComponent(AComponent);
  handleExceptionEnd
end;

// procedure
procedure TApplication_HandleMessage(AObj: TApplication); extdecl;
begin
  {$define handleExceptionID := 522}
  handleExceptionBegin
  AObj.HandleMessage();
  handleExceptionEnd
end;

// procedure
procedure TApplication_ShowHelpForObject(AObj: TApplication; Sender: TObject); extdecl;
begin
  {$define handleExceptionID := 523}
  handleExceptionBegin
  AObj.ShowHelpForObject(Sender);
  handleExceptionEnd
end;

// procedure
procedure TApplication_RemoveStayOnTop(AObj: TApplication; const ASystemTopAlso: LongBool); extdecl;
begin
  {$define handleExceptionID := 524}
  handleExceptionBegin
  AObj.RemoveStayOnTop(ASystemTopAlso);
  handleExceptionEnd
end;

// procedure
procedure TApplication_RestoreStayOnTop(AObj: TApplication; const ASystemTopAlso: LongBool); extdecl;
begin
  {$define handleExceptionID := 525}
  handleExceptionBegin
  AObj.RestoreStayOnTop(ASystemTopAlso);
  handleExceptionEnd
end;

// procedure
procedure TApplication_CancelHint(AObj: TApplication); extdecl;
begin
  {$define handleExceptionID := 526}
  handleExceptionBegin
  AObj.CancelHint();
  handleExceptionEnd
end;

// procedure
procedure TApplication_HideHint(AObj: TApplication); extdecl;
begin
  {$define handleExceptionID := 527}
  handleExceptionBegin
  AObj.HideHint();
  handleExceptionEnd
end;

// procedure
procedure TApplication_HintMouseMessage(AObj: TApplication; Control: TControl; var AMessage: TLMessage); extdecl;
var
  OutAMessage: TLMessage;
begin
  {$define handleExceptionID := 528}
  handleExceptionBegin
  OutAMessage := AMessage;
  AObj.HintMouseMessage(Control, OutAMessage);
  AMessage := OutAMessage;
  handleExceptionEnd
end;

// procedure
procedure TApplication_Minimize(AObj: TApplication); extdecl;
begin
  {$define handleExceptionID := 529}
  handleExceptionBegin
  AObj.Minimize();
  handleExceptionEnd
end;

// procedure
procedure TApplication_ModalStarted(AObj: TApplication); extdecl;
begin
  {$define handleExceptionID := 530}
  handleExceptionBegin
  AObj.ModalStarted();
  handleExceptionEnd
end;

// procedure
procedure TApplication_ModalFinished(AObj: TApplication); extdecl;
begin
  {$define handleExceptionID := 531}
  handleExceptionBegin
  AObj.ModalFinished();
  handleExceptionEnd
end;

// procedure
procedure TApplication_Restore(AObj: TApplication); extdecl;
begin
  {$define handleExceptionID := 532}
  handleExceptionBegin
  AObj.Restore();
  handleExceptionEnd
end;

// procedure
procedure TApplication_Notification(AObj: TApplication; AComponent: TComponent; Operation: TOperation); extdecl;
begin
  {$define handleExceptionID := 533}
  handleExceptionBegin
  AObj.Notification(AComponent, Operation);
  handleExceptionEnd
end;

// procedure
procedure TApplication_ProcessMessages(AObj: TApplication); extdecl;
begin
  {$define handleExceptionID := 534}
  handleExceptionBegin
  AObj.ProcessMessages();
  handleExceptionEnd
end;

// procedure
procedure TApplication_Idle(AObj: TApplication; Wait: LongBool); extdecl;
begin
  {$define handleExceptionID := 535}
  handleExceptionBegin
  AObj.Idle(Wait);
  handleExceptionEnd
end;

// procedure
procedure TApplication_Run(AObj: TApplication); extdecl;
begin
  {$define handleExceptionID := 536}
  handleExceptionBegin
  AObj.Run();
  handleExceptionEnd
end;

// procedure
procedure TApplication_DisableIdleHandler(AObj: TApplication); extdecl;
begin
  {$define handleExceptionID := 537}
  handleExceptionBegin
  AObj.DisableIdleHandler();
  handleExceptionEnd
end;

// procedure
procedure TApplication_EnableIdleHandler(AObj: TApplication); extdecl;
begin
  {$define handleExceptionID := 538}
  handleExceptionBegin
  AObj.EnableIdleHandler();
  handleExceptionEnd
end;

// procedure
procedure TApplication_NotifyUserInputHandler(AObj: TApplication; Sender: TObject; Msg: Cardinal); extdecl;
begin
  {$define handleExceptionID := 539}
  handleExceptionBegin
  AObj.NotifyUserInputHandler(Sender, Msg);
  handleExceptionEnd
end;

// procedure
procedure TApplication_NotifyKeyDownBeforeHandler(AObj: TApplication; Sender: TObject; var Key: Word; Shift: TShiftState); extdecl;
var
  OutKey: Word;
begin
  {$define handleExceptionID := 540}
  handleExceptionBegin
  OutKey := Key;
  AObj.NotifyKeyDownBeforeHandler(Sender, OutKey, Shift);
  Key := OutKey;
  handleExceptionEnd
end;

// procedure
procedure TApplication_NotifyKeyDownHandler(AObj: TApplication; Sender: TObject; var Key: Word; Shift: TShiftState); extdecl;
var
  OutKey: Word;
begin
  {$define handleExceptionID := 541}
  handleExceptionBegin
  OutKey := Key;
  AObj.NotifyKeyDownHandler(Sender, OutKey, Shift);
  Key := OutKey;
  handleExceptionEnd
end;

// procedure
procedure TApplication_ControlKeyDown(AObj: TApplication; Sender: TObject; var Key: Word; Shift: TShiftState); extdecl;
var
  OutKey: Word;
begin
  {$define handleExceptionID := 542}
  handleExceptionBegin
  OutKey := Key;
  AObj.ControlKeyDown(Sender, OutKey, Shift);
  Key := OutKey;
  handleExceptionEnd
end;

// procedure
procedure TApplication_ControlKeyUp(AObj: TApplication; Sender: TObject; var Key: Word; Shift: TShiftState); extdecl;
var
  OutKey: Word;
begin
  {$define handleExceptionID := 543}
  handleExceptionBegin
  OutKey := Key;
  AObj.ControlKeyUp(Sender, OutKey, Shift);
  Key := OutKey;
  handleExceptionEnd
end;

// procedure
procedure TApplication_RemoveAllHandlersOfObject(AObj: TApplication; AnObject: TObject); extdecl;
begin
  {$define handleExceptionID := 544}
  handleExceptionBegin
  AObj.RemoveAllHandlersOfObject(AnObject);
  handleExceptionEnd
end;

// procedure
procedure TApplication_DoBeforeMouseMessage(AObj: TApplication; CurMouseControl: TControl); extdecl;
begin
  {$define handleExceptionID := 545}
  handleExceptionBegin
  AObj.DoBeforeMouseMessage(CurMouseControl);
  handleExceptionEnd
end;

// procedure
procedure TApplication_IntfQueryEndSession(AObj: TApplication; var Cancel: LongBool); extdecl;
var
  OutCancel: Boolean;
begin
  {$define handleExceptionID := 546}
  handleExceptionBegin
  OutCancel := Cancel;
  AObj.IntfQueryEndSession(OutCancel);
  Cancel := OutCancel;
  handleExceptionEnd
end;

// procedure
procedure TApplication_IntfEndSession(AObj: TApplication); extdecl;
begin
  {$define handleExceptionID := 547}
  handleExceptionBegin
  AObj.IntfEndSession();
  handleExceptionEnd
end;

// procedure
procedure TApplication_IntfAppActivate(AObj: TApplication; const Async: LongBool); extdecl;
begin
  {$define handleExceptionID := 548}
  handleExceptionBegin
  AObj.IntfAppActivate(Async);
  handleExceptionEnd
end;

// procedure
procedure TApplication_IntfAppDeactivate(AObj: TApplication; const Async: LongBool); extdecl;
begin
  {$define handleExceptionID := 549}
  handleExceptionBegin
  AObj.IntfAppDeactivate(Async);
  handleExceptionEnd
end;

// procedure
procedure TApplication_IntfAppMinimize(AObj: TApplication); extdecl;
begin
  {$define handleExceptionID := 550}
  handleExceptionBegin
  AObj.IntfAppMinimize();
  handleExceptionEnd
end;

// procedure
procedure TApplication_IntfAppRestore(AObj: TApplication); extdecl;
begin
  {$define handleExceptionID := 551}
  handleExceptionBegin
  AObj.IntfAppRestore();
  handleExceptionEnd
end;

// procedure
procedure TApplication_IntfSettingsChange(AObj: TApplication); extdecl;
begin
  {$define handleExceptionID := 552}
  handleExceptionBegin
  AObj.IntfSettingsChange();
  handleExceptionEnd
end;

// procedure
procedure TApplication_IntfThemeOptionChange(AObj: TApplication; AThemeServices: TThemeServices; AOption: TThemeOption); extdecl;
begin
  {$define handleExceptionID := 553}
  handleExceptionBegin
  AObj.IntfThemeOptionChange(AThemeServices, AOption);
  handleExceptionEnd
end;

// procedure
procedure TApplication_DoArrowKey(AObj: TApplication; AControl: TWinControl; var Key: Word; Shift: TShiftState); extdecl;
var
  OutKey: Word;
begin
  {$define handleExceptionID := 554}
  handleExceptionBegin
  OutKey := Key;
  AObj.DoArrowKey(AControl, OutKey, Shift);
  Key := OutKey;
  handleExceptionEnd
end;

// procedure
procedure TApplication_DoTabKey(AObj: TApplication; AControl: TWinControl; var Key: Word; Shift: TShiftState); extdecl;
var
  OutKey: Word;
begin
  {$define handleExceptionID := 555}
  handleExceptionBegin
  OutKey := Key;
  AObj.DoTabKey(AControl, OutKey, Shift);
  Key := OutKey;
  handleExceptionEnd
end;

// procedure
procedure TApplication_DoEscapeKey(AObj: TApplication; AControl: TWinControl; var Key: Word; Shift: TShiftState); extdecl;
var
  OutKey: Word;
begin
  {$define handleExceptionID := 556}
  handleExceptionBegin
  OutKey := Key;
  AObj.DoEscapeKey(AControl, OutKey, Shift);
  Key := OutKey;
  handleExceptionEnd
end;

// procedure
procedure TApplication_DoReturnKey(AObj: TApplication; AControl: TWinControl; var Key: Word; Shift: TShiftState); extdecl;
var
  OutKey: Word;
begin
  {$define handleExceptionID := 557}
  handleExceptionBegin
  OutKey := Key;
  AObj.DoReturnKey(AControl, OutKey, Shift);
  Key := OutKey;
  handleExceptionEnd
end;

// property
function TApplication_Active(AObj: TApplication): LongBool; extdecl;
begin
  {$define handleExceptionID := 558}
  handleExceptionBegin
  Result := AObj.Active;
  handleExceptionEnd
end;

// property
function TApplication_ActiveFormHandle(AObj: TApplication): HWND; extdecl;
begin
  {$define handleExceptionID := 559}
  handleExceptionBegin
  Result := AObj.ActiveFormHandle;
  handleExceptionEnd
end;

// property
function TApplication_ApplicationType(ASet: LongBool; AObj: TApplication; AValue: TApplicationType): TApplicationType; extdecl;
begin
  {$define handleExceptionID := 560}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ApplicationType := AValue
  end else
    Result := AObj.ApplicationType;
  handleExceptionEnd
end;

// property
function TApplication_BidiMode(ASet: LongBool; AObj: TApplication; AValue: TBiDiMode): TBiDiMode; extdecl;
begin
  {$define handleExceptionID := 561}
  handleExceptionBegin
  if ASet then
  begin
    AObj.BidiMode := AValue
  end else
    Result := AObj.BidiMode;
  handleExceptionEnd
end;

// property
function TApplication_CaptureExceptions(ASet: LongBool; AObj: TApplication; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 562}
  handleExceptionBegin
  if ASet then
  begin
    AObj.CaptureExceptions := AValue
  end else
    Result := AObj.CaptureExceptions;
  handleExceptionEnd
end;

// property
function TApplication_DoubleBuffered(ASet: LongBool; AObj: TApplication; AValue: TApplicationDoubleBuffered): TApplicationDoubleBuffered; extdecl;
begin
  {$define handleExceptionID := 563}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DoubleBuffered := AValue
  end else
    Result := AObj.DoubleBuffered;
  handleExceptionEnd
end;

// property
function TApplication_ExtendedKeysSupport(ASet: LongBool; AObj: TApplication; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 564}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ExtendedKeysSupport := AValue
  end else
    Result := AObj.ExtendedKeysSupport;
  handleExceptionEnd
end;

// property
function TApplication_ExceptionDialog(ASet: LongBool; AObj: TApplication; AValue: TApplicationExceptionDlg): TApplicationExceptionDlg; extdecl;
begin
  {$define handleExceptionID := 565}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ExceptionDialog := AValue
  end else
    Result := AObj.ExceptionDialog;
  handleExceptionEnd
end;

// property
function TApplication_FindGlobalComponentEnabled(ASet: LongBool; AObj: TApplication; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 566}
  handleExceptionBegin
  if ASet then
  begin
    AObj.FindGlobalComponentEnabled := AValue
  end else
    Result := AObj.FindGlobalComponentEnabled;
  handleExceptionEnd
end;

// property
function TApplication_Flags(ASet: LongBool; AObj: TApplication; AValue: TApplicationFlags): TApplicationFlags; extdecl;
begin
  {$define handleExceptionID := 567}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Flags := AValue
  end else
    Result := AObj.Flags;
  handleExceptionEnd
end;

// property
function TApplication_Handle(ASet: LongBool; AObj: TApplication; AValue: TLCLHandle): TLCLHandle; extdecl;
begin
  {$define handleExceptionID := 568}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Handle := AValue
  end else
    Result := AObj.Handle;
  handleExceptionEnd
end;

// property
procedure TApplication_Hint(ASet: LongBool; AObj: TApplication; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 569}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Hint := AValue
  end else
    StringBufferCreate(AObj.Hint, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TApplication_HintColor(ASet: LongBool; AObj: TApplication; AValue: TColor): TColor; extdecl;
begin
  {$define handleExceptionID := 570}
  handleExceptionBegin
  if ASet then
  begin
    AObj.HintColor := AValue
  end else
    Result := AObj.HintColor;
  handleExceptionEnd
end;

// property
function TApplication_HintHidePause(ASet: LongBool; AObj: TApplication; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 571}
  handleExceptionBegin
  if ASet then
  begin
    AObj.HintHidePause := AValue
  end else
    Result := AObj.HintHidePause;
  handleExceptionEnd
end;

// property
function TApplication_HintHidePausePerChar(ASet: LongBool; AObj: TApplication; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 572}
  handleExceptionBegin
  if ASet then
  begin
    AObj.HintHidePausePerChar := AValue
  end else
    Result := AObj.HintHidePausePerChar;
  handleExceptionEnd
end;

// property
function TApplication_HintPause(ASet: LongBool; AObj: TApplication; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 573}
  handleExceptionBegin
  if ASet then
  begin
    AObj.HintPause := AValue
  end else
    Result := AObj.HintPause;
  handleExceptionEnd
end;

// property
function TApplication_HintShortCuts(ASet: LongBool; AObj: TApplication; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 574}
  handleExceptionBegin
  if ASet then
  begin
    AObj.HintShortCuts := AValue
  end else
    Result := AObj.HintShortCuts;
  handleExceptionEnd
end;

// property
function TApplication_HintShortPause(ASet: LongBool; AObj: TApplication; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 575}
  handleExceptionBegin
  if ASet then
  begin
    AObj.HintShortPause := AValue
  end else
    Result := AObj.HintShortPause;
  handleExceptionEnd
end;

// property
function TApplication_Icon(ASet: LongBool; AObj: TApplication; AValue: TIcon): TIcon; extdecl;
begin
  {$define handleExceptionID := 576}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Icon := AValue
  end else
    Result := AObj.Icon;
  handleExceptionEnd
end;

// property
function TApplication_LayoutAdjustmentPolicy(ASet: LongBool; AObj: TApplication; AValue: TLayoutAdjustmentPolicy): TLayoutAdjustmentPolicy; extdecl;
begin
  {$define handleExceptionID := 577}
  handleExceptionBegin
  if ASet then
  begin
    AObj.LayoutAdjustmentPolicy := AValue
  end else
    Result := AObj.LayoutAdjustmentPolicy;
  handleExceptionEnd
end;

// property
function TApplication_Navigation(ASet: LongBool; AObj: TApplication; AValue: TApplicationNavigationOptions): TApplicationNavigationOptions; extdecl;
begin
  {$define handleExceptionID := 578}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Navigation := AValue
  end else
    Result := AObj.Navigation;
  handleExceptionEnd
end;

// property
function TApplication_MainForm(AObj: TApplication): TForm; extdecl;
begin
  {$define handleExceptionID := 579}
  handleExceptionBegin
  Result := AObj.MainForm;
  handleExceptionEnd
end;

// property
function TApplication_MainFormHandle(AObj: TApplication): HWND; extdecl;
begin
  {$define handleExceptionID := 580}
  handleExceptionBegin
  Result := AObj.MainFormHandle;
  handleExceptionEnd
end;

// property
function TApplication_MainFormOnTaskBar(ASet: LongBool; AObj: TApplication; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 581}
  handleExceptionBegin
  if ASet then
  begin
    AObj.MainFormOnTaskBar := AValue
  end else
    Result := AObj.MainFormOnTaskBar;
  handleExceptionEnd
end;

// property
function TApplication_ModalLevel(AObj: TApplication): Integer; extdecl;
begin
  {$define handleExceptionID := 582}
  handleExceptionBegin
  Result := AObj.ModalLevel;
  handleExceptionEnd
end;

// property
function TApplication_MoveFormFocusToChildren(ASet: LongBool; AObj: TApplication; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 583}
  handleExceptionBegin
  if ASet then
  begin
    AObj.MoveFormFocusToChildren := AValue
  end else
    Result := AObj.MoveFormFocusToChildren;
  handleExceptionEnd
end;

// property
function TApplication_MouseControl(AObj: TApplication): TControl; extdecl;
begin
  {$define handleExceptionID := 584}
  handleExceptionBegin
  Result := AObj.MouseControl;
  handleExceptionEnd
end;

// property
function TApplication_TaskBarBehavior(ASet: LongBool; AObj: TApplication; AValue: TTaskBarBehavior): TTaskBarBehavior; extdecl;
begin
  {$define handleExceptionID := 585}
  handleExceptionBegin
  if ASet then
  begin
    AObj.TaskBarBehavior := AValue
  end else
    Result := AObj.TaskBarBehavior;
  handleExceptionEnd
end;

// property
function TApplication_UpdateFormatSettings(ASet: LongBool; AObj: TApplication; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 586}
  handleExceptionBegin
  if ASet then
  begin
    AObj.UpdateFormatSettings := AValue
  end else
    Result := AObj.UpdateFormatSettings;
  handleExceptionEnd
end;

// property
function TApplication_ShowButtonGlyphs(ASet: LongBool; AObj: TApplication; AValue: TApplicationShowGlyphs): TApplicationShowGlyphs; extdecl;
begin
  {$define handleExceptionID := 587}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ShowButtonGlyphs := AValue
  end else
    Result := AObj.ShowButtonGlyphs;
  handleExceptionEnd
end;

// property
function TApplication_ShowMenuGlyphs(ASet: LongBool; AObj: TApplication; AValue: TApplicationShowGlyphs): TApplicationShowGlyphs; extdecl;
begin
  {$define handleExceptionID := 588}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ShowMenuGlyphs := AValue
  end else
    Result := AObj.ShowMenuGlyphs;
  handleExceptionEnd
end;

// property
function TApplication_ShowHint(ASet: LongBool; AObj: TApplication; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 589}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ShowHint := AValue
  end else
    Result := AObj.ShowHint;
  handleExceptionEnd
end;

// property
function TApplication_ShowMainForm(ASet: LongBool; AObj: TApplication; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 590}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ShowMainForm := AValue
  end else
    Result := AObj.ShowMainForm;
  handleExceptionEnd
end;

// property
function TApplication_Scaled(ASet: LongBool; AObj: TApplication; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 591}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Scaled := AValue
  end else
    Result := AObj.Scaled;
  handleExceptionEnd
end;

// event
procedure TApplication_OnActionExecute(AObj: TApplication; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTActionEvent}
  {$DEFINE EventName := OnActionExecute}
  LCLEventMethodCode
end;

// event
procedure TApplication_OnActionUpdate(AObj: TApplication; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTActionEvent}
  {$DEFINE EventName := OnActionUpdate}
  LCLEventMethodCode
end;

// event
procedure TApplication_OnActivate(AObj: TApplication; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnActivate}
  LCLEventMethodCode
end;

// event
procedure TApplication_OnDeactivate(AObj: TApplication; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnDeactivate}
  LCLEventMethodCode
end;

// event
procedure TApplication_OnGetMainFormHandle(AObj: TApplication; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTGetHandleEvent}
  {$DEFINE EventName := OnGetMainFormHandle}
  LCLEventMethodCode
end;

// event
procedure TApplication_OnIdle(AObj: TApplication; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTIdleEvent}
  {$DEFINE EventName := OnIdle}
  LCLEventMethodCode
end;

// event
procedure TApplication_OnIdleEnd(AObj: TApplication; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnIdleEnd}
  LCLEventMethodCode
end;

// event
procedure TApplication_OnEndSession(AObj: TApplication; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnEndSession}
  LCLEventMethodCode
end;

// event
procedure TApplication_OnQueryEndSession(AObj: TApplication; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTQueryEndSessionEvent}
  {$DEFINE EventName := OnQueryEndSession}
  LCLEventMethodCode
end;

// event
procedure TApplication_OnMinimize(AObj: TApplication; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMinimize}
  LCLEventMethodCode
end;

// event
procedure TApplication_OnMessageDialogFinished(AObj: TApplication; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTModalDialogFinished}
  {$DEFINE EventName := OnMessageDialogFinished}
  LCLEventMethodCode
end;

// event
procedure TApplication_OnModalBegin(AObj: TApplication; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnModalBegin}
  LCLEventMethodCode
end;

// event
procedure TApplication_OnModalEnd(AObj: TApplication; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnModalEnd}
  LCLEventMethodCode
end;

// event
procedure TApplication_OnRestore(AObj: TApplication; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnRestore}
  LCLEventMethodCode
end;

// event
procedure TApplication_OnDropFiles(AObj: TApplication; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDropFilesEvent}
  {$DEFINE EventName := OnDropFiles}
  LCLEventMethodCode
end;

// event
procedure TApplication_OnHelp(AObj: TApplication; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTHelpEvent}
  {$DEFINE EventName := OnHelp}
  LCLEventMethodCode
end;

// event
procedure TApplication_OnHint(AObj: TApplication; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnHint}
  LCLEventMethodCode
end;

// event
procedure TApplication_OnShortcut(AObj: TApplication; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTShortcutEvent}
  {$DEFINE EventName := OnShortcut}
  LCLEventMethodCode
end;

// event
procedure TApplication_OnShowHint(AObj: TApplication; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTShowHintEvent}
  {$DEFINE EventName := OnShowHint}
  LCLEventMethodCode
end;

// event
procedure TApplication_OnUserInput(AObj: TApplication; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTOnUserInputEvent}
  {$DEFINE EventName := OnUserInput}
  LCLEventMethodCode
end;

// event
procedure TApplication_OnDestroy(AObj: TApplication; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnDestroy}
  LCLEventMethodCode
end;

// event
procedure TApplication_OnCircularException(AObj: TApplication; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTExceptionEvent}
  {$DEFINE EventName := OnCircularException}
  LCLEventMethodCode
end;

function TApplication_TClass(): TClass; extdecl;
begin
  Result := TApplication;
end;

exports
  TApplication_Create,
  TApplication_GetControlAtMouse,
  TApplication_GetControlAtPos,
  TApplication_BigIconHandle,
  TApplication_SmallIconHandle,
  TApplication_HelpCommand,
  TApplication_HelpContext,
  TApplication_HelpKeyword,
  TApplication_HelpShowTableOfContents,
  TApplication_IsWaiting,
  TApplication_MessageBox,
  TApplication_IsShortcut,
  TApplication_IsRightToLeft,
  TApplication_IsRTLLang,
  TApplication_Direction,
  TApplication_ActivateHint,
  TApplication_ControlDestroyed,
  TApplication_BringToFront,
  TApplication_CreateForm,
  TApplication_UpdateMainForm,
  TApplication_RemoveAsyncCalls,
  TApplication_ReleaseComponent,
  TApplication_HandleMessage,
  TApplication_ShowHelpForObject,
  TApplication_RemoveStayOnTop,
  TApplication_RestoreStayOnTop,
  TApplication_CancelHint,
  TApplication_HideHint,
  TApplication_HintMouseMessage,
  TApplication_Minimize,
  TApplication_ModalStarted,
  TApplication_ModalFinished,
  TApplication_Restore,
  TApplication_Notification,
  TApplication_ProcessMessages,
  TApplication_Idle,
  TApplication_Run,
  TApplication_DisableIdleHandler,
  TApplication_EnableIdleHandler,
  TApplication_NotifyUserInputHandler,
  TApplication_NotifyKeyDownBeforeHandler,
  TApplication_NotifyKeyDownHandler,
  TApplication_ControlKeyDown,
  TApplication_ControlKeyUp,
  TApplication_RemoveAllHandlersOfObject,
  TApplication_DoBeforeMouseMessage,
  TApplication_IntfQueryEndSession,
  TApplication_IntfEndSession,
  TApplication_IntfAppActivate,
  TApplication_IntfAppDeactivate,
  TApplication_IntfAppMinimize,
  TApplication_IntfAppRestore,
  TApplication_IntfSettingsChange,
  TApplication_IntfThemeOptionChange,
  TApplication_DoArrowKey,
  TApplication_DoTabKey,
  TApplication_DoEscapeKey,
  TApplication_DoReturnKey,
  TApplication_Active,
  TApplication_ActiveFormHandle,
  TApplication_ApplicationType,
  TApplication_BidiMode,
  TApplication_CaptureExceptions,
  TApplication_DoubleBuffered,
  TApplication_ExtendedKeysSupport,
  TApplication_ExceptionDialog,
  TApplication_FindGlobalComponentEnabled,
  TApplication_Flags,
  TApplication_Handle,
  TApplication_Hint,
  TApplication_HintColor,
  TApplication_HintHidePause,
  TApplication_HintHidePausePerChar,
  TApplication_HintPause,
  TApplication_HintShortCuts,
  TApplication_HintShortPause,
  TApplication_Icon,
  TApplication_LayoutAdjustmentPolicy,
  TApplication_Navigation,
  TApplication_MainForm,
  TApplication_MainFormHandle,
  TApplication_MainFormOnTaskBar,
  TApplication_ModalLevel,
  TApplication_MoveFormFocusToChildren,
  TApplication_MouseControl,
  TApplication_TaskBarBehavior,
  TApplication_UpdateFormatSettings,
  TApplication_ShowButtonGlyphs,
  TApplication_ShowMenuGlyphs,
  TApplication_ShowHint,
  TApplication_ShowMainForm,
  TApplication_Scaled,
  TApplication_OnActionExecute,
  TApplication_OnActionUpdate,
  TApplication_OnActivate,
  TApplication_OnDeactivate,
  TApplication_OnGetMainFormHandle,
  TApplication_OnIdle,
  TApplication_OnIdleEnd,
  TApplication_OnEndSession,
  TApplication_OnQueryEndSession,
  TApplication_OnMinimize,
  TApplication_OnMessageDialogFinished,
  TApplication_OnModalBegin,
  TApplication_OnModalEnd,
  TApplication_OnRestore,
  TApplication_OnDropFiles,
  TApplication_OnHelp,
  TApplication_OnHint,
  TApplication_OnShortcut,
  TApplication_OnShowHint,
  TApplication_OnUserInput,
  TApplication_OnDestroy,
  TApplication_OnCircularException,
  TApplication_TClass;