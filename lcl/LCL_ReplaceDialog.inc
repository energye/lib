
//constructor
function ReplaceDialog_Create(AOwner: TComponent): TReplaceDialog; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TReplaceDialog.Create(AOwner);
  handleExceptionEnd
end;

//property
function ReplaceDialog_ReplaceText(AIsSet: LongBool; AObj: TReplaceDialog; AValue: PChar): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='ReplaceText'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ReplaceText := AValue;
  end else
    Result := ToPChar(AObj.ReplaceText);
  handleExceptionEnd
end;

//function
function ReplaceDialog_Class(): TClass; extdecl;
begin
  Result := TReplaceDialog;
end;

//property event
procedure ReplaceDialog_SetOnReplace(AObj: TReplaceDialog; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnReplace}
  EventMethodCode
end;


exports
  ReplaceDialog_Create,
  ReplaceDialog_ReplaceText,
  ReplaceDialog_Class,
  ReplaceDialog_SetOnReplace;