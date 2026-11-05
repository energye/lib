// constructor
function TDateTimePicker_Create(AOwner: TComponent): TDateTimePicker; extdecl;
begin
  {$define handleExceptionID := 9000}
  handleExceptionBegin
  Result := TDateTimePicker.Create(AOwner);
  handleExceptionEnd
end;

// property
procedure TDateTimePicker_DateTime(ASet: LongBool; AObj: TDateTimePicker; var AValue: Double; var Result: Double); extdecl;
begin
  {$define handleExceptionID := 9001}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DateTime := AValue
  end else
    Result := AObj.DateTime;
  handleExceptionEnd
end;

// property
function TDateTimePicker_DroppedDown(AObj: TDateTimePicker): LongBool; extdecl;
begin
  {$define handleExceptionID := 9002}
  handleExceptionBegin
  Result := AObj.DroppedDown;
  handleExceptionEnd
end;

// property
function TDateTimePicker_ArrowShape(ASet: LongBool; AObj: TDateTimePicker; AValue: TArrowShape): TArrowShape; extdecl;
begin
  {$define handleExceptionID := 9003}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ArrowShape := AValue
  end else
    Result := AObj.ArrowShape;
  handleExceptionEnd
end;

// property
function TDateTimePicker_ShowCheckBox(ASet: LongBool; AObj: TDateTimePicker; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 9004}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ShowCheckBox := AValue
  end else
    Result := AObj.ShowCheckBox;
  handleExceptionEnd
end;

// property
function TDateTimePicker_Checked(ASet: LongBool; AObj: TDateTimePicker; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 9005}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Checked := AValue
  end else
    Result := AObj.Checked;
  handleExceptionEnd
end;

// property
function TDateTimePicker_CenturyFrom(ASet: LongBool; AObj: TDateTimePicker; AValue: Word): Word; extdecl;
begin
  {$define handleExceptionID := 9006}
  handleExceptionBegin
  if ASet then
  begin
    AObj.CenturyFrom := AValue
  end else
    Result := AObj.CenturyFrom;
  handleExceptionEnd
end;

// property
function TDateTimePicker_DateDisplayOrder(ASet: LongBool; AObj: TDateTimePicker; AValue: TDateDisplayOrder): TDateDisplayOrder; extdecl;
begin
  {$define handleExceptionID := 9007}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DateDisplayOrder := AValue
  end else
    Result := AObj.DateDisplayOrder;
  handleExceptionEnd
end;

// property
function TDateTimePicker_MaxDate(ASet: LongBool; AObj: TDateTimePicker; AValue: Double): Double; extdecl;
begin
  {$define handleExceptionID := 9008}
  handleExceptionBegin
  if ASet then
  begin
    AObj.MaxDate := AValue
  end else
    Result := AObj.MaxDate;
  handleExceptionEnd
end;

// property
function TDateTimePicker_MinDate(ASet: LongBool; AObj: TDateTimePicker; AValue: Double): Double; extdecl;
begin
  {$define handleExceptionID := 9009}
  handleExceptionBegin
  if ASet then
  begin
    AObj.MinDate := AValue
  end else
    Result := AObj.MinDate;
  handleExceptionEnd
end;

// property
function TDateTimePicker_ReadOnly(ASet: LongBool; AObj: TDateTimePicker; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 9010}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ReadOnly := AValue
  end else
    Result := AObj.ReadOnly;
  handleExceptionEnd
end;

// property
function TDateTimePicker_ParentFont(ASet: LongBool; AObj: TDateTimePicker; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 9011}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentFont := AValue
  end else
    Result := AObj.ParentFont;
  handleExceptionEnd
end;

// property
function TDateTimePicker_ParentColor(ASet: LongBool; AObj: TDateTimePicker; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 9012}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentColor := AValue
  end else
    Result := AObj.ParentColor;
  handleExceptionEnd
end;

