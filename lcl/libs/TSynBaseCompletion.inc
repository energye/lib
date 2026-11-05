// constructor
function TSynBaseCompletion_Create(AOwner: TComponent): TSynBaseCompletion; extdecl;
begin
  {$define handleExceptionID := 42000}
  handleExceptionBegin
  Result := TSynBaseCompletion.Create(AOwner);
  handleExceptionEnd
end;

// function
function TSynBaseCompletion_IsActive(AObj: TSynBaseCompletion): LongBool; extdecl;
begin
  {$define handleExceptionID := 42001}
  handleExceptionBegin
  Result := AObj.IsActive();
  handleExceptionEnd
end;

// function
function TSynBaseCompletion_TheForm(AObj: TSynBaseCompletion): TSynBaseCompletionForm; extdecl;
begin
  {$define handleExceptionID := 42002}
  handleExceptionBegin
  Result := AObj.TheForm();
  handleExceptionEnd
end;

// procedure
procedure TSynBaseCompletion_ExecuteWithStrIntX2(AObj: TSynBaseCompletion; s: PChar; x: integer; y: integer); extdecl;
begin
  {$define handleExceptionID := 42003}
  handleExceptionBegin
  AObj.Execute(s, x, y);
  handleExceptionEnd
end;

// procedure
procedure TSynBaseCompletion_ExecuteWithStrPoint(AObj: TSynBaseCompletion; s: PChar; var TopLeft: TPoint); extdecl;
begin
  {$define handleExceptionID := 42004}
  handleExceptionBegin
  AObj.Execute(s, TopLeft);
  handleExceptionEnd
end;

// procedure
procedure TSynBaseCompletion_ExecuteWithStrRect(AObj: TSynBaseCompletion; s: PChar; var TokenRect: TRect); extdecl;
begin
  {$define handleExceptionID := 42005}
  handleExceptionBegin
  AObj.Execute(s, TokenRect);
  handleExceptionEnd
end;

// procedure
procedure TSynBaseCompletion_Deactivate(AObj: TSynBaseCompletion); extdecl;
begin
  {$define handleExceptionID := 42006}
  handleExceptionBegin
  AObj.Deactivate();
  handleExceptionEnd
end;

