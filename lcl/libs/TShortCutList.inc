// constructor
function TShortCutList_Create(): TShortCutList; extdecl;
begin
  {$define handleExceptionID := 26400}
  handleExceptionBegin
  Result := TShortCutList.Create();
  handleExceptionEnd
end;

// function
function TShortCutList_IndexOfShortCut(AObj: TShortCutList; const Shortcut: TShortCut): Integer; extdecl;
begin
  {$define handleExceptionID := 26401}
  handleExceptionBegin
  Result := AObj.IndexOfShortCut(Shortcut);
  handleExceptionEnd
end;

// property
function TShortCutList_ShortCuts(AObj: TShortCutList; Index: Integer): TShortCut; extdecl;
begin
  {$define handleExceptionID := 26402}
  handleExceptionBegin
  Result := AObj.ShortCuts[Index];
  handleExceptionEnd
end;

exports
  TShortCutList_Create,
  TShortCutList_IndexOfShortCut,
  TShortCutList_ShortCuts;