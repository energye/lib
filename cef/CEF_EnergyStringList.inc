
//constructor
function EnergyStringList_Create(): TEnergyStringList; extdecl;
begin
  handleExceptionBegin
  Result := TEnergyStringList.Create();
  handleExceptionEnd
end;


exports
  EnergyStringList_Create;