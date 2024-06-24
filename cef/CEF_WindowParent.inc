
//constructor
function CEFWindowParent_Create(theOwner: TComponent): TCEFWindowParent; extdecl;
begin
  handleExceptionBegin
  Result := TCEFWindowParent.Create(theOwner);
  handleExceptionEnd
end;


exports
  CEFWindowParent_Create;