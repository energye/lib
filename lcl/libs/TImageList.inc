// constructor
function TImageList_Create(AOwner: TComponent): TImageList; extdecl;
begin
  {$define handleExceptionID := 8400}
  handleExceptionBegin
  Result := TImageList.Create(AOwner);
  handleExceptionEnd
end;

// constructor
function TImageList_CreateSize(AWidth: Integer; AHeight: Integer): TImageList; extdecl;
begin
  {$define handleExceptionID := 8401}
  handleExceptionBegin
  Result := TImageList.CreateSize(AWidth, AHeight);
  handleExceptionEnd
end;

function TImageList_TClass(): TClass; extdecl;
begin
  Result := TImageList;
end;

exports
  TImageList_Create,
  TImageList_CreateSize,
  TImageList_TClass;