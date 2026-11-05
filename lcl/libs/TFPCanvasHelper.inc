// constructor
function TFPCanvasHelper_Create(): TFPCanvasHelper; extdecl;
begin
  {$define handleExceptionID := 4800}
  handleExceptionBegin
  Result := TFPCanvasHelper.Create();
  handleExceptionEnd
end;

// procedure
procedure TFPCanvasHelper_AllocateResources(AObj: TFPCanvasHelper; ACanvas: TFPCustomCanvas; CanDelay: LongBool); extdecl;
begin
  {$define handleExceptionID := 4801}
  handleExceptionBegin
  AObj.AllocateResources(ACanvas, CanDelay);
  handleExceptionEnd
end;

// procedure
procedure TFPCanvasHelper_DeallocateResources(AObj: TFPCanvasHelper); extdecl;
begin
  {$define handleExceptionID := 4802}
  handleExceptionBegin
  AObj.DeallocateResources();
  handleExceptionEnd
end;

// property
function TFPCanvasHelper_Allocated(AObj: TFPCanvasHelper): LongBool; extdecl;
begin
  {$define handleExceptionID := 4803}
  handleExceptionBegin
  Result := AObj.Allocated;
  handleExceptionEnd
end;

// property
function TFPCanvasHelper_FixedCanvas(AObj: TFPCanvasHelper): LongBool; extdecl;
begin
  {$define handleExceptionID := 4804}
  handleExceptionBegin
  Result := AObj.FixedCanvas;
  handleExceptionEnd
end;

// property
function TFPCanvasHelper_Canvas(AObj: TFPCanvasHelper): TFPCustomCanvas; extdecl;
begin
  {$define handleExceptionID := 4805}
  handleExceptionBegin
  Result := AObj.Canvas;
  handleExceptionEnd
end;

// property
procedure TFPCanvasHelper_FPColor(ASet: LongBool; AObj: TFPCanvasHelper; var AValue: TFPColorPtr; var Result: TFPColorPtr); extdecl;
begin
  {$define handleExceptionID := 4806}
  handleExceptionBegin
  if ASet then
  begin
    AObj.FPColor := TFPColorToPas(AValue)
  end else
    Result := TFPColorToGo(AObj.FPColor);
  handleExceptionEnd
end;

// property
function TFPCanvasHelper_DelayAllocate(ASet: LongBool; AObj: TFPCanvasHelper; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 4807}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DelayAllocate := AValue
  end else
    Result := AObj.DelayAllocate;
  handleExceptionEnd
end;

// event
procedure TFPCanvasHelper_OnChanging(AObj: TFPCanvasHelper; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnChanging}
  LCLEventMethodCode
end;

// event
procedure TFPCanvasHelper_OnChange(AObj: TFPCanvasHelper; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnChange}
  LCLEventMethodCode
end;

exports
  TFPCanvasHelper_Create,
  TFPCanvasHelper_AllocateResources,
  TFPCanvasHelper_DeallocateResources,
  TFPCanvasHelper_Allocated,
  TFPCanvasHelper_FixedCanvas,
  TFPCanvasHelper_Canvas,
  TFPCanvasHelper_FPColor,
  TFPCanvasHelper_DelayAllocate,
  TFPCanvasHelper_OnChanging,
  TFPCanvasHelper_OnChange;