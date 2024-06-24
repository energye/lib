
//constructor
function OwnedCollection_Create(AOwner: TPersistent; AItemClass: TCollectionItemClass): TOwnedCollection; extdecl;
begin
  handleExceptionBegin
  Result := TOwnedCollection.Create(AOwner, AItemClass);
  handleExceptionEnd
end;

//function
function OwnedCollection_Class(): TClass; extdecl;
begin
  Result := TOwnedCollection;
end;


exports
  OwnedCollection_Create,
  OwnedCollection_Class;