// constructor
function TMonitor_Create(): TMonitor; extdecl;
begin
  {$define handleExceptionID := 16200}
  handleExceptionBegin
  Result := TMonitor.Create();
  handleExceptionEnd
end;

// property
function TMonitor_Handle(AObj: TMonitor): HMONITOR; extdecl;
begin
  {$define handleExceptionID := 16201}
  handleExceptionBegin
  Result := AObj.Handle;
  handleExceptionEnd
end;

// property
function TMonitor_MonitorNum(AObj: TMonitor): Integer; extdecl;
begin
  {$define handleExceptionID := 16202}
  handleExceptionBegin
  Result := AObj.MonitorNum;
  handleExceptionEnd
end;

// property
function TMonitor_Left(AObj: TMonitor): Integer; extdecl;
begin
  {$define handleExceptionID := 16203}
  handleExceptionBegin
  Result := AObj.Left;
  handleExceptionEnd
end;

// property
function TMonitor_Height(AObj: TMonitor): Integer; extdecl;
begin
  {$define handleExceptionID := 16204}
  handleExceptionBegin
  Result := AObj.Height;
  handleExceptionEnd
end;

// property
function TMonitor_Top(AObj: TMonitor): Integer; extdecl;
begin
  {$define handleExceptionID := 16205}
  handleExceptionBegin
  Result := AObj.Top;
  handleExceptionEnd
end;

// property
function TMonitor_Width(AObj: TMonitor): Integer; extdecl;
begin
  {$define handleExceptionID := 16206}
  handleExceptionBegin
  Result := AObj.Width;
  handleExceptionEnd
end;

// property
procedure TMonitor_BoundsRect(AObj: TMonitor; var Result: TRect); extdecl;
begin
  {$define handleExceptionID := 16207}
  handleExceptionBegin
  Result := AObj.BoundsRect;
  handleExceptionEnd
end;

// property
procedure TMonitor_WorkareaRect(AObj: TMonitor; var Result: TRect); extdecl;
begin
  {$define handleExceptionID := 16208}
  handleExceptionBegin
  Result := AObj.WorkareaRect;
  handleExceptionEnd
end;

// property
function TMonitor_Primary(AObj: TMonitor): LongBool; extdecl;
begin
  {$define handleExceptionID := 16209}
  handleExceptionBegin
  Result := AObj.Primary;
  handleExceptionEnd
end;

// property
function TMonitor_PixelsPerInch(AObj: TMonitor): Integer; extdecl;
begin
  {$define handleExceptionID := 16210}
  handleExceptionBegin
  Result := AObj.PixelsPerInch;
  handleExceptionEnd
end;

exports
  TMonitor_Create,
  TMonitor_Handle,
  TMonitor_MonitorNum,
  TMonitor_Left,
  TMonitor_Height,
  TMonitor_Top,
  TMonitor_Width,
  TMonitor_BoundsRect,
  TMonitor_WorkareaRect,
  TMonitor_Primary,
  TMonitor_PixelsPerInch;