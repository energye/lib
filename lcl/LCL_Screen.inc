
//constructor
function Screen_Create(AOwner: TComponent): TScreen; extdecl;
begin
  handleExceptionBegin
  Result := TScreen.Create(AOwner);
  handleExceptionEnd
end;

//property
function Screen_ActiveControl(AObj: TScreen): TWinControl; extdecl;
begin
  handleExceptionBegin
  Result := AObj.ActiveControl;
  handleExceptionEnd
end;

//property
function Screen_ActiveCustomForm(AObj: TScreen): TCustomForm; extdecl;
begin
  handleExceptionBegin
  Result := AObj.ActiveCustomForm;
  handleExceptionEnd
end;

//property
function Screen_ActiveForm(AObj: TScreen): TForm; extdecl;
begin
  handleExceptionBegin
  Result := AObj.ActiveForm;
  handleExceptionEnd
end;

//property
function Screen_Cursor(AIsSet: LongBool; AObj: TScreen; AValue: TCursor): TCursor; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Cursor := AValue;
  end else
    Result := AObj.Cursor;
  handleExceptionEnd
end;

//property
function Screen_RealCursor(AObj: TScreen): TCursor; extdecl;
begin
  handleExceptionBegin
  Result := AObj.RealCursor;
  handleExceptionEnd
end;

//property
function Screen_Cursors(AIsSet: LongBool; AObj: TScreen; Index: Integer; AValue: HCURSOR): HCURSOR; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Cursors[Index] := AValue;
  end else
    Result := AObj.Cursors[Index];
  handleExceptionEnd
end;

//property
function Screen_CustomFormCount(AObj: TScreen): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.CustomFormCount;
  handleExceptionEnd
end;

//property
function Screen_CustomForms(AObj: TScreen; Index: Integer): TCustomForm; extdecl;
begin
  handleExceptionBegin
  Result := AObj.CustomForms[Index];
  handleExceptionEnd
end;

//property
function Screen_CustomFormZOrderCount(AObj: TScreen): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.CustomFormZOrderCount;
  handleExceptionEnd
end;

//property
function Screen_CustomFormsZOrdered(AObj: TScreen; Index: Integer): TCustomForm; extdecl;
begin
  handleExceptionBegin
  Result := AObj.CustomFormsZOrdered[Index];
  handleExceptionEnd
end;

//property
function Screen_DesktopLeft(AObj: TScreen): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.DesktopLeft;
  handleExceptionEnd
end;

//property
function Screen_DesktopTop(AObj: TScreen): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.DesktopTop;
  handleExceptionEnd
end;

//property
function Screen_DesktopHeight(AObj: TScreen): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.DesktopHeight;
  handleExceptionEnd
end;

//property
function Screen_DesktopWidth(AObj: TScreen): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.DesktopWidth;
  handleExceptionEnd
end;

//property
procedure Screen_DesktopRect(AObj: TScreen; var Result: TRect); extdecl;
begin
  handleExceptionBegin
  Result := AObj.DesktopRect;
  handleExceptionEnd
end;

//property
function Screen_FocusedForm(AObj: TScreen): TCustomForm; extdecl;
begin
  handleExceptionBegin
  Result := AObj.FocusedForm;
  handleExceptionEnd
end;

//property
function Screen_FormCount(AObj: TScreen): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.FormCount;
  handleExceptionEnd
end;

//property
function Screen_Forms(AObj: TScreen; Index: Integer): TForm; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Forms[Index];
  handleExceptionEnd
end;

//property
function Screen_DataModuleCount(AObj: TScreen): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.DataModuleCount;
  handleExceptionEnd
end;

//property
function Screen_DataModules(AObj: TScreen; Index: Integer): TDataModule; extdecl;
begin
  handleExceptionBegin
  Result := AObj.DataModules[Index];
  handleExceptionEnd
end;

//property
function Screen_HintFont(AIsSet: LongBool; AObj: TScreen; AValue: TFont): TFont; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.HintFont := AValue;
  end else
    Result := AObj.HintFont;
  handleExceptionEnd
end;

//property
function Screen_IconFont(AIsSet: LongBool; AObj: TScreen; AValue: TFont): TFont; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.IconFont := AValue;
  end else
    Result := AObj.IconFont;
  handleExceptionEnd
end;

//property
function Screen_MenuFont(AIsSet: LongBool; AObj: TScreen; AValue: TFont): TFont; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.MenuFont := AValue;
  end else
    Result := AObj.MenuFont;
  handleExceptionEnd
end;

//property
function Screen_SystemFont(AIsSet: LongBool; AObj: TScreen; AValue: TFont): TFont; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.SystemFont := AValue;
  end else
    Result := AObj.SystemFont;
  handleExceptionEnd
end;

//property
function Screen_Fonts(AObj: TScreen): TStrings; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Fonts;
  handleExceptionEnd
end;

//property
function Screen_Height(AObj: TScreen): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Height;
  handleExceptionEnd
end;

//property
function Screen_MonitorCount(AObj: TScreen): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.MonitorCount;
  handleExceptionEnd
