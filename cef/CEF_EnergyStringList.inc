
//constructor
function EnergyStringList_Create(): TEnergyStringList; extdecl;
begin
  handleExceptionBegin
  Result := TEnergyStringList.Create();
  handleExceptionEnd
end;

//procedure
procedure EnergyStringList_AsInterface(AObj: TEnergyStringList; var Result: ICefStringList); extdecl;
begin
  Result := AObj as ICefStringList;
end;


exports
  EnergyStringList_Create,
  EnergyStringList_AsInterface;