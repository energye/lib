
//constructor
function CustomStaticText_Create(AOwner: TComponent): TCustomStaticText; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TCustomStaticText.Create(AOwner);
  handleExceptionEnd
end;

//property
function CustomStaticText_Alignment(AIsSet: LongBool; AObj: TCustomStaticText; AValue: TAlignment): TAlignment; extdecl;
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
function CustomStaticText_BorderStyle(AIsSet: LongBool; AObj: TCustomStaticText; AValue: TStaticBorderStyle): TStaticBorderStyle; extdecl;
begin
  {$define handleExceptionFuncName :='BorderStyle'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.BorderStyle := AValue;
  end else
    Result := AObj.BorderStyle;
  handleExceptionEnd
end;

//property
function CustomStaticText_FocusControl(AIsSet: LongBool; AObj: TCustomStaticText; AValue: TWinControl): TWinControl; extdecl;
begin
  {$define handleExceptionFuncName :='FocusControl'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.FocusControl := AValue;
  end else
    Result := AObj.FocusControl;
  handleExceptionEnd
end;

//property
function CustomStaticText_ShowAccelChar(AIsSet: LongBool; AObj: TCustomStaticText; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='ShowAccelChar'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ShowAccelChar := AValue;
  end else
    Result := AObj.ShowAccelChar;
  handleExceptionEnd
end;

//property
function CustomStaticText_Transparent(AIsSet: LongBool; AObj: TCustomStaticText; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='Transparent'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Transparent := AValue;
  end else
    Result := AObj.Transparent;
  handleExceptionEnd
end;

//function
function CustomStaticText_Class(): TClass; extdecl;
begin
  Result := TCustomStaticText;
end;


exports
  CustomStaticText_Create,
  CustomStaticText_Alignment,
  CustomStaticText_BorderStyle,
  CustomStaticText_FocusControl,
  CustomStaticText_ShowAccelChar,
  CustomStaticText_Transparent,
  CustomStaticText_Class;