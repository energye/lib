// constructor
function TDragDockObject_Create(AControl: TControl): TDragDockObject; extdecl;
begin
  {$define handleExceptionID := 18400}
  handleExceptionBegin
  Result := TDragDockObject.Create(AControl);
  handleExceptionEnd
end;

// constructor
function TDragDockObject_AutoCreate(AControl: TControl): TDragDockObject; extdecl;
begin
  {$define handleExceptionID := 18401}
  handleExceptionBegin
  Result := TDragDockObject.AutoCreate(AControl);
  handleExceptionEnd
end;

// property
procedure TDragDockObject_DockOffset(ASet: LongBool; AObj: TDragDockObject; var AValue: TPoint; var Result: TPoint); extdecl;
begin
  {$define handleExceptionID := 18402}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DockOffset := AValue
  end else
    Result := AObj.DockOffset;
  handleExceptionEnd
end;

// property
procedure TDragDockObject_DockRect(ASet: LongBool; AObj: TDragDockObject; var AValue: TRect; var Result: TRect); extdecl;
begin
  {$define handleExceptionID := 18403}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DockRect := AValue
  end else
    Result := AObj.DockRect;
  handleExceptionEnd
end;

// property
function TDragDockObject_DropAlign(ASet: LongBool; AObj: TDragDockObject; AValue: TAlign): TAlign; extdecl;
begin
  {$define handleExceptionID := 18404}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DropAlign := AValue
  end else
    Result := AObj.DropAlign;
  handleExceptionEnd
end;

// property
function TDragDockObject_DropOnControl(ASet: LongBool; AObj: TDragDockObject; AValue: TControl): TControl; extdecl;
begin
  {$define handleExceptionID := 18405}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DropOnControl := AValue
  end else
    Result := AObj.DropOnControl;
  handleExceptionEnd
end;

// property
function TDragDockObject_Floating(ASet: LongBool; AObj: TDragDockObject; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 18406}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Floating := AValue
  end else
    Result := AObj.Floating;
  handleExceptionEnd
end;

// property
function TDragDockObject_IncreaseDockArea(AObj: TDragDockObject): LongBool; extdecl;
begin
  {$define handleExceptionID := 18407}
  handleExceptionBegin
  Result := AObj.IncreaseDockArea;
  handleExceptionEnd
end;

// property
procedure TDragDockObject_EraseDockRect(ASet: LongBool; AObj: TDragDockObject; var AValue: TRect; var Result: TRect); extdecl;
begin
  {$define handleExceptionID := 18408}
  handleExceptionBegin
  if ASet then
  begin
    AObj.EraseDockRect := AValue
  end else
    Result := AObj.EraseDockRect;
  handleExceptionEnd
end;

exports
  TDragDockObject_Create,
  TDragDockObject_AutoCreate,
  TDragDockObject_DockOffset,
  TDragDockObject_DockRect,
  TDragDockObject_DropAlign,
  TDragDockObject_DropOnControl,
  TDragDockObject_Floating,
  TDragDockObject_IncreaseDockArea,
  TDragDockObject_EraseDockRect;