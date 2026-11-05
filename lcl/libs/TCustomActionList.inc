// constructor
function TCustomActionList_Create(AOwner: TComponent): TCustomActionList; extdecl;
begin
  {$define handleExceptionID := 15200}
  handleExceptionBegin
  Result := TCustomActionList.Create(AOwner);
  handleExceptionEnd
end;

// function
function TCustomActionList_ActionByName(AObj: TCustomActionList; const ActionName: PChar): TContainedAction; extdecl;
begin
  {$define handleExceptionID := 15201}
  handleExceptionBegin
  Result := AObj.ActionByName(ActionName);
  handleExceptionEnd
end;

// function
function TCustomActionList_GetEnumeratorToActionListEnumerator(AObj: TCustomActionList): TActionListEnumerator; extdecl;
begin
  {$define handleExceptionID := 15202}
  handleExceptionBegin
  Result := AObj.GetEnumerator();
  handleExceptionEnd
end;

// function
function TCustomActionList_IndexOfName(AObj: TCustomActionList; const ActionName: PChar): integer; extdecl;
begin
  {$define handleExceptionID := 15203}
  handleExceptionBegin
  Result := AObj.IndexOfName(ActionName);
  handleExceptionEnd
end;

// function
function TCustomActionList_IsShortCut(AObj: TCustomActionList; var Message: TLMKeyPtr): LongBool; extdecl;
var
  OutMessage: TLMKey;
begin
  {$define handleExceptionID := 15204}
  handleExceptionBegin
  OutMessage := TLMKeyToPas(Message);
  Result := AObj.IsShortCut(OutMessage);
  Message := TLMKeyToGo(OutMessage);
  handleExceptionEnd
end;

// property
function TCustomActionList_Actions(ASet: LongBool; AObj: TCustomActionList; Index: Integer; AValue: TContainedAction): TContainedAction; extdecl;
begin
  {$define handleExceptionID := 15205}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Actions[Index] := AValue
  end else
    Result := AObj.Actions[Index];
  handleExceptionEnd
end;

// property
function TCustomActionList_ActionCount(AObj: TCustomActionList): Integer; extdecl;
begin
  {$define handleExceptionID := 15206}
  handleExceptionBegin
  Result := AObj.ActionCount;
  handleExceptionEnd
end;

// property
function TCustomActionList_Images(ASet: LongBool; AObj: TCustomActionList; AValue: TCustomImageList): TCustomImageList; extdecl;
begin
  {$define handleExceptionID := 15207}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Images := AValue
  end else
    Result := AObj.Images;
  handleExceptionEnd
end;

// property
function TCustomActionList_State(ASet: LongBool; AObj: TCustomActionList; AValue: TActionListState): TActionListState; extdecl;
begin
  {$define handleExceptionID := 15208}
  handleExceptionBegin
  if ASet then
  begin
    AObj.State := AValue
  end else
    Result := AObj.State;
  handleExceptionEnd
end;

function TCustomActionList_TClass(): TClass; extdecl;
begin
  Result := TCustomActionList;
end;

exports
  TCustomActionList_Create,
  TCustomActionList_ActionByName,
  TCustomActionList_GetEnumeratorToActionListEnumerator,
  TCustomActionList_IndexOfName,
  TCustomActionList_IsShortCut,
  TCustomActionList_Actions,
  TCustomActionList_ActionCount,
  TCustomActionList_Images,
  TCustomActionList_State,
  TCustomActionList_TClass;