// constructor
function TCefWaitableEventRef_Create(data: Pointer; out IntfWaitableEvent: ICefWaitableEvent): TCefWaitableEventRef; extdecl;
begin
  {$define handleExceptionID := 22600}
  handleExceptionBegin
  Result := TCefWaitableEventRef.Create(data);
  IntfWaitableEvent := Result as ICefWaitableEvent;
  handleExceptionEnd
end;

// function
function TCefWaitableEventRef_IsSignaled(AObj: ICefWaitableEvent): LongBool; extdecl;
begin
  {$define handleExceptionID := 22601}
  handleExceptionBegin
  Result := AObj.IsSignaled();
  handleExceptionEnd
end;

// function
function TCefWaitableEventRef_TimedWait(AObj: ICefWaitableEvent; var max_ms: int64): LongBool; extdecl;
begin
  {$define handleExceptionID := 22602}
  handleExceptionBegin
  Result := AObj.TimedWait(max_ms);
  handleExceptionEnd
end;

// function static
procedure TCefWaitableEventRef_UnWrap(data: Pointer; var Result: ICefWaitableEvent); extdecl;
begin
  Result := TCefWaitableEventRef.UnWrap(data);
end;

// function static
procedure TCefWaitableEventRef_New(automatic_reset: LongBool; initially_signaled: LongBool; var Result: ICefWaitableEvent); extdecl;
begin
  Result := TCefWaitableEventRef.New(automatic_reset, initially_signaled);
end;

// procedure
procedure TCefWaitableEventRef_Reset(AObj: ICefWaitableEvent); extdecl;
begin
  {$define handleExceptionID := 22603}
  handleExceptionBegin
  AObj.Reset();
  handleExceptionEnd
end;

// procedure
procedure TCefWaitableEventRef_Signal(AObj: ICefWaitableEvent); extdecl;
begin
  {$define handleExceptionID := 22604}
  handleExceptionBegin
  AObj.Signal();
  handleExceptionEnd
end;

// procedure
procedure TCefWaitableEventRef_Wait(AObj: ICefWaitableEvent); extdecl;
begin
  {$define handleExceptionID := 22605}
  handleExceptionBegin
  AObj.Wait();
  handleExceptionEnd
end;

exports
  TCefWaitableEventRef_Create,
  TCefWaitableEventRef_IsSignaled,
  TCefWaitableEventRef_TimedWait,
  TCefWaitableEventRef_UnWrap,
  TCefWaitableEventRef_New,
  TCefWaitableEventRef_Reset,
  TCefWaitableEventRef_Signal,
  TCefWaitableEventRef_Wait;