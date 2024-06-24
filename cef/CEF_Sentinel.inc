
//constructor
function CEFSentinel_Create(aOwner: TComponent): TCEFSentinel; extdecl;
begin
  handleExceptionBegin
  Result := TCEFSentinel.Create(aOwner);
  handleExceptionEnd
end;

//property
function CEFSentinel_Status(AObj: TCEFSentinel): TSentinelStatus; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Status;
  handleExceptionEnd
end;

//property
function CEFSentinel_ChildProcCount(AObj: TCEFSentinel): integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.ChildProcCount;
  handleExceptionEnd
end;

//property
function CEFSentinel_DelayPerProcMs(AIsSet: LongBool; AObj: TCEFSentinel; AValue: uint32): uint32; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DelayPerProcMs := AValue;
  end else
    Result := AObj.DelayPerProcMs;
  handleExceptionEnd
end;

//property
function CEFSentinel_MinInitDelayMs(AIsSet: LongBool; AObj: TCEFSentinel; AValue: uint32): uint32; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.MinInitDelayMs := AValue;
  end else
    Result := AObj.MinInitDelayMs;
  handleExceptionEnd
end;

//property
function CEFSentinel_FinalDelayMs(AIsSet: LongBool; AObj: TCEFSentinel; AValue: uint32): uint32; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.FinalDelayMs := AValue;
  end else
    Result := AObj.FinalDelayMs;
  handleExceptionEnd
end;

//property
function CEFSentinel_MinChildProcs(AIsSet: LongBool; AObj: TCEFSentinel; AValue: integer): integer; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.MinChildProcs := AValue;
  end else
    Result := AObj.MinChildProcs;
  handleExceptionEnd
end;

//property
function CEFSentinel_MaxCheckCount(AIsSet: LongBool; AObj: TCEFSentinel; AValue: integer): integer; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.MaxCheckCount := AValue;
  end else
    Result := AObj.MaxCheckCount;
  handleExceptionEnd
end;

//procedure
procedure CEFSentinel_Start(AObj: TCEFSentinel); extdecl;
begin
  handleExceptionBegin
  AObj.Start();
  handleExceptionEnd
end;

//property event
procedure CEFSentinel_SetOnClose(AObj: TCEFSentinel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := Sentinel_OnClose}
  {$DEFINE EventName := OnClose}
  CEFEventMethodCode
end;


exports
  CEFSentinel_Create,
  CEFSentinel_Status,
  CEFSentinel_ChildProcCount,
  CEFSentinel_DelayPerProcMs,
  CEFSentinel_MinInitDelayMs,
  CEFSentinel_FinalDelayMs,
  CEFSentinel_MinChildProcs,
  CEFSentinel_MaxCheckCount,
  CEFSentinel_Start,
  CEFSentinel_SetOnClose;