
//constructor
function CEFMenuButtonComponent_Create(aOwner: TComponent): TCEFMenuButtonComponent; extdecl;
begin
  handleExceptionBegin
  Result := TCEFMenuButtonComponent.Create(aOwner);
  handleExceptionEnd
end;

//procedure
procedure CEFMenuButtonComponent_CreateMenuButton(AObj: TCEFMenuButtonComponent; const aText: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.CreateMenuButton(aText);
  handleExceptionEnd
end;

//procedure
procedure CEFMenuButtonComponent_ShowMenu(AObj: TCEFMenuButtonComponent; const menumodel: ICefMenuModel; var screenpoint: TCefPoint; anchorposition: TCefMenuAnchorPosition); extdecl;
begin
  handleExceptionBegin
  AObj.ShowMenu(menumodel, screenpoint, anchorposition);
  handleExceptionEnd
end;

//procedure
procedure CEFMenuButtonComponent_TriggerMenu(AObj: TCEFMenuButtonComponent); extdecl;
begin
  handleExceptionBegin
  AObj.TriggerMenu();
  handleExceptionEnd
end;

//property event
procedure CEFMenuButtonComponent_SetOnMenuButtonPressed(AObj: TCEFMenuButtonComponent; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := MenuButtonComponent_OnMenuButtonPressed}
  {$DEFINE EventName := OnMenuButtonPressed}
  CEFEventMethodCode
end;


exports
  CEFMenuButtonComponent_Create,
  CEFMenuButtonComponent_CreateMenuButton,
  CEFMenuButtonComponent_ShowMenu,
  CEFMenuButtonComponent_TriggerMenu,
  CEFMenuButtonComponent_SetOnMenuButtonPressed;