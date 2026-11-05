// constructor
function TScreen_Create(AOwner: TComponent): TScreen; extdecl;
begin
  {$define handleExceptionID := 13200}
  handleExceptionBegin
  Result := TScreen.Create(AOwner);
  handleExceptionEnd
end;

// function
function TScreen_CustomFormIndex(AObj: TScreen; AForm: TCustomForm): Integer; extdecl;
begin
  {$define handleExceptionID := 13201}
  handleExceptionBegin
  Result := AObj.CustomFormIndex(AForm);
  handleExceptionEnd
end;

// function
function TScreen_FormIndex(AObj: TScreen; AForm: TForm): Integer; extdecl;
begin
  {$define handleExceptionID := 13202}
  handleExceptionBegin
  Result := AObj.FormIndex(AForm);
  handleExceptionEnd
end;

// function
function TScreen_CustomFormZIndex(AObj: TScreen; AForm: TCustomForm): Integer; extdecl;
begin
  {$define handleExceptionID := 13203}
  handleExceptionBegin
  Result := AObj.CustomFormZIndex(AForm);
  handleExceptionEnd
end;

// function
function TScreen_GetCurrentModalForm(AObj: TScreen): TCustomForm; extdecl;
begin
  {$define handleExceptionID := 13204}
  handleExceptionBegin
  Result := AObj.GetCurrentModalForm();
  handleExceptionEnd
end;

// function
function TScreen_GetCurrentModalFormZIndex(AObj: TScreen): Integer; extdecl;
begin
  {$define handleExceptionID := 13205}
  handleExceptionBegin
  Result := AObj.GetCurrentModalFormZIndex();
  handleExceptionEnd
end;

// function
function TScreen_CustomFormBelongsToActiveGroup(AObj: TScreen; AForm: TCustomForm): LongBool; extdecl;
begin
  {$define handleExceptionID := 13206}
  handleExceptionBegin
  Result := AObj.CustomFormBelongsToActiveGroup(AForm);
  handleExceptionEnd
end;

// function
function TScreen_FindNonDesignerForm(AObj: TScreen; const FormName: PChar): TCustomForm; extdecl;
begin
  {$define handleExceptionID := 13207}
  handleExceptionBegin
  Result := AObj.FindNonDesignerForm(FormName);
  handleExceptionEnd
end;

// function
function TScreen_FindForm(AObj: TScreen; const FormName: PChar): TCustomForm; extdecl;
begin
  {$define handleExceptionID := 13208}
  handleExceptionBegin
  Result := AObj.FindForm(FormName);
  handleExceptionEnd
end;

// function
function TScreen_FindNonDesignerDataModule(AObj: TScreen; const DataModuleName: PChar): TDataModule; extdecl;
begin
  {$define handleExceptionID := 13209}
  handleExceptionBegin
  Result := AObj.FindNonDesignerDataModule(DataModuleName);
  handleExceptionEnd
end;

// function
function TScreen_FindDataModule(AObj: TScreen; const DataModuleName: PChar): TDataModule; extdecl;
begin
  {$define handleExceptionID := 13210}
  handleExceptionBegin
  Result := AObj.FindDataModule(DataModuleName);
  handleExceptionEnd
end;

// function
function TScreen_DisableForms(AObj: TScreen; SkipForm: TCustomForm; DisabledList: TList): TList; extdecl;
begin
  {$define handleExceptionID := 13211}
  handleExceptionBegin
  Result := AObj.DisableForms(SkipForm, DisabledList);
  handleExceptionEnd
end;

// function
function TScreen_MonitorFromPoint(AObj: TScreen; var Point: TPoint; MonitorDefault: TMonitorDefaultTo): TMonitor; extdecl;
begin
  {$define handleExceptionID := 13212}
  handleExceptionBegin
  Result := AObj.MonitorFromPoint(Point, MonitorDefault);
  handleExceptionEnd
end;

// function
function TScreen_MonitorFromRect(AObj: TScreen; var Rect: TRect; MonitorDefault: TMonitorDefaultTo): TMonitor; extdecl;
begin
  {$define handleExceptionID := 13213}
  handleExceptionBegin
  Result := AObj.MonitorFromRect(Rect, MonitorDefault);
  handleExceptionEnd