// property
procedure TSynBaseCompletion_CurrentString(ASet: LongBool; AObj: TSynBaseCompletion; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 42007}
  handleExceptionBegin
  if ASet then
  begin
    AObj.CurrentString := AValue
  end else
    StringBufferCreate(AObj.CurrentString, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TSynBaseCompletion_FontHeight(AObj: TSynBaseCompletion): integer; extdecl;
begin
  {$define handleExceptionID := 42008}
  handleExceptionBegin
  Result := AObj.FontHeight;
  handleExceptionEnd
end;

// property
function TSynBaseCompletion_ItemList(ASet: LongBool; AObj: TSynBaseCompletion; AValue: TStrings): TStrings; extdecl;
begin
  {$define handleExceptionID := 42009}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ItemList := AValue
  end else
    Result := AObj.ItemList;
  handleExceptionEnd
end;

// property
function TSynBaseCompletion_Position(ASet: LongBool; AObj: TSynBaseCompletion; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 42010}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Position := AValue
  end else
    Result := AObj.Position;
  handleExceptionEnd
end;

// property
function TSynBaseCompletion_LinesInWindow(ASet: LongBool; AObj: TSynBaseCompletion; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 42011}
  handleExceptionBegin
  if ASet then
  begin
    AObj.LinesInWindow := AValue
  end else
    Result := AObj.LinesInWindow;
  handleExceptionEnd
end;

// property
function TSynBaseCompletion_SelectedColor(ASet: LongBool; AObj: TSynBaseCompletion; AValue: TColor): TColor; extdecl;
begin
  {$define handleExceptionID := 42012}
  handleExceptionBegin
  if ASet then
  begin
    AObj.SelectedColor := AValue
  end else
    Result := AObj.SelectedColor;
  handleExceptionEnd
end;

// property
function TSynBaseCompletion_CaseSensitive(ASet: LongBool; AObj: TSynBaseCompletion; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 42013}
  handleExceptionBegin
  if ASet then
  begin
    AObj.CaseSensitive := AValue
  end else
    Result := AObj.CaseSensitive;
  handleExceptionEnd
end;

// property
function TSynBaseCompletion_Width(ASet: LongBool; AObj: TSynBaseCompletion; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 42014}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Width := AValue
  end else
    Result := AObj.Width;
  handleExceptionEnd
end;

// property
function TSynBaseCompletion_LongLineHintTime(ASet: LongBool; AObj: TSynBaseCompletion; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 42015}
  handleExceptionBegin
  if ASet then
  begin
    AObj.LongLineHintTime := AValue
  end else
    Result := AObj.LongLineHintTime;
  handleExceptionEnd
end;

// property
function TSynBaseCompletion_LongLineHintType(ASet: LongBool; AObj: TSynBaseCompletion; AValue: TSynCompletionLongHintType): TSynCompletionLongHintType; extdecl;
begin
  {$define handleExceptionID := 42016}
  handleExceptionBegin
  if ASet then
  begin
    AObj.LongLineHintType := AValue
  end else
    Result := AObj.LongLineHintType;
  handleExceptionEnd
end;

// property
function TSynBaseCompletion_DoubleClickSelects(ASet: LongBool; AObj: TSynBaseCompletion; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 42017}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DoubleClickSelects := AValue
  end else
    Result := AObj.DoubleClickSelects;
  handleExceptionEnd
end;

// property
function TSynBaseCompletion_ShowSizeDrag(ASet: LongBool; AObj: TSynBaseCompletion; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 42018}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ShowSizeDrag := AValue
  end else
    Result := AObj.ShowSizeDrag;
  handleExceptionEnd
end;

// property
function TSynBaseCompletion_AutoUseSingleIdent(ASet: LongBool; AObj: TSynBaseCompletion; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 42019}
  handleExceptionBegin
  if ASet then
  begin
    AObj.AutoUseSingleIdent := AValue
  end else
    Result := AObj.AutoUseSingleIdent;
  handleExceptionEnd
end;

// event
procedure TSynBaseCompletion_OnKeyDown(AObj: TSynBaseCompletion; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTKeyEvent}
  {$DEFINE EventName := OnKeyDown}
  LCLEventMethodCode
end;

// event
procedure TSynBaseCompletion_OnUTF8KeyPress(AObj: TSynBaseCompletion; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTUTF8KeyPressEvent}
  {$DEFINE EventName := OnUTF8KeyPress}
  LCLEventMethodCode
end;

// event
procedure TSynBaseCompletion_OnKeyPress(AObj: TSynBaseCompletion; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTKeyPressEvent}
  {$DEFINE EventName := OnKeyPress}
  LCLEventMethodCode
end;

// event
procedure TSynBaseCompletion_OnKeyDelete(AObj: TSynBaseCompletion; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnKeyDelete}
  LCLEventMethodCode
end;

// event
procedure TSynBaseCompletion_OnValidate(AObj: TSynBaseCompletion; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTValidateEvent}
  {$DEFINE EventName := OnValidate}
  LCLEventMethodCode
end;

// event
procedure TSynBaseCompletion_OnCancel(AObj: TSynBaseCompletion; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnCancel}
  LCLEventMethodCode
end;

// event
procedure TSynBaseCompletion_OnBeforeExecute(AObj: TSynBaseCompletion; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTOnBeforeExecuteEvent}
  {$DEFINE EventName := OnBeforeExecute}
  LCLEventMethodCode
end;

// event
procedure TSynBaseCompletion_OnExecute(AObj: TSynBaseCompletion; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnExecute}
  LCLEventMethodCode
end;

// event
procedure TSynBaseCompletion_OnPaintItem(AObj: TSynBaseCompletion; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTSynBaseCompletionPaintItem}
  {$DEFINE EventName := OnPaintItem}
  LCLEventMethodCode
end;

// event
procedure TSynBaseCompletion_OnMeasureItem(AObj: TSynBaseCompletion; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTSynBaseCompletionMeasureItem}
  {$DEFINE EventName := OnMeasureItem}
  LCLEventMethodCode
end;

// event
procedure TSynBaseCompletion_OnSearchPosition(AObj: TSynBaseCompletion; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTSynBaseCompletionSearchPosition}
  {$DEFINE EventName := OnSearchPosition}
  LCLEventMethodCode
end;

// event
procedure TSynBaseCompletion_OnKeyCompletePrefix(AObj: TSynBaseCompletion; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnKeyCompletePrefix}
  LCLEventMethodCode
end;

// event
procedure TSynBaseCompletion_OnKeyNextChar(AObj: TSynBaseCompletion; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnKeyNextChar}
  LCLEventMethodCode
end;

// event
procedure TSynBaseCompletion_OnKeyPrevChar(AObj: TSynBaseCompletion; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnKeyPrevChar}
  LCLEventMethodCode
end;

// event
procedure TSynBaseCompletion_OnPositionChanged(AObj: TSynBaseCompletion; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnPositionChanged}
  LCLEventMethodCode
end;

function TSynBaseCompletion_TClass(): TClass; extdecl;
begin
  Result := TSynBaseCompletion;
end;

exports
  TSynBaseCompletion_Create,
  TSynBaseCompletion_IsActive,
  TSynBaseCompletion_TheForm,
  TSynBaseCompletion_ExecuteWithStrIntX2,
  TSynBaseCompletion_ExecuteWithStrPoint,
  TSynBaseCompletion_ExecuteWithStrRect,
  TSynBaseCompletion_Deactivate,
  TSynBaseCompletion_CurrentString,
  TSynBaseCompletion_FontHeight,
  TSynBaseCompletion_ItemList,
  TSynBaseCompletion_Position,
  TSynBaseCompletion_LinesInWindow,
  TSynBaseCompletion_SelectedColor,
  TSynBaseCompletion_CaseSensitive,
  TSynBaseCompletion_Width,
  TSynBaseCompletion_LongLineHintTime,
  TSynBaseCompletion_LongLineHintType,
  TSynBaseCompletion_DoubleClickSelects,
  TSynBaseCompletion_ShowSizeDrag,
  TSynBaseCompletion_AutoUseSingleIdent,
  TSynBaseCompletion_OnKeyDown,
  TSynBaseCompletion_OnUTF8KeyPress,
  TSynBaseCompletion_OnKeyPress,
  TSynBaseCompletion_OnKeyDelete,
  TSynBaseCompletion_OnValidate,
  TSynBaseCompletion_OnCancel,
  TSynBaseCompletion_OnBeforeExecute,
  TSynBaseCompletion_OnExecute,
  TSynBaseCompletion_OnPaintItem,
  TSynBaseCompletion_OnMeasureItem,
  TSynBaseCompletion_OnSearchPosition,
  TSynBaseCompletion_OnKeyCompletePrefix,
  TSynBaseCompletion_OnKeyNextChar,
  TSynBaseCompletion_OnKeyPrevChar,
  TSynBaseCompletion_OnPositionChanged,
  TSynBaseCompletion_TClass;