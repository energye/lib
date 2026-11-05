// constructor
function TCustomButton_Create(TheOwner: TComponent): TCustomButton; extdecl;
begin
  {$define handleExceptionID := 1600}
  handleExceptionBegin
  Result := TCustomButton.Create(TheOwner);
  handleExceptionEnd
end;

// procedure
procedure TCustomButton_Click(AObj: TCustomButton); extdecl;
begin
  {$define handleExceptionID := 1601}
  handleExceptionBegin
  AObj.Click();
  handleExceptionEnd
end;

// property
function TCustomButton_Active(AObj: TCustomButton): LongBool; extdecl;
begin
  {$define handleExceptionID := 1602}
  handleExceptionBegin
  Result := AObj.Active;
  handleExceptionEnd
end;

// property
function TCustomButton_Default(ASet: LongBool; AObj: TCustomButton; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 1603}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Default := AValue
  end else
    Result := AObj.Default;
  handleExceptionEnd
end;

// property
function TCustomButton_ModalResult(ASet: LongBool; AObj: TCustomButton; AValue: TModalResult): TModalResult; extdecl;
begin
  {$define handleExceptionID := 1604}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ModalResult := AValue
  end else
    Result := AObj.ModalResult;
  handleExceptionEnd
end;

// property
function TCustomButton_ShortCut(AObj: TCustomButton): TShortcut; extdecl;
begin
  {$define handleExceptionID := 1605}
  handleExceptionBegin
  Result := AObj.ShortCut;
  handleExceptionEnd
end;

// property
function TCustomButton_ShortCutKey2(AObj: TCustomButton): TShortcut; extdecl;
begin
  {$define handleExceptionID := 1606}
  handleExceptionBegin
  Result := AObj.ShortCutKey2;
  handleExceptionEnd
end;

// property
function TCustomButton_Cancel(ASet: LongBool; AObj: TCustomButton; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 1607}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Cancel := AValue
  end else
    Result := AObj.Cancel;
  handleExceptionEnd
end;

function TCustomButton_TClass(): TClass; extdecl;
begin
  Result := TCustomButton;
end;

exports
  TCustomButton_Create,
  TCustomButton_Click,
  TCustomButton_Active,
  TCustomButton_Default,
  TCustomButton_ModalResult,
  TCustomButton_ShortCut,
  TCustomButton_ShortCutKey2,
  TCustomButton_Cancel,
  TCustomButton_TClass;