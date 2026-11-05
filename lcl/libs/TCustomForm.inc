// constructor
function TCustomForm_Create(AOwner: TComponent): TCustomForm; extdecl;
begin
  {$define handleExceptionID := 1200}
  handleExceptionBegin
  Result := TCustomForm.Create(AOwner);
  handleExceptionEnd
end;

// constructor
function TCustomForm_CreateNew(AOwner: TComponent; Num: Integer): TCustomForm; extdecl;
begin
  {$define handleExceptionID := 1201}
  handleExceptionBegin
  Result := TCustomForm.CreateNew(AOwner, Num);
  handleExceptionEnd
end;

// function
function TCustomForm_BigIconHandle(AObj: TCustomForm): HICON; extdecl;
begin
  {$define handleExceptionID := 1202}
  handleExceptionBegin
  Result := AObj.BigIconHandle();
  handleExceptionEnd
end;

// function
function TCustomForm_CloseQuery(AObj: TCustomForm): LongBool; extdecl;
begin
  {$define handleExceptionID := 1203}
  handleExceptionBegin
  Result := AObj.CloseQuery();
  handleExceptionEnd
end;

// function
function TCustomForm_GetFormImageToBitmap(AObj: TCustomForm): TBitmap; extdecl;
begin
  {$define handleExceptionID := 1204}
  handleExceptionBegin
  Result := AObj.GetFormImage();
  handleExceptionEnd
end;

// function
function TCustomForm_GetRolesForControl(AObj: TCustomForm; AControl: TControl): TControlRolesForForm; extdecl;
begin
  {$define handleExceptionID := 1205}
  handleExceptionBegin
  Result := AObj.GetRolesForControl(AControl);
  handleExceptionEnd
end;

// function
function TCustomForm_GetRealPopupParent(AObj: TCustomForm): TCustomForm; extdecl;
begin
  {$define handleExceptionID := 1206}
  handleExceptionBegin
  Result := AObj.GetRealPopupParent();
  handleExceptionEnd
end;

// function
function TCustomForm_IsShortcut(AObj: TCustomForm; var Message: TLMKeyPtr): LongBool; extdecl;
var
  OutMessage: TLMKey;
begin
  {$define handleExceptionID := 1207}
  handleExceptionBegin
  OutMessage := TLMKeyToPas(Message);
  Result := AObj.IsShortcut(OutMessage);
  Message := TLMKeyToGo(OutMessage);
  handleExceptionEnd
end;

// function
function TCustomForm_SetFocusedControl(AObj: TCustomForm; Control: TWinControl): LongBool; extdecl;
begin
  {$define handleExceptionID := 1208}
  handleExceptionBegin
  Result := AObj.SetFocusedControl(Control);
  handleExceptionEnd
end;

// function
function TCustomForm_ShowModal(AObj: TCustomForm): Integer; extdecl;
begin
  {$define handleExceptionID := 1209}
  handleExceptionBegin
  Result := AObj.ShowModal();
  handleExceptionEnd
end;

// function
function TCustomForm_SmallIconHandle(AObj: TCustomForm): HICON; extdecl;
begin
  {$define handleExceptionID := 1210}
  handleExceptionBegin
  Result := AObj.SmallIconHandle();
  handleExceptionEnd
end;

// function
function TCustomForm_WantChildKey(AObj: TCustomForm; Child: TControl; var Message: TLMessage): LongBool; extdecl;
var
  OutMessage: TLMessage;
begin
  {$define handleExceptionID := 1211}
  handleExceptionBegin
  OutMessage := Message;
  Result := AObj.WantChildKey(Child, OutMessage);
  Message := OutMessage;
  handleExceptionEnd
end;

// function
function TCustomForm_ActiveMDIChild(AObj: TCustomForm): TCustomForm; extdecl;
begin
  {$define handleExceptionID := 1212}
  handleExceptionBegin
  Result := AObj.ActiveMDIChild();
  handleExceptionEnd
end;

// function
function TCustomForm_GetMDIChildren(AObj: TCustomForm; AIndex: Integer): TCustomForm; extdecl;
begin
  {$define handleExceptionID := 1213}
  handleExceptionBegin
  Result := AObj.GetMDIChildren(AIndex);
  handleExceptionEnd