end;

//property
function Screen_Monitors(AObj: TScreen; Index: Integer): TMonitor; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Monitors[Index];
  handleExceptionEnd
end;

//property
function Screen_PixelsPerInch(AObj: TScreen): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.PixelsPerInch;
  handleExceptionEnd
end;

//property
function Screen_PrimaryMonitor(AObj: TScreen): TMonitor; extdecl;
begin
  handleExceptionBegin
  Result := AObj.PrimaryMonitor;
  handleExceptionEnd
end;

//property
function Screen_Width(AObj: TScreen): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Width;
  handleExceptionEnd
end;

//property
procedure Screen_WorkAreaRect(AObj: TScreen; var Result: TRect); extdecl;
begin
  handleExceptionBegin
  Result := AObj.WorkAreaRect;
  handleExceptionEnd
end;

//property
function Screen_WorkAreaHeight(AObj: TScreen): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.WorkAreaHeight;
  handleExceptionEnd
end;

//property
function Screen_WorkAreaLeft(AObj: TScreen): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.WorkAreaLeft;
  handleExceptionEnd
end;

//property
function Screen_WorkAreaTop(AObj: TScreen): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.WorkAreaTop;
  handleExceptionEnd
end;

//property
function Screen_WorkAreaWidth(AObj: TScreen): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.WorkAreaWidth;
  handleExceptionEnd
end;

//function
function Screen_CustomFormIndex(AObj: TScreen; AForm: TCustomForm): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.CustomFormIndex(AForm);
  handleExceptionEnd
end;

//function
function Screen_FormIndex(AObj: TScreen; AForm: TForm): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.FormIndex(AForm);
  handleExceptionEnd
end;

//function
function Screen_CustomFormZIndex(AObj: TScreen; AForm: TCustomForm): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.CustomFormZIndex(AForm);
  handleExceptionEnd
end;

//function
function Screen_GetCurrentModalForm(AObj: TScreen): TCustomForm; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetCurrentModalForm();
  handleExceptionEnd
end;

//function
function Screen_GetCurrentModalFormZIndex(AObj: TScreen): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetCurrentModalFormZIndex();
  handleExceptionEnd
end;

//function
function Screen_CustomFormBelongsToActiveGroup(AObj: TScreen; AForm: TCustomForm): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.CustomFormBelongsToActiveGroup(AForm);
  handleExceptionEnd
end;

//function
function Screen_FindNonDesignerForm(AObj: TScreen; const FormName: PChar): TCustomForm; extdecl;
begin
  handleExceptionBegin
  Result := AObj.FindNonDesignerForm(FormName);
  handleExceptionEnd
end;

//function
function Screen_FindForm(AObj: TScreen; const FormName: PChar): TCustomForm; extdecl;
begin
  handleExceptionBegin
  Result := AObj.FindForm(FormName);
  handleExceptionEnd
end;

//function
function Screen_FindNonDesignerDataModule(AObj: TScreen; const DataModuleName: PChar): TDataModule; extdecl;
begin
  handleExceptionBegin
  Result := AObj.FindNonDesignerDataModule(DataModuleName);
  handleExceptionEnd
end;

//function
function Screen_FindDataModule(AObj: TScreen; const DataModuleName: PChar): TDataModule; extdecl;
begin
  handleExceptionBegin
  Result := AObj.FindDataModule(DataModuleName);
  handleExceptionEnd
end;

//function
function Screen_DisableForms(AObj: TScreen; SkipForm: TCustomForm; DisabledList: TList): TList; extdecl;
begin
  handleExceptionBegin
  Result := AObj.DisableForms(SkipForm, DisabledList);
  handleExceptionEnd
end;

//function
function Screen_MonitorFromPoint(AObj: TScreen; var Point: TPoint; MonitorDefault: TMonitorDefaultTo): TMonitor; extdecl;
begin
  handleExceptionBegin
  Result := AObj.MonitorFromPoint(Point, MonitorDefault);
  handleExceptionEnd
end;

//function
function Screen_MonitorFromRect(AObj: TScreen; var Rect: TRect; MonitorDefault: TMonitorDefaultTo): TMonitor; extdecl;
begin
  handleExceptionBegin
  Result := AObj.MonitorFromRect(Rect, MonitorDefault);
  handleExceptionEnd
end;

//function
function Screen_MonitorFromWindow(AObj: TScreen; const Handle: THandle; MonitorDefault: TMonitorDefaultTo): TMonitor; extdecl;
begin
  handleExceptionBegin
  Result := AObj.MonitorFromWindow(Handle, MonitorDefault);
  handleExceptionEnd
end;

//function
function Screen_Class(): TClass; extdecl;
begin
  Result := TScreen;
end;

//procedure
procedure Screen_MoveFormToFocusFront(AObj: TScreen; ACustomForm: TCustomForm); extdecl;
begin
  handleExceptionBegin
  AObj.MoveFormToFocusFront(ACustomForm);
  handleExceptionEnd
end;

