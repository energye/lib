// constructor
function TCefMenuButtonRef_Create(data: Pointer; out IntfMenuButton: ICefMenuButton; out IntfLabelButton: ICefLabelButton; out IntfButton: ICefButton; out IntfView: ICefView): TCefMenuButtonRef; extdecl;
begin
  {$define handleExceptionID := 23900}
  handleExceptionBegin
  Result := TCefMenuButtonRef.Create(data);
  IntfMenuButton := Result as ICefMenuButton;
  IntfLabelButton := Result as ICefLabelButton;
  IntfButton := Result as ICefButton;
  IntfView := Result as ICefView;
  handleExceptionEnd
end;

// function static
procedure TCefMenuButtonRef_UnWrapWithPointer(data: Pointer; var Result: ICefMenuButton); extdecl;
begin
  Result := TCefMenuButtonRef.UnWrap(data);
end;

// function static
procedure TCefMenuButtonRef_CreateMenuButton(const delegate: ICefMenuButtonDelegate; const text: PChar; var Result: ICefMenuButton); extdecl;
begin
  Result := TCefMenuButtonRef.CreateMenuButton(delegate, text);
end;

// procedure
procedure TCefMenuButtonRef_ShowMenu(AObj: ICefMenuButton; const menu_model: ICefMenuModel; var screen_point: TCefPointPtr; anchor_position: TCefMenuAnchorPosition); extdecl;
var
  Inscreen_point: TCefPoint;
begin
  {$define handleExceptionID := 23901}
  handleExceptionBegin
  Inscreen_point := TCefPointToPas(screen_point);
  AObj.ShowMenu(menu_model, Inscreen_point, anchor_position);
  handleExceptionEnd
end;

// procedure
procedure TCefMenuButtonRef_TriggerMenu(AObj: ICefMenuButton); extdecl;
begin
  {$define handleExceptionID := 23902}
  handleExceptionBegin
  AObj.TriggerMenu();
  handleExceptionEnd
end;

exports
  TCefMenuButtonRef_Create,
  TCefMenuButtonRef_UnWrapWithPointer,
  TCefMenuButtonRef_CreateMenuButton,
  TCefMenuButtonRef_ShowMenu,
  TCefMenuButtonRef_TriggerMenu;