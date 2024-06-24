//function
function CefDisplay_GetAlls(var aDisplayArray: TCefDisplayArray; out Size: Integer): LongBool; extdecl;
var
  RetaDisplayArray: TCefDisplayArray;
begin
  Result := TCefDisplayRef.GetAlls(RetaDisplayArray);
  aDisplayArray := RetaDisplayArray;
  Size := Length(RetaDisplayArray);
end;

exports
  CefDisplay_GetAlls;
