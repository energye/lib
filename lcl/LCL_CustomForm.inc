
//constructor
function CustomForm_Create(AOwner: TComponent): TCustomForm; extdecl;
begin
  handleExceptionBegin
  Result := TCustomForm.Create(AOwner);
  handleExceptionEnd
end;

//constructor
function CustomForm_CreateNew(AOwner: TComponent; Num: Integer): TCustomForm; extdecl;
begin
  handleExceptionBegin
  Result := TCustomForm.CreateNew(AOwner, Num);
  handleExceptionEnd
end;

//property
function CustomForm_Active(AObj: TCustomForm): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Active;
  handleExceptionEnd
end;

//property
function CustomForm_ActiveControl(AIsSet: LongBool; AObj: TCustomForm; AValue: TWinControl): TWinControl; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ActiveControl := AValue;
  end else
    Result := AObj.ActiveControl;
  handleExceptionEnd
end;

//property
function CustomForm_ActiveDefaultControl(AIsSet: LongBool; AObj: TCustomForm; AValue: TControl): TControl; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ActiveDefaultControl := AValue;
  end else
    Result := AObj.ActiveDefaultControl;
  handleExceptionEnd
end;

//property
function CustomForm_AllowDropFiles(AIsSet: LongBool; AObj: TCustomForm; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.AllowDropFiles := AValue;
  end else
    Result := AObj.AllowDropFiles;
  handleExceptionEnd
end;

//property
function CustomForm_AlphaBlend(AIsSet: LongBool; AObj: TCustomForm; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.AlphaBlend := AValue;
  end else
    Result := AObj.AlphaBlend;
  handleExceptionEnd
end;

//property
function CustomForm_AlphaBlendValue(AIsSet: LongBool; AObj: TCustomForm; AValue: Byte): Byte; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.AlphaBlendValue := AValue;
  end else
    Result := AObj.AlphaBlendValue;
  handleExceptionEnd
end;

//property
function CustomForm_AutoScroll(AIsSet: LongBool; AObj: TCustomForm; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.AutoScroll := AValue;
  end else
    Result := AObj.AutoScroll;
  handleExceptionEnd
end;

//property
function CustomForm_BorderIcons(AIsSet: LongBool; AObj: TCustomForm; AValue: TBorderIcons): TBorderIcons; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.BorderIcons := AValue;
  end else
    Result := AObj.BorderIcons;
  handleExceptionEnd
end;

//property
function CustomForm_BorderStyleForFormBorderStyle(AIsSet: LongBool; AObj: TCustomForm; AValue: TFormBorderStyle): TFormBorderStyle; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.BorderStyle := AValue;
  end else
    Result := AObj.BorderStyle;
  handleExceptionEnd
end;

//property
function CustomForm_CancelControl(AIsSet: LongBool; AObj: TCustomForm; AValue: TControl): TControl; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.CancelControl := AValue;
  end else
    Result := AObj.CancelControl;
  handleExceptionEnd
end;

//property
function CustomForm_DefaultControl(AIsSet: LongBool; AObj: TCustomForm; AValue: TControl): TControl; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DefaultControl := AValue;
  end else
    Result := AObj.DefaultControl;
  handleExceptionEnd
end;

//property
function CustomForm_DefaultMonitor(AIsSet: LongBool; AObj: TCustomForm; AValue: TDefaultMonitor): TDefaultMonitor; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DefaultMonitor := AValue;
  end else
    Result := AObj.DefaultMonitor;
  handleExceptionEnd
end;

//property
function CustomForm_Designer(AIsSet: LongBool; AObj: TCustomForm; AValue: TIDesigner): TIDesigner; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Designer := AValue;
  end else
    Result := AObj.Designer;
  handleExceptionEnd
end;

//property
function CustomForm_EffectiveShowInTaskBar(AObj: TCustomForm): TShowInTaskBar; extdecl;
begin
  handleExceptionBegin
  Result := AObj.EffectiveShowInTaskBar;
  handleExceptionEnd
end;

//property
function CustomForm_FormState(AObj: TCustomForm): TFormState; extdecl;
begin
  handleExceptionBegin
  Result := AObj.FormState;
  handleExceptionEnd
end;

//property
function CustomForm_FormStyle(AIsSet: LongBool; AObj: TCustomForm; AValue: TFormStyle): TFormStyle; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.FormStyle := AValue;
  end else
    Result := AObj.FormStyle;
  handleExceptionEnd
end;

//property
function CustomForm_HelpFile(AIsSet: LongBool; AObj: TCustomForm; AValue: PChar): PChar; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.HelpFile := AValue;
  end else
    Result := ToPChar(AObj.HelpFile);
  handleExceptionEnd
end;

//property
function CustomForm_Icon(AIsSet: LongBool; AObj: TCustomForm; AValue: TIcon): TIcon; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Icon := AValue;
  end else
    Result := AObj.Icon;
  handleExceptionEnd
end;

//property
function CustomForm_KeyPreview(AIsSet: LongBool; AObj: TCustomForm; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.KeyPreview := AValue;
  end else
    Result := AObj.KeyPreview;
  handleExceptionEnd
end;

//property
function CustomForm_MDIChildren(AObj: TCustomForm; I: Integer): TCustomForm; extdecl;
begin
  handleExceptionBegin
  Result := AObj.MDIChildren[I];
  handleExceptionEnd
end;

//property
function CustomForm_Menu(AIsSet: LongBool; AObj: TCustomForm; AValue: TMainMenu): TMainMenu; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Menu := AValue;
  end else
    Result := AObj.Menu;
  handleExceptionEnd
end;

//property
function CustomForm_ModalResult(AIsSet: LongBool; AObj: TCustomForm; AValue: TModalResult): TModalResult; extdecl;
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
function CustomForm_Monitor(AObj: TCustomForm): TMonitor; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Monitor;
  handleExceptionEnd
end;

//property
function CustomForm_LastActiveControl(AObj: TCustomForm): TWinControl; extdecl;
begin
  handleExceptionBegin
  Result := AObj.LastActiveControl;
  handleExceptionEnd
end;

//property
function CustomForm_PopupMode(AIsSet: LongBool; AObj: TCustomForm; AValue: TPopupMode): TPopupMode; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.PopupMode := AValue;
  end else
    Result := AObj.PopupMode;
  handleExceptionEnd
end;

//property
function CustomForm_PopupParent(AIsSet: LongBool; AObj: TCustomForm; AValue: TCustomForm): TCustomForm; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.PopupParent := AValue;
  end else
    Result := AObj.PopupParent;
  handleExceptionEnd
end;

//property
function CustomForm_SnapOptions(AIsSet: LongBool; AObj: TCustomForm; AValue: TWindowMagnetOptions): TWindowMagnetOptions; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.SnapOptions := AValue;
  end else
    Result := AObj.SnapOptions;
  handleExceptionEnd
end;

//property
function CustomForm_ScreenSnap(AIsSet: LongBool; AObj: TCustomForm; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ScreenSnap := AValue;
  end else
    Result := AObj.ScreenSnap;
  handleExceptionEnd
end;

//property
function CustomForm_SnapBuffer(AIsSet: LongBool; AObj: TCustomForm; AValue: integer): integer; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.SnapBuffer := AValue;
  end else
    Result := AObj.SnapBuffer;
  handleExceptionEnd
end;

//property
function CustomForm_ParentFont(AIsSet: LongBool; AObj: TCustomForm; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ParentFont := AValue;
  end else
    Result := AObj.ParentFont;
  handleExceptionEnd
end;

//property
function CustomForm_Position(AIsSet: LongBool; AObj: TCustomForm; AValue: TPosition): TPosition; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Position := AValue;
  end else
    Result := AObj.Position;
  handleExceptionEnd
end;

//property
function CustomForm_RestoredLeft(AObj: TCustomForm): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.RestoredLeft;
  handleExceptionEnd
end;

//property
function CustomForm_RestoredTop(AObj: TCustomForm): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.RestoredTop;
  handleExceptionEnd
end;

//property
function CustomForm_RestoredWidth(AObj: TCustomForm): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.RestoredWidth;
  handleExceptionEnd
end;

//property
function CustomForm_RestoredHeight(AObj: TCustomForm): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.RestoredHeight;
  handleExceptionEnd
end;

//property
function CustomForm_ShowInTaskBar(AIsSet: LongBool; AObj: TCustomForm; AValue: TShowInTaskbar): TShowInTaskbar; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ShowInTaskBar := AValue;
  end else
    Result := AObj.ShowInTaskBar;
  handleExceptionEnd
end;

//property
function CustomForm_WindowState(AIsSet: LongBool; AObj: TCustomForm; AValue: TWindowState): TWindowState; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.WindowState := AValue;
  end else
    Result := AObj.WindowState;
  handleExceptionEnd
end;

//function
function CustomForm_BigIconHandle(AObj: TCustomForm): HICON; extdecl;
begin
  handleExceptionBegin
  Result := AObj.BigIconHandle();
  handleExceptionEnd
end;

//function
function CustomForm_CloseQuery(AObj: TCustomForm): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.CloseQuery();
  handleExceptionEnd
end;

//function
function CustomForm_GetFormImage(AObj: TCustomForm): TBitmap; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetFormImage();
  handleExceptionEnd
end;

//function
function CustomForm_GetRolesForControl(AObj: TCustomForm; AControl: TControl): TControlRolesForForm; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetRolesForControl(AControl);
  handleExceptionEnd
end;

//function
function CustomForm_GetRealPopupParent(AObj: TCustomForm): TCustomForm; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetRealPopupParent();
  handleExceptionEnd
end;

//function
function CustomForm_IsShortcut(AObj: TCustomForm; var Message: TLMKey): LongBool; extdecl;
var
  RetMessage: TLMKey;
begin
  handleExceptionBegin
  RetMessage := Message;
  Result := AObj.IsShortcut(RetMessage);
  Message := RetMessage;
  handleExceptionEnd
end;

//function
function CustomForm_SetFocusedControl(AObj: TCustomForm; Control: TWinControl): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.SetFocusedControl(Control);
  handleExceptionEnd
end;

//function
function CustomForm_ShowModal(AObj: TCustomForm): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.ShowModal();
  handleExceptionEnd
end;

//function
function CustomForm_SmallIconHandle(AObj: TCustomForm): HICON; extdecl;
begin
  handleExceptionBegin
  Result := AObj.SmallIconHandle();
  handleExceptionEnd
end;

//function
function CustomForm_WantChildKey(AObj: TCustomForm; Child: TControl; var Message: TLMessage): LongBool; extdecl;
var
  RetMessage: TLMessage;
begin
  handleExceptionBegin
  RetMessage := Message;
  Result := AObj.WantChildKey(Child, RetMessage);
  Message := RetMessage;
  handleExceptionEnd
end;

//function
function CustomForm_ActiveMDIChild(AObj: TCustomForm): TCustomForm; extdecl;
begin
  handleExceptionBegin
  Result := AObj.ActiveMDIChild();
  handleExceptionEnd
end;

//function
function CustomForm_GetMDIChildren(AObj: TCustomForm; AIndex: Integer): TCustomForm; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetMDIChildren(AIndex);
  handleExceptionEnd
end;

//function
function CustomForm_MDIChildCount(AObj: TCustomForm): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.MDIChildCount();
  handleExceptionEnd
end;

//function
function CustomForm_Class(): TClass; extdecl;
begin
  Result := TCustomForm;
end;

//procedure
procedure CustomForm_Close(AObj: TCustomForm); extdecl;
begin
  handleExceptionBegin
  AObj.Close();
  handleExceptionEnd
end;

//procedure
procedure CustomForm_DefocusControl(AObj: TCustomForm; Control: TWinControl; Removing: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.DefocusControl(Control, Removing);
  handleExceptionEnd
end;

//procedure
procedure CustomForm_DestroyWnd(AObj: TCustomForm); extdecl;
begin
  handleExceptionBegin
  AObj.DestroyWnd();
  handleExceptionEnd
end;

//procedure
procedure CustomForm_EnsureVisible(AObj: TCustomForm; AMoveToTop: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.EnsureVisible(AMoveToTop);
  handleExceptionEnd
end;

//procedure
procedure CustomForm_FocusControl(AObj: TCustomForm; WinControl: TWinControl); extdecl;
begin
  handleExceptionBegin
  AObj.FocusControl(WinControl);
  handleExceptionEnd
end;

//procedure
procedure CustomForm_IntfHelp(AObj: TCustomForm; AComponent: TComponent); extdecl;
begin
  handleExceptionBegin
  AObj.IntfHelp(AComponent);
  handleExceptionEnd
end;

//procedure
procedure CustomForm_MakeFullyVisible(AObj: TCustomForm; AMonitor: TMonitor; UseWorkarea: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.MakeFullyVisible(AMonitor, UseWorkarea);
  handleExceptionEnd
end;

//procedure
procedure CustomForm_Release(AObj: TCustomForm); extdecl;
begin
  handleExceptionBegin
  AObj.Release();
  handleExceptionEnd
end;

//procedure
procedure CustomForm_SetRestoredBounds(AObj: TCustomForm; ALeft, ATop, AWidth, AHeight: Integer; const ADefaultPosition: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.SetRestoredBounds(ALeft, ATop, AWidth, AHeight, ADefaultPosition);
  handleExceptionEnd
end;

//procedure
procedure CustomForm_ShowOnTop(AObj: TCustomForm); extdecl;
begin
  handleExceptionBegin
  AObj.ShowOnTop();
  handleExceptionEnd
end;

//procedure
procedure CustomForm_AutoScale(AObj: TCustomForm); extdecl;
begin
  handleExceptionBegin
  AObj.AutoScale();
  handleExceptionEnd
end;

//property event
procedure CustomForm_SetOnActivate(AObj: TCustomForm; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnActivate}
  EventMethodCode
end;

//property event
procedure CustomForm_SetOnClose(AObj: TCustomForm; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTCloseEvent}
  {$DEFINE EventName := OnClose}
  EventMethodCode
end;

//property event
procedure CustomForm_SetOnCloseQuery(AObj: TCustomForm; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTCloseQueryEvent}
  {$DEFINE EventName := OnCloseQuery}
  EventMethodCode
end;

//property event
procedure CustomForm_SetOnCreate(AObj: TCustomForm; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnCreate}
  EventMethodCode
end;

//property event
procedure CustomForm_SetOnDeactivate(AObj: TCustomForm; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnDeactivate}
  EventMethodCode
end;

//property event
procedure CustomForm_SetOnDestroy(AObj: TCustomForm; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnDestroy}
  EventMethodCode
end;

//property event
procedure CustomForm_SetOnDropFiles(AObj: TCustomForm; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDropFilesEvent}
  {$DEFINE EventName := OnDropFiles}
  EventMethodCode
end;

//property event
procedure CustomForm_SetOnHelp(AObj: TCustomForm; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTHelpEvent}
  {$DEFINE EventName := OnHelp}
  EventMethodCode
end;

//property event
procedure CustomForm_SetOnHide(AObj: TCustomForm; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnHide}
  EventMethodCode
end;

//property event
procedure CustomForm_SetOnShortcut(AObj: TCustomForm; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTShortcutEvent}
  {$DEFINE EventName := OnShortcut}
  EventMethodCode
end;

//property event
procedure CustomForm_SetOnShow(AObj: TCustomForm; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnShow}
  EventMethodCode
end;

//property event
procedure CustomForm_SetOnShowModalFinished(AObj: TCustomForm; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTModalDialogFinished}
  {$DEFINE EventName := OnShowModalFinished}
  EventMethodCode
end;

//property event
procedure CustomForm_SetOnWindowStateChange(AObj: TCustomForm; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnWindowStateChange}
  EventMethodCode
end;


exports
  CustomForm_Create,
  CustomForm_CreateNew,
  CustomForm_Active,
  CustomForm_ActiveControl,
  CustomForm_ActiveDefaultControl,
  CustomForm_AllowDropFiles,
  CustomForm_AlphaBlend,
  CustomForm_AlphaBlendValue,
  CustomForm_AutoScroll,
  CustomForm_BorderIcons,
  CustomForm_BorderStyleForFormBorderStyle,
  CustomForm_CancelControl,
  CustomForm_DefaultControl,
  CustomForm_DefaultMonitor,
  CustomForm_Designer,
  CustomForm_EffectiveShowInTaskBar,
  CustomForm_FormState,
  CustomForm_FormStyle,
  CustomForm_HelpFile,
  CustomForm_Icon,
  CustomForm_KeyPreview,
  CustomForm_MDIChildren,
  CustomForm_Menu,
  CustomForm_ModalResult,
  CustomForm_Monitor,
  CustomForm_LastActiveControl,
  CustomForm_PopupMode,
  CustomForm_PopupParent,
  CustomForm_SnapOptions,
  CustomForm_ScreenSnap,
  CustomForm_SnapBuffer,
  CustomForm_ParentFont,
  CustomForm_Position,
  CustomForm_RestoredLeft,
  CustomForm_RestoredTop,
  CustomForm_RestoredWidth,
  CustomForm_RestoredHeight,
  CustomForm_ShowInTaskBar,
  CustomForm_WindowState,
  CustomForm_BigIconHandle,
  CustomForm_CloseQuery,
  CustomForm_GetFormImage,
  CustomForm_GetRolesForControl,
  CustomForm_GetRealPopupParent,
  CustomForm_IsShortcut,
  CustomForm_SetFocusedControl,
  CustomForm_ShowModal,
  CustomForm_SmallIconHandle,
  CustomForm_WantChildKey,
  CustomForm_ActiveMDIChild,
  CustomForm_GetMDIChildren,
  CustomForm_MDIChildCount,
  CustomForm_Class,
  CustomForm_Close,
  CustomForm_DefocusControl,
  CustomForm_DestroyWnd,
  CustomForm_EnsureVisible,
  CustomForm_FocusControl,
  CustomForm_IntfHelp,
  CustomForm_MakeFullyVisible,
  CustomForm_Release,
  CustomForm_SetRestoredBounds,
  CustomForm_ShowOnTop,
  CustomForm_AutoScale,
  CustomForm_SetOnActivate,
  CustomForm_SetOnClose,
  CustomForm_SetOnCloseQuery,
  CustomForm_SetOnCreate,
  CustomForm_SetOnDeactivate,
  CustomForm_SetOnDestroy,
  CustomForm_SetOnDropFiles,
  CustomForm_SetOnHelp,
  CustomForm_SetOnHide,
  CustomForm_SetOnShortcut,
  CustomForm_SetOnShow,
  CustomForm_SetOnShowModalFinished,
  CustomForm_SetOnWindowStateChange;