end;

// function
function TScreen_MonitorFromWindow(AObj: TScreen; const Handle: TLCLHandle; MonitorDefault: TMonitorDefaultTo): TMonitor; extdecl;
begin
  {$define handleExceptionID := 13214}
  handleExceptionBegin
  Result := AObj.MonitorFromWindow(Handle, MonitorDefault);
  handleExceptionEnd
end;

// procedure
procedure TScreen_MoveFormToFocusFront(AObj: TScreen; ACustomForm: TCustomForm); extdecl;
begin
  {$define handleExceptionID := 13215}
  handleExceptionBegin
  AObj.MoveFormToFocusFront(ACustomForm);
  handleExceptionEnd
end;

// procedure
procedure TScreen_MoveFormToZFront(AObj: TScreen; ACustomForm: TCustomForm); extdecl;
begin
  {$define handleExceptionID := 13216}
  handleExceptionBegin
  AObj.MoveFormToZFront(ACustomForm);
  handleExceptionEnd
end;

// procedure
procedure TScreen_NewFormWasCreated(AObj: TScreen; AForm: TCustomForm); extdecl;
begin
  {$define handleExceptionID := 13217}
  handleExceptionBegin
  AObj.NewFormWasCreated(AForm);
  handleExceptionEnd
end;

// procedure
procedure TScreen_UpdateMonitors(AObj: TScreen); extdecl;
begin
  {$define handleExceptionID := 13218}
  handleExceptionBegin
  AObj.UpdateMonitors();
  handleExceptionEnd
end;

// procedure
procedure TScreen_UpdateScreen(AObj: TScreen); extdecl;
begin
  {$define handleExceptionID := 13219}
  handleExceptionBegin
  AObj.UpdateScreen();
  handleExceptionEnd
end;

// procedure
procedure TScreen_EnableForms(AObj: TScreen; var AFormList: TList); extdecl;
var
  OutAFormList: TList;
begin
  {$define handleExceptionID := 13220}
  handleExceptionBegin
  OutAFormList := AFormList;
  AObj.EnableForms(OutAFormList);
  AFormList := OutAFormList;
  handleExceptionEnd
end;

// procedure
procedure TScreen_BeginTempCursor(AObj: TScreen; const aCursor: TCursor); extdecl;
begin
  {$define handleExceptionID := 13221}
  handleExceptionBegin
  AObj.BeginTempCursor(aCursor);
  handleExceptionEnd
end;

// procedure
procedure TScreen_EndTempCursor(AObj: TScreen; const aCursor: TCursor); extdecl;
begin
  {$define handleExceptionID := 13222}
  handleExceptionBegin
  AObj.EndTempCursor(aCursor);
  handleExceptionEnd
end;

// procedure
procedure TScreen_BeginWaitCursor(AObj: TScreen); extdecl;
begin
  {$define handleExceptionID := 13223}
  handleExceptionBegin
  AObj.BeginWaitCursor();
  handleExceptionEnd
end;

// procedure
procedure TScreen_EndWaitCursor(AObj: TScreen); extdecl;
begin
  {$define handleExceptionID := 13224}
  handleExceptionBegin
  AObj.EndWaitCursor();
  handleExceptionEnd
end;

// procedure
procedure TScreen_BeginScreenCursor(AObj: TScreen); extdecl;
begin
  {$define handleExceptionID := 13225}
  handleExceptionBegin
  AObj.BeginScreenCursor();
  handleExceptionEnd
end;

// procedure
procedure TScreen_EndScreenCursor(AObj: TScreen); extdecl;
begin
  {$define handleExceptionID := 13226}
  handleExceptionBegin
  AObj.EndScreenCursor();
  handleExceptionEnd
end;

// property
function TScreen_ActiveControl(AObj: TScreen): TWinControl; extdecl;
begin
  {$define handleExceptionID := 13227}
  handleExceptionBegin
  Result := AObj.ActiveControl;
  handleExceptionEnd
