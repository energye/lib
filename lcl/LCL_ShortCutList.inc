
//constructor
function ShortCutList_Create(): TShortCutList; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TShortCutList.Create();
  handleExceptionEnd
end;

//property
function ShortCutList_ShortCuts(AObj: TShortCutList; Index: Integer): TShortCut; extdecl;
begin
  {$define handleExceptionFuncName :='ShortCuts'}
  handleExceptionBegin
  Result := AObj.ShortCuts[Index];
  handleExceptionEnd
end;

//function
function ShortCutList_IndexOfShortCut(AObj: TShortCutList; const Shortcut: TShortCut): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='IndexOfShortCut'}
  handleExceptionBegin
  Result := AObj.IndexOfShortCut(Shortcut);
  handleExceptionEnd
end;

//function
function ShortCutList_Class(): TClass; extdecl;
begin
  Result := TShortCutList;
end;


exports
  ShortCutList_Create,
  ShortCutList_ShortCuts,
  ShortCutList_IndexOfShortCut,
  ShortCutList_Class;