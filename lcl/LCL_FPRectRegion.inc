
//constructor
function FPRectRegion_Create(): TFPRectRegion; extdecl;
begin
  handleExceptionBegin
  Result := TFPRectRegion.Create();
  handleExceptionEnd
end;

//function
function FPRectRegion_Class(): TClass; extdecl;
begin
  Result := TFPRectRegion;
end;


exports
  FPRectRegion_Create,
  FPRectRegion_Class;