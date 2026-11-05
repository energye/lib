// procedure
procedure TSynGutterBase_RecalcBounds(AObj: TSynGutterBase); extdecl;
begin
  {$define handleExceptionID := 37100}
  handleExceptionBegin
  AObj.RecalcBounds();
  handleExceptionEnd
end;

// procedure
procedure TSynGutterBase_ScalePPI(AObj: TSynGutterBase; var AScaleFactor: Double); extdecl;
begin
  {$define handleExceptionID := 37101}
  handleExceptionBegin
  AObj.ScalePPI(AScaleFactor);
  handleExceptionEnd
end;

// procedure
procedure TSynGutterBase_DoAutoSize(AObj: TSynGutterBase); extdecl;
begin
  {$define handleExceptionID := 37102}
  handleExceptionBegin
  AObj.DoAutoSize();
  handleExceptionEnd
end;

// procedure
procedure TSynGutterBase_ResetMouseActions(AObj: TSynGutterBase); extdecl;
begin
  {$define handleExceptionID := 37103}
  handleExceptionBegin
  AObj.ResetMouseActions();
  handleExceptionEnd
end;

// property
function TSynGutterBase_Left(AObj: TSynGutterBase): Integer; extdecl;
begin
  {$define handleExceptionID := 37104}
  handleExceptionBegin
  Result := AObj.Left;
  handleExceptionEnd
end;

// property
function TSynGutterBase_Top(AObj: TSynGutterBase): Integer; extdecl;
begin
  {$define handleExceptionID := 37105}
  handleExceptionBegin
  Result := AObj.Top;
  handleExceptionEnd
end;

// property
function TSynGutterBase_Height(AObj: TSynGutterBase): Integer; extdecl;
begin
  {$define handleExceptionID := 37106}
  handleExceptionBegin
  Result := AObj.Height;
  handleExceptionEnd
end;

// property
function TSynGutterBase_Width(ASet: LongBool; AObj: TSynGutterBase; AValue: integer): integer; extdecl;
begin
  {$define handleExceptionID := 37107}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Width := AValue
  end else
    Result := AObj.Width;
  handleExceptionEnd
end;

// property
function TSynGutterBase_Side(AObj: TSynGutterBase): TSynGutterSide; extdecl;
begin
  {$define handleExceptionID := 37108}
  handleExceptionBegin
  Result := AObj.Side;
  handleExceptionEnd
end;

// property
function TSynGutterBase_AutoSize(ASet: LongBool; AObj: TSynGutterBase; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 37109}
  handleExceptionBegin
  if ASet then
  begin
    AObj.AutoSize := AValue
  end else
    Result := AObj.AutoSize;
  handleExceptionEnd
end;

// property
function TSynGutterBase_Visible(ASet: LongBool; AObj: TSynGutterBase; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 37110}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Visible := AValue
  end else
    Result := AObj.Visible;
  handleExceptionEnd
end;

// property
function TSynGutterBase_LeftOffset(ASet: LongBool; AObj: TSynGutterBase; AValue: integer): integer; extdecl;
begin
  {$define handleExceptionID := 37111}
  handleExceptionBegin
  if ASet then
  begin
    AObj.LeftOffset := AValue
  end else
    Result := AObj.LeftOffset;
  handleExceptionEnd
end;

// property
function TSynGutterBase_RightOffset(ASet: LongBool; AObj: TSynGutterBase; AValue: integer): integer; extdecl;
begin
  {$define handleExceptionID := 37112}
  handleExceptionBegin
  if ASet then
  begin
    AObj.RightOffset := AValue
  end else
    Result := AObj.RightOffset;
  handleExceptionEnd
end;

// property
function TSynGutterBase_Parts(ASet: LongBool; AObj: TSynGutterBase; AValue: TSynGutterPartListBase): TSynGutterPartListBase; extdecl;
begin
  {$define handleExceptionID := 37113}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Parts := AValue
  end else
    Result := AObj.Parts;
  handleExceptionEnd
end;

// property
function TSynGutterBase_SynEdit(AObj: TSynGutterBase): TSynEditBase; extdecl;
begin
  {$define handleExceptionID := 37114}
  handleExceptionBegin
  Result := AObj.SynEdit;
  handleExceptionEnd
end;

// property
function TSynGutterBase_TextDrawer(AObj: TSynGutterBase): TheTextDrawer; extdecl;
begin
  {$define handleExceptionID := 37115}
  handleExceptionBegin
  Result := AObj.TextDrawer;
  handleExceptionEnd
end;

// property
function TSynGutterBase_Color(ASet: LongBool; AObj: TSynGutterBase; AValue: TColor): TColor; extdecl;
begin
  {$define handleExceptionID := 37116}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Color := AValue
  end else
    Result := AObj.Color;
  handleExceptionEnd
end;

// property
function TSynGutterBase_CurrentLineColor(ASet: LongBool; AObj: TSynGutterBase; AValue: TSynHighlighterAttributesModifier): TSynHighlighterAttributesModifier; extdecl;
begin
  {$define handleExceptionID := 37117}
  handleExceptionBegin
  if ASet then
  begin
    AObj.CurrentLineColor := AValue
  end else
    Result := AObj.CurrentLineColor;
  handleExceptionEnd
end;

// property
function TSynGutterBase_MouseActions(ASet: LongBool; AObj: TSynGutterBase; AValue: TSynEditMouseActions): TSynEditMouseActions; extdecl;
begin
  {$define handleExceptionID := 37118}
  handleExceptionBegin
  if ASet then
  begin
    AObj.MouseActions := AValue
  end else
    Result := AObj.MouseActions;
  handleExceptionEnd
end;

// event
procedure TSynGutterBase_OnChange(AObj: TSynGutterBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnChange}
  LCLEventMethodCode
end;

// event
procedure TSynGutterBase_OnResize(AObj: TSynGutterBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnResize}
  LCLEventMethodCode
end;

exports
  TSynGutterBase_RecalcBounds,
  TSynGutterBase_ScalePPI,
  TSynGutterBase_DoAutoSize,
  TSynGutterBase_ResetMouseActions,
  TSynGutterBase_Left,
  TSynGutterBase_Top,
  TSynGutterBase_Height,
  TSynGutterBase_Width,
  TSynGutterBase_Side,
  TSynGutterBase_AutoSize,
  TSynGutterBase_Visible,
  TSynGutterBase_LeftOffset,
  TSynGutterBase_RightOffset,
  TSynGutterBase_Parts,
  TSynGutterBase_SynEdit,
  TSynGutterBase_TextDrawer,
  TSynGutterBase_Color,
  TSynGutterBase_CurrentLineColor,
  TSynGutterBase_MouseActions,
  TSynGutterBase_OnChange,
  TSynGutterBase_OnResize;