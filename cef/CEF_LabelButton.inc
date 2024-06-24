
//function
procedure CefLabelButton_UnWrap(data: Pointer; var Result: ICefLabelButton); extdecl;
begin
  Result := TCefLabelButtonRef.UnWrap(data);
end;

//function
procedure CefLabelButton_CreateLabelButton(const delegate: ICefButtonDelegate; const text: PChar; var Result: ICefLabelButton); extdecl;
begin
  Result := TCefLabelButtonRef.CreateLabelButton(delegate, text);
end;

//function
procedure CefLabelButton_AsMenuButton(AObj: ICefLabelButton; var Result: ICefMenuButton); extdecl;
begin
  handleExceptionBegin
  Result := AObj.AsMenuButton();
  handleExceptionEnd
end;

//function
function CefLabelButton_GetText(AObj: ICefLabelButton): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.GetText());
  handleExceptionEnd
end;

//function
procedure CefLabelButton_GetImage(AObj: ICefLabelButton; buttonstate: TCefButtonState; var Result: ICefImage); extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetImage(buttonstate);
  handleExceptionEnd
end;

//procedure
procedure CefLabelButton_SetText(AObj: ICefLabelButton; const text: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.SetText(text);
  handleExceptionEnd
end;

//procedure
procedure CefLabelButton_SetImage(AObj: ICefLabelButton; buttonstate: TCefButtonState; const image: ICefImage); extdecl;
begin
  handleExceptionBegin
  AObj.SetImage(buttonstate, image);
  handleExceptionEnd
end;

//procedure
procedure CefLabelButton_SetTextColor(AObj: ICefLabelButton; forstate: TCefButtonState; color: TCefColor); extdecl;
begin
  handleExceptionBegin
  AObj.SetTextColor(forstate, color);
  handleExceptionEnd
end;

//procedure
procedure CefLabelButton_SetEnabledTextColors(AObj: ICefLabelButton; color: TCefColor); extdecl;
begin
  handleExceptionBegin
  AObj.SetEnabledTextColors(color);
  handleExceptionEnd
end;

//procedure
procedure CefLabelButton_SetFontList(AObj: ICefLabelButton; const fontlist: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.SetFontList(fontlist);
  handleExceptionEnd
end;

//procedure
procedure CefLabelButton_SetHorizontalAlignment(AObj: ICefLabelButton; alignment: TCefHorizontalAlignment); extdecl;
begin
  handleExceptionBegin
  AObj.SetHorizontalAlignment(alignment);
  handleExceptionEnd
end;

//procedure
procedure CefLabelButton_SetMinimumSize(AObj: ICefLabelButton; var size: TCefSize); extdecl;
begin
  handleExceptionBegin
  AObj.SetMinimumSize(size);
  handleExceptionEnd
end;

//procedure
procedure CefLabelButton_SetMaximumSize(AObj: ICefLabelButton; var size: TCefSize); extdecl;
begin
  handleExceptionBegin
  AObj.SetMaximumSize(size);
  handleExceptionEnd
end;


exports
  CefLabelButton_UnWrap,
  CefLabelButton_CreateLabelButton,
  CefLabelButton_AsMenuButton,
  CefLabelButton_GetText,
  CefLabelButton_GetImage,
  CefLabelButton_SetText,
  CefLabelButton_SetImage,
  CefLabelButton_SetTextColor,
  CefLabelButton_SetEnabledTextColors,
  CefLabelButton_SetFontList,
  CefLabelButton_SetHorizontalAlignment,
  CefLabelButton_SetMinimumSize,
  CefLabelButton_SetMaximumSize;