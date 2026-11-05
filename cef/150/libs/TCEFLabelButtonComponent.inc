// constructor
function TCEFLabelButtonComponent_Create(AOwner: TComponent; out IntfButtonDelegateEvents: ICefButtonDelegateEvents; out IntfViewDelegateEvents: ICefViewDelegateEvents): TCEFLabelButtonComponent; extdecl;
begin
  {$define handleExceptionID := 8900}
  handleExceptionBegin
  Result := TCEFLabelButtonComponent.Create(AOwner);
  IntfButtonDelegateEvents := Result as ICefButtonDelegateEvents;
  IntfViewDelegateEvents := Result as ICefViewDelegateEvents;
  handleExceptionEnd
end;

// procedure
procedure TCEFLabelButtonComponent_CreateLabelButton(AObj: TCEFLabelButtonComponent; const aText: PChar); extdecl;
begin
  {$define handleExceptionID := 8901}
  handleExceptionBegin
  AObj.CreateLabelButton(PCharToUStr(aText));
  handleExceptionEnd
end;

// procedure
procedure TCEFLabelButtonComponent_SetTextColor(AObj: TCEFLabelButtonComponent; for_state: TCefButtonState; color: TCefColor); extdecl;
begin
  {$define handleExceptionID := 8902}
  handleExceptionBegin
  AObj.SetTextColor(for_state, color);
  handleExceptionEnd
end;

// procedure
procedure TCEFLabelButtonComponent_SetEnabledTextColors(AObj: TCEFLabelButtonComponent; color: TCefColor); extdecl;
begin
  {$define handleExceptionID := 8903}
  handleExceptionBegin
  AObj.SetEnabledTextColors(color);
  handleExceptionEnd
end;

// procedure
procedure TCEFLabelButtonComponent_SetFontList(AObj: TCEFLabelButtonComponent; const font_list: PChar); extdecl;
begin
  {$define handleExceptionID := 8904}
  handleExceptionBegin
  AObj.SetFontList(PCharToUStr(font_list));
  handleExceptionEnd
end;

// procedure
procedure TCEFLabelButtonComponent_SetHorizontalAlignment(AObj: TCEFLabelButtonComponent; alignment: TCefHorizontalAlignment); extdecl;
begin
  {$define handleExceptionID := 8905}
  handleExceptionBegin
  AObj.SetHorizontalAlignment(alignment);
  handleExceptionEnd
end;

// procedure
procedure TCEFLabelButtonComponent_SetMinimumSize(AObj: TCEFLabelButtonComponent; var size_: TCefSizePtr); extdecl;
var
  Insize_: TCefSize;
begin
  {$define handleExceptionID := 8906}
  handleExceptionBegin
  Insize_ := TCefSizeToPas(size_);
  AObj.SetMinimumSize(Insize_);
  handleExceptionEnd
end;

// procedure
procedure TCEFLabelButtonComponent_SetMaximumSize(AObj: TCEFLabelButtonComponent; var size_: TCefSizePtr); extdecl;
var
  Insize_: TCefSize;
begin
  {$define handleExceptionID := 8907}
  handleExceptionBegin
  Insize_ := TCefSizeToPas(size_);
  AObj.SetMaximumSize(Insize_);
  handleExceptionEnd
end;

// property
procedure TCEFLabelButtonComponent_Text(ASet: LongBool; AObj: TCEFLabelButtonComponent; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 8908}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Text := AValue
  end else
    StringBufferCreate(AObj.Text, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TCEFLabelButtonComponent_Image(ASet: LongBool; AObj: TCEFLabelButtonComponent; button_state: TCefButtonState; AValue: ICefImage; var Result: ICefImage); extdecl;
begin
  {$define handleExceptionID := 8909}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Image[button_state] := AValue
  end else
    Result := AObj.Image[button_state];
  handleExceptionEnd
end;

// property
procedure TCEFLabelButtonComponent_AsMenuButton(AObj: TCEFLabelButtonComponent; var Result: ICefMenuButton); extdecl;
begin
  {$define handleExceptionID := 8910}
  handleExceptionBegin
  Result := AObj.AsMenuButton;
  handleExceptionEnd
end;

exports
  TCEFLabelButtonComponent_Create,
  TCEFLabelButtonComponent_CreateLabelButton,
  TCEFLabelButtonComponent_SetTextColor,
  TCEFLabelButtonComponent_SetEnabledTextColors,
  TCEFLabelButtonComponent_SetFontList,
  TCEFLabelButtonComponent_SetHorizontalAlignment,
  TCEFLabelButtonComponent_SetMinimumSize,
  TCEFLabelButtonComponent_SetMaximumSize,
  TCEFLabelButtonComponent_Text,
  TCEFLabelButtonComponent_Image,
  TCEFLabelButtonComponent_AsMenuButton;