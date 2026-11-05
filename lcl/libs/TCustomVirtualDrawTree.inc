// constructor
function TCustomVirtualDrawTree_Create(AOwner: TComponent): TCustomVirtualDrawTree; extdecl;
begin
  {$define handleExceptionID := 28800}
  handleExceptionBegin
  Result := TCustomVirtualDrawTree.Create(AOwner);
  handleExceptionEnd
end;

function TCustomVirtualDrawTree_TClass(): TClass; extdecl;
begin
  Result := TCustomVirtualDrawTree;
end;

exports
  TCustomVirtualDrawTree_Create,
  TCustomVirtualDrawTree_TClass;