//procedure
procedure Screen_MoveFormToZFront(AObj: TScreen; ACustomForm: TCustomForm); extdecl;
begin
  handleExceptionBegin
  AObj.MoveFormToZFront(ACustomForm);
  handleExceptionEnd
end;

//procedure
procedure Screen_NewFormWasCreated(AObj: TScreen; AForm: TCustomForm); extdecl;
begin
  handleExceptionBegin
  AObj.NewFormWasCreated(AForm);
  handleExceptionEnd
end;

//procedure
procedure Screen_UpdateMonitors(AObj: TScreen); extdecl;
begin
  handleExceptionBegin
  AObj.UpdateMonitors();
  handleExceptionEnd
end;

//procedure
procedure Screen_UpdateScreen(AObj: TScreen); extdecl;
begin
  handleExceptionBegin
  AObj.UpdateScreen();
  handleExceptionEnd
end;

//procedure
procedure Screen_EnableForms(AObj: TScreen; var AFormList: TList); extdecl;
var
  RetAFormList: TList;
begin
  handleExceptionBegin
  RetAFormList := AFormList;
  AObj.EnableForms(RetAFormList);
  AFormList := RetAFormList;
  handleExceptionEnd
end;

//procedure
procedure Screen_BeginTempCursor(AObj: TScreen; const aCursor: TCursor); extdecl;
begin
  handleExceptionBegin
  AObj.BeginTempCursor(aCursor);
  handleExceptionEnd
end;

//procedure
procedure Screen_EndTempCursor(AObj: TScreen; const aCursor: TCursor); extdecl;
begin
  handleExceptionBegin
  AObj.EndTempCursor(aCursor);
  handleExceptionEnd
end;

//procedure
procedure Screen_BeginWaitCursor(AObj: TScreen); extdecl;
begin
  handleExceptionBegin
  AObj.BeginWaitCursor();
  handleExceptionEnd
end;

//procedure
procedure Screen_EndWaitCursor(AObj: TScreen); extdecl;
begin
  handleExceptionBegin
  AObj.EndWaitCursor();
  handleExceptionEnd
end;

//procedure
procedure Screen_BeginScreenCursor(AObj: TScreen); extdecl;
begin
  handleExceptionBegin
  AObj.BeginScreenCursor();
  handleExceptionEnd
end;

//procedure
procedure Screen_EndScreenCursor(AObj: TScreen); extdecl;
begin
  handleExceptionBegin
  AObj.EndScreenCursor();
  handleExceptionEnd
end;

//property event
procedure Screen_SetOnActiveControlChange(AObj: TScreen; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnActiveControlChange}
  EventMethodCode
end;

//property event
procedure Screen_SetOnActiveFormChange(AObj: TScreen; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnActiveFormChange}
  EventMethodCode
end;


exports
  Screen_Create,
  Screen_ActiveControl,
  Screen_ActiveCustomForm,
  Screen_ActiveForm,
  Screen_Cursor,
  Screen_RealCursor,
  Screen_Cursors,
  Screen_CustomFormCount,
  Screen_CustomForms,
  Screen_CustomFormZOrderCount,
  Screen_CustomFormsZOrdered,
  Screen_DesktopLeft,
  Screen_DesktopTop,
  Screen_DesktopHeight,
  Screen_DesktopWidth,
  Screen_DesktopRect,
  Screen_FocusedForm,
  Screen_FormCount,
  Screen_Forms,
  Screen_DataModuleCount,
  Screen_DataModules,
  Screen_HintFont,
  Screen_IconFont,
  Screen_MenuFont,
  Screen_SystemFont,
  Screen_Fonts,
  Screen_Height,
  Screen_MonitorCount,
  Screen_Monitors,
  Screen_PixelsPerInch,
  Screen_PrimaryMonitor,
  Screen_Width,
  Screen_WorkAreaRect,
  Screen_WorkAreaHeight,
  Screen_WorkAreaLeft,
  Screen_WorkAreaTop,
  Screen_WorkAreaWidth,
  Screen_CustomFormIndex,
  Screen_FormIndex,
  Screen_CustomFormZIndex,
  Screen_GetCurrentModalForm,
  Screen_GetCurrentModalFormZIndex,
  Screen_CustomFormBelongsToActiveGroup,
  Screen_FindNonDesignerForm,
  Screen_FindForm,
  Screen_FindNonDesignerDataModule,
  Screen_FindDataModule,
  Screen_DisableForms,
  Screen_MonitorFromPoint,
  Screen_MonitorFromRect,
  Screen_MonitorFromWindow,
  Screen_Class,
  Screen_MoveFormToFocusFront,
  Screen_MoveFormToZFront,
  Screen_NewFormWasCreated,
  Screen_UpdateMonitors,
  Screen_UpdateScreen,
  Screen_EnableForms,
  Screen_BeginTempCursor,
  Screen_EndTempCursor,
  Screen_BeginWaitCursor,
  Screen_EndWaitCursor,
  Screen_BeginScreenCursor,
  Screen_EndScreenCursor,
  Screen_SetOnActiveControlChange,
  Screen_SetOnActiveFormChange;