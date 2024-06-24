
//procedure
procedure CefPostData_GetElements(AObj: ICefPostData; var elementsCount: NativeUInt; var elements: TCefPostDataElementArray); extdecl;
var
  RetelementsCount: NativeUInt;
  Retelements: TCefPostDataElementArray;
begin
  handleExceptionBegin
  RetelementsCount := elementsCount;
  Retelements := elements;
  AObj.GetElements(RetelementsCount, Retelements);
  elementsCount := Length(Retelements);
  elements := Retelements;
  handleExceptionEnd
end;

exports
  CefPostData_GetElements;
