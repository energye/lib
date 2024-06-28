
//constructor
function TaskDialogBaseButtonItem_Create(ACollection: TCollection): TTaskDialogBaseButtonItem; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TTaskDialogBaseButtonItem.Create(ACollection);
  handleExceptionEnd
end;

//property
function TaskDialogBaseButtonItem_ModalResult(AIsSet: LongBool; AObj: TTaskDialogBaseButtonItem; AValue: TModalResult): TModalResult; extdecl;
begin
  {$define handleExceptionFuncName :='ModalResult'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ModalResult := AValue;
  end else
    Result := AObj.ModalResult;
  handleExceptionEnd
end;

//property
function TaskDialogBaseButtonItem_Caption(AIsSet: LongBool; AObj: TTaskDialogBaseButtonItem; AValue: PChar): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='Caption'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Caption := AValue;
  end else
    Result := ToPChar(AObj.Caption);
  handleExceptionEnd
end;

//property
function TaskDialogBaseButtonItem_Default(AIsSet: LongBool; AObj: TTaskDialogBaseButtonItem; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='Default'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Default := AValue;
  end else
    Result := AObj.Default;
  handleExceptionEnd
end;

//function
function TaskDialogBaseButtonItem_Class(): TClass; extdecl;
begin
  Result := TTaskDialogBaseButtonItem;
end;


exports
  TaskDialogBaseButtonItem_Create,
  TaskDialogBaseButtonItem_ModalResult,
  TaskDialogBaseButtonItem_Caption,
  TaskDialogBaseButtonItem_Default,
  TaskDialogBaseButtonItem_Class;