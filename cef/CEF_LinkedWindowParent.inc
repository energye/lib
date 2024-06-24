
//constructor
function CEFLinkedWindowParent_Create(aOwner: TComponent): TCEFLinkedWindowParent; extdecl;
begin
  handleExceptionBegin
  Result := TCEFLinkedWindowParent.Create(aOwner);
  handleExceptionEnd
end;

//property
function CEFLinkedWindowParent_Chromium(AIsSet: LongBool; AObj: TCEFLinkedWindowParent; AValue: TChromium): TChromium; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Chromium := AValue;
  end else
    Result := AObj.Chromium;
  handleExceptionEnd
end;


exports
  CEFLinkedWindowParent_Create,
  CEFLinkedWindowParent_Chromium;