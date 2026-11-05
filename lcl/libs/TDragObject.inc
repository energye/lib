// constructor
function TDragObject_Create(AControl: TControl): TDragObject; extdecl;
begin
  {$define handleExceptionID := 18300}
  handleExceptionBegin
  Result := TDragObject.Create(AControl);
  handleExceptionEnd
end;

// constructor
function TDragObject_AutoCreate(AControl: TControl): TDragObject; extdecl;
begin
  {$define handleExceptionID := 18301}
  handleExceptionBegin
  Result := TDragObject.AutoCreate(AControl);
  handleExceptionEnd
end;

// procedure
procedure TDragObject_HideDragImage(AObj: TDragObject); extdecl;
begin
  {$define handleExceptionID := 18302}
  handleExceptionBegin
  AObj.HideDragImage();
  handleExceptionEnd
end;

// procedure
procedure TDragObject_ShowDragImage(AObj: TDragObject); extdecl;
begin
  {$define handleExceptionID := 18303}
  handleExceptionBegin
  AObj.ShowDragImage();
  handleExceptionEnd
end;

// property
function TDragObject_AlwaysShowDragImages(ASet: LongBool; AObj: TDragObject; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 18304}
  handleExceptionBegin
  if ASet then
  begin
    AObj.AlwaysShowDragImages := AValue
  end else
    Result := AObj.AlwaysShowDragImages;
  handleExceptionEnd
end;

// property
function TDragObject_AutoCreated(AObj: TDragObject): LongBool; extdecl;
begin
  {$define handleExceptionID := 18305}
  handleExceptionBegin
  Result := AObj.AutoCreated;
  handleExceptionEnd
end;

// property
function TDragObject_AutoFree(AObj: TDragObject): LongBool; extdecl;
begin
  {$define handleExceptionID := 18306}
  handleExceptionBegin
  Result := AObj.AutoFree;
  handleExceptionEnd
end;

// property
function TDragObject_Control(ASet: LongBool; AObj: TDragObject; AValue: TControl): TControl; extdecl;
begin
  {$define handleExceptionID := 18307}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Control := AValue
  end else
    Result := AObj.Control;
  handleExceptionEnd
end;

// property
procedure TDragObject_DragPos(ASet: LongBool; AObj: TDragObject; var AValue: TPoint; var Result: TPoint); extdecl;
begin
  {$define handleExceptionID := 18308}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragPos := AValue
  end else
    Result := AObj.DragPos;
  handleExceptionEnd
end;

// property
function TDragObject_DragTarget(ASet: LongBool; AObj: TDragObject; AValue: TControl): TControl; extdecl;
begin
  {$define handleExceptionID := 18309}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragTarget := AValue
  end else
    Result := AObj.DragTarget;
  handleExceptionEnd
end;

// property
procedure TDragObject_DragTargetPos(ASet: LongBool; AObj: TDragObject; var AValue: TPoint; var Result: TPoint); extdecl;
begin
  {$define handleExceptionID := 18310}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragTargetPos := AValue
  end else
    Result := AObj.DragTargetPos;
  handleExceptionEnd
end;

// property
function TDragObject_Dropped(AObj: TDragObject): LongBool; extdecl;
begin
  {$define handleExceptionID := 18311}
  handleExceptionBegin
  Result := AObj.Dropped;
  handleExceptionEnd
end;

exports
  TDragObject_Create,
  TDragObject_AutoCreate,
  TDragObject_HideDragImage,
  TDragObject_ShowDragImage,
  TDragObject_AlwaysShowDragImages,
  TDragObject_AutoCreated,
  TDragObject_AutoFree,
  TDragObject_Control,
  TDragObject_DragPos,
  TDragObject_DragTarget,
  TDragObject_DragTargetPos,
  TDragObject_Dropped;