end;

// property
function TScreen_ActiveCustomForm(AObj: TScreen): TCustomForm; extdecl;
begin
  {$define handleExceptionID := 13228}
  handleExceptionBegin
  Result := AObj.ActiveCustomForm;
  handleExceptionEnd
end;

// property
function TScreen_ActiveForm(AObj: TScreen): TForm; extdecl;
begin
  {$define handleExceptionID := 13229}
  handleExceptionBegin
  Result := AObj.ActiveForm;
  handleExceptionEnd
end;

// property
function TScreen_Cursor(ASet: LongBool; AObj: TScreen; AValue: TCursor): TCursor; extdecl;
begin
  {$define handleExceptionID := 13230}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Cursor := AValue
  end else
    Result := AObj.Cursor;
  handleExceptionEnd
end;

// property
function TScreen_RealCursor(AObj: TScreen): TCursor; extdecl;
begin
  {$define handleExceptionID := 13231}
  handleExceptionBegin
  Result := AObj.RealCursor;
  handleExceptionEnd
end;

// property
function TScreen_Cursors(ASet: LongBool; AObj: TScreen; Index: Integer; AValue: HCURSOR): HCURSOR; extdecl;
begin
  {$define handleExceptionID := 13232}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Cursors[Index] := AValue
  end else
    Result := AObj.Cursors[Index];
  handleExceptionEnd
end;

// property
function TScreen_CustomFormCount(AObj: TScreen): Integer; extdecl;
begin
  {$define handleExceptionID := 13233}
  handleExceptionBegin
  Result := AObj.CustomFormCount;
  handleExceptionEnd
end;

// property
function TScreen_CustomForms(AObj: TScreen; Index: Integer): TCustomForm; extdecl;
begin
  {$define handleExceptionID := 13234}
  handleExceptionBegin
  Result := AObj.CustomForms[Index];
  handleExceptionEnd
end;

// property
function TScreen_CustomFormZOrderCount(AObj: TScreen): Integer; extdecl;
begin
  {$define handleExceptionID := 13235}
  handleExceptionBegin
  Result := AObj.CustomFormZOrderCount;
  handleExceptionEnd
end;

// property
function TScreen_CustomFormsZOrdered(AObj: TScreen; Index: Integer): TCustomForm; extdecl;
begin
  {$define handleExceptionID := 13236}
  handleExceptionBegin
  Result := AObj.CustomFormsZOrdered[Index];
  handleExceptionEnd
end;

// property
function TScreen_DesktopLeft(AObj: TScreen): Integer; extdecl;
begin
  {$define handleExceptionID := 13237}
  handleExceptionBegin
  Result := AObj.DesktopLeft;
  handleExceptionEnd
end;

// property
function TScreen_DesktopTop(AObj: TScreen): Integer; extdecl;
begin
  {$define handleExceptionID := 13238}
  handleExceptionBegin
  Result := AObj.DesktopTop;
  handleExceptionEnd
end;

// property
function TScreen_DesktopHeight(AObj: TScreen): Integer; extdecl;
begin
  {$define handleExceptionID := 13239}
  handleExceptionBegin
  Result := AObj.DesktopHeight;
  handleExceptionEnd
end;

// property
function TScreen_DesktopWidth(AObj: TScreen): Integer; extdecl;
begin
  {$define handleExceptionID := 13240}
  handleExceptionBegin
  Result := AObj.DesktopWidth;
  handleExceptionEnd
end;

// property
procedure TScreen_DesktopRect(AObj: TScreen; var Result: TRect); extdecl;
begin
  {$define handleExceptionID := 13241}
  handleExceptionBegin
  Result := AObj.DesktopRect;
  handleExceptionEnd
end;

// property
function TScreen_FocusedForm(AObj: TScreen): TCustomForm; extdecl;
begin
  {$define handleExceptionID := 13242}
  handleExceptionBegin
  Result := AObj.FocusedForm;
  handleExceptionEnd
end;

// property
function TScreen_FormCount(AObj: TScreen): Integer; extdecl;
begin
  {$define handleExceptionID := 13243}
  handleExceptionBegin
  Result := AObj.FormCount;
  handleExceptionEnd
