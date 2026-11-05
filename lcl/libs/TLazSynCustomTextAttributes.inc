// constructor
function TLazSynCustomTextAttributes_Create(): TLazSynCustomTextAttributes; extdecl;
begin
  {$define handleExceptionID := 35700}
  handleExceptionBegin
  Result := TLazSynCustomTextAttributes.Create();
  handleExceptionEnd
end;

// procedure
procedure TLazSynCustomTextAttributes_Clear(AObj: TLazSynCustomTextAttributes); extdecl;
begin
  {$define handleExceptionID := 35701}
  handleExceptionBegin
  AObj.Clear();
  handleExceptionEnd
end;

// procedure
procedure TLazSynCustomTextAttributes_SetAllPriorities(AObj: TLazSynCustomTextAttributes; APriority: integer); extdecl;
begin
  {$define handleExceptionID := 35702}
  handleExceptionBegin
  AObj.SetAllPriorities(APriority);
  handleExceptionEnd
end;

// procedure
procedure TLazSynCustomTextAttributes_BeginUpdate(AObj: TLazSynCustomTextAttributes); extdecl;
begin
  {$define handleExceptionID := 35703}
  handleExceptionBegin
  AObj.BeginUpdate();
  handleExceptionEnd
end;

// procedure
procedure TLazSynCustomTextAttributes_EndUpdate(AObj: TLazSynCustomTextAttributes); extdecl;
begin
  {$define handleExceptionID := 35704}
  handleExceptionBegin
  AObj.EndUpdate();
  handleExceptionEnd
end;

// property
function TLazSynCustomTextAttributes_Background(ASet: LongBool; AObj: TLazSynCustomTextAttributes; AValue: TColor): TColor; extdecl;
begin
  {$define handleExceptionID := 35705}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Background := AValue
  end else
    Result := AObj.Background;
  handleExceptionEnd
end;

// property
function TLazSynCustomTextAttributes_Foreground(ASet: LongBool; AObj: TLazSynCustomTextAttributes; AValue: TColor): TColor; extdecl;
begin
  {$define handleExceptionID := 35706}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Foreground := AValue
  end else
    Result := AObj.Foreground;
  handleExceptionEnd
end;

// property
function TLazSynCustomTextAttributes_FrameColor(ASet: LongBool; AObj: TLazSynCustomTextAttributes; AValue: TColor): TColor; extdecl;
begin
  {$define handleExceptionID := 35707}
  handleExceptionBegin
  if ASet then
  begin
    AObj.FrameColor := AValue
  end else
    Result := AObj.FrameColor;
  handleExceptionEnd
end;

// property
function TLazSynCustomTextAttributes_FrameStyle(ASet: LongBool; AObj: TLazSynCustomTextAttributes; AValue: TSynLineStyle): TSynLineStyle; extdecl;
begin
  {$define handleExceptionID := 35708}
  handleExceptionBegin
  if ASet then
  begin
    AObj.FrameStyle := AValue
  end else
    Result := AObj.FrameStyle;
  handleExceptionEnd
end;

// property
function TLazSynCustomTextAttributes_FrameEdges(ASet: LongBool; AObj: TLazSynCustomTextAttributes; AValue: TSynFrameEdges): TSynFrameEdges; extdecl;
begin
  {$define handleExceptionID := 35709}
  handleExceptionBegin
  if ASet then
  begin
    AObj.FrameEdges := AValue
  end else
    Result := AObj.FrameEdges;
  handleExceptionEnd
end;

// property
function TLazSynCustomTextAttributes_Style(ASet: LongBool; AObj: TLazSynCustomTextAttributes; AValue: TFontStyles): TFontStyles; extdecl;
begin
  {$define handleExceptionID := 35710}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Style := AValue
  end else
    Result := AObj.Style;
  handleExceptionEnd
end;

// property
function TLazSynCustomTextAttributes_StyleMask(ASet: LongBool; AObj: TLazSynCustomTextAttributes; AValue: TFontStyles): TFontStyles; extdecl;
begin
  {$define handleExceptionID := 35711}
  handleExceptionBegin
  if ASet then
  begin
    AObj.StyleMask := AValue
  end else
    Result := AObj.StyleMask;
  handleExceptionEnd
end;

