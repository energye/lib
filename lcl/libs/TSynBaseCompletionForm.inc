// constructor
function TSynBaseCompletionForm_Create(AOwner: Tcomponent): TSynBaseCompletionForm; extdecl;
begin
  {$define handleExceptionID := 42300}
  handleExceptionBegin
  Result := TSynBaseCompletionForm.Create(AOwner);
  handleExceptionEnd
end;

// procedure
procedure TSynBaseCompletionForm_ShowItemHint(AObj: TSynBaseCompletionForm; AIndex: Integer); extdecl;
begin
  {$define handleExceptionID := 42301}
  handleExceptionBegin
  AObj.ShowItemHint(AIndex);
  handleExceptionEnd
end;

// procedure
procedure TSynBaseCompletionForm_OnHintTimer(AObj: TSynBaseCompletionForm; Sender: TObject); extdecl;
begin
  {$define handleExceptionID := 42302}
  handleExceptionBegin
  AObj.OnHintTimer(Sender);
  handleExceptionEnd
end;

// property
function TSynBaseCompletionForm_CurrentEditor(AObj: TSynBaseCompletionForm): TCustomSynEdit; extdecl;
begin
  {$define handleExceptionID := 42303}
  handleExceptionBegin
  Result := AObj.CurrentEditor;
  handleExceptionEnd
end;