end;

// function
function TCustomForm_MDIChildCount(AObj: TCustomForm): Integer; extdecl;
begin
  {$define handleExceptionID := 1214}
  handleExceptionBegin
  Result := AObj.MDIChildCount();
  handleExceptionEnd
end;

// procedure
procedure TCustomForm_Close(AObj: TCustomForm); extdecl;
begin
  {$define handleExceptionID := 1215}
  handleExceptionBegin
  AObj.Close();
  handleExceptionEnd
end;

// procedure
procedure TCustomForm_DefocusControl(AObj: TCustomForm; Control: TWinControl; Removing: LongBool); extdecl;
begin
  {$define handleExceptionID := 1216}
  handleExceptionBegin
  AObj.DefocusControl(Control, Removing);
  handleExceptionEnd
end;

// procedure
procedure TCustomForm_DestroyWnd(AObj: TCustomForm); extdecl;
begin
  {$define handleExceptionID := 1217}
  handleExceptionBegin
  AObj.DestroyWnd();
  handleExceptionEnd
end;

// procedure
procedure TCustomForm_EnsureVisible(AObj: TCustomForm; AMoveToTop: LongBool); extdecl;
begin
  {$define handleExceptionID := 1218}
  handleExceptionBegin
  AObj.EnsureVisible(AMoveToTop);
  handleExceptionEnd
end;

// procedure
procedure TCustomForm_FocusControl(AObj: TCustomForm; WinControl: TWinControl); extdecl;
begin
  {$define handleExceptionID := 1219}
  handleExceptionBegin
  AObj.FocusControl(WinControl);
  handleExceptionEnd
end;

// procedure
procedure TCustomForm_GetFormImageWithCustomBitmap(AObj: TCustomForm; ABitmap: TCustomBitmap); extdecl;
begin
  {$define handleExceptionID := 1220}
  handleExceptionBegin
  AObj.GetFormImage(ABitmap);
  handleExceptionEnd
end;

// procedure
procedure TCustomForm_Hide(AObj: TCustomForm); extdecl;
begin
  {$define handleExceptionID := 1221}
  handleExceptionBegin
  AObj.Hide();
  handleExceptionEnd
end;

// procedure
procedure TCustomForm_IntfHelp(AObj: TCustomForm; AComponent: TComponent); extdecl;
begin
  {$define handleExceptionID := 1222}
  handleExceptionBegin
  AObj.IntfHelp(AComponent);
  handleExceptionEnd
end;

// procedure
procedure TCustomForm_MakeFullyVisible(AObj: TCustomForm; AMonitor: TMonitor; UseWorkarea: LongBool); extdecl;
begin
  {$define handleExceptionID := 1223}
  handleExceptionBegin
  AObj.MakeFullyVisible(AMonitor, UseWorkarea);
  handleExceptionEnd
end;

// procedure
procedure TCustomForm_Release(AObj: TCustomForm); extdecl;
begin
  {$define handleExceptionID := 1224}
  handleExceptionBegin
  AObj.Release();
  handleExceptionEnd
end;

// procedure
procedure TCustomForm_SetRestoredBounds(AObj: TCustomForm; ALeft: Integer; ATop: Integer; AWidth: Integer; AHeight: Integer; constADefaultPosition: LongBool); extdecl;
begin
  {$define handleExceptionID := 1225}
  handleExceptionBegin
  AObj.SetRestoredBounds(ALeft, ATop, AWidth, AHeight, constADefaultPosition);
  handleExceptionEnd
end;

// procedure
procedure TCustomForm_Show(AObj: TCustomForm); extdecl;
begin
  {$define handleExceptionID := 1226}
  handleExceptionBegin
  AObj.Show();
  handleExceptionEnd
end;

// procedure
procedure TCustomForm_ShowOnTop(AObj: TCustomForm); extdecl;
begin
  {$define handleExceptionID := 1227}
  handleExceptionBegin
  AObj.ShowOnTop();
  handleExceptionEnd
end;

// procedure
procedure TCustomForm_AutoScale(AObj: TCustomForm); extdecl;
begin
  {$define handleExceptionID := 1228}
  handleExceptionBegin
  AObj.AutoScale();
  handleExceptionEnd
end;

