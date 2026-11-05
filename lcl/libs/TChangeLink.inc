// constructor
function TChangeLink_Create(): TChangeLink; extdecl;
begin
  {$define handleExceptionID := 28100}
  handleExceptionBegin
  Result := TChangeLink.Create();
  handleExceptionEnd
end;

// procedure
procedure TChangeLink_Change(AObj: TChangeLink); extdecl;
begin
  {$define handleExceptionID := 28101}
  handleExceptionBegin
  AObj.Change();
  handleExceptionEnd
end;

// property
function TChangeLink_Sender(ASet: LongBool; AObj: TChangeLink; AValue: TCustomImageList): TCustomImageList; extdecl;
begin
  {$define handleExceptionID := 28102}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Sender := AValue
  end else
    Result := AObj.Sender;
  handleExceptionEnd
end;

// event
procedure TChangeLink_OnChange(AObj: TChangeLink; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnChange}
  LCLEventMethodCode
end;

// event
procedure TChangeLink_OnDestroyResolutionHandle(AObj: TChangeLink; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDestroyResolutionHandleEvent}
  {$DEFINE EventName := OnDestroyResolutionHandle}
  LCLEventMethodCode
end;

exports
  TChangeLink_Create,
  TChangeLink_Change,
  TChangeLink_Sender,
  TChangeLink_OnChange,
  TChangeLink_OnDestroyResolutionHandle;