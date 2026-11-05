// constructor
function TSynManagedStorageMem_Create(): TSynManagedStorageMem; extdecl;
begin
  {$define handleExceptionID := 39300}
  handleExceptionBegin
  Result := TSynManagedStorageMem.Create();
  handleExceptionEnd
end;

exports
  TSynManagedStorageMem_Create;
