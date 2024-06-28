
//constructor
function EbEdit_Create(TheOwner: TComponent): TEbEdit; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TEbEdit.Create(TheOwner);
  handleExceptionEnd
end;

//function
function EbEdit_Class(): TClass; extdecl;
begin
  Result := TEbEdit;
end;


exports
  EbEdit_Create,
  EbEdit_Class;