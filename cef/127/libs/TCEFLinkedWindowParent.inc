// constructor
function TCEFLinkedWindowParent_Create(AOwner: TComponent): TCEFLinkedWindowParent; extdecl;
begin
  {$define handleExceptionID := 6100}
  handleExceptionBegin
  Result := TCEFLinkedWindowParent.Create(AOwner);
  handleExceptionEnd
end;

// property
function TCEFLinkedWindowParent_Chromium(ASet: LongBool; AObj: TCEFLinkedWindowParent; AValue: TChromium): TChromium; extdecl;
begin
  {$define handleExceptionID := 6101}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Chromium := AValue
  end else
    Result := AObj.Chromium;
  handleExceptionEnd
end;

exports
  TCEFLinkedWindowParent_Create,
  TCEFLinkedWindowParent_Chromium;