
//constructor
function CustomButton_Create(TheOwner: TComponent): TCustomButton; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TCustomButton.Create(TheOwner);
  handleExceptionEnd
end;

//property
function CustomButton_Active(AObj: TCustomButton): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='Active'}
  handleExceptionBegin
  Result := AObj.Active;
  handleExceptionEnd
end;

//property
function CustomButton_Default(AIsSet: LongBool; AObj: TCustomButton; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='Default'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Default := AValue;
  end else
    Result := AObj.Default;
  handleExceptionEnd
end;

//property
function CustomButton_ModalResult(AIsSet: LongBool; AObj: TCustomButton; AValue: TModalResult): TModalResult; extdecl;
begin
  {$define handleExceptionFuncName :='ModalResult'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ModalResult := AValue;
  end else
    Result := AObj.ModalResult;
  handleExceptionEnd
end;

//property
function CustomButton_ShortCut(AObj: TCustomButton): TShortcut; extdecl;
begin
  {$define handleExceptionFuncName :='ShortCut'}
  handleExceptionBegin
  Result := AObj.ShortCut;
  handleExceptionEnd
end;

//property
function CustomButton_ShortCutKey2(AObj: TCustomButton): TShortcut; extdecl;
begin
  {$define handleExceptionFuncName :='ShortCutKey2'}
  handleExceptionBegin
  Result := AObj.ShortCutKey2;
  handleExceptionEnd
end;

//property
function CustomButton_Cancel(AIsSet: LongBool; AObj: TCustomButton; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='Cancel'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Cancel := AValue;
  end else
    Result := AObj.Cancel;
  handleExceptionEnd
end;

//function
function CustomButton_Class(): TClass; extdecl;
begin
  Result := TCustomButton;
end;

//procedure
procedure CustomButton_Click(AObj: TCustomButton); extdecl;
begin
  {$define handleExceptionFuncName :='Click'}
  handleExceptionBegin
  AObj.Click();
  handleExceptionEnd
end;


exports
  CustomButton_Create,
  CustomButton_Active,
  CustomButton_Default,
  CustomButton_ModalResult,
  CustomButton_ShortCut,
  CustomButton_ShortCutKey2,
  CustomButton_Cancel,
  CustomButton_Class,
  CustomButton_Click;