// property
procedure TDateTimePicker_DateSeparator(ASet: LongBool; AObj: TDateTimePicker; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 9013}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DateSeparator := AValue
  end else
    StringBufferCreate(AObj.DateSeparator, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TDateTimePicker_TrailingSeparator(ASet: LongBool; AObj: TDateTimePicker; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 9014}
  handleExceptionBegin
  if ASet then
  begin
    AObj.TrailingSeparator := AValue
  end else
    Result := AObj.TrailingSeparator;
  handleExceptionEnd
end;

// property
procedure TDateTimePicker_TextForNullDate(ASet: LongBool; AObj: TDateTimePicker; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 9015}
  handleExceptionBegin
  if ASet then
  begin
    AObj.TextForNullDate := AValue
  end else
    StringBufferCreate(AObj.TextForNullDate, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TDateTimePicker_LeadingZeros(ASet: LongBool; AObj: TDateTimePicker; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 9016}
  handleExceptionBegin
  if ASet then
  begin
    AObj.LeadingZeros := AValue
  end else
    Result := AObj.LeadingZeros;
  handleExceptionEnd
end;

// property
function TDateTimePicker_ParentShowHint(ASet: LongBool; AObj: TDateTimePicker; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 9017}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentShowHint := AValue
  end else
    Result := AObj.ParentShowHint;
  handleExceptionEnd
end;

// property
function TDateTimePicker_NullInputAllowed(ASet: LongBool; AObj: TDateTimePicker; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 9018}
  handleExceptionBegin
  if ASet then
  begin
    AObj.NullInputAllowed := AValue
  end else
    Result := AObj.NullInputAllowed;
  handleExceptionEnd
end;

// property
function TDateTimePicker_Kind(ASet: LongBool; AObj: TDateTimePicker; AValue: TDateTimeKind): TDateTimeKind; extdecl;
begin
  {$define handleExceptionID := 9019}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Kind := AValue
  end else
    Result := AObj.Kind;
  handleExceptionEnd
end;

// property
procedure TDateTimePicker_TimeSeparator(ASet: LongBool; AObj: TDateTimePicker; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 9020}
  handleExceptionBegin
  if ASet then
  begin
    AObj.TimeSeparator := AValue
  end else
    StringBufferCreate(AObj.TimeSeparator, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TDateTimePicker_DecimalSeparator(ASet: LongBool; AObj: TDateTimePicker; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 9021}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DecimalSeparator := AValue
  end else
    StringBufferCreate(AObj.DecimalSeparator, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TDateTimePicker_TimeFormat(ASet: LongBool; AObj: TDateTimePicker; AValue: TTimeFormat): TTimeFormat; extdecl;
begin
  {$define handleExceptionID := 9022}
  handleExceptionBegin
  if ASet then
  begin
    AObj.TimeFormat := AValue
  end else
    Result := AObj.TimeFormat;
  handleExceptionEnd
end;

// property
function TDateTimePicker_TimeDisplay(ASet: LongBool; AObj: TDateTimePicker; AValue: TTimeDisplay): TTimeDisplay; extdecl;
begin
  {$define handleExceptionID := 9023}
  handleExceptionBegin
  if ASet then
  begin
    AObj.TimeDisplay := AValue
  end else
    Result := AObj.TimeDisplay;
  handleExceptionEnd
end;

// property
function TDateTimePicker_DateMode(ASet: LongBool; AObj: TDateTimePicker; AValue: TDTDateMode): TDTDateMode; extdecl;
begin
  {$define handleExceptionID := 9024}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DateMode := AValue
  end else
    Result := AObj.DateMode;
  handleExceptionEnd
end;

// property
function TDateTimePicker_Date(ASet: LongBool; AObj: TDateTimePicker; AValue: Double): Double; extdecl;
begin
  {$define handleExceptionID := 9025}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Date := AValue
  end else
    Result := AObj.Date;
  handleExceptionEnd
end;

// property
function TDateTimePicker_Time(ASet: LongBool; AObj: TDateTimePicker; AValue: Double): Double; extdecl;
begin
  {$define handleExceptionID := 9026}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Time := AValue
  end else
    Result := AObj.Time;
  handleExceptionEnd
end;

// property
function TDateTimePicker_UseDefaultSeparators(ASet: LongBool; AObj: TDateTimePicker; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 9027}
  handleExceptionBegin
  if ASet then
  begin
    AObj.UseDefaultSeparators := AValue
  end else
    Result := AObj.UseDefaultSeparators;
  handleExceptionEnd
end;

// property
function TDateTimePicker_Cascade(ASet: LongBool; AObj: TDateTimePicker; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 9028}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Cascade := AValue
  end else
    Result := AObj.Cascade;
  handleExceptionEnd
end;

// property
function TDateTimePicker_AutoButtonSize(ASet: LongBool; AObj: TDateTimePicker; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 9029}
  handleExceptionBegin
  if ASet then
  begin
    AObj.AutoButtonSize := AValue
  end else
    Result := AObj.AutoButtonSize;
  handleExceptionEnd
end;

// property
function TDateTimePicker_AutoAdvance(ASet: LongBool; AObj: TDateTimePicker; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 9030}
  handleExceptionBegin
  if ASet then
  begin
    AObj.AutoAdvance := AValue
  end else
    Result := AObj.AutoAdvance;
  handleExceptionEnd
end;

// property
function TDateTimePicker_HideDateTimeParts(ASet: LongBool; AObj: TDateTimePicker; AValue: TDateTimeParts): TDateTimeParts; extdecl;
begin
  {$define handleExceptionID := 9031}
  handleExceptionBegin
  if ASet then
  begin
    AObj.HideDateTimeParts := AValue
  end else
    Result := AObj.HideDateTimeParts;
  handleExceptionEnd
end;

// property
function TDateTimePicker_MonthDisplay(ASet: LongBool; AObj: TDateTimePicker; AValue: TMonthDisplay): TMonthDisplay; extdecl;
begin
  {$define handleExceptionID := 9032}
  handleExceptionBegin
  if ASet then
  begin
    AObj.MonthDisplay := AValue
  end else
    Result := AObj.MonthDisplay;
  handleExceptionEnd
end;

// property
function TDateTimePicker_CustomMonthNames(ASet: LongBool; AObj: TDateTimePicker; AValue: TStrings): TStrings; extdecl;
begin
  {$define handleExceptionID := 9033}
  handleExceptionBegin
  if ASet then
  begin
    AObj.CustomMonthNames := AValue
  end else
    Result := AObj.CustomMonthNames;
  handleExceptionEnd
end;

// property
function TDateTimePicker_ShowMonthNames(ASet: LongBool; AObj: TDateTimePicker; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 9034}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ShowMonthNames := AValue
  end else
    Result := AObj.ShowMonthNames;
  handleExceptionEnd
end;

// property
function TDateTimePicker_CalAlignment(ASet: LongBool; AObj: TDateTimePicker; AValue: TDTCalAlignment): TDTCalAlignment; extdecl;
begin
  {$define handleExceptionID := 9035}
  handleExceptionBegin
  if ASet then
  begin
    AObj.CalAlignment := AValue
  end else
    Result := AObj.CalAlignment;
  handleExceptionEnd
end;

// property
function TDateTimePicker_Alignment(ASet: LongBool; AObj: TDateTimePicker; AValue: TAlignment): TAlignment; extdecl;
begin
  {$define handleExceptionID := 9036}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Alignment := AValue
  end else
    Result := AObj.Alignment;
  handleExceptionEnd
end;

// property
function TDateTimePicker_Options(ASet: LongBool; AObj: TDateTimePicker; AValue: TDateTimePickerOptions): TDateTimePickerOptions; extdecl;
begin
  {$define handleExceptionID := 9037}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Options := AValue
  end else
    Result := AObj.Options;
  handleExceptionEnd
end;

// event
procedure TDateTimePicker_OnChange(AObj: TDateTimePicker; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnChange}
  LCLEventMethodCode
end;

// event
procedure TDateTimePicker_OnCheckBoxChange(AObj: TDateTimePicker; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnCheckBoxChange}
  LCLEventMethodCode
end;

// event
procedure TDateTimePicker_OnDropDown(AObj: TDateTimePicker; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnDropDown}
  LCLEventMethodCode
end;

// event
procedure TDateTimePicker_OnCloseUp(AObj: TDateTimePicker; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnCloseUp}
  LCLEventMethodCode
end;

// event
procedure TDateTimePicker_OnContextPopup(AObj: TDateTimePicker; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTContextPopupEvent}
  {$DEFINE EventName := OnContextPopup}
  LCLEventMethodCode
end;

// event
procedure TDateTimePicker_OnDblClick(AObj: TDateTimePicker; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnDblClick}
  LCLEventMethodCode
end;

// event
procedure TDateTimePicker_OnEditingDone(AObj: TDateTimePicker; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnEditingDone}
  LCLEventMethodCode
end;

// event
procedure TDateTimePicker_OnMouseDown(AObj: TDateTimePicker; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseDown}
  LCLEventMethodCode
end;

// event
procedure TDateTimePicker_OnMouseEnter(AObj: TDateTimePicker; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseEnter}
  LCLEventMethodCode
end;

// event
procedure TDateTimePicker_OnMouseLeave(AObj: TDateTimePicker; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseLeave}
  LCLEventMethodCode
end;

// event
procedure TDateTimePicker_OnMouseMove(AObj: TDateTimePicker; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseMoveEvent}
  {$DEFINE EventName := OnMouseMove}
  LCLEventMethodCode
end;

// event
procedure TDateTimePicker_OnMouseUp(AObj: TDateTimePicker; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseUp}
  LCLEventMethodCode
end;

// event
procedure TDateTimePicker_OnMouseWheel(AObj: TDateTimePicker; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelEvent}
  {$DEFINE EventName := OnMouseWheel}
  LCLEventMethodCode
end;

// event
procedure TDateTimePicker_OnMouseWheelDown(AObj: TDateTimePicker; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelDown}
  LCLEventMethodCode
end;

// event
procedure TDateTimePicker_OnMouseWheelUp(AObj: TDateTimePicker; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelUp}
  LCLEventMethodCode
end;

function TDateTimePicker_TClass(): TClass; extdecl;
begin
  Result := TDateTimePicker;
end;

exports
  TDateTimePicker_Create,
  TDateTimePicker_DateTime,
  TDateTimePicker_DroppedDown,
  TDateTimePicker_ArrowShape,
  TDateTimePicker_ShowCheckBox,
  TDateTimePicker_Checked,
  TDateTimePicker_CenturyFrom,
  TDateTimePicker_DateDisplayOrder,
  TDateTimePicker_MaxDate,
  TDateTimePicker_MinDate,
  TDateTimePicker_ReadOnly,
  TDateTimePicker_ParentFont,
  TDateTimePicker_ParentColor,
  TDateTimePicker_DateSeparator,
  TDateTimePicker_TrailingSeparator,
  TDateTimePicker_TextForNullDate,
  TDateTimePicker_LeadingZeros,
  TDateTimePicker_ParentShowHint,
  TDateTimePicker_NullInputAllowed,
  TDateTimePicker_Kind,
  TDateTimePicker_TimeSeparator,
  TDateTimePicker_DecimalSeparator,
  TDateTimePicker_TimeFormat,
  TDateTimePicker_TimeDisplay,
  TDateTimePicker_DateMode,
  TDateTimePicker_Date,
  TDateTimePicker_Time,
  TDateTimePicker_UseDefaultSeparators,
  TDateTimePicker_Cascade,
  TDateTimePicker_AutoButtonSize,
  TDateTimePicker_AutoAdvance,
  TDateTimePicker_HideDateTimeParts,
  TDateTimePicker_MonthDisplay,
  TDateTimePicker_CustomMonthNames,
  TDateTimePicker_ShowMonthNames,
  TDateTimePicker_CalAlignment,
  TDateTimePicker_Alignment,
  TDateTimePicker_Options,
  TDateTimePicker_OnChange,
  TDateTimePicker_OnCheckBoxChange,
  TDateTimePicker_OnDropDown,
  TDateTimePicker_OnCloseUp,
  TDateTimePicker_OnContextPopup,
  TDateTimePicker_OnDblClick,
  TDateTimePicker_OnEditingDone,
  TDateTimePicker_OnMouseDown,
  TDateTimePicker_OnMouseEnter,
  TDateTimePicker_OnMouseLeave,
  TDateTimePicker_OnMouseMove,
  TDateTimePicker_OnMouseUp,
  TDateTimePicker_OnMouseWheel,
  TDateTimePicker_OnMouseWheelDown,
  TDateTimePicker_OnMouseWheelUp,
  TDateTimePicker_TClass;