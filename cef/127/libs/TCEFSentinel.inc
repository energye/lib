// constructor
function TCEFSentinel_Create(AOwner: TComponent): TCEFSentinel; extdecl;
begin
  {$define handleExceptionID := 6800}
  handleExceptionBegin
  Result := TCEFSentinel.Create(AOwner);
  handleExceptionEnd
end;

// procedure
procedure TCEFSentinel_Start(AObj: TCEFSentinel); extdecl;
begin
  {$define handleExceptionID := 6801}
  handleExceptionBegin
  AObj.Start();
  handleExceptionEnd
end;

// property
function TCEFSentinel_Status(AObj: TCEFSentinel): TSentinelStatus; extdecl;
begin
  {$define handleExceptionID := 6802}
  handleExceptionBegin
  Result := AObj.Status;
  handleExceptionEnd
end;

// property
function TCEFSentinel_ChildProcCount(AObj: TCEFSentinel): integer; extdecl;
begin
  {$define handleExceptionID := 6803}
  handleExceptionBegin
  Result := AObj.ChildProcCount;
  handleExceptionEnd
end;

// property
function TCEFSentinel_DelayPerProcMs(ASet: LongBool; AObj: TCEFSentinel; AValue: cardinal): cardinal; extdecl;
begin
  {$define handleExceptionID := 6804}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DelayPerProcMs := AValue
  end else
    Result := AObj.DelayPerProcMs;
  handleExceptionEnd
end;

// property
function TCEFSentinel_MinInitDelayMs(ASet: LongBool; AObj: TCEFSentinel; AValue: cardinal): cardinal; extdecl;
begin
  {$define handleExceptionID := 6805}
  handleExceptionBegin
  if ASet then
  begin
    AObj.MinInitDelayMs := AValue
  end else
    Result := AObj.MinInitDelayMs;
  handleExceptionEnd
end;

// property
function TCEFSentinel_FinalDelayMs(ASet: LongBool; AObj: TCEFSentinel; AValue: cardinal): cardinal; extdecl;
begin
  {$define handleExceptionID := 6806}
  handleExceptionBegin
  if ASet then
  begin
    AObj.FinalDelayMs := AValue
  end else
    Result := AObj.FinalDelayMs;
  handleExceptionEnd
end;

// property
function TCEFSentinel_MinChildProcs(ASet: LongBool; AObj: TCEFSentinel; AValue: integer): integer; extdecl;
begin
  {$define handleExceptionID := 6807}
  handleExceptionBegin
  if ASet then
  begin
    AObj.MinChildProcs := AValue
  end else
    Result := AObj.MinChildProcs;
  handleExceptionEnd
end;

// property
function TCEFSentinel_MaxCheckCount(ASet: LongBool; AObj: TCEFSentinel; AValue: integer): integer; extdecl;
begin
  {$define handleExceptionID := 6808}
  handleExceptionBegin
  if ASet then
  begin
    AObj.MaxCheckCount := AValue
  end else
    Result := AObj.MaxCheckCount;
  handleExceptionEnd
end;

// event
procedure TCEFSentinel_OnClose(AObj: TCEFSentinel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TCEFSentinel_TNotifyEvent}
  {$DEFINE EventName := OnClose}
  CEFEventMethodCode
end;

exports
  TCEFSentinel_Create,
  TCEFSentinel_Start,
  TCEFSentinel_Status,
  TCEFSentinel_ChildProcCount,
  TCEFSentinel_DelayPerProcMs,
  TCEFSentinel_MinInitDelayMs,
  TCEFSentinel_FinalDelayMs,
  TCEFSentinel_MinChildProcs,
  TCEFSentinel_MaxCheckCount,
  TCEFSentinel_OnClose;