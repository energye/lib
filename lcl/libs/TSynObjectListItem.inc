// constructor
function TSynObjectListItem_Create(AOwner: TComponent): TSynObjectListItem; extdecl;
begin
  {$define handleExceptionID := 38700}
  handleExceptionBegin
  Result := TSynObjectListItem.Create(AOwner);
  handleExceptionEnd
end;

// property
function TSynObjectListItem_Index(ASet: LongBool; AObj: TSynObjectListItem; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 38701}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Index := AValue
  end else
    Result := AObj.Index;
  handleExceptionEnd
end;

// property
procedure TSynObjectListItem_DisplayName(AObj: TSynObjectListItem; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 38702}
  handleExceptionBegin
  StringBufferCreate(AObj.DisplayName, AStrData, AStrSize);
  handleExceptionEnd
end;

function TSynObjectListItem_TClass(): TClass; extdecl;
begin
  Result := TSynObjectListItem;
end;

exports
  TSynObjectListItem_Create,
  TSynObjectListItem_Index,
  TSynObjectListItem_DisplayName,
  TSynObjectListItem_TClass;