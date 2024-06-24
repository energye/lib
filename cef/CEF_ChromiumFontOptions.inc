
//constructor
function ChromiumFontOptions_Create(): TChromiumFontOptions; extdecl;
begin
  handleExceptionBegin
  Result := TChromiumFontOptions.Create();
  handleExceptionEnd
end;

//property
function ChromiumFontOptions_StandardFontFamily(AIsSet: LongBool; AObj: TChromiumFontOptions; AValue: PChar): PChar; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.StandardFontFamily := AValue;
  end else
    Result := ToPChar(AObj.StandardFontFamily);
  handleExceptionEnd
end;

//property
function ChromiumFontOptions_FixedFontFamily(AIsSet: LongBool; AObj: TChromiumFontOptions; AValue: PChar): PChar; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.FixedFontFamily := AValue;
  end else
    Result := ToPChar(AObj.FixedFontFamily);
  handleExceptionEnd
end;

//property
function ChromiumFontOptions_SerifFontFamily(AIsSet: LongBool; AObj: TChromiumFontOptions; AValue: PChar): PChar; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.SerifFontFamily := AValue;
  end else
    Result := ToPChar(AObj.SerifFontFamily);
  handleExceptionEnd
end;

//property
function ChromiumFontOptions_SansSerifFontFamily(AIsSet: LongBool; AObj: TChromiumFontOptions; AValue: PChar): PChar; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.SansSerifFontFamily := AValue;
  end else
    Result := ToPChar(AObj.SansSerifFontFamily);
  handleExceptionEnd
end;

//property
function ChromiumFontOptions_CursiveFontFamily(AIsSet: LongBool; AObj: TChromiumFontOptions; AValue: PChar): PChar; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.CursiveFontFamily := AValue;
  end else
    Result := ToPChar(AObj.CursiveFontFamily);
  handleExceptionEnd
end;

//property
function ChromiumFontOptions_FantasyFontFamily(AIsSet: LongBool; AObj: TChromiumFontOptions; AValue: PChar): PChar; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.FantasyFontFamily := AValue;
  end else
    Result := ToPChar(AObj.FantasyFontFamily);
  handleExceptionEnd
end;

//property
function ChromiumFontOptions_DefaultFontSize(AIsSet: LongBool; AObj: TChromiumFontOptions; AValue: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DefaultFontSize := AValue;
  end else
    Result := AObj.DefaultFontSize;
  handleExceptionEnd
end;

//property
function ChromiumFontOptions_DefaultFixedFontSize(AIsSet: LongBool; AObj: TChromiumFontOptions; AValue: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DefaultFixedFontSize := AValue;
  end else
    Result := AObj.DefaultFixedFontSize;
  handleExceptionEnd
end;

//property
function ChromiumFontOptions_MinimumFontSize(AIsSet: LongBool; AObj: TChromiumFontOptions; AValue: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.MinimumFontSize := AValue;
  end else
    Result := AObj.MinimumFontSize;
  handleExceptionEnd
end;

//property
function ChromiumFontOptions_MinimumLogicalFontSize(AIsSet: LongBool; AObj: TChromiumFontOptions; AValue: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.MinimumLogicalFontSize := AValue;
  end else
    Result := AObj.MinimumLogicalFontSize;
  handleExceptionEnd
end;

//property
function ChromiumFontOptions_RemoteFonts(AIsSet: LongBool; AObj: TChromiumFontOptions; AValue: TCefState): TCefState; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.RemoteFonts := AValue;
  end else
    Result := AObj.RemoteFonts;
  handleExceptionEnd
end;


exports
  ChromiumFontOptions_Create,
  ChromiumFontOptions_StandardFontFamily,
  ChromiumFontOptions_FixedFontFamily,
  ChromiumFontOptions_SerifFontFamily,
  ChromiumFontOptions_SansSerifFontFamily,
  ChromiumFontOptions_CursiveFontFamily,
  ChromiumFontOptions_FantasyFontFamily,
  ChromiumFontOptions_DefaultFontSize,
  ChromiumFontOptions_DefaultFixedFontSize,
  ChromiumFontOptions_MinimumFontSize,
  ChromiumFontOptions_MinimumLogicalFontSize,
  ChromiumFontOptions_RemoteFonts;