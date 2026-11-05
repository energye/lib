// constructor
function TCustomButtonPanel_Create(AOwner: TComponent): TCustomButtonPanel; extdecl;
begin
  {$define handleExceptionID := 33100}
  handleExceptionBegin
  Result := TCustomButtonPanel.Create(AOwner);
  handleExceptionEnd
end;

// property
function TCustomButtonPanel_OKButton(AObj: TCustomButtonPanel): TPanelBitBtn; extdecl;
begin
  {$define handleExceptionID := 33101}
  handleExceptionBegin
  Result := AObj.OKButton;
  handleExceptionEnd
end;

// property
function TCustomButtonPanel_HelpButton(AObj: TCustomButtonPanel): TPanelBitBtn; extdecl;
begin
  {$define handleExceptionID := 33102}
  handleExceptionBegin
  Result := AObj.HelpButton;
  handleExceptionEnd
end;

// property
function TCustomButtonPanel_CloseButton(AObj: TCustomButtonPanel): TPanelBitBtn; extdecl;
begin
  {$define handleExceptionID := 33103}
  handleExceptionBegin
  Result := AObj.CloseButton;
  handleExceptionEnd
end;

// property
function TCustomButtonPanel_CancelButton(AObj: TCustomButtonPanel): TPanelBitBtn; extdecl;
begin
  {$define handleExceptionID := 33104}
  handleExceptionBegin
  Result := AObj.CancelButton;
  handleExceptionEnd
end;

// property
function TCustomButtonPanel_ButtonOrder(ASet: LongBool; AObj: TCustomButtonPanel; AValue: TButtonOrder): TButtonOrder; extdecl;
begin
  {$define handleExceptionID := 33105}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ButtonOrder := AValue
  end else
    Result := AObj.ButtonOrder;
  handleExceptionEnd
end;

// property
function TCustomButtonPanel_DefaultButton(ASet: LongBool; AObj: TCustomButtonPanel; AValue: TPanelButtonEx): TPanelButtonEx; extdecl;
begin
  {$define handleExceptionID := 33106}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DefaultButton := AValue
  end else
    Result := AObj.DefaultButton;
  handleExceptionEnd
end;

// property
function TCustomButtonPanel_ShowButtons(ASet: LongBool; AObj: TCustomButtonPanel; AValue: TPanelButtons): TPanelButtons; extdecl;
begin
  {$define handleExceptionID := 33107}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ShowButtons := AValue
  end else
    Result := AObj.ShowButtons;
  handleExceptionEnd
end;

// property
function TCustomButtonPanel_ShowGlyphs(ASet: LongBool; AObj: TCustomButtonPanel; AValue: TPanelButtons): TPanelButtons; extdecl;
begin
  {$define handleExceptionID := 33108}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ShowGlyphs := AValue
  end else
    Result := AObj.ShowGlyphs;
  handleExceptionEnd
end;

// property
function TCustomButtonPanel_ShowBevel(ASet: LongBool; AObj: TCustomButtonPanel; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 33109}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ShowBevel := AValue
  end else
    Result := AObj.ShowBevel;
  handleExceptionEnd
end;

// property
function TCustomButtonPanel_Spacing(ASet: LongBool; AObj: TCustomButtonPanel; AValue: TSpacingSize): TSpacingSize; extdecl;
begin
  {$define handleExceptionID := 33110}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Spacing := AValue
  end else
    Result := AObj.Spacing;
  handleExceptionEnd
end;

function TCustomButtonPanel_TClass(): TClass; extdecl;
begin
  Result := TCustomButtonPanel;
end;

exports
  TCustomButtonPanel_Create,
  TCustomButtonPanel_OKButton,
  TCustomButtonPanel_HelpButton,
  TCustomButtonPanel_CloseButton,
  TCustomButtonPanel_CancelButton,
  TCustomButtonPanel_ButtonOrder,
  TCustomButtonPanel_DefaultButton,
  TCustomButtonPanel_ShowButtons,
  TCustomButtonPanel_ShowGlyphs,
  TCustomButtonPanel_ShowBevel,
  TCustomButtonPanel_Spacing,
  TCustomButtonPanel_TClass;