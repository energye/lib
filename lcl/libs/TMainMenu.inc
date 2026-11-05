// constructor
function TMainMenu_Create(AOwner: TComponent): TMainMenu; extdecl;
begin
  {$define handleExceptionID := 2800}
  handleExceptionBegin
  Result := TMainMenu.Create(AOwner);
  handleExceptionEnd
end;

// procedure
procedure TMainMenu_Merge(AObj: TMainMenu; Menu: TMainMenu); extdecl;
begin
  {$define handleExceptionID := 2801}
  handleExceptionBegin
  AObj.Merge(Menu);
  handleExceptionEnd
end;

// procedure
procedure TMainMenu_Unmerge(AObj: TMainMenu; Menu: TMainMenu); extdecl;
begin
  {$define handleExceptionID := 2802}
  handleExceptionBegin
  AObj.Unmerge(Menu);
  handleExceptionEnd
end;

// property
function TMainMenu_Height(AObj: TMainMenu): Integer; extdecl;
begin
  {$define handleExceptionID := 2803}
  handleExceptionBegin
  Result := AObj.Height;
  handleExceptionEnd
end;

// property
function TMainMenu_WindowHandle(ASet: LongBool; AObj: TMainMenu; AValue: HWND): HWND; extdecl;
begin
  {$define handleExceptionID := 2804}
  handleExceptionBegin
  if ASet then
  begin
    AObj.WindowHandle := AValue
  end else
    Result := AObj.WindowHandle;
  handleExceptionEnd
end;

// event
procedure TMainMenu_OnChange(AObj: TMainMenu; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMenuChangeEvent}
  {$DEFINE EventName := OnChange}
  LCLEventMethodCode
end;

function TMainMenu_TClass(): TClass; extdecl;
begin
  Result := TMainMenu;
end;

exports
  TMainMenu_Create,
  TMainMenu_Merge,
  TMainMenu_Unmerge,
  TMainMenu_Height,
  TMainMenu_WindowHandle,
  TMainMenu_OnChange,
  TMainMenu_TClass;