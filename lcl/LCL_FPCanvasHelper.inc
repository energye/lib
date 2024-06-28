
//constructor
function FPCanvasHelper_Create(): TFPCanvasHelper; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TFPCanvasHelper.Create();
  handleExceptionEnd
end;

//property
function FPCanvasHelper_Allocated(AObj: TFPCanvasHelper): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='Allocated'}
  handleExceptionBegin
  Result := AObj.Allocated;
  handleExceptionEnd
end;

//property
function FPCanvasHelper_FixedCanvas(AObj: TFPCanvasHelper): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='FixedCanvas'}
  handleExceptionBegin
  Result := AObj.FixedCanvas;
  handleExceptionEnd
end;

//property
function FPCanvasHelper_Canvas(AObj: TFPCanvasHelper): TFPCustomCanvas; extdecl;
begin
  {$define handleExceptionFuncName :='Canvas'}
  handleExceptionBegin
  Result := AObj.Canvas;
  handleExceptionEnd
end;

//property
function FPCanvasHelper_FPColor(AIsSet: LongBool; AObj: TFPCanvasHelper; AValue: TFPColor): TFPColor; extdecl;
begin
  {$define handleExceptionFuncName :='FPColor'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.FPColor := AValue;
  end else
    Result := AObj.FPColor;
  handleExceptionEnd
end;

//property
function FPCanvasHelper_DelayAllocate(AIsSet: LongBool; AObj: TFPCanvasHelper; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='DelayAllocate'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DelayAllocate := AValue;
  end else
    Result := AObj.DelayAllocate;
  handleExceptionEnd
end;

//function
function FPCanvasHelper_Class(): TClass; extdecl;
begin
  Result := TFPCanvasHelper;
end;

//procedure
procedure FPCanvasHelper_AllocateResources(AObj: TFPCanvasHelper; ACanvas: TFPCustomCanvas; CanDelay: LongBool); extdecl;
begin
  {$define handleExceptionFuncName :='AllocateResources'}
  handleExceptionBegin
  AObj.AllocateResources(ACanvas, CanDelay);
  handleExceptionEnd
end;

//procedure
procedure FPCanvasHelper_DeallocateResources(AObj: TFPCanvasHelper); extdecl;
begin
  {$define handleExceptionFuncName :='DeallocateResources'}
  handleExceptionBegin
  AObj.DeallocateResources();
  handleExceptionEnd
end;

//property event
procedure FPCanvasHelper_SetOnChanging(AObj: TFPCanvasHelper; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnChanging}
  EventMethodCode
end;

//property event
procedure FPCanvasHelper_SetOnChange(AObj: TFPCanvasHelper; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnChange}
  EventMethodCode
end;


exports
  FPCanvasHelper_Create,
  FPCanvasHelper_Allocated,
  FPCanvasHelper_FixedCanvas,
  FPCanvasHelper_Canvas,
  FPCanvasHelper_FPColor,
  FPCanvasHelper_DelayAllocate,
  FPCanvasHelper_Class,
  FPCanvasHelper_AllocateResources,
  FPCanvasHelper_DeallocateResources,
  FPCanvasHelper_SetOnChanging,
  FPCanvasHelper_SetOnChange;