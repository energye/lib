// constructor
function TCefButtonRef_Create(data: Pointer; out IntfButton: ICefButton; out IntfView: ICefView): TCefButtonRef; extdecl;
begin
  {$define handleExceptionID := 23300}
  handleExceptionBegin
  Result := TCefButtonRef.Create(data);
  IntfButton := Result as ICefButton;
  IntfView := Result as ICefView;
  handleExceptionEnd
end;

// function
procedure TCefButtonRef_AsLabelButton(AObj: ICefButton; var Result: ICefLabelButton); extdecl;
begin
  {$define handleExceptionID := 23301}
  handleExceptionBegin
  Result := AObj.AsLabelButton();
  handleExceptionEnd
end;

// function
function TCefButtonRef_GetState(AObj: ICefButton): TCefButtonState; extdecl;
begin
  {$define handleExceptionID := 23302}
  handleExceptionBegin
  Result := AObj.GetState();
  handleExceptionEnd
end;

// function static
procedure TCefButtonRef_UnWrapWithPointer(data: Pointer; var Result: ICefButton); extdecl;
begin
  Result := TCefButtonRef.UnWrap(data);
end;

// procedure
procedure TCefButtonRef_SetState(AObj: ICefButton; state_: TCefButtonState); extdecl;
begin
  {$define handleExceptionID := 23303}
  handleExceptionBegin
  AObj.SetState(state_);
  handleExceptionEnd
end;

// procedure
procedure TCefButtonRef_SetInkDropEnabled(AObj: ICefButton; enabled_: LongBool); extdecl;
begin
  {$define handleExceptionID := 23304}
  handleExceptionBegin
  AObj.SetInkDropEnabled(enabled_);
  handleExceptionEnd
end;

// procedure
procedure TCefButtonRef_SetTooltipText(AObj: ICefButton; const tooltip_text: PChar); extdecl;
begin
  {$define handleExceptionID := 23305}
  handleExceptionBegin
  AObj.SetTooltipText(PCharToUStr(tooltip_text));
  handleExceptionEnd
end;

// procedure
procedure TCefButtonRef_SetAccessibleName(AObj: ICefButton; const name: PChar); extdecl;
begin
  {$define handleExceptionID := 23306}
  handleExceptionBegin
  AObj.SetAccessibleName(PCharToUStr(name));
  handleExceptionEnd
end;

exports
  TCefButtonRef_Create,
  TCefButtonRef_AsLabelButton,
  TCefButtonRef_GetState,
  TCefButtonRef_UnWrapWithPointer,
  TCefButtonRef_SetState,
  TCefButtonRef_SetInkDropEnabled,
  TCefButtonRef_SetTooltipText,
  TCefButtonRef_SetAccessibleName;