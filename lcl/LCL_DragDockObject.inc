
//constructor
function DragDockObject_Create(AControl: TControl): TDragDockObject; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TDragDockObject.Create(AControl);
  handleExceptionEnd
end;

//property
procedure DragDockObject_DockOffset(AIsSet: LongBool; AObj: TDragDockObject; var AValue: TPoint; var Result: TPoint); extdecl;
begin
  {$define handleExceptionFuncName :='DockOffset'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DockOffset := AValue;
  end else
    Result := AObj.DockOffset;
  handleExceptionEnd
end;

//property
procedure DragDockObject_DockRect(AIsSet: LongBool; AObj: TDragDockObject; var AValue: TRect; var Result: TRect); extdecl;
begin
  {$define handleExceptionFuncName :='DockRect'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DockRect := AValue;
  end else
    Result := AObj.DockRect;
  handleExceptionEnd
end;

//property
function DragDockObject_DropAlign(AIsSet: LongBool; AObj: TDragDockObject; AValue: TAlign): TAlign; extdecl;
begin
  {$define handleExceptionFuncName :='DropAlign'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DropAlign := AValue;
  end else
    Result := AObj.DropAlign;
  handleExceptionEnd
end;

//property
function DragDockObject_DropOnControl(AIsSet: LongBool; AObj: TDragDockObject; AValue: TControl): TControl; extdecl;
begin
  {$define handleExceptionFuncName :='DropOnControl'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DropOnControl := AValue;
  end else
    Result := AObj.DropOnControl;
  handleExceptionEnd
end;

//property
function DragDockObject_Floating(AIsSet: LongBool; AObj: TDragDockObject; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='Floating'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Floating := AValue;
  end else
    Result := AObj.Floating;
  handleExceptionEnd
end;

//property
function DragDockObject_IncreaseDockArea(AObj: TDragDockObject): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='IncreaseDockArea'}
  handleExceptionBegin
  Result := AObj.IncreaseDockArea;
  handleExceptionEnd
end;

//property
procedure DragDockObject_EraseDockRect(AIsSet: LongBool; AObj: TDragDockObject; var AValue: TRect; var Result: TRect); extdecl;
begin
  {$define handleExceptionFuncName :='EraseDockRect'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.EraseDockRect := AValue;
  end else
    Result := AObj.EraseDockRect;
  handleExceptionEnd
end;

//function
function DragDockObject_Class(): TClass; extdecl;
begin
  Result := TDragDockObject;
end;


exports
  DragDockObject_Create,
  DragDockObject_DockOffset,
  DragDockObject_DockRect,
  DragDockObject_DropAlign,
  DragDockObject_DropOnControl,
  DragDockObject_Floating,
  DragDockObject_IncreaseDockArea,
  DragDockObject_EraseDockRect,
  DragDockObject_Class;