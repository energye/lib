// constructor
function TMergedMenuItems_Create(const aParent: TMenuItem): TMergedMenuItems; extdecl;
begin
  {$define handleExceptionID := 25500}
  handleExceptionBegin
  Result := TMergedMenuItems.Create(aParent);
  handleExceptionEnd
end;

// function static
function TMergedMenuItems_DefaultSort(aItem1: Pointer; aItem2: Pointer; aParentItem: Pointer): Integer; extdecl;
begin
  Result := TMergedMenuItems.DefaultSort(aItem1, aItem2, aParentItem);
end;

// property
function TMergedMenuItems_VisibleCount(AObj: TMergedMenuItems): Integer; extdecl;
begin
  {$define handleExceptionID := 25501}
  handleExceptionBegin
  Result := AObj.VisibleCount;
  handleExceptionEnd
end;

// property
function TMergedMenuItems_VisibleItems(AObj: TMergedMenuItems; Index: Integer): TMenuItem; extdecl;
begin
  {$define handleExceptionID := 25502}
  handleExceptionBegin
  Result := AObj.VisibleItems[Index];
  handleExceptionEnd
end;

// property
function TMergedMenuItems_InvisibleCount(AObj: TMergedMenuItems): Integer; extdecl;
begin
  {$define handleExceptionID := 25503}
  handleExceptionBegin
  Result := AObj.InvisibleCount;
  handleExceptionEnd
end;

// property
function TMergedMenuItems_InvisibleItems(AObj: TMergedMenuItems; Index: Integer): TMenuItem; extdecl;
begin
  {$define handleExceptionID := 25504}
  handleExceptionBegin
  Result := AObj.InvisibleItems[Index];
  handleExceptionEnd
end;

exports
  TMergedMenuItems_Create,
  TMergedMenuItems_DefaultSort,
  TMergedMenuItems_VisibleCount,
  TMergedMenuItems_VisibleItems,
  TMergedMenuItems_InvisibleCount,
  TMergedMenuItems_InvisibleItems;