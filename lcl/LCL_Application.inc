
//constructor
function Application_Create(AOwner: TComponent): TApplication; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TApplication.Create(AOwner);
  handleExceptionEnd
end;

//property
function Application_Active(AObj: TApplication): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='Active'}
  handleExceptionBegin
  Result := AObj.Active;
  handleExceptionEnd
end;

//property
function Application_ApplicationType(AIsSet: LongBool; AObj: TApplication; AValue: TApplicationType): TApplicationType; extdecl;
begin
  {$define handleExceptionFuncName :='ApplicationType'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ApplicationType := AValue;
  end else
    Result := AObj.ApplicationType;
  handleExceptionEnd
end;

//property
function Application_BidiMode(AIsSet: LongBool; AObj: TApplication; AValue: TBiDiMode): TBiDiMode; extdecl;
begin
  {$define handleExceptionFuncName :='BidiMode'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.BidiMode := AValue;
  end else
    Result := AObj.BidiMode;
  handleExceptionEnd
end;

//property
function Application_CaptureExceptions(AIsSet: LongBool; AObj: TApplication; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='CaptureExceptions'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.CaptureExceptions := AValue;
  end else
    Result := AObj.CaptureExceptions;
  handleExceptionEnd
end;

//property
function Application_DoubleBuffered(AIsSet: LongBool; AObj: TApplication; AValue: TApplicationDoubleBuffered): TApplicationDoubleBuffered; extdecl;
begin
  {$define handleExceptionFuncName :='DoubleBuffered'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DoubleBuffered := AValue;
  end else
    Result := AObj.DoubleBuffered;
  handleExceptionEnd
end;

//property
function Application_ExtendedKeysSupport(AIsSet: LongBool; AObj: TApplication; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='ExtendedKeysSupport'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ExtendedKeysSupport := AValue;
  end else
    Result := AObj.ExtendedKeysSupport;
  handleExceptionEnd
end;

//property
function Application_ExceptionDialog(AIsSet: LongBool; AObj: TApplication; AValue: TApplicationExceptionDlg): TApplicationExceptionDlg; extdecl;
begin
  {$define handleExceptionFuncName :='ExceptionDialog'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ExceptionDialog := AValue;
  end else
    Result := AObj.ExceptionDialog;
  handleExceptionEnd
end;

//property
function Application_FindGlobalComponentEnabled(AIsSet: LongBool; AObj: TApplication; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='FindGlobalComponentEnabled'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.FindGlobalComponentEnabled := AValue;
  end else
    Result := AObj.FindGlobalComponentEnabled;
  handleExceptionEnd
end;

//property
function Application_Flags(AIsSet: LongBool; AObj: TApplication; AValue: TApplicationFlags): TApplicationFlags; extdecl;
begin
  {$define handleExceptionFuncName :='Flags'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Flags := AValue;
  end else
    Result := AObj.Flags;
  handleExceptionEnd
end;

//property
function Application_Handle(AIsSet: LongBool; AObj: TApplication; AValue: THandle): THandle; extdecl;
begin
  {$define handleExceptionFuncName :='Handle'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Handle := AValue;
  end else
    Result := AObj.Handle;
  handleExceptionEnd
end;

//property
function Application_Hint(AIsSet: LongBool; AObj: TApplication; AValue: PChar): PChar; extdecl;
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
function Application_HintColor(AIsSet: LongBool; AObj: TApplication; AValue: TColor): TColor; extdecl;
begin
  {$define handleExceptionFuncName :='HintColor'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.HintColor := AValue;
  end else
    Result := AObj.HintColor;
  handleExceptionEnd
end;

//property
function Application_HintHidePause(AIsSet: LongBool; AObj: TApplication; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='HintHidePause'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.HintHidePause := AValue;
  end else
    Result := AObj.HintHidePause;
  handleExceptionEnd
end;

//property
function Application_HintHidePausePerChar(AIsSet: LongBool; AObj: TApplication; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='HintHidePausePerChar'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.HintHidePausePerChar := AValue;
  end else
    Result := AObj.HintHidePausePerChar;
  handleExceptionEnd
end;

//property
function Application_HintPause(AIsSet: LongBool; AObj: TApplication; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='HintPause'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.HintPause := AValue;
  end else
    Result := AObj.HintPause;
  handleExceptionEnd
end;

//property
function Application_HintShortCuts(AIsSet: LongBool; AObj: TApplication; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='HintShortCuts'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.HintShortCuts := AValue;
  end else
    Result := AObj.HintShortCuts;
  handleExceptionEnd
end;

//property
function Application_HintShortPause(AIsSet: LongBool; AObj: TApplication; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='HintShortPause'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.HintShortPause := AValue;
  end else
    Result := AObj.HintShortPause;
  handleExceptionEnd
end;

//property
function Application_Icon(AIsSet: LongBool; AObj: TApplication; AValue: TIcon): TIcon; extdecl;
begin
  {$define handleExceptionFuncName :='Icon'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Icon := AValue;
  end else
    Result := AObj.Icon;
  handleExceptionEnd
end;

//property
function Application_LayoutAdjustmentPolicy(AIsSet: LongBool; AObj: TApplication; AValue: TLayoutAdjustmentPolicy): TLayoutAdjustmentPolicy; extdecl;
begin
  {$define handleExceptionFuncName :='LayoutAdjustmentPolicy'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.LayoutAdjustmentPolicy := AValue;
  end else
    Result := AObj.LayoutAdjustmentPolicy;
  handleExceptionEnd
end;

//property
function Application_Navigation(AIsSet: LongBool; AObj: TApplication; AValue: TApplicationNavigationOptions): TApplicationNavigationOptions; extdecl;
begin
  {$define handleExceptionFuncName :='Navigation'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Navigation := AValue;
  end else
    Result := AObj.Navigation;
  handleExceptionEnd
end;

//property
function Application_MainForm(AObj: TApplication): TForm; extdecl;
begin
  {$define handleExceptionFuncName :='MainForm'}
  handleExceptionBegin
  Result := AObj.MainForm;
  handleExceptionEnd
end;

//property
function Application_MainFormHandle(AObj: TApplication): HWND; extdecl;
begin
  {$define handleExceptionFuncName :='MainFormHandle'}
  handleExceptionBegin
  Result := AObj.MainFormHandle;
  handleExceptionEnd
end;

//property
function Application_MainFormOnTaskBar(AIsSet: LongBool; AObj: TApplication; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='MainFormOnTaskBar'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.MainFormOnTaskBar := AValue;
  end else
    Result := AObj.MainFormOnTaskBar;
  handleExceptionEnd
end;

//property
function Application_ModalLevel(AObj: TApplication): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='ModalLevel'}
  handleExceptionBegin
  Result := AObj.ModalLevel;
  handleExceptionEnd
end;

//property
function Application_MoveFormFocusToChildren(AIsSet: LongBool; AObj: TApplication; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='MoveFormFocusToChildren'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.MoveFormFocusToChildren := AValue;
  end else
    Result := AObj.MoveFormFocusToChildren;
  handleExceptionEnd
end;

//property
function Application_MouseControl(AObj: TApplication): TControl; extdecl;
begin
  {$define handleExceptionFuncName :='MouseControl'}
  handleExceptionBegin
  Result := AObj.MouseControl;
  handleExceptionEnd
end;

//property
function Application_TaskBarBehavior(AIsSet: LongBool; AObj: TApplication; AValue: TTaskBarBehavior): TTaskBarBehavior; extdecl;
begin
  {$define handleExceptionFuncName :='TaskBarBehavior'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.TaskBarBehavior := AValue;
  end else
    Result := AObj.TaskBarBehavior;
  handleExceptionEnd
end;

//property
function Application_UpdateFormatSettings(AIsSet: LongBool; AObj: TApplication; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='UpdateFormatSettings'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.UpdateFormatSettings := AValue;
  end else
    Result := AObj.UpdateFormatSettings;
  handleExceptionEnd
end;

//property
function Application_ShowButtonGlyphs(AIsSet: LongBool; AObj: TApplication; AValue: TApplicationShowGlyphs): TApplicationShowGlyphs; extdecl;
begin
  {$define handleExceptionFuncName :='ShowButtonGlyphs'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ShowButtonGlyphs := AValue;
  end else
    Result := AObj.ShowButtonGlyphs;
  handleExceptionEnd
end;

//property
function Application_ShowMenuGlyphs(AIsSet: LongBool; AObj: TApplication; AValue: TApplicationShowGlyphs): TApplicationShowGlyphs; extdecl;
begin
  {$define handleExceptionFuncName :='ShowMenuGlyphs'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ShowMenuGlyphs := AValue;
  end else
    Result := AObj.ShowMenuGlyphs;
  handleExceptionEnd
end;

//property
function Application_ShowHint(AIsSet: LongBool; AObj: TApplication; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='ShowHint'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ShowHint := AValue;
  end else
    Result := AObj.ShowHint;
  handleExceptionEnd
end;

//property
function Application_ShowMainForm(AIsSet: LongBool; AObj: TApplication; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='ShowMainForm'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ShowMainForm := AValue;
  end else
    Result := AObj.ShowMainForm;
  handleExceptionEnd
end;

//property
function Application_Scaled(AIsSet: LongBool; AObj: TApplication; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='Scaled'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Scaled := AValue;
  end else
    Result := AObj.Scaled;
  handleExceptionEnd
end;

//function
function Application_GetControlAtMouse(AObj: TApplication): TControl; extdecl;
begin
  {$define handleExceptionFuncName :='GetControlAtMouse'}
  handleExceptionBegin
  Result := AObj.GetControlAtMouse();
  handleExceptionEnd
end;

//function
function Application_GetControlAtPos(AObj: TApplication; var P: TPoint): TControl; extdecl;
begin
  {$define handleExceptionFuncName :='GetControlAtPos'}
  handleExceptionBegin
  Result := AObj.GetControlAtPos(P);
  handleExceptionEnd
end;

//function
function Application_BigIconHandle(AObj: TApplication): HIcon; extdecl;
begin
  {$define handleExceptionFuncName :='BigIconHandle'}
  handleExceptionBegin
  Result := AObj.BigIconHandle();
  handleExceptionEnd
end;

//function
function Application_SmallIconHandle(AObj: TApplication): HIcon; extdecl;
begin
  {$define handleExceptionFuncName :='SmallIconHandle'}
  handleExceptionBegin
  Result := AObj.SmallIconHandle();
  handleExceptionEnd
end;

//function
function Application_HelpCommand(AObj: TApplication; Command: Word; Data: NativeInt): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='HelpCommand'}
  handleExceptionBegin
  Result := AObj.HelpCommand(Command, Data);
  handleExceptionEnd
end;

//function
function Application_HelpContext(AObj: TApplication; Context: THelpContext): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='HelpContext'}
  handleExceptionBegin
  Result := AObj.HelpContext(Context);
  handleExceptionEnd
end;

//function
function Application_HelpKeyword(AObj: TApplication; const Keyword: PChar): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='HelpKeyword'}
  handleExceptionBegin
  Result := AObj.HelpKeyword(Keyword);
  handleExceptionEnd
end;

//function
function Application_HelpShowTableOfContents(AObj: TApplication): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='HelpShowTableOfContents'}
  handleExceptionBegin
  Result := AObj.HelpShowTableOfContents();
  handleExceptionEnd
end;

//function
function Application_IsWaiting(AObj: TApplication): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='IsWaiting'}
  handleExceptionBegin
  Result := AObj.IsWaiting();
  handleExceptionEnd
end;

//function
function Application_MessageBox(AObj: TApplication; Text, Caption: PChar; Flags: LongInt): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='MessageBox'}
  handleExceptionBegin
  Result := AObj.MessageBox(Text, Caption, Flags);
  handleExceptionEnd
end;

//function
function Application_IsShortcut(AObj: TApplication; var Message: TLMKey): LongBool; extdecl;
var
  RetMessage: TLMKey;
begin
  {$define handleExceptionFuncName :='IsShortcut'}
  handleExceptionBegin
  RetMessage := Message;
  Result := AObj.IsShortcut(RetMessage);
  Message := RetMessage;
  handleExceptionEnd
end;

//function
function Application_IsRightToLeft(AObj: TApplication): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='IsRightToLeft'}
  handleExceptionBegin
  Result := AObj.IsRightToLeft();
  handleExceptionEnd
end;

//function
function Application_IsRTLLang(AObj: TApplication; const ALang: PChar): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='IsRTLLang'}
  handleExceptionBegin
  Result := AObj.IsRTLLang(ALang);
  handleExceptionEnd
end;

//function
function Application_Direction(AObj: TApplication; const ALang: PChar): TBiDiMode; extdecl;
begin
  {$define handleExceptionFuncName :='Direction'}
  handleExceptionBegin
  Result := AObj.Direction(ALang);
  handleExceptionEnd
end;

//function
function Application_Class(): TClass; extdecl;
begin
  Result := TApplication;
end;

//procedure
procedure Application_ActivateHint(AObj: TApplication; var CursorPos: TPoint; CheckHintControlChange: LongBool); extdecl;
begin
  {$define handleExceptionFuncName :='ActivateHint'}
  handleExceptionBegin
  AObj.ActivateHint(CursorPos, CheckHintControlChange);
  handleExceptionEnd
end;

//procedure
procedure Application_ControlDestroyed(AObj: TApplication; AControl: TControl); extdecl;
begin
  {$define handleExceptionFuncName :='ControlDestroyed'}
  handleExceptionBegin
  AObj.ControlDestroyed(AControl);
  handleExceptionEnd
end;

//procedure
procedure Application_BringToFront(AObj: TApplication); extdecl;
begin
  {$define handleExceptionFuncName :='BringToFront'}
  handleExceptionBegin
  AObj.BringToFront();
  handleExceptionEnd
end;

//procedure
procedure Application_UpdateMainForm(AObj: TApplication; AForm: TForm); extdecl;
begin
  {$define handleExceptionFuncName :='UpdateMainForm'}
  handleExceptionBegin
  AObj.UpdateMainForm(AForm);
  handleExceptionEnd
end;

//procedure
procedure Application_RemoveAsyncCalls(AObj: TApplication; const AnObject: TObject); extdecl;
begin
  {$define handleExceptionFuncName :='RemoveAsyncCalls'}
  handleExceptionBegin
  AObj.RemoveAsyncCalls(AnObject);
  handleExceptionEnd
end;

//procedure
procedure Application_ReleaseComponent(AObj: TApplication; AComponent: TComponent); extdecl;
begin
  {$define handleExceptionFuncName :='ReleaseComponent'}
  handleExceptionBegin
  AObj.ReleaseComponent(AComponent);
  handleExceptionEnd
end;

//procedure
procedure Application_HandleMessage(AObj: TApplication); extdecl;
begin
  {$define handleExceptionFuncName :='HandleMessage'}
  handleExceptionBegin
  AObj.HandleMessage();
  handleExceptionEnd
end;

//procedure
procedure Application_ShowHelpForObject(AObj: TApplication; Sender: TObject); extdecl;
begin
  {$define handleExceptionFuncName :='ShowHelpForObject'}
  handleExceptionBegin
  AObj.ShowHelpForObject(Sender);
  handleExceptionEnd
end;

//procedure
procedure Application_RemoveStayOnTop(AObj: TApplication; const ASystemTopAlso: LongBool); extdecl;
begin
  {$define handleExceptionFuncName :='RemoveStayOnTop'}
  handleExceptionBegin
  AObj.RemoveStayOnTop(ASystemTopAlso);
  handleExceptionEnd
end;

//procedure
procedure Application_RestoreStayOnTop(AObj: TApplication; const ASystemTopAlso: LongBool); extdecl;
begin
  {$define handleExceptionFuncName :='RestoreStayOnTop'}
  handleExceptionBegin
  AObj.RestoreStayOnTop(ASystemTopAlso);
  handleExceptionEnd
end;

//procedure
procedure Application_CancelHint(AObj: TApplication); extdecl;
begin
  {$define handleExceptionFuncName :='CancelHint'}
  handleExceptionBegin
  AObj.CancelHint();
  handleExceptionEnd
end;

//procedure
procedure Application_HideHint(AObj: TApplication); extdecl;
begin
  {$define handleExceptionFuncName :='HideHint'}
  handleExceptionBegin
  AObj.HideHint();
  handleExceptionEnd
end;

//procedure
procedure Application_HintMouseMessage(AObj: TApplication; Control: TControl; var AMessage: TLMessage); extdecl;
var
  RetAMessage: TLMessage;
begin
  {$define handleExceptionFuncName :='HintMouseMessage'}
  handleExceptionBegin
  RetAMessage := AMessage;
  AObj.HintMouseMessage(Control, RetAMessage);
  AMessage := RetAMessage;
  handleExceptionEnd
end;

//procedure
procedure Application_Minimize(AObj: TApplication); extdecl;
begin
  {$define handleExceptionFuncName :='Minimize'}
  handleExceptionBegin
  AObj.Minimize();
  handleExceptionEnd
end;

//procedure
procedure Application_ModalStarted(AObj: TApplication); extdecl;
begin
  {$define handleExceptionFuncName :='ModalStarted'}
  handleExceptionBegin
  AObj.ModalStarted();
  handleExceptionEnd
end;

//procedure
procedure Application_ModalFinished(AObj: TApplication); extdecl;
begin
  {$define handleExceptionFuncName :='ModalFinished'}
  handleExceptionBegin
  AObj.ModalFinished();
  handleExceptionEnd
end;

//procedure
procedure Application_Restore(AObj: TApplication); extdecl;
begin
  {$define handleExceptionFuncName :='Restore'}
  handleExceptionBegin
  AObj.Restore();
  handleExceptionEnd
end;

//procedure
procedure Application_Notification(AObj: TApplication; AComponent: TComponent; Operation: TOperation); extdecl;
begin
  {$define handleExceptionFuncName :='Notification'}
  handleExceptionBegin
  AObj.Notification(AComponent, Operation);
  handleExceptionEnd
end;

//procedure
procedure Application_ProcessMessages(AObj: TApplication); extdecl;
begin
  {$define handleExceptionFuncName :='ProcessMessages'}
  handleExceptionBegin
  AObj.ProcessMessages();
  handleExceptionEnd
end;

//procedure
procedure Application_Idle(AObj: TApplication; Wait: LongBool); extdecl;
begin
  {$define handleExceptionFuncName :='Idle'}
  handleExceptionBegin
  AObj.Idle(Wait);
  handleExceptionEnd
end;

//procedure
procedure Application_DisableIdleHandler(AObj: TApplication); extdecl;
begin
  {$define handleExceptionFuncName :='DisableIdleHandler'}
  handleExceptionBegin
  AObj.DisableIdleHandler();
  handleExceptionEnd
end;

//procedure
procedure Application_EnableIdleHandler(AObj: TApplication); extdecl;
begin
  {$define handleExceptionFuncName :='EnableIdleHandler'}
  handleExceptionBegin
  AObj.EnableIdleHandler();
  handleExceptionEnd
end;

//procedure
procedure Application_NotifyUserInputHandler(AObj: TApplication; Sender: TObject; Msg: uint32); extdecl;
begin
  {$define handleExceptionFuncName :='NotifyUserInputHandler'}
  handleExceptionBegin
  AObj.NotifyUserInputHandler(Sender, Msg);
  handleExceptionEnd
end;

//procedure
procedure Application_NotifyKeyDownBeforeHandler(AObj: TApplication; Sender: TObject; var Key: Word; Shift: TShiftState); extdecl;
var
  RetKey: Word;
begin
  {$define handleExceptionFuncName :='NotifyKeyDownBeforeHandler'}
  handleExceptionBegin
  RetKey := Key;
  AObj.NotifyKeyDownBeforeHandler(Sender, RetKey, Shift);
  Key := RetKey;
  handleExceptionEnd
end;

//procedure
procedure Application_NotifyKeyDownHandler(AObj: TApplication; Sender: TObject; var Key: Word; Shift: TShiftState); extdecl;
var
  RetKey: Word;
begin
  {$define handleExceptionFuncName :='NotifyKeyDownHandler'}
  handleExceptionBegin
  RetKey := Key;
  AObj.NotifyKeyDownHandler(Sender, RetKey, Shift);
  Key := RetKey;
  handleExceptionEnd
end;

//procedure
procedure Application_ControlKeyDown(AObj: TApplication; Sender: TObject; var Key: Word; Shift: TShiftState); extdecl;
var
  RetKey: Word;
begin
  {$define handleExceptionFuncName :='ControlKeyDown'}
  handleExceptionBegin
  RetKey := Key;
  AObj.ControlKeyDown(Sender, RetKey, Shift);
  Key := RetKey;
  handleExceptionEnd
end;

//procedure
procedure Application_ControlKeyUp(AObj: TApplication; Sender: TObject; var Key: Word; Shift: TShiftState); extdecl;
var
  RetKey: Word;
begin
  {$define handleExceptionFuncName :='ControlKeyUp'}
  handleExceptionBegin
  RetKey := Key;
  AObj.ControlKeyUp(Sender, RetKey, Shift);
  Key := RetKey;
  handleExceptionEnd
end;

//procedure
procedure Application_RemoveAllHandlersOfObject(AObj: TApplication; AnObject: TObject); extdecl;
begin
  {$define handleExceptionFuncName :='RemoveAllHandlersOfObject'}
  handleExceptionBegin
  AObj.RemoveAllHandlersOfObject(AnObject);
  handleExceptionEnd
end;

//procedure
procedure Application_DoBeforeMouseMessage(AObj: TApplication; CurMouseControl: TControl); extdecl;
begin
  {$define handleExceptionFuncName :='DoBeforeMouseMessage'}
  handleExceptionBegin
  AObj.DoBeforeMouseMessage(CurMouseControl);
  handleExceptionEnd
end;

//procedure
procedure Application_IntfEndSession(AObj: TApplication); extdecl;
begin
  {$define handleExceptionFuncName :='IntfEndSession'}
  handleExceptionBegin
  AObj.IntfEndSession();
  handleExceptionEnd
end;

//procedure
procedure Application_IntfAppActivate(AObj: TApplication; const Async: LongBool); extdecl;
begin
  {$define handleExceptionFuncName :='IntfAppActivate'}
  handleExceptionBegin
  AObj.IntfAppActivate(Async);
  handleExceptionEnd
end;

//procedure
procedure Application_IntfAppDeactivate(AObj: TApplication; const Async: LongBool); extdecl;
begin
  {$define handleExceptionFuncName :='IntfAppDeactivate'}
  handleExceptionBegin
  AObj.IntfAppDeactivate(Async);
  handleExceptionEnd
end;

//procedure
procedure Application_IntfAppMinimize(AObj: TApplication); extdecl;
begin
  {$define handleExceptionFuncName :='IntfAppMinimize'}
  handleExceptionBegin
  AObj.IntfAppMinimize();
  handleExceptionEnd
end;

//procedure
procedure Application_IntfAppRestore(AObj: TApplication); extdecl;
begin
  {$define handleExceptionFuncName :='IntfAppRestore'}
  handleExceptionBegin
  AObj.IntfAppRestore();
  handleExceptionEnd
end;

//procedure
procedure Application_IntfSettingsChange(AObj: TApplication); extdecl;
begin
  {$define handleExceptionFuncName :='IntfSettingsChange'}
  handleExceptionBegin
  AObj.IntfSettingsChange();
  handleExceptionEnd
end;

//procedure
procedure Application_IntfThemeOptionChange(AObj: TApplication; AThemeServices: TThemeServices; AOption: TThemeOption); extdecl;
begin
  {$define handleExceptionFuncName :='IntfThemeOptionChange'}
  handleExceptionBegin
  AObj.IntfThemeOptionChange(AThemeServices, AOption);
  handleExceptionEnd
end;

//procedure
procedure Application_DoArrowKey(AObj: TApplication; AControl: TWinControl; var Key: Word; Shift: TShiftState); extdecl;
var
  RetKey: Word;
begin
  {$define handleExceptionFuncName :='DoArrowKey'}
  handleExceptionBegin
  RetKey := Key;
  AObj.DoArrowKey(AControl, RetKey, Shift);
  Key := RetKey;
  handleExceptionEnd
end;

//procedure
procedure Application_DoTabKey(AObj: TApplication; AControl: TWinControl; var Key: Word; Shift: TShiftState); extdecl;
var
  RetKey: Word;
begin
  {$define handleExceptionFuncName :='DoTabKey'}
  handleExceptionBegin
  RetKey := Key;
  AObj.DoTabKey(AControl, RetKey, Shift);
  Key := RetKey;
  handleExceptionEnd
end;

//procedure
procedure Application_DoEscapeKey(AObj: TApplication; AControl: TWinControl; var Key: Word; Shift: TShiftState); extdecl;
var
  RetKey: Word;
begin
  {$define handleExceptionFuncName :='DoEscapeKey'}
  handleExceptionBegin
  RetKey := Key;
  AObj.DoEscapeKey(AControl, RetKey, Shift);
  Key := RetKey;
  handleExceptionEnd
end;

//procedure
procedure Application_DoReturnKey(AObj: TApplication; AControl: TWinControl; var Key: Word; Shift: TShiftState); extdecl;
var
  RetKey: Word;
begin
  {$define handleExceptionFuncName :='DoReturnKey'}
  handleExceptionBegin
  RetKey := Key;
  AObj.DoReturnKey(AControl, RetKey, Shift);
  Key := RetKey;
  handleExceptionEnd
end;

//property event
procedure Application_SetOnActionExecute(AObj: TApplication; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTActionEvent}
  {$DEFINE EventName := OnActionExecute}
  EventMethodCode
end;

//property event
procedure Application_SetOnActionUpdate(AObj: TApplication; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTActionEvent}
  {$DEFINE EventName := OnActionUpdate}
  EventMethodCode
end;

//property event
procedure Application_SetOnActivate(AObj: TApplication; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnActivate}
  EventMethodCode
end;

//property event
procedure Application_SetOnDeactivate(AObj: TApplication; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnDeactivate}
  EventMethodCode
end;

//property event
procedure Application_SetOnGetMainFormHandle(AObj: TApplication; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTGetHandleEvent}
  {$DEFINE EventName := OnGetMainFormHandle}
  EventMethodCode
end;

//property event
procedure Application_SetOnIdleEnd(AObj: TApplication; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnIdleEnd}
  EventMethodCode
end;

//property event
procedure Application_SetOnEndSession(AObj: TApplication; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnEndSession}
  EventMethodCode
end;

//property event
procedure Application_SetOnMinimize(AObj: TApplication; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMinimize}
  EventMethodCode
end;

//property event
procedure Application_SetOnModalBegin(AObj: TApplication; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnModalBegin}
  EventMethodCode
end;

//property event
procedure Application_SetOnModalEnd(AObj: TApplication; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnModalEnd}
  EventMethodCode
end;

//property event
procedure Application_SetOnRestore(AObj: TApplication; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnRestore}
  EventMethodCode
end;

//property event
procedure Application_SetOnDropFiles(AObj: TApplication; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDropFilesEvent}
  {$DEFINE EventName := OnDropFiles}
  EventMethodCode
end;

//property event
procedure Application_SetOnHelp(AObj: TApplication; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTHelpEvent}
  {$DEFINE EventName := OnHelp}
  EventMethodCode
end;

//property event
procedure Application_SetOnHint(AObj: TApplication; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnHint}
  EventMethodCode
end;

//property event
procedure Application_SetOnShortcut(AObj: TApplication; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTShortcutEvent}
  {$DEFINE EventName := OnShortcut}
  EventMethodCode
end;

//property event
procedure Application_SetOnShowHint(AObj: TApplication; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTShowHintEvent}
  {$DEFINE EventName := OnShowHint}
  EventMethodCode
end;

//property event
procedure Application_SetOnDestroy(AObj: TApplication; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnDestroy}
  EventMethodCode
end;

//property event
procedure Application_SetOnCircularException(AObj: TApplication; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTExceptionEvent}
  {$DEFINE EventName := OnCircularException}
  EventMethodCode
end;


exports
  Application_Create,
  Application_Active,
  Application_ApplicationType,
  Application_BidiMode,
  Application_CaptureExceptions,
  Application_DoubleBuffered,
  Application_ExtendedKeysSupport,
  Application_ExceptionDialog,
  Application_FindGlobalComponentEnabled,
  Application_Flags,
  Application_Handle,
  Application_Hint,
  Application_HintColor,
  Application_HintHidePause,
  Application_HintHidePausePerChar,
  Application_HintPause,
  Application_HintShortCuts,
  Application_HintShortPause,
  Application_Icon,
  Application_LayoutAdjustmentPolicy,
  Application_Navigation,
  Application_MainForm,
  Application_MainFormHandle,
  Application_MainFormOnTaskBar,
  Application_ModalLevel,
  Application_MoveFormFocusToChildren,
  Application_MouseControl,
  Application_TaskBarBehavior,
  Application_UpdateFormatSettings,
  Application_ShowButtonGlyphs,
  Application_ShowMenuGlyphs,
  Application_ShowHint,
  Application_ShowMainForm,
  Application_Scaled,
  Application_GetControlAtMouse,
  Application_GetControlAtPos,
  Application_BigIconHandle,
  Application_SmallIconHandle,
  Application_HelpCommand,
  Application_HelpContext,
  Application_HelpKeyword,
  Application_HelpShowTableOfContents,
  Application_IsWaiting,
  Application_MessageBox,
  Application_IsShortcut,
  Application_IsRightToLeft,
  Application_IsRTLLang,
  Application_Direction,
  Application_Class,
  Application_ActivateHint,
  Application_ControlDestroyed,
  Application_BringToFront,
  Application_UpdateMainForm,
  Application_RemoveAsyncCalls,
  Application_ReleaseComponent,
  Application_HandleMessage,
  Application_ShowHelpForObject,
  Application_RemoveStayOnTop,
  Application_RestoreStayOnTop,
  Application_CancelHint,
  Application_HideHint,
  Application_HintMouseMessage,
  Application_Minimize,
  Application_ModalStarted,
  Application_ModalFinished,
  Application_Restore,
  Application_Notification,
  Application_ProcessMessages,
  Application_Idle,
  Application_DisableIdleHandler,
  Application_EnableIdleHandler,
  Application_NotifyUserInputHandler,
  Application_NotifyKeyDownBeforeHandler,
  Application_NotifyKeyDownHandler,
  Application_ControlKeyDown,
  Application_ControlKeyUp,
  Application_RemoveAllHandlersOfObject,
  Application_DoBeforeMouseMessage,
  Application_IntfEndSession,
  Application_IntfAppActivate,
  Application_IntfAppDeactivate,
  Application_IntfAppMinimize,
  Application_IntfAppRestore,
  Application_IntfSettingsChange,
  Application_IntfThemeOptionChange,
  Application_DoArrowKey,
  Application_DoTabKey,
  Application_DoEscapeKey,
  Application_DoReturnKey,
  Application_SetOnActionExecute,
  Application_SetOnActionUpdate,
  Application_SetOnActivate,
  Application_SetOnDeactivate,
  Application_SetOnGetMainFormHandle,
  Application_SetOnIdleEnd,
  Application_SetOnEndSession,
  Application_SetOnMinimize,
  Application_SetOnModalBegin,
  Application_SetOnModalEnd,
  Application_SetOnRestore,
  Application_SetOnDropFiles,
  Application_SetOnHelp,
  Application_SetOnHint,
  Application_SetOnShortcut,
  Application_SetOnShowHint,
  Application_SetOnDestroy,
  Application_SetOnCircularException;