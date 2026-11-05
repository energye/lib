// constructor
function TheTextDrawer_Create(CalcExtentBaseStyle: TFontStyles; ABaseFont: TFont): TheTextDrawer; extdecl;
begin
  {$define handleExceptionID := 38600}
  handleExceptionBegin
  Result := TheTextDrawer.Create(CalcExtentBaseStyle, ABaseFont);
  handleExceptionEnd
end;

// function
function TheTextDrawer_GetCharWidth(AObj: TheTextDrawer): Integer; extdecl;
begin
  {$define handleExceptionID := 38601}
  handleExceptionBegin
  Result := AObj.GetCharWidth();
  handleExceptionEnd
end;

// function
function TheTextDrawer_GetCharHeight(AObj: TheTextDrawer): Integer; extdecl;
begin
  {$define handleExceptionID := 38602}
  handleExceptionBegin
  Result := AObj.GetCharHeight();
  handleExceptionEnd
end;

// function
function TheTextDrawer_NeedsEto(AObj: TheTextDrawer): LongBool; extdecl;
begin
  {$define handleExceptionID := 38603}
  handleExceptionBegin
  Result := AObj.NeedsEto();
  handleExceptionEnd
end;

// procedure
procedure TheTextDrawer_BeginDrawing(AObj: TheTextDrawer; DC: HDC); extdecl;
begin
  {$define handleExceptionID := 38604}
  handleExceptionBegin
  AObj.BeginDrawing(DC);
  handleExceptionEnd
end;

// procedure
procedure TheTextDrawer_EndDrawing(AObj: TheTextDrawer); extdecl;
begin
  {$define handleExceptionID := 38605}
  handleExceptionBegin
  AObj.EndDrawing();
  handleExceptionEnd
end;

// procedure
procedure TheTextDrawer_TextOut(AObj: TheTextDrawer; X: Integer; Y: Integer; Text: PChar; Length: Integer); extdecl;
begin
  {$define handleExceptionID := 38606}
  handleExceptionBegin
  AObj.TextOut(X, Y, Text, Length);
  handleExceptionEnd
end;

// procedure
procedure TheTextDrawer_ExtTextOut(AObj: TheTextDrawer; X: Integer; Y: Integer; fuOptions: UINT; var ARect: TRect; Text: PChar; Length: Integer; FrameBottom: Integer); extdecl;
begin
  {$define handleExceptionID := 38607}
  handleExceptionBegin
  AObj.ExtTextOut(X, Y, fuOptions, ARect, Text, Length, FrameBottom);
  handleExceptionEnd
end;

// procedure
procedure TheTextDrawer_NewTextOut(AObj: TheTextDrawer; X: Integer; Y: Integer; fuOptions: UINT; var ARect: TRect; Text: PChar; ALength: Integer; AnEto: TEtoBuffer); extdecl;
begin
  {$define handleExceptionID := 38608}
  handleExceptionBegin
  AObj.NewTextOut(X, Y, fuOptions, ARect, Text, ALength, AnEto);
  handleExceptionEnd
end;

// procedure
procedure TheTextDrawer_DrawFrame(AObj: TheTextDrawer; var ARect: TRect); extdecl;
begin
  {$define handleExceptionID := 38609}
  handleExceptionBegin
  AObj.DrawFrame(ARect);
  handleExceptionEnd
end;

// procedure
procedure TheTextDrawer_ForceNextTokenWithEto(AObj: TheTextDrawer); extdecl;
begin
  {$define handleExceptionID := 38610}
  handleExceptionBegin
  AObj.ForceNextTokenWithEto();
  handleExceptionEnd
end;

// procedure
procedure TheTextDrawer_DrawLine(AObj: TheTextDrawer; X: Integer; Y: Integer; X2: Integer; Y2: Integer; AColor: TColor); extdecl;
begin
  {$define handleExceptionID := 38611}
  handleExceptionBegin
  AObj.DrawLine(X, Y, X2, Y2, AColor);
  handleExceptionEnd
end;

// procedure
procedure TheTextDrawer_FillRect(AObj: TheTextDrawer; var aRect: TRect); extdecl;
begin
  {$define handleExceptionID := 38612}
  handleExceptionBegin
  AObj.FillRect(aRect);
  handleExceptionEnd
end;

