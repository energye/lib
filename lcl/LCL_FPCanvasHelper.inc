
//constructor
function FPCanvasHelper_Create(): TFPCanvasHelper; extdecl;
begin
  handleExceptionBegin
  Result := TFPCanvasHelper.Create();
  handleExceptionEnd
end;

//property
function FPCanvasHelper_Allocated(AObj: TFPCanvasHelper): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Allocated;
  handleExceptionEnd
end;

//property
function FPCanvasHelper_FixedCanvas(AObj: TFPCanvasHelper): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.FixedCanvas;
  handleExceptionEnd
end;

//property
function FPCanvasHelper_Canvas(AObj: TFPCanvasHelper): TFPCustomCanvas; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Canvas;
  handleExceptionEnd
end;

//property
function FPCanvasHelper_FPColor(AIsSet: LongBool; AObj: TFPCanvasHelper; AValue: TFPColor): TFPColor; extdecl;
begin
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
  handleExceptionBegin
  AObj.AllocateResources(ACanvas, CanDelay);
  handleExceptionEnd
end;

//procedure
procedure FPCanvasHelper_DeallocateResources(AObj: TFPCanvasHelper); extdecl;
begin
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