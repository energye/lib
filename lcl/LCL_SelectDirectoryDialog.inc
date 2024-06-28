
//constructor
function SelectDirectoryDialog_Create(AOwner: TComponent): TSelectDirectoryDialog; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TSelectDirectoryDialog.Create(AOwner);
  handleExceptionEnd
end;

//function
function SelectDirectoryDialog_Class(): TClass; extdecl;
begin
  Result := TSelectDirectoryDialog;
end;


exports
  SelectDirectoryDialog_Create,
  SelectDirectoryDialog_Class;