
//constructor
function GEEdit_Create(TheOwner: TComponent): TGEEdit; extdecl;
begin
  handleExceptionBegin
  Result := TGEEdit.Create(TheOwner);
  handleExceptionEnd
end;

//function
function GEEdit_Class(): TClass; extdecl;
begin
  Result := TGEEdit;
end;


exports
  GEEdit_Create,
  GEEdit_Class;