
//constructor
function EnergyStringMultiMap_Create(): TEnergyStringMultiMap; extdecl;
begin
  handleExceptionBegin
  Result := TEnergyStringMultiMap.Create();
  handleExceptionEnd
end;


exports
  EnergyStringMultiMap_Create;