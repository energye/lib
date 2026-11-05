// constructor
function TCefLabelButtonRef_Create(data: Pointer; out IntfLabelButton: ICefLabelButton; out IntfButton: ICefButton; out IntfView: ICefView): TCefLabelButtonRef; extdecl;
begin
  {$define handleExceptionID := 23200}
  handleExceptionBegin
  Result := TCefLabelButtonRef.Create(data);
  IntfLabelButton := Result as ICefLabelButton;
  IntfButton := Result as ICefButton;
  IntfView := Result as ICefView;
  handleExceptionEnd
end;

// function
procedure TCefLabelButtonRef_AsMenuButton(AObj: ICefLabelButton; var Result: ICefMenuButton); extdecl;
begin
  {$define handleExceptionID := 23201}
  handleExceptionBegin
  Result := AObj.AsMenuButton();
  handleExceptionEnd
end;

// function
procedure TCefLabelButtonRef_GetText(AObj: ICefLabelButton;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 23202}
  handleExceptionBegin
  StringBufferCreate(string(AObj.GetText()), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
procedure TCefLabelButtonRef_GetImage(AObj: ICefLabelButton; button_state: TCefButtonState; var Result: ICefImage); extdecl;
begin
  {$define handleExceptionID := 23203}
  handleExceptionBegin
  Result := AObj.GetImage(button_state);
  handleExceptionEnd
end;

// function static
procedure TCefLabelButtonRef_UnWrapWithPointer(data: Pointer; var Result: ICefLabelButton); extdecl;
begin
  Result := TCefLabelButtonRef.UnWrap(data);
end;

// function static
procedure TCefLabelButtonRef_CreateLabelButton(const delegate: ICefButtonDelegate; const text: PChar; var Result: ICefLabelButton); extdecl;
begin
  Result := TCefLabelButtonRef.CreateLabelButton(delegate, text);
end;

// procedure
procedure TCefLabelButtonRef_SetText(AObj: ICefLabelButton; const text_: PChar); extdecl;
begin
  {$define handleExceptionID := 23204}
  handleExceptionBegin
  AObj.SetText(PCharToUStr(text_));
  handleExceptionEnd
end;

// procedure
procedure TCefLabelButtonRef_SetImage(AObj: ICefLabelButton; button_state: TCefButtonState; const image: ICefImage); extdecl;
begin
  {$define handleExceptionID := 23205}
  handleExceptionBegin
  AObj.SetImage(button_state, image);
  handleExceptionEnd
end;

// procedure
procedure TCefLabelButtonRef_SetTextColor(AObj: ICefLabelButton; for_state: TCefButtonState; color: TCefColor); extdecl;
begin
  {$define handleExceptionID := 23206}
  handleExceptionBegin
  AObj.SetTextColor(for_state, color);
  handleExceptionEnd
end;

// procedure
procedure TCefLabelButtonRef_SetEnabledTextColors(AObj: ICefLabelButton; color: TCefColor); extdecl;
begin
  {$define handleExceptionID := 23207}
  handleExceptionBegin
  AObj.SetEnabledTextColors(color);
  handleExceptionEnd
end;

// procedure
procedure TCefLabelButtonRef_SetFontList(AObj: ICefLabelButton; const font_list: PChar); extdecl;
begin
  {$define handleExceptionID := 23208}
  handleExceptionBegin
  AObj.SetFontList(PCharToUStr(font_list));
  handleExceptionEnd
end;

// procedure
procedure TCefLabelButtonRef_SetHorizontalAlignment(AObj: ICefLabelButton; alignment: TCefHorizontalAlignment); extdecl;
begin
  {$define handleExceptionID := 23209}
  handleExceptionBegin
  AObj.SetHorizontalAlignment(alignment);
  handleExceptionEnd
end;

// procedure
procedure TCefLabelButtonRef_SetMinimumSize(AObj: ICefLabelButton; var size_: TCefSizePtr); extdecl;
var
  Insize_: TCefSize;
begin
  {$define handleExceptionID := 23210}
  handleExceptionBegin
  Insize_ := TCefSizeToPas(size_);
  AObj.SetMinimumSize(Insize_);
  handleExceptionEnd
end;

// procedure
procedure TCefLabelButtonRef_SetMaximumSize(AObj: ICefLabelButton; var size_: TCefSizePtr); extdecl;
var
  Insize_: TCefSize;
begin
  {$define handleExceptionID := 23211}
  handleExceptionBegin
  Insize_ := TCefSizeToPas(size_);
  AObj.SetMaximumSize(Insize_);
  handleExceptionEnd
end;

exports
  TCefLabelButtonRef_Create,
  TCefLabelButtonRef_AsMenuButton,
  TCefLabelButtonRef_GetText,
  TCefLabelButtonRef_GetImage,
  TCefLabelButtonRef_UnWrapWithPointer,
  TCefLabelButtonRef_CreateLabelButton,
  TCefLabelButtonRef_SetText,
  TCefLabelButtonRef_SetImage,
  TCefLabelButtonRef_SetTextColor,
  TCefLabelButtonRef_SetEnabledTextColors,
  TCefLabelButtonRef_SetFontList,
  TCefLabelButtonRef_SetHorizontalAlignment,
  TCefLabelButtonRef_SetMinimumSize,
  TCefLabelButtonRef_SetMaximumSize;