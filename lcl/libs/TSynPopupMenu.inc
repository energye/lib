// constructor
function TSynPopupMenu_Create(AOwner: TComponent): TSynPopupMenu; extdecl;
begin
  {$define handleExceptionID := 42900}
  handleExceptionBegin
  Result := TSynPopupMenu.Create(AOwner);
  handleExceptionEnd
end;

// property
function TSynPopupMenu_DefaultPopupMenu(ASet: LongBool; AObj: TSynPopupMenu; AValue: TSynDefaultPopupMenu): TSynDefaultPopupMenu; extdecl;
begin
  {$define handleExceptionID := 42901}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DefaultPopupMenu := AValue
  end else
    Result := AObj.DefaultPopupMenu;
  handleExceptionEnd
end;

function TSynPopupMenu_TClass(): TClass; extdecl;
begin
  Result := TSynPopupMenu;
end;

exports
  TSynPopupMenu_Create,
  TSynPopupMenu_DefaultPopupMenu,
  TSynPopupMenu_TClass;