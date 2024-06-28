
//constructor
function Monitor_Create(): TMonitor; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TMonitor.Create();
  handleExceptionEnd
end;

//property
function Monitor_Handle(AObj: TMonitor): HMONITOR; extdecl;
begin
  {$define handleExceptionFuncName :='Handle'}
  handleExceptionBegin
  Result := AObj.Handle;
  handleExceptionEnd
end;

//property
function Monitor_MonitorNum(AObj: TMonitor): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='MonitorNum'}
  handleExceptionBegin
  Result := AObj.MonitorNum;
  handleExceptionEnd
end;

//property
function Monitor_Left(AObj: TMonitor): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='Left'}
  handleExceptionBegin
  Result := AObj.Left;
  handleExceptionEnd
end;

//property
function Monitor_Height(AObj: TMonitor): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='Height'}
  handleExceptionBegin
  Result := AObj.Height;
  handleExceptionEnd
end;

//property
function Monitor_Top(AObj: TMonitor): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='Top'}
  handleExceptionBegin
  Result := AObj.Top;
  handleExceptionEnd
end;

//property
function Monitor_Width(AObj: TMonitor): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='Width'}
  handleExceptionBegin
  Result := AObj.Width;
  handleExceptionEnd
end;

//property
procedure Monitor_BoundsRect(AObj: TMonitor; var Result: TRect); extdecl;
begin
  {$define handleExceptionFuncName :='BoundsRect'}
  handleExceptionBegin
  Result := AObj.BoundsRect;
  handleExceptionEnd
end;

//property
procedure Monitor_WorkareaRect(AObj: TMonitor; var Result: TRect); extdecl;
begin
  {$define handleExceptionFuncName :='WorkareaRect'}
  handleExceptionBegin
  Result := AObj.WorkareaRect;
  handleExceptionEnd
end;

//property
function Monitor_Primary(AObj: TMonitor): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='Primary'}
  handleExceptionBegin
  Result := AObj.Primary;
  handleExceptionEnd
end;

//property
function Monitor_PixelsPerInch(AObj: TMonitor): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='PixelsPerInch'}
  handleExceptionBegin
  Result := AObj.PixelsPerInch;
  handleExceptionEnd
end;

//function
function Monitor_Class(): TClass; extdecl;
begin
  Result := TMonitor;
end;


exports
  Monitor_Create,
  Monitor_Handle,
  Monitor_MonitorNum,
  Monitor_Left,
  Monitor_Height,
  Monitor_Top,
  Monitor_Width,
  Monitor_BoundsRect,
  Monitor_WorkareaRect,
  Monitor_Primary,
  Monitor_PixelsPerInch,
  Monitor_Class;