end;

// property
function TScreen_Forms(AObj: TScreen; Index: Integer): TForm; extdecl;
begin
  {$define handleExceptionID := 13244}
  handleExceptionBegin
  Result := AObj.Forms[Index];
  handleExceptionEnd
end;

// property
function TScreen_DataModuleCount(AObj: TScreen): Integer; extdecl;
begin
  {$define handleExceptionID := 13245}
  handleExceptionBegin
  Result := AObj.DataModuleCount;
  handleExceptionEnd
end;

// property
function TScreen_DataModules(AObj: TScreen; Index: Integer): TDataModule; extdecl;
begin
  {$define handleExceptionID := 13246}
  handleExceptionBegin
  Result := AObj.DataModules[Index];
  handleExceptionEnd
end;

// property
function TScreen_HintFont(ASet: LongBool; AObj: TScreen; AValue: TFont): TFont; extdecl;
begin
  {$define handleExceptionID := 13247}
  handleExceptionBegin
  if ASet then
  begin
    AObj.HintFont := AValue
  end else
    Result := AObj.HintFont;
  handleExceptionEnd
end;

// property
function TScreen_IconFont(ASet: LongBool; AObj: TScreen; AValue: TFont): TFont; extdecl;
begin
  {$define handleExceptionID := 13248}
  handleExceptionBegin
  if ASet then
  begin
    AObj.IconFont := AValue
  end else
    Result := AObj.IconFont;
  handleExceptionEnd
end;

// property
function TScreen_MenuFont(ASet: LongBool; AObj: TScreen; AValue: TFont): TFont; extdecl;
begin
  {$define handleExceptionID := 13249}
  handleExceptionBegin
  if ASet then
  begin
    AObj.MenuFont := AValue
  end else
    Result := AObj.MenuFont;
  handleExceptionEnd
end;

// property
function TScreen_SystemFont(ASet: LongBool; AObj: TScreen; AValue: TFont): TFont; extdecl;
begin
  {$define handleExceptionID := 13250}
  handleExceptionBegin
  if ASet then
  begin
    AObj.SystemFont := AValue
  end else
    Result := AObj.SystemFont;
  handleExceptionEnd
end;

// property
function TScreen_Fonts(AObj: TScreen): TStrings; extdecl;
begin
  {$define handleExceptionID := 13251}
  handleExceptionBegin
  Result := AObj.Fonts;
  handleExceptionEnd
end;

// property
function TScreen_Height(AObj: TScreen): Integer; extdecl;
begin
  {$define handleExceptionID := 13252}
  handleExceptionBegin
  Result := AObj.Height;
  handleExceptionEnd
end;

// property
function TScreen_MonitorCount(AObj: TScreen): Integer; extdecl;
begin
  {$define handleExceptionID := 13253}
  handleExceptionBegin
  Result := AObj.MonitorCount;
  handleExceptionEnd
end;

// property
function TScreen_Monitors(AObj: TScreen; Index: Integer): TMonitor; extdecl;
begin
  {$define handleExceptionID := 13254}
  handleExceptionBegin
  Result := AObj.Monitors[Index];
  handleExceptionEnd
end;

// property
function TScreen_PixelsPerInch(AObj: TScreen): Integer; extdecl;
begin
  {$define handleExceptionID := 13255}
  handleExceptionBegin
  Result := AObj.PixelsPerInch;
  handleExceptionEnd
end;

// property
function TScreen_PrimaryMonitor(AObj: TScreen): TMonitor; extdecl;
begin
  {$define handleExceptionID := 13256}
  handleExceptionBegin
  Result := AObj.PrimaryMonitor;
  handleExceptionEnd
end;

// property
function TScreen_Width(AObj: TScreen): Integer; extdecl;
begin
  {$define handleExceptionID := 13257}
  handleExceptionBegin
  Result := AObj.Width;
  handleExceptionEnd
end;

