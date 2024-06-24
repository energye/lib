
//constructor
function DragObject_Create(AControl: TControl): TDragObject; extdecl;
begin
  handleExceptionBegin
  Result := TDragObject.Create(AControl);
  handleExceptionEnd
end;

//constructor
function DragObject_AutoCreate(AControl: TControl): TDragObject; extdecl;
begin
  handleExceptionBegin
  Result := TDragObject.AutoCreate(AControl);
  handleExceptionEnd
end;

//property
function DragObject_AlwaysShowDragImages(AIsSet: LongBool; AObj: TDragObject; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.AlwaysShowDragImages := AValue;
  end else
    Result := AObj.AlwaysShowDragImages;
  handleExceptionEnd
end;

//property
function DragObject_AutoCreated(AObj: TDragObject): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.AutoCreated;
  handleExceptionEnd
end;

//property
function DragObject_AutoFree(AObj: TDragObject): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.AutoFree;
  handleExceptionEnd
end;

//property
function DragObject_Control(AIsSet: LongBool; AObj: TDragObject; AValue: TControl): TControl; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Control := AValue;
  end else
    Result := AObj.Control;
  handleExceptionEnd
end;

//property
procedure DragObject_DragPos(AIsSet: LongBool; AObj: TDragObject; var AValue: TPoint; var Result: TPoint); extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DragPos := AValue;
  end else
    Result := AObj.DragPos;
  handleExceptionEnd
end;

//property
function DragObject_DragTarget(AIsSet: LongBool; AObj: TDragObject; AValue: TControl): TControl; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DragTarget := AValue;
  end else
    Result := AObj.DragTarget;
  handleExceptionEnd
end;

//property
procedure DragObject_DragTargetPos(AIsSet: LongBool; AObj: TDragObject; var AValue: TPoint; var Result: TPoint); extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DragTargetPos := AValue;
  end else
    Result := AObj.DragTargetPos;
  handleExceptionEnd
end;

//property
function DragObject_Dropped(AObj: TDragObject): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Dropped;
  handleExceptionEnd
end;

//function
function DragObject_Class(): TClass; extdecl;
begin
  Result := TDragObject;
end;

//procedure
procedure DragObject_HideDragImage(AObj: TDragObject); extdecl;
begin
  handleExceptionBegin
  AObj.HideDragImage();
  handleExceptionEnd
end;

//procedure
procedure DragObject_ShowDragImage(AObj: TDragObject); extdecl;
begin
  handleExceptionBegin
  AObj.ShowDragImage();
  handleExceptionEnd
end;


exports
  DragObject_Create,
  DragObject_AutoCreate,
  DragObject_AlwaysShowDragImages,
  DragObject_AutoCreated,
  DragObject_AutoFree,
  DragObject_Control,
  DragObject_DragPos,
  DragObject_DragTarget,
  DragObject_DragTargetPos,
  DragObject_Dropped,
  DragObject_Class,
  DragObject_HideDragImage,
  DragObject_ShowDragImage;