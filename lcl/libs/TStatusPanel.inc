// constructor
function TStatusPanel_Create(ACollection: TCollection): TStatusPanel; extdecl;
begin
  {$define handleExceptionID := 13700}
  handleExceptionBegin
  Result := TStatusPanel.Create(ACollection);
  handleExceptionEnd
end;

// function
function TStatusPanel_StatusBar(AObj: TStatusPanel): TStatusBar; extdecl;
begin
  {$define handleExceptionID := 13701}
  handleExceptionBegin
  Result := AObj.StatusBar();
  handleExceptionEnd
end;

// property
function TStatusPanel_Alignment(ASet: LongBool; AObj: TStatusPanel; AValue: TAlignment): TAlignment; extdecl;
begin
  {$define handleExceptionID := 13702}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Alignment := AValue
  end else
    Result := AObj.Alignment;
  handleExceptionEnd
end;

// property
function TStatusPanel_Bevel(ASet: LongBool; AObj: TStatusPanel; AValue: TStatusPanelBevel): TStatusPanelBevel; extdecl;
begin
  {$define handleExceptionID := 13703}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Bevel := AValue
  end else
    Result := AObj.Bevel;
  handleExceptionEnd
end;

// property
function TStatusPanel_BidiMode(ASet: LongBool; AObj: TStatusPanel; AValue: TBiDiMode): TBiDiMode; extdecl;
begin
  {$define handleExceptionID := 13704}
  handleExceptionBegin
  if ASet then
  begin
    AObj.BidiMode := AValue
  end else
    Result := AObj.BidiMode;
  handleExceptionEnd
end;

// property
function TStatusPanel_ParentBiDiMode(ASet: LongBool; AObj: TStatusPanel; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 13705}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentBiDiMode := AValue
  end else
    Result := AObj.ParentBiDiMode;
  handleExceptionEnd
end;

// property
function TStatusPanel_Style(ASet: LongBool; AObj: TStatusPanel; AValue: TStatusPanelStyle): TStatusPanelStyle; extdecl;
begin
  {$define handleExceptionID := 13706}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Style := AValue
  end else
    Result := AObj.Style;
  handleExceptionEnd
end;

// property
procedure TStatusPanel_Text(ASet: LongBool; AObj: TStatusPanel; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 13707}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Text := AValue
  end else
    StringBufferCreate(AObj.Text, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TStatusPanel_Width(ASet: LongBool; AObj: TStatusPanel; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 13708}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Width := AValue
  end else
    Result := AObj.Width;
  handleExceptionEnd
end;

exports
  TStatusPanel_Create,
  TStatusPanel_StatusBar,
  TStatusPanel_Alignment,
  TStatusPanel_Bevel,
  TStatusPanel_BidiMode,
  TStatusPanel_ParentBiDiMode,
  TStatusPanel_Style,
  TStatusPanel_Text,
  TStatusPanel_Width;