// constructor
function TCEFButtonComponent_Create(AOwner: TComponent; out IntfButtonDelegateEvents: ICefButtonDelegateEvents; out IntfViewDelegateEvents: ICefViewDelegateEvents): TCEFButtonComponent; extdecl;
begin
  {$define handleExceptionID := 8700}
  handleExceptionBegin
  Result := TCEFButtonComponent.Create(AOwner);
  IntfButtonDelegateEvents := Result as ICefButtonDelegateEvents;
  IntfViewDelegateEvents := Result as ICefViewDelegateEvents;
  handleExceptionEnd
end;

// procedure
procedure TCEFButtonComponent_SetInkDropEnabled(AObj: TCEFButtonComponent; enabled_: LongBool); extdecl;
begin
  {$define handleExceptionID := 8701}
  handleExceptionBegin
  AObj.SetInkDropEnabled(enabled_);
  handleExceptionEnd
end;

// procedure
procedure TCEFButtonComponent_SetTooltipText(AObj: TCEFButtonComponent; const tooltip_text: PChar); extdecl;
begin
  {$define handleExceptionID := 8702}
  handleExceptionBegin
  AObj.SetTooltipText(PCharToUStr(tooltip_text));
  handleExceptionEnd
end;

// procedure
procedure TCEFButtonComponent_SetAccessibleName(AObj: TCEFButtonComponent; const name_: PChar); extdecl;
begin
  {$define handleExceptionID := 8703}
  handleExceptionBegin
  AObj.SetAccessibleName(PCharToUStr(name_));
  handleExceptionEnd
end;

// property
procedure TCEFButtonComponent_AsLabelButton(AObj: TCEFButtonComponent; var Result: ICefLabelButton); extdecl;
begin
  {$define handleExceptionID := 8704}
  handleExceptionBegin
  Result := AObj.AsLabelButton;
  handleExceptionEnd
end;

// property
function TCEFButtonComponent_State(ASet: LongBool; AObj: TCEFButtonComponent; AValue: TCefButtonState): TCefButtonState; extdecl;
begin
  {$define handleExceptionID := 8705}
  handleExceptionBegin
  if ASet then
  begin
    AObj.State := AValue
  end else
    Result := AObj.State;
  handleExceptionEnd
end;

// event
procedure TCEFButtonComponent_OnButtonPressed(AObj: TCEFButtonComponent; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TCEFButtonComponent_TOnButtonPressedEvent}
  {$DEFINE EventName := OnButtonPressed}
  CEFEventMethodCode
end;

// event
procedure TCEFButtonComponent_OnButtonStateChanged(AObj: TCEFButtonComponent; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TCEFButtonComponent_TOnButtonStateChangedEvent}
  {$DEFINE EventName := OnButtonStateChanged}
  CEFEventMethodCode
end;

exports
  TCEFButtonComponent_Create,
  TCEFButtonComponent_SetInkDropEnabled,
  TCEFButtonComponent_SetTooltipText,
  TCEFButtonComponent_SetAccessibleName,
  TCEFButtonComponent_AsLabelButton,
  TCEFButtonComponent_State,
  TCEFButtonComponent_OnButtonPressed,
  TCEFButtonComponent_OnButtonStateChanged;