
//constructor
function MergedMenuItems_Create(const aParent: TMenuItem): TMergedMenuItems; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TMergedMenuItems.Create(aParent);
  handleExceptionEnd
end;

//property
function MergedMenuItems_VisibleCount(AObj: TMergedMenuItems): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='VisibleCount'}
  handleExceptionBegin
  Result := AObj.VisibleCount;
  handleExceptionEnd
end;

//property
function MergedMenuItems_VisibleItems(AObj: TMergedMenuItems; Index: Integer): TMenuItem; extdecl;
begin
  {$define handleExceptionFuncName :='VisibleItems'}
  handleExceptionBegin
  Result := AObj.VisibleItems[Index];
  handleExceptionEnd
end;

//property
function MergedMenuItems_InvisibleCount(AObj: TMergedMenuItems): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='InvisibleCount'}
  handleExceptionBegin
  Result := AObj.InvisibleCount;
  handleExceptionEnd
end;

//property
function MergedMenuItems_InvisibleItems(AObj: TMergedMenuItems; Index: Integer): TMenuItem; extdecl;
begin
  {$define handleExceptionFuncName :='InvisibleItems'}
  handleExceptionBegin
  Result := AObj.InvisibleItems[Index];
  handleExceptionEnd
end;

//function
function MergedMenuItems_Class(): TClass; extdecl;
begin
  Result := TMergedMenuItems;
end;


exports
  MergedMenuItems_Create,
  MergedMenuItems_VisibleCount,
  MergedMenuItems_VisibleItems,
  MergedMenuItems_InvisibleCount,
  MergedMenuItems_InvisibleItems,
  MergedMenuItems_Class;