// property
function TLazSynCustomTextAttributes_StylePriority(ASet: LongBool; AObj: TLazSynCustomTextAttributes; Index: TFontStyle; AValue: integer): integer; extdecl;
begin
  {$define handleExceptionID := 35712}
  handleExceptionBegin
  if ASet then
  begin
    AObj.StylePriority[Index] := AValue
  end else
    Result := AObj.StylePriority[Index];
  handleExceptionEnd
end;

// property
function TLazSynCustomTextAttributes_BackPriority(ASet: LongBool; AObj: TLazSynCustomTextAttributes; AValue: integer): integer; extdecl;
begin
  {$define handleExceptionID := 35713}
  handleExceptionBegin
  if ASet then
  begin
    AObj.BackPriority := AValue
  end else
    Result := AObj.BackPriority;
  handleExceptionEnd
end;

// property
function TLazSynCustomTextAttributes_ForePriority(ASet: LongBool; AObj: TLazSynCustomTextAttributes; AValue: integer): integer; extdecl;
begin
  {$define handleExceptionID := 35714}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ForePriority := AValue
  end else
    Result := AObj.ForePriority;
  handleExceptionEnd
end;

// property
function TLazSynCustomTextAttributes_FramePriority(ASet: LongBool; AObj: TLazSynCustomTextAttributes; AValue: integer): integer; extdecl;
begin
  {$define handleExceptionID := 35715}
  handleExceptionBegin
  if ASet then
  begin
    AObj.FramePriority := AValue
  end else
    Result := AObj.FramePriority;
  handleExceptionEnd
end;

// property
function TLazSynCustomTextAttributes_BoldPriority(ASet: LongBool; AObj: TLazSynCustomTextAttributes; AValue: integer): integer; extdecl;
begin
  {$define handleExceptionID := 35716}
  handleExceptionBegin
  if ASet then
  begin
    AObj.BoldPriority := AValue
  end else
    Result := AObj.BoldPriority;
  handleExceptionEnd
end;

// property
function TLazSynCustomTextAttributes_ItalicPriority(ASet: LongBool; AObj: TLazSynCustomTextAttributes; AValue: integer): integer; extdecl;
begin
  {$define handleExceptionID := 35717}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ItalicPriority := AValue
  end else
    Result := AObj.ItalicPriority;
  handleExceptionEnd
end;

// property
function TLazSynCustomTextAttributes_UnderlinePriority(ASet: LongBool; AObj: TLazSynCustomTextAttributes; AValue: integer): integer; extdecl;
begin
  {$define handleExceptionID := 35718}
  handleExceptionBegin
  if ASet then
  begin
    AObj.UnderlinePriority := AValue
  end else
    Result := AObj.UnderlinePriority;
  handleExceptionEnd
end;

// property
function TLazSynCustomTextAttributes_StrikeOutPriority(ASet: LongBool; AObj: TLazSynCustomTextAttributes; AValue: integer): integer; extdecl;
begin
  {$define handleExceptionID := 35719}
  handleExceptionBegin
  if ASet then
  begin
    AObj.StrikeOutPriority := AValue
  end else
    Result := AObj.StrikeOutPriority;
  handleExceptionEnd
end;

exports
  TLazSynCustomTextAttributes_Create,
  TLazSynCustomTextAttributes_Clear,
  TLazSynCustomTextAttributes_SetAllPriorities,
  TLazSynCustomTextAttributes_BeginUpdate,
  TLazSynCustomTextAttributes_EndUpdate,
  TLazSynCustomTextAttributes_Background,
  TLazSynCustomTextAttributes_Foreground,
  TLazSynCustomTextAttributes_FrameColor,
  TLazSynCustomTextAttributes_FrameStyle,
  TLazSynCustomTextAttributes_FrameEdges,
  TLazSynCustomTextAttributes_Style,
  TLazSynCustomTextAttributes_StyleMask,
  TLazSynCustomTextAttributes_StylePriority,
  TLazSynCustomTextAttributes_BackPriority,
  TLazSynCustomTextAttributes_ForePriority,
  TLazSynCustomTextAttributes_FramePriority,
  TLazSynCustomTextAttributes_BoldPriority,
  TLazSynCustomTextAttributes_ItalicPriority,
  TLazSynCustomTextAttributes_UnderlinePriority,
  TLazSynCustomTextAttributes_StrikeOutPriority;