
//constructor
function DateTimePicker_Create(AOwner: TComponent): TDateTimePicker; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TDateTimePicker.Create(AOwner);
  handleExceptionEnd
end;

//property
function DateTimePicker_DateTime(AIsSet: LongBool; AObj: TDateTimePicker; AValue: TDateTime): TDateTime; extdecl;
begin
  {$define handleExceptionFuncName :='DateTime'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DateTime := AValue;
  end else
    Result := AObj.DateTime;
  handleExceptionEnd
end;

//property
function DateTimePicker_DroppedDown(AObj: TDateTimePicker): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='DroppedDown'}
  handleExceptionBegin
  Result := AObj.DroppedDown;
  handleExceptionEnd
end;

//property
function DateTimePicker_ArrowShape(AIsSet: LongBool; AObj: TDateTimePicker; AValue: TArrowShape): TArrowShape; extdecl;
begin
  {$define handleExceptionFuncName :='ArrowShape'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ArrowShape := AValue;
  end else
    Result := AObj.ArrowShape;
  handleExceptionEnd
end;

//property
function DateTimePicker_ShowCheckBox(AIsSet: LongBool; AObj: TDateTimePicker; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='ShowCheckBox'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ShowCheckBox := AValue;
  end else
    Result := AObj.ShowCheckBox;
  handleExceptionEnd
end;

//property
function DateTimePicker_Checked(AIsSet: LongBool; AObj: TDateTimePicker; AValue: LongBool): LongBool; extdecl;
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
function DateTimePicker_CenturyFrom(AIsSet: LongBool; AObj: TDateTimePicker; AValue: Word): Word; extdecl;
begin
  {$define handleExceptionFuncName :='CenturyFrom'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.CenturyFrom := AValue;
  end else
    Result := AObj.CenturyFrom;
  handleExceptionEnd
end;

//property
function DateTimePicker_DateDisplayOrder(AIsSet: LongBool; AObj: TDateTimePicker; AValue: TDateDisplayOrder): TDateDisplayOrder; extdecl;
begin
  {$define handleExceptionFuncName :='DateDisplayOrder'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DateDisplayOrder := AValue;
  end else
    Result := AObj.DateDisplayOrder;
  handleExceptionEnd
end;

//property
function DateTimePicker_MaxDate(AIsSet: LongBool; AObj: TDateTimePicker; AValue: TDate): TDate; extdecl;
begin
  {$define handleExceptionFuncName :='MaxDate'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.MaxDate := AValue;
  end else
    Result := AObj.MaxDate;
  handleExceptionEnd
end;

//property
function DateTimePicker_MinDate(AIsSet: LongBool; AObj: TDateTimePicker; AValue: TDate): TDate; extdecl;
begin
  {$define handleExceptionFuncName :='MinDate'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.MinDate := AValue;
  end else
    Result := AObj.MinDate;
  handleExceptionEnd
end;

//property
function DateTimePicker_ReadOnly(AIsSet: LongBool; AObj: TDateTimePicker; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='ReadOnly'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ReadOnly := AValue;
  end else
    Result := AObj.ReadOnly;
  handleExceptionEnd
end;

//property
function DateTimePicker_ParentFont(AIsSet: LongBool; AObj: TDateTimePicker; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='ParentFont'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ParentFont := AValue;
  end else
    Result := AObj.ParentFont;
  handleExceptionEnd
end;

//property
function DateTimePicker_ParentColor(AIsSet: LongBool; AObj: TDateTimePicker; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='ParentColor'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ParentColor := AValue;
  end else
    Result := AObj.ParentColor;
  handleExceptionEnd
end;

//property
function DateTimePicker_DateSeparator(AIsSet: LongBool; AObj: TDateTimePicker; AValue: PChar): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='DateSeparator'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DateSeparator := AValue;
  end else
    Result := ToPChar(AObj.DateSeparator);
  handleExceptionEnd
end;

//property
function DateTimePicker_TrailingSeparator(AIsSet: LongBool; AObj: TDateTimePicker; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='TrailingSeparator'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.TrailingSeparator := AValue;
  end else
    Result := AObj.TrailingSeparator;
  handleExceptionEnd
end;

//property
function DateTimePicker_TextForNullDate(AIsSet: LongBool; AObj: TDateTimePicker; AValue: PChar): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='TextForNullDate'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.TextForNullDate := AValue;
  end else
    Result := ToPChar(AObj.TextForNullDate);
  handleExceptionEnd
end;

//property
function DateTimePicker_LeadingZeros(AIsSet: LongBool; AObj: TDateTimePicker; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='LeadingZeros'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.LeadingZeros := AValue;
  end else
    Result := AObj.LeadingZeros;
  handleExceptionEnd
end;

//property
function DateTimePicker_ParentShowHint(AIsSet: LongBool; AObj: TDateTimePicker; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='ParentShowHint'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ParentShowHint := AValue;
  end else
    Result := AObj.ParentShowHint;
  handleExceptionEnd
end;

//property
function DateTimePicker_NullInputAllowed(AIsSet: LongBool; AObj: TDateTimePicker; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='NullInputAllowed'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.NullInputAllowed := AValue;
  end else
    Result := AObj.NullInputAllowed;
  handleExceptionEnd
end;

//property
function DateTimePicker_Kind(AIsSet: LongBool; AObj: TDateTimePicker; AValue: TDateTimeKind): TDateTimeKind; extdecl;
begin
  {$define handleExceptionFuncName :='Kind'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Kind := AValue;
  end else
    Result := AObj.Kind;
  handleExceptionEnd
end;

//property
function DateTimePicker_TimeSeparator(AIsSet: LongBool; AObj: TDateTimePicker; AValue: PChar): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='TimeSeparator'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.TimeSeparator := AValue;
  end else
    Result := ToPChar(AObj.TimeSeparator);
  handleExceptionEnd
end;

//property
function DateTimePicker_DecimalSeparator(AIsSet: LongBool; AObj: TDateTimePicker; AValue: PChar): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='DecimalSeparator'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DecimalSeparator := AValue;
  end else
    Result := ToPChar(AObj.DecimalSeparator);
  handleExceptionEnd
end;

//property
function DateTimePicker_TimeFormat(AIsSet: LongBool; AObj: TDateTimePicker; AValue: TTimeFormat): TTimeFormat; extdecl;
begin
  {$define handleExceptionFuncName :='TimeFormat'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.TimeFormat := AValue;
  end else
    Result := AObj.TimeFormat;
  handleExceptionEnd
end;

//property
function DateTimePicker_TimeDisplay(AIsSet: LongBool; AObj: TDateTimePicker; AValue: TTimeDisplay): TTimeDisplay; extdecl;
begin
  {$define handleExceptionFuncName :='TimeDisplay'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.TimeDisplay := AValue;
  end else
    Result := AObj.TimeDisplay;
  handleExceptionEnd
end;

//property
function DateTimePicker_DateMode(AIsSet: LongBool; AObj: TDateTimePicker; AValue: TDTDateMode): TDTDateMode; extdecl;
begin
  {$define handleExceptionFuncName :='DateMode'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DateMode := AValue;
  end else
    Result := AObj.DateMode;
  handleExceptionEnd
end;

//property
function DateTimePicker_Date(AIsSet: LongBool; AObj: TDateTimePicker; AValue: TDate): TDate; extdecl;
begin
  {$define handleExceptionFuncName :='Date'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Date := AValue;
  end else
    Result := AObj.Date;
  handleExceptionEnd
end;

//property
function DateTimePicker_Time(AIsSet: LongBool; AObj: TDateTimePicker; AValue: TTime): TTime; extdecl;
begin
  {$define handleExceptionFuncName :='Time'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Time := AValue;
  end else
    Result := AObj.Time;
  handleExceptionEnd
end;

//property
function DateTimePicker_UseDefaultSeparators(AIsSet: LongBool; AObj: TDateTimePicker; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='UseDefaultSeparators'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.UseDefaultSeparators := AValue;
  end else
    Result := AObj.UseDefaultSeparators;
  handleExceptionEnd
end;

//property
function DateTimePicker_Cascade(AIsSet: LongBool; AObj: TDateTimePicker; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='Cascade'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Cascade := AValue;
  end else
    Result := AObj.Cascade;
  handleExceptionEnd
end;

//property
function DateTimePicker_AutoButtonSize(AIsSet: LongBool; AObj: TDateTimePicker; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='AutoButtonSize'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.AutoButtonSize := AValue;
  end else
    Result := AObj.AutoButtonSize;
  handleExceptionEnd
end;

//property
function DateTimePicker_AutoAdvance(AIsSet: LongBool; AObj: TDateTimePicker; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='AutoAdvance'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.AutoAdvance := AValue;
  end else
    Result := AObj.AutoAdvance;
  handleExceptionEnd
end;

//property
function DateTimePicker_HideDateTimeParts(AIsSet: LongBool; AObj: TDateTimePicker; AValue: TDateTimeParts): TDateTimeParts; extdecl;
begin
  {$define handleExceptionFuncName :='HideDateTimeParts'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.HideDateTimeParts := AValue;
  end else
    Result := AObj.HideDateTimeParts;
  handleExceptionEnd
end;

//property
function DateTimePicker_MonthDisplay(AIsSet: LongBool; AObj: TDateTimePicker; AValue: TMonthDisplay): TMonthDisplay; extdecl;
begin
  {$define handleExceptionFuncName :='MonthDisplay'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.MonthDisplay := AValue;
  end else
    Result := AObj.MonthDisplay;
  handleExceptionEnd
end;

//property
function DateTimePicker_CustomMonthNames(AIsSet: LongBool; AObj: TDateTimePicker; AValue: TStrings): TStrings; extdecl;
begin
  {$define handleExceptionFuncName :='CustomMonthNames'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.CustomMonthNames := AValue;
  end else
    Result := AObj.CustomMonthNames;
  handleExceptionEnd
end;

//property
function DateTimePicker_ShowMonthNames(AIsSet: LongBool; AObj: TDateTimePicker; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='ShowMonthNames'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ShowMonthNames := AValue;
  end else
    Result := AObj.ShowMonthNames;
  handleExceptionEnd
end;

//property
function DateTimePicker_CalAlignment(AIsSet: LongBool; AObj: TDateTimePicker; AValue: TDTCalAlignment): TDTCalAlignment; extdecl;
begin
  {$define handleExceptionFuncName :='CalAlignment'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.CalAlignment := AValue;
  end else
    Result := AObj.CalAlignment;
  handleExceptionEnd
end;

//property
function DateTimePicker_Alignment(AIsSet: LongBool; AObj: TDateTimePicker; AValue: TAlignment): TAlignment; extdecl;
begin
  {$define handleExceptionFuncName :='Alignment'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Alignment := AValue;
  end else
    Result := AObj.Alignment;
  handleExceptionEnd
end;

//property
function DateTimePicker_Options(AIsSet: LongBool; AObj: TDateTimePicker; AValue: TDateTimePickerOptions): TDateTimePickerOptions; extdecl;
begin
  {$define handleExceptionFuncName :='Options'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Options := AValue;
  end else
    Result := AObj.Options;
  handleExceptionEnd
end;

//function
function DateTimePicker_Class(): TClass; extdecl;
begin
  Result := TDateTimePicker;
end;

//property event
procedure DateTimePicker_SetOnChange(AObj: TDateTimePicker; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnChange}
  EventMethodCode
end;

//property event
procedure DateTimePicker_SetOnCheckBoxChange(AObj: TDateTimePicker; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnCheckBoxChange}
  EventMethodCode
end;

//property event
procedure DateTimePicker_SetOnDropDown(AObj: TDateTimePicker; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnDropDown}
  EventMethodCode
end;

//property event
procedure DateTimePicker_SetOnCloseUp(AObj: TDateTimePicker; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnCloseUp}
  EventMethodCode
end;

//property event
procedure DateTimePicker_SetOnContextPopup(AObj: TDateTimePicker; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTContextPopupEvent}
  {$DEFINE EventName := OnContextPopup}
  EventMethodCode
end;

//property event
procedure DateTimePicker_SetOnDblClick(AObj: TDateTimePicker; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnDblClick}
  EventMethodCode
end;

//property event
procedure DateTimePicker_SetOnEditingDone(AObj: TDateTimePicker; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnEditingDone}
  EventMethodCode
end;

//property event
procedure DateTimePicker_SetOnMouseDown(AObj: TDateTimePicker; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseDown}
  EventMethodCode
end;

//property event
procedure DateTimePicker_SetOnMouseEnter(AObj: TDateTimePicker; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseEnter}
  EventMethodCode
end;

//property event
procedure DateTimePicker_SetOnMouseLeave(AObj: TDateTimePicker; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseLeave}
  EventMethodCode
end;

//property event
procedure DateTimePicker_SetOnMouseMove(AObj: TDateTimePicker; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseMoveEvent}
  {$DEFINE EventName := OnMouseMove}
  EventMethodCode
end;

//property event
procedure DateTimePicker_SetOnMouseUp(AObj: TDateTimePicker; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseUp}
  EventMethodCode
end;

//property event
procedure DateTimePicker_SetOnMouseWheel(AObj: TDateTimePicker; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelEvent}
  {$DEFINE EventName := OnMouseWheel}
  EventMethodCode
end;

//property event
procedure DateTimePicker_SetOnMouseWheelDown(AObj: TDateTimePicker; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelDown}
  EventMethodCode
end;

//property event
procedure DateTimePicker_SetOnMouseWheelUp(AObj: TDateTimePicker; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelUp}
  EventMethodCode
end;


exports
  DateTimePicker_Create,
  DateTimePicker_DateTime,
  DateTimePicker_DroppedDown,
  DateTimePicker_ArrowShape,
  DateTimePicker_ShowCheckBox,
  DateTimePicker_Checked,
  DateTimePicker_CenturyFrom,
  DateTimePicker_DateDisplayOrder,
  DateTimePicker_MaxDate,
  DateTimePicker_MinDate,
  DateTimePicker_ReadOnly,
  DateTimePicker_ParentFont,
  DateTimePicker_ParentColor,
  DateTimePicker_DateSeparator,
  DateTimePicker_TrailingSeparator,
  DateTimePicker_TextForNullDate,
  DateTimePicker_LeadingZeros,
  DateTimePicker_ParentShowHint,
  DateTimePicker_NullInputAllowed,
  DateTimePicker_Kind,
  DateTimePicker_TimeSeparator,
  DateTimePicker_DecimalSeparator,
  DateTimePicker_TimeFormat,
  DateTimePicker_TimeDisplay,
  DateTimePicker_DateMode,
  DateTimePicker_Date,
  DateTimePicker_Time,
  DateTimePicker_UseDefaultSeparators,
  DateTimePicker_Cascade,
  DateTimePicker_AutoButtonSize,
  DateTimePicker_AutoAdvance,
  DateTimePicker_HideDateTimeParts,
  DateTimePicker_MonthDisplay,
  DateTimePicker_CustomMonthNames,
  DateTimePicker_ShowMonthNames,
  DateTimePicker_CalAlignment,
  DateTimePicker_Alignment,
  DateTimePicker_Options,
  DateTimePicker_Class,
  DateTimePicker_SetOnChange,
  DateTimePicker_SetOnCheckBoxChange,
  DateTimePicker_SetOnDropDown,
  DateTimePicker_SetOnCloseUp,
  DateTimePicker_SetOnContextPopup,
  DateTimePicker_SetOnDblClick,
  DateTimePicker_SetOnEditingDone,
  DateTimePicker_SetOnMouseDown,
  DateTimePicker_SetOnMouseEnter,
  DateTimePicker_SetOnMouseLeave,
  DateTimePicker_SetOnMouseMove,
  DateTimePicker_SetOnMouseUp,
  DateTimePicker_SetOnMouseWheel,
  DateTimePicker_SetOnMouseWheelDown,
  DateTimePicker_SetOnMouseWheelUp;