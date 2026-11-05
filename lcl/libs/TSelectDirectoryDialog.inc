// constructor
function TSelectDirectoryDialog_Create(AOwner: TComponent): TSelectDirectoryDialog; extdecl;
begin
  {$define handleExceptionID := 7700}
  handleExceptionBegin
  Result := TSelectDirectoryDialog.Create(AOwner);
  handleExceptionEnd
end;

function TSelectDirectoryDialog_TClass(): TClass; extdecl;
begin
  Result := TSelectDirectoryDialog;
end;

exports
  TSelectDirectoryDialog_Create,
  TSelectDirectoryDialog_TClass;