// constructor
function TVTHeaderPopupMenu_Create(AOwner: TComponent): TVTHeaderPopupMenu; extdecl;
begin
  {$define handleExceptionID := 34900}
  handleExceptionBegin
  Result := TVTHeaderPopupMenu.Create(AOwner);
  handleExceptionEnd
end;

// property
function TVTHeaderPopupMenu_Options(ASet: LongBool; AObj: TVTHeaderPopupMenu; AValue: TVTHeaderPopupOptions): TVTHeaderPopupOptions; extdecl;
begin
  {$define handleExceptionID := 34901}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Options := AValue
  end else
    Result := AObj.Options;
  handleExceptionEnd
end;

// event
procedure TVTHeaderPopupMenu_OnAddHeaderPopupItem(AObj: TVTHeaderPopupMenu; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTAddHeaderPopupItemEvent}
  {$DEFINE EventName := OnAddHeaderPopupItem}
  LCLEventMethodCode
end;

// event
procedure TVTHeaderPopupMenu_OnColumnChange(AObj: TVTHeaderPopupMenu; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTColumnChangeEvent}
  {$DEFINE EventName := OnColumnChange}
  LCLEventMethodCode
end;

function TVTHeaderPopupMenu_TClass(): TClass; extdecl;
begin
  Result := TVTHeaderPopupMenu;
end;

exports
  TVTHeaderPopupMenu_Create,
  TVTHeaderPopupMenu_Options,
  TVTHeaderPopupMenu_OnAddHeaderPopupItem,
  TVTHeaderPopupMenu_OnColumnChange,
  TVTHeaderPopupMenu_TClass;