// property
procedure TScreen_WorkAreaRect(AObj: TScreen; var Result: TRect); extdecl;
begin
  {$define handleExceptionID := 13258}
  handleExceptionBegin
  Result := AObj.WorkAreaRect;
  handleExceptionEnd
end;

// property
function TScreen_WorkAreaHeight(AObj: TScreen): Integer; extdecl;
begin
  {$define handleExceptionID := 13259}
  handleExceptionBegin
  Result := AObj.WorkAreaHeight;
  handleExceptionEnd
end;

// property
function TScreen_WorkAreaLeft(AObj: TScreen): Integer; extdecl;
begin
  {$define handleExceptionID := 13260}
  handleExceptionBegin
  Result := AObj.WorkAreaLeft;
  handleExceptionEnd
end;

// property
function TScreen_WorkAreaTop(AObj: TScreen): Integer; extdecl;
begin
  {$define handleExceptionID := 13261}
  handleExceptionBegin
  Result := AObj.WorkAreaTop;
  handleExceptionEnd
end;

// property
function TScreen_WorkAreaWidth(AObj: TScreen): Integer; extdecl;
begin
  {$define handleExceptionID := 13262}
  handleExceptionBegin
  Result := AObj.WorkAreaWidth;
  handleExceptionEnd
end;

// event
procedure TScreen_OnActiveControlChange(AObj: TScreen; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnActiveControlChange}
  LCLEventMethodCode
end;

// event
procedure TScreen_OnActiveFormChange(AObj: TScreen; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnActiveFormChange}
  LCLEventMethodCode
end;

function TScreen_TClass(): TClass; extdecl;
begin
  Result := TScreen;
end;

exports
  TScreen_Create,
  TScreen_CustomFormIndex,
  TScreen_FormIndex,
  TScreen_CustomFormZIndex,
  TScreen_GetCurrentModalForm,
  TScreen_GetCurrentModalFormZIndex,
  TScreen_CustomFormBelongsToActiveGroup,
  TScreen_FindNonDesignerForm,
  TScreen_FindForm,
  TScreen_FindNonDesignerDataModule,
  TScreen_FindDataModule,
  TScreen_DisableForms,
  TScreen_MonitorFromPoint,
  TScreen_MonitorFromRect,
  TScreen_MonitorFromWindow,
  TScreen_MoveFormToFocusFront,
  TScreen_MoveFormToZFront,
  TScreen_NewFormWasCreated,
  TScreen_UpdateMonitors,
  TScreen_UpdateScreen,
  TScreen_EnableForms,
  TScreen_BeginTempCursor,
  TScreen_EndTempCursor,
  TScreen_BeginWaitCursor,
  TScreen_EndWaitCursor,
  TScreen_BeginScreenCursor,
  TScreen_EndScreenCursor,
  TScreen_ActiveControl,
  TScreen_ActiveCustomForm,
  TScreen_ActiveForm,
  TScreen_Cursor,
  TScreen_RealCursor,
  TScreen_Cursors,
  TScreen_CustomFormCount,
  TScreen_CustomForms,
  TScreen_CustomFormZOrderCount,
  TScreen_CustomFormsZOrdered,
  TScreen_DesktopLeft,
  TScreen_DesktopTop,
  TScreen_DesktopHeight,
  TScreen_DesktopWidth,
  TScreen_DesktopRect,
  TScreen_FocusedForm,
  TScreen_FormCount,
  TScreen_Forms,
  TScreen_DataModuleCount,
  TScreen_DataModules,
  TScreen_HintFont,
  TScreen_IconFont,
  TScreen_MenuFont,
  TScreen_SystemFont,
  TScreen_Fonts,
  TScreen_Height,
  TScreen_MonitorCount,
  TScreen_Monitors,
  TScreen_PixelsPerInch,
  TScreen_PrimaryMonitor,
  TScreen_Width,
  TScreen_WorkAreaRect,
  TScreen_WorkAreaHeight,
  TScreen_WorkAreaLeft,
  TScreen_WorkAreaTop,
  TScreen_WorkAreaWidth,
  TScreen_OnActiveControlChange,
  TScreen_OnActiveFormChange,
  TScreen_TClass;