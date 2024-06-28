
//constructor
function CEFWindowParent_Create(theOwner: TComponent): TCEFWindowParent; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TCEFWindowParent.Create(theOwner);
  handleExceptionEnd
end;


exports
  CEFWindowParent_Create;