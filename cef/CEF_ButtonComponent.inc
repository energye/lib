
//constructor
function CEFButtonComponent_Create(aOwner: TComponent): TCEFButtonComponent; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TCEFButtonComponent.Create(aOwner);
  handleExceptionEnd
end;

//property
procedure CEFButtonComponent_AsLabelButton(AObj: TCEFButtonComponent; var Result: ICefLabelButton); extdecl;
begin
  {$define handleExceptionFuncName :='AsLabelButton'}
  handleExceptionBegin
  Result := AObj.AsLabelButton;
  handleExceptionEnd
end;

//property
function CEFButtonComponent_State(AIsSet: LongBool; AObj: TCEFButtonComponent; AValue: TCefButtonState): TCefButtonState; extdecl;
begin
  {$define handleExceptionFuncName :='State'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.State := AValue;
  end else
    Result := AObj.State;
  handleExceptionEnd
end;

//procedure
procedure CEFButtonComponent_SetInkDropEnabled(AObj: TCEFButtonComponent; enabled: LongBool); extdecl;
begin
  {$define handleExceptionFuncName :='SetInkDropEnabled'}
  handleExceptionBegin
  AObj.SetInkDropEnabled(enabled);
  handleExceptionEnd
end;

//procedure
procedure CEFButtonComponent_SetTooltipText(AObj: TCEFButtonComponent; const tooltiptext: PChar); extdecl;
begin
  {$define handleExceptionFuncName :='SetTooltipText'}
  handleExceptionBegin
  AObj.SetTooltipText(tooltiptext);
  handleExceptionEnd
end;

//procedure
procedure CEFButtonComponent_SetAccessibleName(AObj: TCEFButtonComponent; const name: PChar); extdecl;
begin
  {$define handleExceptionFuncName :='SetAccessibleName'}
  handleExceptionBegin
  AObj.SetAccessibleName(name);
  handleExceptionEnd
end;

//property event
procedure CEFButtonComponent_SetOnButtonPressed(AObj: TCEFButtonComponent; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := ButtonComponent_OnButtonPressed}
  {$DEFINE EventName := OnButtonPressed}
  CEFEventMethodCode
end;

//property event
procedure CEFButtonComponent_SetOnButtonStateChanged(AObj: TCEFButtonComponent; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := ButtonComponent_OnButtonStateChanged}
  {$DEFINE EventName := OnButtonStateChanged}
  CEFEventMethodCode
end;


exports
  CEFButtonComponent_Create,
  CEFButtonComponent_AsLabelButton,
  CEFButtonComponent_State,
  CEFButtonComponent_SetInkDropEnabled,
  CEFButtonComponent_SetTooltipText,
  CEFButtonComponent_SetAccessibleName,
  CEFButtonComponent_SetOnButtonPressed,
  CEFButtonComponent_SetOnButtonStateChanged;