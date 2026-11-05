// constructor
function TCEFWindowParent_Create(TheOwner: TComponent): TCEFWindowParent; extdecl;
begin
  {$define handleExceptionID := 5400}
  handleExceptionBegin
  Result := TCEFWindowParent.Create(TheOwner);
  handleExceptionEnd
end;

// constructor
function TCEFWindowParent_CreateParented(AParentWindow: HWND): TCEFWindowParent; extdecl;
begin
  {$define handleExceptionID := 5401}
  handleExceptionBegin
  Result := TCEFWindowParent.CreateParented(AParentWindow);
  handleExceptionEnd
end;

exports
  TCEFWindowParent_Create,
  TCEFWindowParent_CreateParented;