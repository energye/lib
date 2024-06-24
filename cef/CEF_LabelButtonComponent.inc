
//constructor
function CEFLabelButtonComponent_Create(aOwner: TComponent): TCEFLabelButtonComponent; extdecl;
begin
  handleExceptionBegin
  Result := TCEFLabelButtonComponent.Create(aOwner);
  handleExceptionEnd
end;

//property
function CEFLabelButtonComponent_Text(AIsSet: LongBool; AObj: TCEFLabelButtonComponent; AValue: PChar): PChar; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Text := AValue;
  end else
    Result := ToPChar(AObj.Text);
  handleExceptionEnd
end;

//property
procedure CEFLabelButtonComponent_Image(AIsSet: LongBool; AObj: TCEFLabelButtonComponent; buttonstate: TCefButtonState; AValue: ICefImage; var Result: ICefImage); extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Image[buttonstate] := AValue;
  end else
    Result := AObj.Image[buttonstate];
  handleExceptionEnd
end;

//property
procedure CEFLabelButtonComponent_AsMenuButton(AObj: TCEFLabelButtonComponent; var Result: ICefMenuButton); extdecl;
begin
  handleExceptionBegin
  Result := AObj.AsMenuButton;
  handleExceptionEnd
end;

//procedure
procedure CEFLabelButtonComponent_CreateLabelButton(AObj: TCEFLabelButtonComponent; const aText: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.CreateLabelButton(aText);
  handleExceptionEnd
end;

//procedure
procedure CEFLabelButtonComponent_SetTextColor(AObj: TCEFLabelButtonComponent; forstate: TCefButtonState; color: TCefColor); extdecl;
begin
  handleExceptionBegin
  AObj.SetTextColor(forstate, color);
  handleExceptionEnd
end;

//procedure
procedure CEFLabelButtonComponent_SetEnabledTextColors(AObj: TCEFLabelButtonComponent; color: TCefColor); extdecl;
begin
  handleExceptionBegin
  AObj.SetEnabledTextColors(color);
  handleExceptionEnd
end;

//procedure
procedure CEFLabelButtonComponent_SetFontList(AObj: TCEFLabelButtonComponent; const fontlist: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.SetFontList(fontlist);
  handleExceptionEnd
end;

//procedure
procedure CEFLabelButtonComponent_SetHorizontalAlignment(AObj: TCEFLabelButtonComponent; alignment: TCefHorizontalAlignment); extdecl;
begin
  handleExceptionBegin
  AObj.SetHorizontalAlignment(alignment);
  handleExceptionEnd
end;

//procedure
procedure CEFLabelButtonComponent_SetMinimumSizeForCefSize(AObj: TCEFLabelButtonComponent; var size: TCefSize); extdecl;
begin
  handleExceptionBegin
  AObj.SetMinimumSize(size);
  handleExceptionEnd
end;

//procedure
procedure CEFLabelButtonComponent_SetMaximumSizeForCefSize(AObj: TCEFLabelButtonComponent; var size: TCefSize); extdecl;
begin
  handleExceptionBegin
  AObj.SetMaximumSize(size);
  handleExceptionEnd
end;


exports
  CEFLabelButtonComponent_Create,
  CEFLabelButtonComponent_Text,
  CEFLabelButtonComponent_Image,
  CEFLabelButtonComponent_AsMenuButton,
  CEFLabelButtonComponent_CreateLabelButton,
  CEFLabelButtonComponent_SetTextColor,
  CEFLabelButtonComponent_SetEnabledTextColors,
  CEFLabelButtonComponent_SetFontList,
  CEFLabelButtonComponent_SetHorizontalAlignment,
  CEFLabelButtonComponent_SetMinimumSizeForCefSize,
  CEFLabelButtonComponent_SetMaximumSizeForCefSize;