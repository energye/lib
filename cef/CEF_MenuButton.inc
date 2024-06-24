
//function
procedure CefMenuButton_UnWrap(data: Pointer; var Result: ICefMenuButton); extdecl;
begin
  Result := TCefMenuButtonRef.UnWrap(data);
end;

//function
procedure CefMenuButton_CreateMenuButton(const delegate: ICefMenuButtonDelegate; const text: PChar; var Result: ICefMenuButton); extdecl;
begin
  Result := TCefMenuButtonRef.CreateMenuButton(delegate, text);
end;

//procedure
procedure CefMenuButton_ShowMenu(AObj: ICefMenuButton; const menumodel: ICefMenuModel; var screenpoint: TCefPoint; anchorposition: TCefMenuAnchorPosition); extdecl;
begin
  handleExceptionBegin
  AObj.ShowMenu(menumodel, screenpoint, anchorposition);
  handleExceptionEnd
end;

//procedure
procedure CefMenuButton_TriggerMenu(AObj: ICefMenuButton); extdecl;
begin
  handleExceptionBegin
  AObj.TriggerMenu();
  handleExceptionEnd
end;


exports
  CefMenuButton_UnWrap,
  CefMenuButton_CreateMenuButton,
  CefMenuButton_ShowMenu,
  CefMenuButton_TriggerMenu;