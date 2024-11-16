
//constructor
function CEFMenuButtonComponent_Create(aOwner: TComponent): TCEFMenuButtonComponent; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TCEFMenuButtonComponent.Create(aOwner);
  handleExceptionEnd
end;

//procedure
procedure CEFMenuButtonComponent_CreateMenuButton(AObj: TCEFMenuButtonComponent; const aText: PChar); extdecl;
begin
  {$define handleExceptionFuncName :='CreateMenuButton'}
  handleExceptionBegin
  AObj.CreateMenuButton(aText);
  handleExceptionEnd
end;

//procedure
procedure CEFMenuButtonComponent_ShowMenu(AObj: TCEFMenuButtonComponent; const menumodel: ICefMenuModel; var screenpoint: TCefPoint; anchorposition: TCefMenuAnchorPosition); extdecl;
begin
  {$define handleExceptionFuncName :='ShowMenu'}
  handleExceptionBegin
  AObj.ShowMenu(menumodel, screenpoint, anchorposition);
  handleExceptionEnd
end;

//procedure
procedure CEFMenuButtonComponent_TriggerMenu(AObj: TCEFMenuButtonComponent); extdecl;
begin
  {$define handleExceptionFuncName :='TriggerMenu'}
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