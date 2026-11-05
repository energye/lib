// constructor
function TChromiumFontOptions_Create(): TChromiumFontOptions; extdecl;
begin
  {$define handleExceptionID := 600}
  handleExceptionBegin
  Result := TChromiumFontOptions.Create();
  handleExceptionEnd
end;

// property
procedure TChromiumFontOptions_StandardFontFamily(ASet: LongBool; AObj: TChromiumFontOptions; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 601}
  handleExceptionBegin
  if ASet then
  begin
    AObj.StandardFontFamily := AValue
  end else
    StringBufferCreate(AObj.StandardFontFamily, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TChromiumFontOptions_FixedFontFamily(ASet: LongBool; AObj: TChromiumFontOptions; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 602}
  handleExceptionBegin
  if ASet then
  begin
    AObj.FixedFontFamily := AValue
  end else
    StringBufferCreate(AObj.FixedFontFamily, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TChromiumFontOptions_SerifFontFamily(ASet: LongBool; AObj: TChromiumFontOptions; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 603}
  handleExceptionBegin
  if ASet then
  begin
    AObj.SerifFontFamily := AValue
  end else
    StringBufferCreate(AObj.SerifFontFamily, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TChromiumFontOptions_SansSerifFontFamily(ASet: LongBool; AObj: TChromiumFontOptions; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 604}
  handleExceptionBegin
  if ASet then
  begin
    AObj.SansSerifFontFamily := AValue
  end else
    StringBufferCreate(AObj.SansSerifFontFamily, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TChromiumFontOptions_CursiveFontFamily(ASet: LongBool; AObj: TChromiumFontOptions; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 605}
  handleExceptionBegin
  if ASet then
  begin
    AObj.CursiveFontFamily := AValue
  end else
    StringBufferCreate(AObj.CursiveFontFamily, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TChromiumFontOptions_FantasyFontFamily(ASet: LongBool; AObj: TChromiumFontOptions; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 606}
  handleExceptionBegin
  if ASet then
  begin
    AObj.FantasyFontFamily := AValue
  end else
    StringBufferCreate(AObj.FantasyFontFamily, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TChromiumFontOptions_DefaultFontSize(ASet: LongBool; AObj: TChromiumFontOptions; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 607}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DefaultFontSize := AValue
  end else
    Result := AObj.DefaultFontSize;
  handleExceptionEnd
end;

// property
function TChromiumFontOptions_DefaultFixedFontSize(ASet: LongBool; AObj: TChromiumFontOptions; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 608}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DefaultFixedFontSize := AValue
  end else
    Result := AObj.DefaultFixedFontSize;
  handleExceptionEnd
end;

// property
function TChromiumFontOptions_MinimumFontSize(ASet: LongBool; AObj: TChromiumFontOptions; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 609}
  handleExceptionBegin
  if ASet then
  begin
    AObj.MinimumFontSize := AValue
  end else
    Result := AObj.MinimumFontSize;
  handleExceptionEnd
end;

// property
function TChromiumFontOptions_MinimumLogicalFontSize(ASet: LongBool; AObj: TChromiumFontOptions; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 610}
  handleExceptionBegin
  if ASet then
  begin
    AObj.MinimumLogicalFontSize := AValue
  end else
    Result := AObj.MinimumLogicalFontSize;
  handleExceptionEnd
end;

// property
function TChromiumFontOptions_RemoteFonts(ASet: LongBool; AObj: TChromiumFontOptions; AValue: TCefState): TCefState; extdecl;
begin
  {$define handleExceptionID := 611}
  handleExceptionBegin
  if ASet then
  begin
    AObj.RemoteFonts := AValue
  end else
    Result := AObj.RemoteFonts;
  handleExceptionEnd
end;

exports
  TChromiumFontOptions_Create,
  TChromiumFontOptions_StandardFontFamily,
  TChromiumFontOptions_FixedFontFamily,
  TChromiumFontOptions_SerifFontFamily,
  TChromiumFontOptions_SansSerifFontFamily,
  TChromiumFontOptions_CursiveFontFamily,
  TChromiumFontOptions_FantasyFontFamily,
  TChromiumFontOptions_DefaultFontSize,
  TChromiumFontOptions_DefaultFixedFontSize,
  TChromiumFontOptions_MinimumFontSize,
  TChromiumFontOptions_MinimumLogicalFontSize,
  TChromiumFontOptions_RemoteFonts;