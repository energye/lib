
//constructor
function EnergyStringMap_Create(): TEnergyStringMap; extdecl;
begin
  handleExceptionBegin
  Result := TEnergyStringMap.Create();
  handleExceptionEnd
end;

//procedure
procedure EnergyStringMap_AsInterface(AObj: TEnergyStringMap; var Result: ICefStringMap); extdecl;
begin
  Result := AObj as ICefStringMap;
end;


exports
  EnergyStringMap_Create,
  EnergyStringMap_AsInterface;