
//constructor
function EnergyStringMap_Create(): TEnergyStringMap; extdecl;
begin
  handleExceptionBegin
  Result := TEnergyStringMap.Create();
  handleExceptionEnd
end;


exports
  EnergyStringMap_Create;