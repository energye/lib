
//constructor
function StatusPanel_Create(ACollection: TCollection): TStatusPanel; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TStatusPanel.Create(ACollection);
  handleExceptionEnd
end;

//property
function StatusPanel_Alignment(AIsSet: LongBool; AObj: TStatusPanel; AValue: TAlignment): TAlignment; extdecl;
begin
  {$define handleExceptionFuncName :='Alignment'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Alignment := AValue;
  end else
    Result := AObj.Alignment;
  handleExceptionEnd
end;

//property
function StatusPanel_Bevel(AIsSet: LongBool; AObj: TStatusPanel; AValue: TStatusPanelBevel): TStatusPanelBevel; extdecl;
begin
  {$define handleExceptionFuncName :='Bevel'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Bevel := AValue;
  end else
    Result := AObj.Bevel;
  handleExceptionEnd
end;

//property
function StatusPanel_BidiMode(AIsSet: LongBool; AObj: TStatusPanel; AValue: TBiDiMode): TBiDiMode; extdecl;
begin
  {$define handleExceptionFuncName :='BidiMode'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.BidiMode := AValue;
  end else
    Result := AObj.BidiMode;
  handleExceptionEnd
end;

//property
function StatusPanel_ParentBiDiMode(AIsSet: LongBool; AObj: TStatusPanel; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='ParentBiDiMode'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ParentBiDiMode := AValue;
  end else
    Result := AObj.ParentBiDiMode;
  handleExceptionEnd
end;

//property
function StatusPanel_Style(AIsSet: LongBool; AObj: TStatusPanel; AValue: TStatusPanelStyle): TStatusPanelStyle; extdecl;
begin
  {$define handleExceptionFuncName :='Style'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Style := AValue;
  end else
    Result := AObj.Style;
  handleExceptionEnd
end;

//property
function StatusPanel_Text(AIsSet: LongBool; AObj: TStatusPanel; AValue: PChar): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='Text'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Text := AValue;
  end else
    Result := ToPChar(AObj.Text);
  handleExceptionEnd
end;

//property
function StatusPanel_Width(AIsSet: LongBool; AObj: TStatusPanel; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='Width'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Width := AValue;
  end else
    Result := AObj.Width;
  handleExceptionEnd
end;

//function
function StatusPanel_StatusBar(AObj: TStatusPanel): TStatusBar; extdecl;
begin
  {$define handleExceptionFuncName :='StatusBar'}
  handleExceptionBegin
  Result := AObj.StatusBar();
  handleExceptionEnd
end;

//function
function StatusPanel_Class(): TClass; extdecl;
begin
  Result := TStatusPanel;
end;


exports
  StatusPanel_Create,
  StatusPanel_Alignment,
  StatusPanel_Bevel,
  StatusPanel_BidiMode,
  StatusPanel_ParentBiDiMode,
  StatusPanel_Style,
  StatusPanel_Text,
  StatusPanel_Width,
  StatusPanel_StatusBar,
  StatusPanel_Class;