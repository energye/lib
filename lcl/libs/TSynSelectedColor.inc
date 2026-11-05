// constructor
function TSynSelectedColor_Create(): TSynSelectedColor; extdecl;
begin
  {$define handleExceptionID := 36000}
  handleExceptionBegin
  Result := TSynSelectedColor.Create();
  handleExceptionEnd
end;

// constructor
function TSynSelectedColor_CreateWithStrX2(aCaption: PChar; aStoredName: PChar): TSynSelectedColor; extdecl;
begin
  {$define handleExceptionID := 36001}
  handleExceptionBegin
  Result := TSynSelectedColor.Create(aCaption, aStoredName);
  handleExceptionEnd
end;

// function
function TSynSelectedColor_GetModifiedStyle(AObj: TSynSelectedColor; aStyle: TFontStyles): TFontStyles; extdecl;
begin
  {$define handleExceptionID := 36002}
  handleExceptionBegin
  Result := AObj.GetModifiedStyle(aStyle);
  handleExceptionEnd
end;

// procedure
procedure TSynSelectedColor_SetFrameBoundsPhys(AObj: TSynSelectedColor; AStart: Integer; AEnd: Integer); extdecl;
begin
  {$define handleExceptionID := 36003}
  handleExceptionBegin
  AObj.SetFrameBoundsPhys(AStart, AEnd);
  handleExceptionEnd
end;

// procedure
procedure TSynSelectedColor_SetFrameBoundsLog(AObj: TSynSelectedColor; AStart: Integer; AEnd: Integer; AStartOffs: Integer; AEndOffs: Integer); extdecl;
begin
  {$define handleExceptionID := 36004}
  handleExceptionBegin
  AObj.SetFrameBoundsLog(AStart, AEnd, AStartOffs, AEndOffs);
  handleExceptionEnd
end;

// procedure
procedure TSynSelectedColor_ModifyColors(AObj: TSynSelectedColor; var AForeground: TColor; var ABackground: TColor; var AFrameColor: TColor; var AStyle: TFontStyles; var AFrameStyle: TSynLineStyle); extdecl;
var
  OutAForeground: TColor;
  OutABackground: TColor;
  OutAFrameColor: TColor;
  OutAStyle: TFontStyles;
  OutAFrameStyle: TSynLineStyle;
begin
  {$define handleExceptionID := 36005}
  handleExceptionBegin
  OutAForeground := AForeground;
  OutABackground := ABackground;
  OutAFrameColor := AFrameColor;
  OutAStyle := AStyle;
  OutAFrameStyle := AFrameStyle;
  AObj.ModifyColors(OutAForeground, OutABackground, OutAFrameColor, OutAStyle, OutAFrameStyle);
  AForeground := OutAForeground;
  ABackground := OutABackground;
  AFrameColor := OutAFrameColor;
  AStyle := OutAStyle;
  AFrameStyle := OutAFrameStyle;
  handleExceptionEnd
end;

// property
procedure TSynSelectedColor_StartX(ASet: LongBool; AObj: TSynSelectedColor; var AValue: TLazSynDisplayTokenBoundPtr; var Result: TLazSynDisplayTokenBoundPtr); extdecl;
begin
  {$define handleExceptionID := 36006}
  handleExceptionBegin
  if ASet then
  begin
    AObj.StartX := TLazSynDisplayTokenBoundToPas(AValue)
  end else
    Result := TLazSynDisplayTokenBoundToGo(AObj.StartX);
  handleExceptionEnd
end;

// property
procedure TSynSelectedColor_EndX(ASet: LongBool; AObj: TSynSelectedColor; var AValue: TLazSynDisplayTokenBoundPtr; var Result: TLazSynDisplayTokenBoundPtr); extdecl;
begin
  {$define handleExceptionID := 36007}
  handleExceptionBegin
  if ASet then
  begin
    AObj.EndX := TLazSynDisplayTokenBoundToPas(AValue)
  end else
    Result := TLazSynDisplayTokenBoundToGo(AObj.EndX);
  handleExceptionEnd
end;

exports
  TSynSelectedColor_Create,
  TSynSelectedColor_CreateWithStrX2,
  TSynSelectedColor_GetModifiedStyle,
  TSynSelectedColor_SetFrameBoundsPhys,
  TSynSelectedColor_SetFrameBoundsLog,
  TSynSelectedColor_ModifyColors,
  TSynSelectedColor_StartX,
  TSynSelectedColor_EndX;