// constructor
function TOwnedCollection_Create(AOwner: TPersistent; AItemClass: TCollectionItemClass): TOwnedCollection; extdecl;
begin
  {$define handleExceptionID := 14200}
  handleExceptionBegin
  Result := TOwnedCollection.Create(AOwner, AItemClass);
  handleExceptionEnd
end;

exports
  TOwnedCollection_Create;
