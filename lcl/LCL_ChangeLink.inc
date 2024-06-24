
//constructor
function ChangeLink_Create(): TChangeLink; extdecl;
begin
  handleExceptionBegin
  Result := TChangeLink.Create();
  handleExceptionEnd
end;

//property
function ChangeLink_Sender(AIsSet: LongBool; AObj: TChangeLink; AValue: TCustomImageList): TCustomImageList; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Sender := AValue;
  end else
    Result := AObj.Sender;
  handleExceptionEnd
end;

//function
function ChangeLink_Class(): TClass; extdecl;
begin
  Result := TChangeLink;
end;

//procedure
procedure ChangeLink_Change(AObj: TChangeLink); extdecl;
begin
  handleExceptionBegin
  AObj.Change();
  handleExceptionEnd
end;

//property event
procedure ChangeLink_SetOnChange(AObj: TChangeLink; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnChange}
  EventMethodCode
end;

//property event
procedure ChangeLink_SetOnDestroyResolutionHandle(AObj: TChangeLink; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDestroyResolutionHandleEvent}
  {$DEFINE EventName := OnDestroyResolutionHandle}
  EventMethodCode
end;


exports
  ChangeLink_Create,
  ChangeLink_Sender,
  ChangeLink_Class,
  ChangeLink_Change,
  ChangeLink_SetOnChange,
  ChangeLink_SetOnDestroyResolutionHandle;