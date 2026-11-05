// constructor
function TTaskDialogButtons_Create(AOwner: TPersistent; AItemClass: TCollectionItemClass): TTaskDialogButtons; extdecl;
begin
  {$define handleExceptionID := 20700}
  handleExceptionBegin
  Result := TTaskDialogButtons.Create(AOwner, AItemClass);
  handleExceptionEnd
end;

// function
function TTaskDialogButtons_AddToTaskDialogBaseButtonItem(AObj: TTaskDialogButtons): TTaskDialogBaseButtonItem; extdecl;
begin
  {$define handleExceptionID := 20701}
  handleExceptionBegin
  Result := AObj.Add();
  handleExceptionEnd
end;

// function
function TTaskDialogButtons_FindButton(AObj: TTaskDialogButtons; AModalResult: TModalResult): TTaskDialogBaseButtonItem; extdecl;
begin
  {$define handleExceptionID := 20702}
  handleExceptionBegin
  Result := AObj.FindButton(AModalResult);
  handleExceptionEnd
end;

// function
function TTaskDialogButtons_GetEnumeratorToTaskDialogButtonsEnumerator(AObj: TTaskDialogButtons): TTaskDialogButtonsEnumerator; extdecl;
begin
  {$define handleExceptionID := 20703}
  handleExceptionBegin
  Result := AObj.GetEnumerator();
  handleExceptionEnd
end;

// property
function TTaskDialogButtons_DefaultButton(ASet: LongBool; AObj: TTaskDialogButtons; AValue: TTaskDialogBaseButtonItem): TTaskDialogBaseButtonItem; extdecl;
begin
  {$define handleExceptionID := 20704}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DefaultButton := AValue
  end else
    Result := AObj.DefaultButton;
  handleExceptionEnd
end;

// property
function TTaskDialogButtons_ItemsWithIntToTaskDialogBaseButtonItem(ASet: LongBool; AObj: TTaskDialogButtons; Index: Integer; AValue: TTaskDialogBaseButtonItem): TTaskDialogBaseButtonItem; extdecl;
begin
  {$define handleExceptionID := 20705}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Items[Index] := AValue
  end else
    Result := AObj.Items[Index];
  handleExceptionEnd
end;

exports
  TTaskDialogButtons_Create,
  TTaskDialogButtons_AddToTaskDialogBaseButtonItem,
  TTaskDialogButtons_FindButton,
  TTaskDialogButtons_GetEnumeratorToTaskDialogButtonsEnumerator,
  TTaskDialogButtons_DefaultButton,
  TTaskDialogButtons_ItemsWithIntToTaskDialogBaseButtonItem;