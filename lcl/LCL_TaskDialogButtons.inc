
//constructor
function TaskDialogButtons_Create(AOwner: TPersistent; AItemClass: TCollectionItemClass): TTaskDialogButtons; extdecl;
begin
  handleExceptionBegin
  Result := TTaskDialogButtons.Create(AOwner, AItemClass);
  handleExceptionEnd
end;

//property
function TaskDialogButtons_DefaultButton(AIsSet: LongBool; AObj: TTaskDialogButtons; AValue: TTaskDialogBaseButtonItem): TTaskDialogBaseButtonItem; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DefaultButton := AValue;
  end else
    Result := AObj.DefaultButton;
  handleExceptionEnd
end;

//property
function TaskDialogButtons_ItemsForTaskDialogBaseButtonItem(AIsSet: LongBool; AObj: TTaskDialogButtons; Index: Integer; AValue: TTaskDialogBaseButtonItem): TTaskDialogBaseButtonItem; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Items[Index] := AValue;
  end else
    Result := AObj.Items[Index];
  handleExceptionEnd
end;

//function
function TaskDialogButtons_AddForTaskDialogBaseButtonItem(AObj: TTaskDialogButtons): TTaskDialogBaseButtonItem; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Add();
  handleExceptionEnd
end;

//function
function TaskDialogButtons_FindButton(AObj: TTaskDialogButtons; AModalResult: TModalResult): TTaskDialogBaseButtonItem; extdecl;
begin
  handleExceptionBegin
  Result := AObj.FindButton(AModalResult);
  handleExceptionEnd
end;

//function
function TaskDialogButtons_GetEnumeratorForTaskDialogButtonsEnumerator(AObj: TTaskDialogButtons): TTaskDialogButtonsEnumerator; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetEnumerator();
  handleExceptionEnd
end;

//function
function TaskDialogButtons_Class(): TClass; extdecl;
begin
  Result := TTaskDialogButtons;
end;


exports
  TaskDialogButtons_Create,
  TaskDialogButtons_DefaultButton,
  TaskDialogButtons_ItemsForTaskDialogBaseButtonItem,
  TaskDialogButtons_AddForTaskDialogBaseButtonItem,
  TaskDialogButtons_FindButton,
  TaskDialogButtons_GetEnumeratorForTaskDialogButtonsEnumerator,
  TaskDialogButtons_Class;