// procedure
procedure TheTextDrawer_SetBaseFontWithFont(AObj: TheTextDrawer; Value: TFont); extdecl;
begin
  {$define handleExceptionID := 38613}
  handleExceptionBegin
  AObj.SetBaseFont(Value);
  handleExceptionEnd
end;

// procedure
procedure TheTextDrawer_SetBaseStyleWithFontStyles(AObj: TheTextDrawer; const Value: TFontStyles); extdecl;
begin
  {$define handleExceptionID := 38614}
  handleExceptionBegin
  AObj.SetBaseStyle(Value);
  handleExceptionEnd
end;

// procedure
procedure TheTextDrawer_SetStyleWithFontStyles(AObj: TheTextDrawer; Value: TFontStyles); extdecl;
begin
  {$define handleExceptionID := 38615}
  handleExceptionBegin
  AObj.SetStyle(Value);
  handleExceptionEnd
end;

// procedure
procedure TheTextDrawer_SetForeColorWithColor(AObj: TheTextDrawer; Value: TColor); extdecl;
begin
  {$define handleExceptionID := 38616}
  handleExceptionBegin
  AObj.SetForeColor(Value);
  handleExceptionEnd
end;

// procedure
procedure TheTextDrawer_SetBackColorWithColor(AObj: TheTextDrawer; Value: TColor); extdecl;
begin
  {$define handleExceptionID := 38617}
  handleExceptionBegin
  AObj.SetBackColor(Value);
  handleExceptionEnd
end;

// procedure
procedure TheTextDrawer_SetFrameColorWithLazSynBorderSideColor(AObj: TheTextDrawer; Side: TLazSynBorderSide; AValue: TColor); extdecl;
begin
  {$define handleExceptionID := 38618}
  handleExceptionBegin
  AObj.SetFrameColor(Side, AValue);
  handleExceptionEnd
end;

// procedure
procedure TheTextDrawer_SetFrameColorWithColor(AObj: TheTextDrawer; AValue: TColor); extdecl;
begin
  {$define handleExceptionID := 38619}
  handleExceptionBegin
  AObj.SetFrameColor(AValue);
  handleExceptionEnd
end;

// procedure
procedure TheTextDrawer_SetFrameStyleWithLazSynBorderSideSynLineStyle(AObj: TheTextDrawer; Side: TLazSynBorderSide; AValue: TSynLineStyle); extdecl;
begin
  {$define handleExceptionID := 38620}
  handleExceptionBegin
  AObj.SetFrameStyle(Side, AValue);
  handleExceptionEnd
end;

// procedure
procedure TheTextDrawer_SetCharExtraWithInt(AObj: TheTextDrawer; Value: Integer); extdecl;
begin
  {$define handleExceptionID := 38621}
  handleExceptionBegin
  AObj.SetCharExtra(Value);
  handleExceptionEnd
end;

// procedure
procedure TheTextDrawer_ReleaseTemporaryResources(AObj: TheTextDrawer); extdecl;
begin
  {$define handleExceptionID := 38622}
  handleExceptionBegin
  AObj.ReleaseTemporaryResources();
  handleExceptionEnd
end;

// property
function TheTextDrawer_Eto(AObj: TheTextDrawer): TEtoBuffer; extdecl;
begin
  {$define handleExceptionID := 38623}
  handleExceptionBegin
  Result := AObj.Eto;
  handleExceptionEnd
end;

// property
function TheTextDrawer_CharWidth(AObj: TheTextDrawer): Integer; extdecl;
begin
  {$define handleExceptionID := 38624}
  handleExceptionBegin
  Result := AObj.CharWidth;
  handleExceptionEnd
end;

// property
function TheTextDrawer_CharHeight(AObj: TheTextDrawer): Integer; extdecl;
begin
  {$define handleExceptionID := 38625}
  handleExceptionBegin
  Result := AObj.CharHeight;
  handleExceptionEnd
end;

// property
procedure TheTextDrawer_BaseFont(AObj: TheTextDrawer; AValue: TFont); extdecl;
begin
  {$define handleExceptionID := 38626}
  handleExceptionBegin
  AObj.BaseFont := AValue;
  handleExceptionEnd
end;

// property
procedure TheTextDrawer_BaseStyle(AObj: TheTextDrawer; AValue: TFontStyles); extdecl;
begin
  {$define handleExceptionID := 38627}
  handleExceptionBegin
  AObj.BaseStyle := AValue;
  handleExceptionEnd
end;

