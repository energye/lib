
//constructor
function MainMenu_Create(AOwner: TComponent): TMainMenu; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TMainMenu.Create(AOwner);
  handleExceptionEnd
end;

//property
function MainMenu_Height(AObj: TMainMenu): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='Height'}
  handleExceptionBegin
  Result := AObj.Height;
  handleExceptionEnd
end;

//property
function MainMenu_WindowHandle(AIsSet: LongBool; AObj: TMainMenu; AValue: HWND): HWND; extdecl;
begin
  {$define handleExceptionFuncName :='WindowHandle'}
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
  {$define handleExceptionFuncName :='Merge'}
  handleExceptionBegin
  AObj.Merge(Menu);
  handleExceptionEnd
end;

//procedure
procedure MainMenu_Unmerge(AObj: TMainMenu; Menu: TMainMenu); extdecl;
begin
  {$define handleExceptionFuncName :='Unmerge'}
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