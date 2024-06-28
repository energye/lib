
//constructor
function SaveDialog_Create(AOwner: TComponent): TSaveDialog; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TSaveDialog.Create(AOwner);
  handleExceptionEnd
end;

//function
function SaveDialog_Class(): TClass; extdecl;
begin
  Result := TSaveDialog;
end;


exports
  SaveDialog_Create,
  SaveDialog_Class;