// property
procedure TheTextDrawer_ForeColor(AObj: TheTextDrawer; AValue: TColor); extdecl;
begin
  {$define handleExceptionID := 38628}
  handleExceptionBegin
  AObj.ForeColor := AValue;
  handleExceptionEnd
end;

// property
function TheTextDrawer_BackColor(ASet: LongBool; AObj: TheTextDrawer; AValue: TColor): TColor; extdecl;
begin
  {$define handleExceptionID := 38629}
  handleExceptionBegin
  if ASet then
  begin
    AObj.BackColor := AValue
  end else
    Result := AObj.BackColor;
  handleExceptionEnd
end;

// property
procedure TheTextDrawer_FrameColor(AObj: TheTextDrawer; Side: TLazSynBorderSide; AValue: TColor); extdecl;
begin
  {$define handleExceptionID := 38630}
  handleExceptionBegin
  AObj.FrameColor[Side] := AValue;
  handleExceptionEnd
end;

// property
procedure TheTextDrawer_FrameStyle(AObj: TheTextDrawer; Side: TLazSynBorderSide; AValue: TSynLineStyle); extdecl;
begin
  {$define handleExceptionID := 38631}
  handleExceptionBegin
  AObj.FrameStyle[Side] := AValue;
  handleExceptionEnd
end;

// property
procedure TheTextDrawer_Style(AObj: TheTextDrawer; AValue: TFontStyles); extdecl;
begin
  {$define handleExceptionID := 38632}
  handleExceptionBegin
  AObj.Style := AValue;
  handleExceptionEnd
end;

// property
function TheTextDrawer_CharExtra(ASet: LongBool; AObj: TheTextDrawer; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 38633}
  handleExceptionBegin
  if ASet then
  begin
    AObj.CharExtra := AValue
  end else
    Result := AObj.CharExtra;
  handleExceptionEnd
end;

// property
function TheTextDrawer_UseUTF8(AObj: TheTextDrawer): LongBool; extdecl;
begin
  {$define handleExceptionID := 38634}
  handleExceptionBegin
  Result := AObj.UseUTF8;
  handleExceptionEnd
end;

// property
function TheTextDrawer_MonoSpace(AObj: TheTextDrawer): LongBool; extdecl;
begin
  {$define handleExceptionID := 38635}
  handleExceptionBegin
  Result := AObj.MonoSpace;
  handleExceptionEnd
end;

// property
function TheTextDrawer_StockDC(AObj: TheTextDrawer): HDC; extdecl;
begin
  {$define handleExceptionID := 38636}
  handleExceptionBegin
  Result := AObj.StockDC;
  handleExceptionEnd
end;

exports
  TheTextDrawer_Create,
  TheTextDrawer_GetCharWidth,
  TheTextDrawer_GetCharHeight,
  TheTextDrawer_NeedsEto,
  TheTextDrawer_BeginDrawing,
  TheTextDrawer_EndDrawing,
  TheTextDrawer_TextOut,
  TheTextDrawer_ExtTextOut,
  TheTextDrawer_NewTextOut,
  TheTextDrawer_DrawFrame,
  TheTextDrawer_ForceNextTokenWithEto,
  TheTextDrawer_DrawLine,
  TheTextDrawer_FillRect,
  TheTextDrawer_SetBaseFontWithFont,
  TheTextDrawer_SetBaseStyleWithFontStyles,
  TheTextDrawer_SetStyleWithFontStyles,
  TheTextDrawer_SetForeColorWithColor,
  TheTextDrawer_SetBackColorWithColor,
  TheTextDrawer_SetFrameColorWithLazSynBorderSideColor,
  TheTextDrawer_SetFrameColorWithColor,
  TheTextDrawer_SetFrameStyleWithLazSynBorderSideSynLineStyle,
  TheTextDrawer_SetCharExtraWithInt,
  TheTextDrawer_ReleaseTemporaryResources,
  TheTextDrawer_Eto,
  TheTextDrawer_CharWidth,
  TheTextDrawer_CharHeight,
  TheTextDrawer_BaseFont,
  TheTextDrawer_BaseStyle,
  TheTextDrawer_ForeColor,
  TheTextDrawer_BackColor,
  TheTextDrawer_FrameColor,
  TheTextDrawer_FrameStyle,
  TheTextDrawer_Style,
  TheTextDrawer_CharExtra,
  TheTextDrawer_UseUTF8,
  TheTextDrawer_MonoSpace,
  TheTextDrawer_StockDC;