// property
function TCustomForm_Active(AObj: TCustomForm): LongBool; extdecl;
begin
  {$define handleExceptionID := 1229}
  handleExceptionBegin
  Result := AObj.Active;
  handleExceptionEnd
end;

// property
function TCustomForm_ActiveControl(ASet: LongBool; AObj: TCustomForm; AValue: TWinControl): TWinControl; extdecl;
begin
  {$define handleExceptionID := 1230}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ActiveControl := AValue
  end else
    Result := AObj.ActiveControl;
  handleExceptionEnd
end;

// property
function TCustomForm_ActiveDefaultControl(ASet: LongBool; AObj: TCustomForm; AValue: TControl): TControl; extdecl;
begin
  {$define handleExceptionID := 1231}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ActiveDefaultControl := AValue
  end else
    Result := AObj.ActiveDefaultControl;
  handleExceptionEnd
end;

// property
function TCustomForm_AllowDropFiles(ASet: LongBool; AObj: TCustomForm; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 1232}
  handleExceptionBegin
  if ASet then
  begin
    AObj.AllowDropFiles := AValue
  end else
    Result := AObj.AllowDropFiles;
  handleExceptionEnd
end;

// property
function TCustomForm_AlphaBlend(ASet: LongBool; AObj: TCustomForm; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 1233}
  handleExceptionBegin
  if ASet then
  begin
    AObj.AlphaBlend := AValue
  end else
    Result := AObj.AlphaBlend;
  handleExceptionEnd
end;

// property
function TCustomForm_AlphaBlendValue(ASet: LongBool; AObj: TCustomForm; AValue: Byte): Byte; extdecl;
begin
  {$define handleExceptionID := 1234}
  handleExceptionBegin
  if ASet then
  begin
    AObj.AlphaBlendValue := AValue
  end else
    Result := AObj.AlphaBlendValue;
  handleExceptionEnd
end;

// property
function TCustomForm_AutoScroll(ASet: LongBool; AObj: TCustomForm; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 1235}
  handleExceptionBegin
  if ASet then
  begin
    AObj.AutoScroll := AValue
  end else
    Result := AObj.AutoScroll;
  handleExceptionEnd
end;

// property
function TCustomForm_BorderIcons(ASet: LongBool; AObj: TCustomForm; AValue: TBorderIcons): TBorderIcons; extdecl;
begin
  {$define handleExceptionID := 1236}
  handleExceptionBegin
  if ASet then
  begin
    AObj.BorderIcons := AValue
  end else
    Result := AObj.BorderIcons;
  handleExceptionEnd
end;

// property
function TCustomForm_BorderStyleToFormBorderStyle(ASet: LongBool; AObj: TCustomForm; AValue: TFormBorderStyle): TFormBorderStyle; extdecl;
begin
  {$define handleExceptionID := 1237}
  handleExceptionBegin
  if ASet then
  begin
    AObj.BorderStyle := AValue
  end else
    Result := AObj.BorderStyle;
  handleExceptionEnd
end;

// property
function TCustomForm_CancelControl(ASet: LongBool; AObj: TCustomForm; AValue: TControl): TControl; extdecl;
begin
  {$define handleExceptionID := 1238}
  handleExceptionBegin
  if ASet then
  begin
    AObj.CancelControl := AValue
  end else
    Result := AObj.CancelControl;
  handleExceptionEnd
end;

// property
function TCustomForm_DefaultControl(ASet: LongBool; AObj: TCustomForm; AValue: TControl): TControl; extdecl;
begin
  {$define handleExceptionID := 1239}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DefaultControl := AValue
  end else
    Result := AObj.DefaultControl;
  handleExceptionEnd
end;

// property
function TCustomForm_DefaultMonitor(ASet: LongBool; AObj: TCustomForm; AValue: TDefaultMonitor): TDefaultMonitor; extdecl;
begin
  {$define handleExceptionID := 1240}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DefaultMonitor := AValue
  end else
    Result := AObj.DefaultMonitor;
  handleExceptionEnd
end;

// property
function TCustomForm_Designer(ASet: LongBool; AObj: TCustomForm; AValue: TIDesigner): TIDesigner; extdecl;
begin
  {$define handleExceptionID := 1241}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Designer := AValue
  end else
    Result := AObj.Designer;
  handleExceptionEnd