// property
procedure TSynBaseCompletionForm_CurrentString(ASet: LongBool; AObj: TSynBaseCompletionForm; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 42304}
  handleExceptionBegin
  if ASet then
  begin
    AObj.CurrentString := AValue
  end else
    StringBufferCreate(AObj.CurrentString, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TSynBaseCompletionForm_ItemList(ASet: LongBool; AObj: TSynBaseCompletionForm; AValue: TStrings): TStrings; extdecl;
begin
  {$define handleExceptionID := 42305}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ItemList := AValue
  end else
    Result := AObj.ItemList;
  handleExceptionEnd
end;

// property
function TSynBaseCompletionForm_PositionToInt(ASet: LongBool; AObj: TSynBaseCompletionForm; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 42306}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Position := AValue
  end else
    Result := AObj.Position;
  handleExceptionEnd
end;

// property
function TSynBaseCompletionForm_NbLinesInWindow(ASet: LongBool; AObj: TSynBaseCompletionForm; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 42307}
  handleExceptionBegin
  if ASet then
  begin
    AObj.NbLinesInWindow := AValue
  end else
    Result := AObj.NbLinesInWindow;
  handleExceptionEnd
end;

// property
function TSynBaseCompletionForm_ClSelect(ASet: LongBool; AObj: TSynBaseCompletionForm; AValue: TColor): TColor; extdecl;
begin
  {$define handleExceptionID := 42308}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ClSelect := AValue
  end else
    Result := AObj.ClSelect;
  handleExceptionEnd
end;

// property
function TSynBaseCompletionForm_CaseSensitive(ASet: LongBool; AObj: TSynBaseCompletionForm; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 42309}
  handleExceptionBegin
  if ASet then
  begin
    AObj.CaseSensitive := AValue
  end else
    Result := AObj.CaseSensitive;
  handleExceptionEnd
end;

// property
function TSynBaseCompletionForm_FontHeight(AObj: TSynBaseCompletionForm): integer; extdecl;
begin
  {$define handleExceptionID := 42310}
  handleExceptionBegin
  Result := AObj.FontHeight;
  handleExceptionEnd
end;

// property
function TSynBaseCompletionForm_BackgroundColor(ASet: LongBool; AObj: TSynBaseCompletionForm; AValue: TColor): TColor; extdecl;
begin
  {$define handleExceptionID := 42311}
  handleExceptionBegin
  if ASet then
  begin
    AObj.BackgroundColor := AValue
  end else
    Result := AObj.BackgroundColor;
  handleExceptionEnd
end;

// property
function TSynBaseCompletionForm_DrawBorderColor(ASet: LongBool; AObj: TSynBaseCompletionForm; AValue: TColor): TColor; extdecl;
begin
  {$define handleExceptionID := 42312}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DrawBorderColor := AValue
  end else
    Result := AObj.DrawBorderColor;
  handleExceptionEnd
end;

// property
function TSynBaseCompletionForm_DrawBorderWidth(ASet: LongBool; AObj: TSynBaseCompletionForm; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 42313}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DrawBorderWidth := AValue
  end else
    Result := AObj.DrawBorderWidth;
  handleExceptionEnd
end;

// property
function TSynBaseCompletionForm_TextColor(ASet: LongBool; AObj: TSynBaseCompletionForm; AValue: TColor): TColor; extdecl;
begin
  {$define handleExceptionID := 42314}
  handleExceptionBegin
  if ASet then
  begin
    AObj.TextColor := AValue
  end else
    Result := AObj.TextColor;
  handleExceptionEnd
end;

// property
function TSynBaseCompletionForm_TextSelectedColor(ASet: LongBool; AObj: TSynBaseCompletionForm; AValue: TColor): TColor; extdecl;
begin
  {$define handleExceptionID := 42315}
  handleExceptionBegin
  if ASet then
  begin
    AObj.TextSelectedColor := AValue
  end else
    Result := AObj.TextSelectedColor;
  handleExceptionEnd
end;

// property
function TSynBaseCompletionForm_LongLineHintTime(ASet: LongBool; AObj: TSynBaseCompletionForm; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 42316}
  handleExceptionBegin
  if ASet then
  begin
    AObj.LongLineHintTime := AValue
  end else
    Result := AObj.LongLineHintTime;
  handleExceptionEnd
end;

// property
function TSynBaseCompletionForm_LongLineHintType(ASet: LongBool; AObj: TSynBaseCompletionForm; AValue: TSynCompletionLongHintType): TSynCompletionLongHintType; extdecl;
begin
  {$define handleExceptionID := 42317}
  handleExceptionBegin
  if ASet then
  begin
    AObj.LongLineHintType := AValue
  end else
    Result := AObj.LongLineHintType;
  handleExceptionEnd
end;

// property
function TSynBaseCompletionForm_DoubleClickSelects(ASet: LongBool; AObj: TSynBaseCompletionForm; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 42318}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DoubleClickSelects := AValue
  end else
    Result := AObj.DoubleClickSelects;
  handleExceptionEnd
end;

// property
function TSynBaseCompletionForm_ShowSizeDrag(ASet: LongBool; AObj: TSynBaseCompletionForm; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 42319}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ShowSizeDrag := AValue
  end else
    Result := AObj.ShowSizeDrag;
  handleExceptionEnd
end;

// event
procedure TSynBaseCompletionForm_OnKeyDelete(AObj: TSynBaseCompletionForm; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnKeyDelete}
  LCLEventMethodCode
end;

// event
procedure TSynBaseCompletionForm_OnPaintItem(AObj: TSynBaseCompletionForm; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTSynBaseCompletionPaintItem}
  {$DEFINE EventName := OnPaintItem}
  LCLEventMethodCode
end;

// event
procedure TSynBaseCompletionForm_OnMeasureItem(AObj: TSynBaseCompletionForm; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTSynBaseCompletionMeasureItem}
  {$DEFINE EventName := OnMeasureItem}
  LCLEventMethodCode
end;

// event
procedure TSynBaseCompletionForm_OnValidate(AObj: TSynBaseCompletionForm; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTValidateEvent}
  {$DEFINE EventName := OnValidate}
  LCLEventMethodCode
end;

// event
procedure TSynBaseCompletionForm_OnCancel(AObj: TSynBaseCompletionForm; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnCancel}
  LCLEventMethodCode
end;

// event
procedure TSynBaseCompletionForm_OnSearchPosition(AObj: TSynBaseCompletionForm; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTSynBaseCompletionSearchPosition}
  {$DEFINE EventName := OnSearchPosition}
  LCLEventMethodCode
end;

// event
procedure TSynBaseCompletionForm_OnKeyCompletePrefix(AObj: TSynBaseCompletionForm; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnKeyCompletePrefix}
  LCLEventMethodCode
end;

// event
procedure TSynBaseCompletionForm_OnKeyNextChar(AObj: TSynBaseCompletionForm; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnKeyNextChar}
  LCLEventMethodCode
end;

// event
procedure TSynBaseCompletionForm_OnKeyPrevChar(AObj: TSynBaseCompletionForm; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnKeyPrevChar}
  LCLEventMethodCode
end;

// event
procedure TSynBaseCompletionForm_OnPositionChanged(AObj: TSynBaseCompletionForm; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnPositionChanged}
  LCLEventMethodCode
end;

// event
procedure TSynBaseCompletionForm_OnDragResized(AObj: TSynBaseCompletionForm; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnDragResized}
  LCLEventMethodCode
end;

function TSynBaseCompletionForm_TClass(): TClass; extdecl;
begin
  Result := TSynBaseCompletionForm;
end;

exports
  TSynBaseCompletionForm_Create,
  TSynBaseCompletionForm_ShowItemHint,
  TSynBaseCompletionForm_OnHintTimer,
  TSynBaseCompletionForm_CurrentEditor,
  TSynBaseCompletionForm_CurrentString,
  TSynBaseCompletionForm_ItemList,
  TSynBaseCompletionForm_PositionToInt,
  TSynBaseCompletionForm_NbLinesInWindow,
  TSynBaseCompletionForm_ClSelect,
  TSynBaseCompletionForm_CaseSensitive,
  TSynBaseCompletionForm_FontHeight,
  TSynBaseCompletionForm_BackgroundColor,
  TSynBaseCompletionForm_DrawBorderColor,
  TSynBaseCompletionForm_DrawBorderWidth,
  TSynBaseCompletionForm_TextColor,
  TSynBaseCompletionForm_TextSelectedColor,
  TSynBaseCompletionForm_LongLineHintTime,
  TSynBaseCompletionForm_LongLineHintType,
  TSynBaseCompletionForm_DoubleClickSelects,
  TSynBaseCompletionForm_ShowSizeDrag,
  TSynBaseCompletionForm_OnKeyDelete,
  TSynBaseCompletionForm_OnPaintItem,
  TSynBaseCompletionForm_OnMeasureItem,
  TSynBaseCompletionForm_OnValidate,
  TSynBaseCompletionForm_OnCancel,
  TSynBaseCompletionForm_OnSearchPosition,
  TSynBaseCompletionForm_OnKeyCompletePrefix,
  TSynBaseCompletionForm_OnKeyNextChar,
  TSynBaseCompletionForm_OnKeyPrevChar,
  TSynBaseCompletionForm_OnPositionChanged,
  TSynBaseCompletionForm_OnDragResized,
  TSynBaseCompletionForm_TClass;