// constructor
function TCustomShape_Create(TheOwner: TComponent): TCustomShape; extdecl;
begin
  {$define handleExceptionID := 17100}
  handleExceptionBegin
  Result := TCustomShape.Create(TheOwner);
  handleExceptionEnd
end;

// function
function TCustomShape_PtInShape(AObj: TCustomShape; var P: TPoint): LongBool; extdecl;
begin
  {$define handleExceptionID := 17101}
  handleExceptionBegin
  Result := AObj.PtInShape(P);
  handleExceptionEnd
end;

// procedure
procedure TCustomShape_Paint(AObj: TCustomShape); extdecl;
begin
  {$define handleExceptionID := 17102}
  handleExceptionBegin
  AObj.Paint();
  handleExceptionEnd
end;

// procedure
procedure TCustomShape_StyleChanged(AObj: TCustomShape; Sender: TObject); extdecl;
begin
  {$define handleExceptionID := 17103}
  handleExceptionBegin
  AObj.StyleChanged(Sender);
  handleExceptionEnd
end;

// property
function TCustomShape_Brush(ASet: LongBool; AObj: TCustomShape; AValue: TBrush): TBrush; extdecl;
begin
  {$define handleExceptionID := 17104}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Brush := AValue
  end else
    Result := AObj.Brush;
  handleExceptionEnd
end;

// property
function TCustomShape_Pen(ASet: LongBool; AObj: TCustomShape; AValue: TPen): TPen; extdecl;
begin
  {$define handleExceptionID := 17105}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Pen := AValue
  end else
    Result := AObj.Pen;
  handleExceptionEnd
end;

// property
function TCustomShape_Shape(ASet: LongBool; AObj: TCustomShape; AValue: TShapeType): TShapeType; extdecl;
begin
  {$define handleExceptionID := 17106}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Shape := AValue
  end else
    Result := AObj.Shape;
  handleExceptionEnd
end;

// event
procedure TCustomShape_OnShapeClick(AObj: TCustomShape; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnShapeClick}
  LCLEventMethodCode
end;

// event
procedure TCustomShape_OnShapePoints(AObj: TCustomShape; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTShapePointsEvent}
  {$DEFINE EventName := OnShapePoints}
  LCLEventMethodCode
end;

function TCustomShape_TClass(): TClass; extdecl;
begin
  Result := TCustomShape;
end;

exports
  TCustomShape_Create,
  TCustomShape_PtInShape,
  TCustomShape_Paint,
  TCustomShape_StyleChanged,
  TCustomShape_Brush,
  TCustomShape_Pen,
  TCustomShape_Shape,
  TCustomShape_OnShapeClick,
  TCustomShape_OnShapePoints,
  TCustomShape_TClass;