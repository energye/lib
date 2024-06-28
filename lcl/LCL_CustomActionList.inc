
//constructor
function CustomActionList_Create(AOwner: TComponent): TCustomActionList; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TCustomActionList.Create(AOwner);
  handleExceptionEnd
end;

//property
function CustomActionList_Actions(AIsSet: LongBool; AObj: TCustomActionList; Index: Integer; AValue: TContainedAction): TContainedAction; extdecl;
begin
  {$define handleExceptionFuncName :='Actions'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Actions[Index] := AValue;
  end else
    Result := AObj.Actions[Index];
  handleExceptionEnd
end;

//property
function CustomActionList_ActionCount(AObj: TCustomActionList): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='ActionCount'}
  handleExceptionBegin
  Result := AObj.ActionCount;
  handleExceptionEnd
end;

//property
function CustomActionList_Images(AIsSet: LongBool; AObj: TCustomActionList; AValue: TCustomImageList): TCustomImageList; extdecl;
begin
  {$define handleExceptionFuncName :='Images'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Images := AValue;
  end else
    Result := AObj.Images;
  handleExceptionEnd
end;

//property
function CustomActionList_State(AIsSet: LongBool; AObj: TCustomActionList; AValue: TActionListState): TActionListState; extdecl;
begin
  {$define handleExceptionFuncName :='State'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.State := AValue;
  end else
    Result := AObj.State;
  handleExceptionEnd
end;

//function
function CustomActionList_ActionByName(AObj: TCustomActionList; const ActionName: PChar): TContainedAction; extdecl;
begin
  {$define handleExceptionFuncName :='ActionByName'}
  handleExceptionBegin
  Result := AObj.ActionByName(ActionName);
  handleExceptionEnd
end;

//function
function CustomActionList_GetEnumeratorForActionListEnumerator(AObj: TCustomActionList): TActionListEnumerator; extdecl;
begin
  {$define handleExceptionFuncName :='GetEnumeratorForActionListEnumerator'}
  handleExceptionBegin
  Result := AObj.GetEnumerator();
  handleExceptionEnd
end;

//function
function CustomActionList_IndexOfName(AObj: TCustomActionList; const ActionName: PChar): integer; extdecl;
begin
  {$define handleExceptionFuncName :='IndexOfName'}
  handleExceptionBegin
  Result := AObj.IndexOfName(ActionName);
  handleExceptionEnd
end;

//function
function CustomActionList_IsShortCut(AObj: TCustomActionList; var Message: TLMKey): LongBool; extdecl;
var
  RetMessage: TLMKey;
begin
  {$define handleExceptionFuncName :='IsShortCut'}
  handleExceptionBegin
  RetMessage := Message;
  Result := AObj.IsShortCut(RetMessage);
  Message := RetMessage;
  handleExceptionEnd
end;

//function
function CustomActionList_Class(): TClass; extdecl;
begin
  Result := TCustomActionList;
end;


exports
  CustomActionList_Create,
  CustomActionList_Actions,
  CustomActionList_ActionCount,
  CustomActionList_Images,
  CustomActionList_State,
  CustomActionList_ActionByName,
  CustomActionList_GetEnumeratorForActionListEnumerator,
  CustomActionList_IndexOfName,
  CustomActionList_IsShortCut,
  CustomActionList_Class;