end;

// property
function TCustomForm_EffectiveShowInTaskBar(AObj: TCustomForm): TShowInTaskBar; extdecl;
begin
  {$define handleExceptionID := 1242}
  handleExceptionBegin
  Result := AObj.EffectiveShowInTaskBar;
  handleExceptionEnd
end;

// property
function TCustomForm_FormState(AObj: TCustomForm): TFormState; extdecl;
begin
  {$define handleExceptionID := 1243}
  handleExceptionBegin
  Result := AObj.FormState;
  handleExceptionEnd
end;

// property
function TCustomForm_FormStyle(ASet: LongBool; AObj: TCustomForm; AValue: TFormStyle): TFormStyle; extdecl;
begin
  {$define handleExceptionID := 1244}
  handleExceptionBegin
  if ASet then
  begin
    AObj.FormStyle := AValue
  end else
    Result := AObj.FormStyle;
  handleExceptionEnd
end;

// property
procedure TCustomForm_HelpFile(ASet: LongBool; AObj: TCustomForm; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 1245}
  handleExceptionBegin
  if ASet then
  begin
    AObj.HelpFile := AValue
  end else
    StringBufferCreate(AObj.HelpFile, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TCustomForm_Icon(ASet: LongBool; AObj: TCustomForm; AValue: TIcon): TIcon; extdecl;
begin
  {$define handleExceptionID := 1246}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Icon := AValue
  end else
    Result := AObj.Icon;
  handleExceptionEnd
end;

// property
function TCustomForm_KeyPreview(ASet: LongBool; AObj: TCustomForm; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 1247}
  handleExceptionBegin
  if ASet then
  begin
    AObj.KeyPreview := AValue
  end else
    Result := AObj.KeyPreview;
  handleExceptionEnd
end;

// property
function TCustomForm_MDIChildren(AObj: TCustomForm; I: Integer): TCustomForm; extdecl;
begin
  {$define handleExceptionID := 1248}
  handleExceptionBegin
  Result := AObj.MDIChildren[I];
  handleExceptionEnd
end;

// property
function TCustomForm_Menu(ASet: LongBool; AObj: TCustomForm; AValue: TMainMenu): TMainMenu; extdecl;
begin
  {$define handleExceptionID := 1249}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Menu := AValue
  end else
    Result := AObj.Menu;
  handleExceptionEnd
end;

// property
function TCustomForm_ModalResult(ASet: LongBool; AObj: TCustomForm; AValue: TModalResult): TModalResult; extdecl;
begin
  {$define handleExceptionID := 1250}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ModalResult := AValue
  end else
    Result := AObj.ModalResult;
  handleExceptionEnd
end;

// property
function TCustomForm_Monitor(AObj: TCustomForm): TMonitor; extdecl;
begin
  {$define handleExceptionID := 1251}
  handleExceptionBegin
  Result := AObj.Monitor;
  handleExceptionEnd
end;

// property
function TCustomForm_LastActiveControl(AObj: TCustomForm): TWinControl; extdecl;
begin
  {$define handleExceptionID := 1252}
  handleExceptionBegin
  Result := AObj.LastActiveControl;
  handleExceptionEnd
end;

// property
function TCustomForm_PopupMode(ASet: LongBool; AObj: TCustomForm; AValue: TPopupMode): TPopupMode; extdecl;
begin
  {$define handleExceptionID := 1253}
  handleExceptionBegin
  if ASet then
  begin
    AObj.PopupMode := AValue
  end else
    Result := AObj.PopupMode;
  handleExceptionEnd
end;

// property
function TCustomForm_PopupParent(ASet: LongBool; AObj: TCustomForm; AValue: TCustomForm): TCustomForm; extdecl;
begin
  {$define handleExceptionID := 1254}
  handleExceptionBegin
  if ASet then
  begin
    AObj.PopupParent := AValue
  end else
    Result := AObj.PopupParent;
  handleExceptionEnd
end;

// property
function TCustomForm_SnapOptions(ASet: LongBool; AObj: TCustomForm; AValue: TWindowMagnetOptions): TWindowMagnetOptions; extdecl;
begin
  {$define handleExceptionID := 1255}
  handleExceptionBegin
  if ASet then
  begin
    AObj.SnapOptions := AValue
  end else
    Result := AObj.SnapOptions;
  handleExceptionEnd
end;

// property
function TCustomForm_ScreenSnap(ASet: LongBool; AObj: TCustomForm; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 1256}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ScreenSnap := AValue
  end else
    Result := AObj.ScreenSnap;
  handleExceptionEnd
end;

// property
function TCustomForm_SnapBuffer(ASet: LongBool; AObj: TCustomForm; AValue: integer): integer; extdecl;
begin
  {$define handleExceptionID := 1257}
  handleExceptionBegin
  if ASet then
  begin
    AObj.SnapBuffer := AValue
  end else
    Result := AObj.SnapBuffer;
  handleExceptionEnd
end;

// property
function TCustomForm_ParentFont(ASet: LongBool; AObj: TCustomForm; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 1258}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentFont := AValue
  end else
    Result := AObj.ParentFont;
  handleExceptionEnd
end;

// property
function TCustomForm_Position(ASet: LongBool; AObj: TCustomForm; AValue: TPosition): TPosition; extdecl;
begin
  {$define handleExceptionID := 1259}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Position := AValue
  end else
    Result := AObj.Position;
  handleExceptionEnd
end;

// property
function TCustomForm_RestoredLeft(AObj: TCustomForm): Integer; extdecl;
begin
  {$define handleExceptionID := 1260}
  handleExceptionBegin
  Result := AObj.RestoredLeft;
  handleExceptionEnd
end;

// property
function TCustomForm_RestoredTop(AObj: TCustomForm): Integer; extdecl;
begin
  {$define handleExceptionID := 1261}
  handleExceptionBegin
  Result := AObj.RestoredTop;
  handleExceptionEnd
end;

// property
function TCustomForm_RestoredWidth(AObj: TCustomForm): Integer; extdecl;
begin
  {$define handleExceptionID := 1262}
  handleExceptionBegin
  Result := AObj.RestoredWidth;
  handleExceptionEnd
end;

// property
function TCustomForm_RestoredHeight(AObj: TCustomForm): Integer; extdecl;
begin
  {$define handleExceptionID := 1263}
  handleExceptionBegin
  Result := AObj.RestoredHeight;
  handleExceptionEnd
end;

// property
function TCustomForm_ShowInTaskBar(ASet: LongBool; AObj: TCustomForm; AValue: TShowInTaskbar): TShowInTaskbar; extdecl;
begin
  {$define handleExceptionID := 1264}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ShowInTaskBar := AValue
  end else
    Result := AObj.ShowInTaskBar;
  handleExceptionEnd
end;

// property
function TCustomForm_WindowState(ASet: LongBool; AObj: TCustomForm; AValue: TWindowState): TWindowState; extdecl;
begin
  {$define handleExceptionID := 1265}
  handleExceptionBegin
  if ASet then
  begin
    AObj.WindowState := AValue
  end else
    Result := AObj.WindowState;
  handleExceptionEnd
end;

// event
procedure TCustomForm_OnActivate(AObj: TCustomForm; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnActivate}
  LCLEventMethodCode
end;

// event
procedure TCustomForm_OnClose(AObj: TCustomForm; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTCloseEvent}
  {$DEFINE EventName := OnClose}
  LCLEventMethodCode
end;

// event
procedure TCustomForm_OnCloseQuery(AObj: TCustomForm; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTCloseQueryEvent}
  {$DEFINE EventName := OnCloseQuery}
  LCLEventMethodCode
end;

// event
procedure TCustomForm_OnCreate(AObj: TCustomForm; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnCreate}
  LCLEventMethodCode
end;

// event
procedure TCustomForm_OnDeactivate(AObj: TCustomForm; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnDeactivate}
  LCLEventMethodCode
end;

// event
procedure TCustomForm_OnDestroy(AObj: TCustomForm; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnDestroy}
  LCLEventMethodCode
end;

// event
procedure TCustomForm_OnDropFiles(AObj: TCustomForm; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDropFilesEvent}
  {$DEFINE EventName := OnDropFiles}
  LCLEventMethodCode
end;

// event
procedure TCustomForm_OnHelp(AObj: TCustomForm; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTHelpEvent}
  {$DEFINE EventName := OnHelp}
  LCLEventMethodCode
end;

// event
procedure TCustomForm_OnHide(AObj: TCustomForm; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnHide}
  LCLEventMethodCode
end;

// event
procedure TCustomForm_OnShortcut(AObj: TCustomForm; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTShortcutEvent}
  {$DEFINE EventName := OnShortcut}
  LCLEventMethodCode
end;

// event
procedure TCustomForm_OnShow(AObj: TCustomForm; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnShow}
  LCLEventMethodCode
end;

// event
procedure TCustomForm_OnShowModalFinished(AObj: TCustomForm; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTModalDialogFinished}
  {$DEFINE EventName := OnShowModalFinished}
  LCLEventMethodCode
end;

// event
procedure TCustomForm_OnWindowStateChange(AObj: TCustomForm; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnWindowStateChange}
  LCLEventMethodCode
end;

function TCustomForm_TClass(): TClass; extdecl;
begin
  Result := TCustomForm;
end;

exports
  TCustomForm_Create,
  TCustomForm_CreateNew,
  TCustomForm_BigIconHandle,
  TCustomForm_CloseQuery,
  TCustomForm_GetFormImageToBitmap,
  TCustomForm_GetRolesForControl,
  TCustomForm_GetRealPopupParent,
  TCustomForm_IsShortcut,
  TCustomForm_SetFocusedControl,
  TCustomForm_ShowModal,
  TCustomForm_SmallIconHandle,
  TCustomForm_WantChildKey,
  TCustomForm_ActiveMDIChild,
  TCustomForm_GetMDIChildren,
  TCustomForm_MDIChildCount,
  TCustomForm_Close,
  TCustomForm_DefocusControl,
  TCustomForm_DestroyWnd,
  TCustomForm_EnsureVisible,
  TCustomForm_FocusControl,
  TCustomForm_GetFormImageWithCustomBitmap,
  TCustomForm_Hide,
  TCustomForm_IntfHelp,
  TCustomForm_MakeFullyVisible,
  TCustomForm_Release,
  TCustomForm_SetRestoredBounds,
  TCustomForm_Show,
  TCustomForm_ShowOnTop,
  TCustomForm_AutoScale,
  TCustomForm_Active,
  TCustomForm_ActiveControl,
  TCustomForm_ActiveDefaultControl,
  TCustomForm_AllowDropFiles,
  TCustomForm_AlphaBlend,
  TCustomForm_AlphaBlendValue,
  TCustomForm_AutoScroll,
  TCustomForm_BorderIcons,
  TCustomForm_BorderStyleToFormBorderStyle,
  TCustomForm_CancelControl,
  TCustomForm_DefaultControl,
  TCustomForm_DefaultMonitor,
  TCustomForm_Designer,
  TCustomForm_EffectiveShowInTaskBar,
  TCustomForm_FormState,
  TCustomForm_FormStyle,
  TCustomForm_HelpFile,
  TCustomForm_Icon,
  TCustomForm_KeyPreview,
  TCustomForm_MDIChildren,
  TCustomForm_Menu,
  TCustomForm_ModalResult,
  TCustomForm_Monitor,
  TCustomForm_LastActiveControl,
  TCustomForm_PopupMode,
  TCustomForm_PopupParent,
  TCustomForm_SnapOptions,
  TCustomForm_ScreenSnap,
  TCustomForm_SnapBuffer,
  TCustomForm_ParentFont,
  TCustomForm_Position,
  TCustomForm_RestoredLeft,
  TCustomForm_RestoredTop,
  TCustomForm_RestoredWidth,
  TCustomForm_RestoredHeight,
  TCustomForm_ShowInTaskBar,
  TCustomForm_WindowState,
  TCustomForm_OnActivate,
  TCustomForm_OnClose,
  TCustomForm_OnCloseQuery,
  TCustomForm_OnCreate,
  TCustomForm_OnDeactivate,
  TCustomForm_OnDestroy,
  TCustomForm_OnDropFiles,
  TCustomForm_OnHelp,
  TCustomForm_OnHide,
  TCustomForm_OnShortcut,
  TCustomForm_OnShow,
  TCustomForm_OnShowModalFinished,
  TCustomForm_OnWindowStateChange,
  TCustomForm_TClass;