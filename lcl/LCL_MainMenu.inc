
//constructor
function MainMenu_Create(AOwner: TComponent): TMainMenu; extdecl;
begin
  handleExceptionBegin
  Result := TMainMenu.Create(AOwner);
  handleExceptionEnd
end;

//property
function MainMenu_Height(AObj: TMainMenu): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Height;
  handleExceptionEnd
end;

//property
function MainMenu_WindowHandle(AIsSet: LongBool; AObj: TMainMenu; AValue: HWND): HWND; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.WindowHandle := AValue;
  end else
    Result := AObj.WindowHandle;
  handleExceptionEnd
end;

//function
function MainMenu_Class(): TClass; extdecl;
begin
  Result := TMainMenu;
end;

//procedure
procedure MainMenu_Merge(AObj: TMainMenu; Menu: TMainMenu); extdecl;
begin
  handleExceptionBegin
  AObj.Merge(Menu);
  handleExceptionEnd
end;

//procedure
procedure MainMenu_Unmerge(AObj: TMainMenu; Menu: TMainMenu); extdecl;
begin
  handleExceptionBegin
  AObj.Unmerge(Menu);
  handleExceptionEnd
end;

//property event
procedure MainMenu_SetOnChange(AObj: TMainMenu; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMenuChangeEvent}
  {$DEFINE EventName := OnChange}
  EventMethodCode
end;


exports
  MainMenu_Create,
  MainMenu_Height,
  MainMenu_WindowHandle,
  MainMenu_Class,
  MainMenu_Merge,
  MainMenu_Unmerge,
  MainMenu_SetOnChange;