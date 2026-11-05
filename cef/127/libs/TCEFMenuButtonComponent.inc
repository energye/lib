// constructor
function TCEFMenuButtonComponent_Create(AOwner: TComponent; out IntfMenuButtonDelegateEvents: ICefMenuButtonDelegateEvents; out IntfButtonDelegateEvents: ICefButtonDelegateEvents; out IntfViewDelegateEvents: ICefViewDelegateEvents): TCEFMenuButtonComponent; extdecl;
begin
  {$define handleExceptionID := 8900}
  handleExceptionBegin
  Result := TCEFMenuButtonComponent.Create(AOwner);
  IntfMenuButtonDelegateEvents := Result as ICefMenuButtonDelegateEvents;
  IntfButtonDelegateEvents := Result as ICefButtonDelegateEvents;
  IntfViewDelegateEvents := Result as ICefViewDelegateEvents;
  handleExceptionEnd
end;

// procedure
procedure TCEFMenuButtonComponent_CreateMenuButton(AObj: TCEFMenuButtonComponent; const aText: PChar); extdecl;
begin
  {$define handleExceptionID := 8901}
  handleExceptionBegin
  AObj.CreateMenuButton(PCharToUStr(aText));
  handleExceptionEnd
end;

// procedure
procedure TCEFMenuButtonComponent_ShowMenu(AObj: TCEFMenuButtonComponent; const menu_model: ICefMenuModel; var screen_point: TCefPointPtr; anchor_position: TCefMenuAnchorPosition); extdecl;
var
  Inscreen_point: TCefPoint;
begin
  {$define handleExceptionID := 8902}
  handleExceptionBegin
  Inscreen_point := TCefPointToPas(screen_point);
  AObj.ShowMenu(menu_model, Inscreen_point, anchor_position);
  handleExceptionEnd
end;

// procedure
procedure TCEFMenuButtonComponent_TriggerMenu(AObj: TCEFMenuButtonComponent); extdecl;
begin
  {$define handleExceptionID := 8903}
  handleExceptionBegin
  AObj.TriggerMenu();
  handleExceptionEnd
end;

// event
procedure TCEFMenuButtonComponent_OnMenuButtonPressed(AObj: TCEFMenuButtonComponent; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TCEFMenuButtonComponent_TOnMenuButtonPressedEvent}
  {$DEFINE EventName := OnMenuButtonPressed}
  CEFEventMethodCode
end;

exports
  TCEFMenuButtonComponent_Create,
  TCEFMenuButtonComponent_CreateMenuButton,
  TCEFMenuButtonComponent_ShowMenu,
  TCEFMenuButtonComponent_TriggerMenu,
  TCEFMenuButtonComponent_OnMenuButtonPressed;